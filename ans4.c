//  Write a program to search a string in the list of strings
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
    printf("Enter your string u want to search for:");
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
        printf("your string \'%s\' is present at %d position\n",s[i],i);
        break;
    }
      //  break;
    }
    if(flag!=1)
    printf("no string is present!");

    
    return 0;
}
