#include <stdio.h>

int main(void)
{
    int max = 10000;

    for (int a = 1; a <= max; a++)
    {
        if (a % 221 == 0)
        {
            printf("%8d\n",a);
        }
        else if (a % 17 == 0)
        {
            printf("%8d\n",a);
        }
        else if (a % 13 == 0)
        {
            printf("%8d\n",a);
        }
        else
        {
            printf("\n", a);
        }
    }

   

    return 0;
}
