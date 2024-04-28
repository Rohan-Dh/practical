#include <stdio.h>
#include <math.h>

#define e 2.71828
#define f(x) pow(e, x)

int main()
{
    int interval, i = 1, mode = 0;
    float sum, l_lim, u_lim, h, result, x;
    printf("Enter the value subinterval: ");
    scanf("%d", &interval);
    printf("Enter the upper and lower limit (U-L): ");
    scanf("%f%f", &u_lim, &l_lim);

    float y[interval + 1];

    printf("x\ty\n");
    h = (u_lim - l_lim) / interval;
    x = l_lim;
    y[0] = f(l_lim);
    printf("%.2f\t%.2f\n", x, y[0]);

    for (i = 1; i <= interval; i++){
        x = l_lim + i * h;
        y[i] = f(x);
        printf("%.2f\t%.2f\n", x, y[i]);
    }

    sum = y[0] + y[interval];
    for (i = 1; i < interval; i++){
        if (i % 3 == 0)
            sum += 2 * y[i];
        else
            sum += 3 * y[i];
    }

    result = (3 * h / 8) * sum;
    printf("The area under the given point of the curve is %.2f", result);
}