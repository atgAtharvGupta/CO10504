//Write a C program to find the longest palindrome substring from a given string. Return the substring.
//Sample Data:
//Original string: abcdcsdfabbccb
//Longest Palindrome Substring from the said string? Bccb

#include<stdio.h>
#include <string.h>
char str[50];
int checkpalindrome(int start, int end)
{
    int i,j;
    for(i=0;i<=(end-start)/2;i++)
    {
        if ( str[start+i]!=str[end-i])
            return 0;
    }
    return 1;
}
int main()
{
 int i,j,len,flag=0,plen,lplen=0,s;
 printf("Enter the String:");
 scanf("%s",str);
 len = strlen(str);
 for(i=0;i<len;i++)
 {
    for (j=i+1;j<len;j++)
    {
      flag = checkpalindrome(i,j);
      if (flag == 1)
      {
          plen = j-i+1;
          if (lplen<plen)
          {
              lplen = plen;
              s = i;
          }
      }
      flag=0;
    }
 }
 printf("Longest palindrome substring Length is= %d\n",lplen);
 for(i=s;i<s+lplen;i++)
    printf("%c",str[i]);
}
