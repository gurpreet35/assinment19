//. Write a program to read and display a 2D array of strings in C language.
#include <stdio.h>
#include <string.h>
int main()
{   int n;
    printf("Enter number of strings:");
    scanf("%d",&n);
    char s[n][50];
    printf("Enter your string\n");
    for (int i = 0; i <=n; i++)
    {
        gets(s[i]);
    }
    printf("Your strings are:\n");
    for (int i = 0; i <=n; i++)
    {
        puts(s[i]);
    }
    return 0;
}
