#include <stdio.h>
#include <string.h>
#define N 50
int main()
{   char s[N];
    int i=0,j;
    printf("Input a String:");
    gets(s);
    j=strlen(s)-1;
    while(i<=j && s[i]==s[j]){
    i++;
    j--;
    }
    if (i<=j)
    {
    printf("No\n");
    }
    else
    { 
    printf("Yes\n");
    }
    return 0;
}
