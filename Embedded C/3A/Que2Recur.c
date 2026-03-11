#include<stdio.h>

void display(char str[], int i)
{
    if(str[i]=='\0')
        return;

    printf("%c",str[i]);
    display(str,i+1);
}

void reverse(char str[], int i)
{
    if(i<0)
        return;

    printf("%c",str[i]);
    reverse(str,i-1);
}

int main()
{
    char str[100];
    int i=0,len=0;

    printf("Enter a string: ");
    scanf("%s",str);

    while(str[len] != '\0')
        len++;

    printf("Display string:\n");
    display(str,0);

    printf("\nReverse display:\n");
    reverse(str,len-1);

    return 0;
}
