#include <stdio.h>
int main()
{
    printf("Please input a number:");
    int num;
    scanf("%d", &num);
    int i;
    for(i = 2; i <=num; i++)
    {
        if(num % i == 0)
        {
        printf("%d ", i);
        num = num / i;
        i = 1;
        }
    }
    return 0;
}
