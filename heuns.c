#include<stdio.h>
float f(float x, float y){
    return 1+x*y;
}

int main(){
    float x, y, x_test, h, y_for_m;
    printf("Enter the initial value of x and y: ");
    scanf("%f%f", &x, &y);

    printf("Enter the value of x where you want to find the derivate: ");
    scanf("%f", &x_test);
    

    printf("Enter the value of h: ");
    scanf("%f", &h);

    while(x<x_test){
        y_for_m = y + h*f(x, y);
        y += 0.5*h*(f(x, y)+f(x+h, y_for_m));
        x += h;
    }

    printf("The derivative at x = %.2f is %.2f", x_test, y);
}