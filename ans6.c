// . Write a program to print the strings which are palindrome in the list of strings.
#include <stdio.h>
#include <string.h>
void rev(char [],int );
int main()
{   int n,flag=0;
    printf("Enter number of strings:");
    scanf("%d",&n);
    char s[n][50],str[50];
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
    for (int i = 1; i <=n; i++)
    {    int l;
         l=strlen(s[i]);
         char str[50];
         strcpy(str,s[i]);
         strrev(s[i]);
          if (strcmp(str, s[i]) == 0)
    {
        printf("\n\'%s\'string is a palindrome",s[i]);
    }
    }

    
    return 0;
}
