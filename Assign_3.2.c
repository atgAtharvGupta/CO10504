//Amicable numbers are found in pairs. A given pair of numbers is Amicable if the sum of the proper divisors (not including itself) of one number is equal to the other number and vice – versa. For example 220 & 284 are amicable numbers First we find the proper divisors of 220: 220:1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110
//1+ 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284 Now, 284: 1, 2, 4, 71,142 1 + 2 + 4 + 71 + 142 = 220 Write a function to check that the input pair of numbers is amicable.

#include<stdio.h>
    void ameciable(int a , int b)
    {
    int k,j=1,m,n=1;
    for(k=2;k<a;k++)
    {
        if(a%k==0)
            j=j+k;
        else j=j;
    }
    for(m=2;m<b;m++)
    {
        if(b%m==0)
            n=n+m;
        else n=n;
    }
    if(j==b && n==a)
        printf("%d and %d are ameciable",a,b);
        else
            printf("Input pair is not ameciable");
    }
    int main()
    {
    int x,y;
    printf("Enter the pair of no.s ");
    scanf("%d%d",&x,&y);
        ameciable(x,y);
   }
