// Given a list of words followed by two words, the task is to find the minimum distance 
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
//  word1 = “the”, word2 = “fox”, OUTPUT : 1 )
#include <stdio.h>
#include <string.h>
int search(char word[],char s[][50],int n);
int main()
{   int n,flag=0,distance,p,q;
    printf("Enter total number of words:");
    scanf("%d",&n);
    char s[n][50],word1[50],word2[50];
    printf("Enter your words\n");
    for (int i = 0; i <=n; i++)
    {
        gets(s[i]);
    }
    printf("Your words are:\n");
    for (int i = 0; i <=n; i++)
    {
        puts(s[i]);
    }
    printf("give two words u want to find distance for:");
    gets(word1);
    p=search(word1,s,n); 
    gets(word2);
    q=search(word2,s,n);
    distance=q-p-1;
    printf("Distance  between \'%s\' and \'%s\' is %d",word1,word2,distance);
    
    return 0;
}
int search(char word[],char s[][50],int n){
    int flag=0;
    for (int i = 0; i <=n; i++)
    {   int l ;
        l=strlen(s[i]);
        for(int j=0;j<l;j++){
        if((strcmp(&s[i][j],word))==0){
            flag=1;
        }
        }
    if(flag==1){
       // printf("your string \'%s\' is present at %d position\n",s[i],i);
        return i;
        break;
    }
    }
}
