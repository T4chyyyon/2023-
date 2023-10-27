#include <stdio.h>

int main(void)
{
    int a, result;

    printf("Please Enter Number");
   
    scanf_s("%d", &a);

    //aの値を3乗する
    result = a*a*a;
    printf("%d^3= %d\n",a, result);

    return 0;
}
    

