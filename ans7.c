//. From the list of IP addresses, check whether all ip addresses are valid.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, count = 0;
    printf("Enter number of \"Ip Addresses\" u want to hold:");
    scanf("%d", &n);
    char s[n][15];
    printf("\n");
    for (int i = 0; i <= n; i++)
    {
        gets(s[i]);
    }
    printf("Your Ip Addresses are:\n");
    for (int i = 0; i <= n; i++)
    {
        puts(s[i]);
    }
    printf("Given Ip is Valid if\'......\' this msg is shown\n");
    for (int i = 1; i <= n; i++)
    {
        int l, count = 4;
        l = strlen(s[i]);
        printf("\'%d\'Ip is :", i);
        for (int j = 0; j < l; j++)
        {
            if (s[i][j] == '.')
            {
                if (s[i][j - 1] <= '9')
                {
                    if (s[i][j - 2] == '.')
                    {
                        printf(".");
                    }
                    else if (s[i][j - 2] == '1')
                    {
                        printf(".");
                    }
                    else if (s[i][j - 2] <= '9')
                    {
                        if (s[i][j - 3] == '1')
                        {
                            printf(".");
                        }
                        else if (s[i][j - 3] == '.')
                        {
                            printf(".");
                        }
                        else if (s[i][j - 3] == '2')
                        {
                            if (s[i][j - 2] < '5')
                            {
                                printf(".");
                            }
                            else if (s[i][j - 2] == '5')
                            {
                                if (s[i][j - 1] < '5')
                                {
                                    printf(".");
                                }
                                else
                                    printf("INVALID");
                            }
                            else if (s[i][j - 2] == '.')
                            {
                                printf(".");
                            }
                        }
                        else
                            printf("INVALID");
                    }
                }
                else
                    printf("INVALID");
                count--;
                if (count == 0)
                {
                    printf("INVALID");
                    break;
                }
                continue;
            }
            if (s[i][j] < '0' || s[i][j] > '9')
            {
                printf("INVALID");
                break;
            }
            else if (s[i][0] == '0')
            {
                printf("INVALID");
                break;
            }
        }
        printf("\n");
    }

    return 0;
}