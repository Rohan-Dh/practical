#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the total number of data you have: ");
    scanf("%d", &n);

    float data[4][n], s_x2 = 0, s_xy = 0, s_x = 0, s_y = 0, a, b;
    printf("Enter the data below\n");
    for(int i = 0; i<n; i++){
        printf("(x[%d], y[%d]): ", i+1, i+1);
        scanf("%f%f", &data[0][i], &data[1][i]);
    }

    for(int i = 0; i<n; i++){
        s_x += data[0][i];
        s_y += data[1][i];
    }
    s_x /= n;
    s_y /= n;

    for (int i = 0; i < n; i++){
        s_x2 += pow(data[0][i]-s_x, 2);
        s_xy += (data[1][i]-s_y)*(data[0][i]-s_x);
    }

    printf("%2.f\t%.2f\n", s_x, s_y);
    b = s_xy/s_x2;
    a = s_y - (b*s_x);

    printf("Linear regression line is y = %.2f+%.2fx", a, b);
    while(1){
        char w;
        scanf(" %c", &a);
        if(w=='q'){
            break;
        }
        else{
            float temp;
            printf("Enter the value of x\n");
            scanf("%f",&temp);
            printf("%.2f\n", a+(temp*b));
        }
    }

}