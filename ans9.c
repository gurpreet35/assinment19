// 9. Write a program that asks the user to enter a username. If the username entered is 
// one of the names in the list then the user is allowed to calculate the factorial of a 
// number. Otherwise, an error message is displayed
#include <stdio.h>
#include <string.h>
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
    printf("Enter Username:");
    gets(str);
    for (int i = 0; i <=n; i++)
    {   int l ;
        l=strlen(s[i]);
        for(int j=0;j<l;j++){
        if((strcmp(&s[i][j],str))==0){
            flag=1;
        }
        
        }
    if(flag==1){
        int n ,fact=1;
        printf("Enter a number:");
        scanf("%d",&n);
        for (int k = 1; k <=n; k++)
        {
            fact=fact*k;
        }
        printf("%d",fact);
        break;
    }
    }
    if(flag!=1)
    printf("Username is invalid!");

    
    return 0;
}
