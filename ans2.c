// Write a program to sort 10 city names stored in two dimensional arrays, taken from 
// the user.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[10][50];
    printf("Enter City 10 Names:\n");
    for (int i = 0; i < 10; i++)
    {
        gets(s[i]);
    }
    printf("Your City Names are:\n");
    for (int i = 0; i < 10; i++)
    {
        puts(s[i]);
    }
    printf("Sorted List of City names are");
    for (int i = 0; i < 10; i++)
    {    int l;
        l=strlen(s[i]);   
            for (int k = i+1;k<10; k++)
            {   
                char temp[50];
                if(strcmp(s[i],s[k])>0){
                     strcpy(temp,s[i]);
                     strcpy(s[i],s[k]);
                     strcpy(s[k],temp);
                }
            }
    }
    for (int i = 0; i < 10; i++)
    {
        puts(s[i]);
    }
    
    return 0;
}
