// Suppose we have a list of email addresses, check whether all email addresses have 
// ‘@’ in it. Print the odd email out.
#include <stdio.h>
#include <string.h>
int main()
{   int n,count=0;
    printf("Enter number of E-mail id's:");
    scanf("%d",&n);
    char s[n][50];
    printf("\n");
    for (int i = 0; i <= n; i++)
    {
        gets(s[i]);
    }
    printf("Your E-mail id's are:\n");
    for (int i = 0; i <= n; i++)
    {
        puts(s[i]);
    }
    for (int i = 1; i <= n; i++)
    {   int l,flag=0;
        l=strlen(s[i]);
        for (int j = 0;j<l; j++)
        {
            if (s[i][j] == '@')
            {
                flag = 1;
                count++;
                break;
            }
        }
        if(flag!=1)
            printf("The odd email is here--->please correct it!\n");
        if (flag != 1)
        {   
            puts(s[i]);
        }
        
    }
    return 0;
}
