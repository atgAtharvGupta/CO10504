//Write a program to calculate the length of the longest common subsequence of two given strings. The string consist of alphabetical characters.
//Sample Data:
//("abcdkiou", "cabsdf") -> 3
//("pqrjad", "qr") -> 2
#include <stdio.h>
#include <math.h>

char **getPowerSet(char *set, int set_size)
{
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;
    char **str=(char **)malloc(sizeof(char *)*pow_set_size);
    for(counter = 0; counter < pow_set_size; counter++)
    {
      str[counter]=(char *)malloc(sizeof(char)*set_size);
      int k=0;
      for(j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
          {
            str[counter][k++]=set[j];
          }
       }
       str[counter][k]='\0';
    }
    return str;
}
int main()
{
    char str_a[30],str_b[30];
    printf("Enter the String A:");
    gets(str_a);
    printf("Enter the String b:");
    gets(str_b);
    char **a,**b;
    int i,j;
    a=getPowerSet(&str_a[0], strlen(str_a));
    b=getPowerSet(&str_b[0], strlen(str_b));

    int max=0,s;
    for(i=1; i<pow(2, strlen(str_a));i++)
      for(j=1; j<pow(2, strlen(str_b));j++)
        {
            if(strcmp(a[i],b[j]) == 0)
            {
                if(max<strlen(a[i]))
                {
                    max = strlen(a[i]);
                    s = i;
                }
            }
        }
    printf("Longest common subsequence length is =%d\nand subsequence is =%s",max,a[s]);
    return 0;
}
