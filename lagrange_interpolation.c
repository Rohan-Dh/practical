#include<stdio.h>

int main(){
    int n, i, j;
    printf("Enter total no of nodes: ");
    scanf("%d", &n);

    printf("Enter the value of x and y in each node\n");
    float x_o[n], y[n];

    for(int i = 0; i<n; i++){
        printf("(x[%d], y[%d]): ", i+1, i+1);
        scanf("%f%f",&x_o[i], &y[i]);
    }

    float x;
    printf("Enter the value of x where you want to find the value of f(x): ");
    scanf("%f", &x);

    float sum = 0, product;
    for(int i=0; i<n; i++){
        product = 1;
        for (int j = 0; j < n; j++){
            if(i==j){
                continue;
            }else{
                product *= (x-x_o[j])/(x_o[i] - x_o[j]);
            }
        }
        sum += product * y[i];
    }

    printf("The value of f(x) at a = %.2f is %.2f", x, sum);
}