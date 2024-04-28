#include<stdio.h>
#include<math.h>

float f(float x, float y){
    return pow(x, 2) + pow(y, 2);
}

int main(){
    float x, y, x_test, h, y_for_m, m[4];
    printf("Enter the initial value of x and y: ");
    scanf("%f%f", &x, &y);

    printf("Enter the value of x where you want to find the derivate: ");
    scanf("%f", &x_test);

    printf("Enter the value of h: ");
    scanf("%f", &h);

    
    while (x < x_test){
        m[0] = f(x, y);
        m[1] = f(x + (h / 2), y + (h * m[0]) / 2);
        m[2] = f(x + (h / 2), y + (h * m[1]) / 2);
        m[3] = f(x + h, y + h*m[2]);

        y += (h/6)*(m[0]+(2*m[1])+(2*m[2]+m[3]));
        x+=h;
    }

    printf("The derivative at x = %.2f is %f", x_test, y);
}