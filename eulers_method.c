#include<stdio.h>
#include<math.h>
#define e 2.71828

float f(float x, float y){
    return 1+x*y;
}

int main(){
    float h, x, y, x_test;
    printf("Enter the height value: ");
    scanf("%f", &h);

    printf("Enter the initial value of x and y respectively: ");
    scanf("%f%f", &x, &y);

    printf("Enter the value of x where you want to find the derivative of: ");
    scanf("%f", &x_test);

    while(x<=x_test){
        y += h*f(x, y);
        x += h;
    }

    printf("The derivative at x = %.2f is %.2f", x_test, y);
}