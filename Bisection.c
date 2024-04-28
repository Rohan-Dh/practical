#include<stdio.h>
#include<math.h>

float f(float x){
    return 3 - pow(x, 2);
}

int main(){
    float xp, xn, e, error, x_mid;
    printf("Enter the value of xp and xn obtained for hit and trial method: ");
    scanf("%f%f", &xp, &xn);

    printf("Provide tollerable error: ");
    scanf("%f", &e);

    error = fabs(xp - xn);
    while(error>e){
        x_mid = (xp + xn)/2;
        if(f(x_mid)<0)
            xn = x_mid;
        else
            xp = x_mid;
        
        error = fabs(xp - xn);
    }

    printf("The root is %f", x_mid);
}