#include <stdio.h>

long long f(int x);

int main()
{
    int n,rows,element, k;
    long long work;

    printf("Enter the number number of rows: ");
    scanf("%d", &n);

    for (rows = 0;rows <= n;rows ++){
        for(k = n;k >= rows; k--) printf("   ");
        for(element = 0; element <= rows; element ++){
            work = (f(rows))/(f(element)*f(rows-element));
            printf("%d", work);
            printf("      ");
        }
    printf("\n");
    }


    return 0;
}

long long f(int x){
    long long product = 1, i = x;
    while (i > 1){
        product = product * i;
        i -= 1;
        }
return product;
}

