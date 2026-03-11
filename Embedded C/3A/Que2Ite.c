#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,len;

    printf("Enter a string: ");
    scanf("%s",str);

    len = strlen(str);

    printf("Display string:\n");
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }

    printf("\nReverse display:\n");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}
