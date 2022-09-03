// . Write a program to find the number of vowels in each of the 5 strings stored in two
// dimensional arrays, taken from the user
#include <stdio.h>
#include <string.h>
int main()
{
    char s[5][50];
    printf("Enter your string\n");
    for (int i = 0; i < 5; i++)
    {
        gets(s[i]);
    }
    printf("Your strings are:\n");
    for (int i = 0; i < 5; i++)
    {
        puts(s[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int vowel = 0, flag = 0;
        for (int j = 0; s[i][j]; j++)
        {
            if (s[i][j] == 'a' || s[i][j] == 'e' || s[i][j] == 'i' || s[i][j] == 'o' || s[i][j] == 'u')
            {
                vowel++;
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("there are %d vowels in %d string\n", vowel, i + 1);
        }
        else
            printf("No vowel found!\n");
    }
    return 0;
}
