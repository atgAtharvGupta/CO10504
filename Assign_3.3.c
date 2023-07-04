//Russian Peasant method multiplies any two positive numbers using division by,multiplication by 2 and addition. The first number is divided by 2 and the second is multiplied by 2 repeatedly until the first number reduces to 1. Write a recursive function to multiply two numbers using Russian Peasant.
//E.g 19*25=475
//Russian Peasant method
//19		25
//19/2=9 	25*2=50
//9/2=4 		50*2=100
//4/2=2 		100*2=200
//2/2=1 		200*2=400
//25+50+400=475

#include<stdio.h>
void multiply(int a , int b)
{
    int k=0,j=a,l=b;
    while(a!=0)
    {
       if(a%2!=0){
       k=k+b;
       }
       a=a/2;
       b=b*2;
    }
            printf("%d * %d = %d",j,l,k);
}
int main()
{
    int x,y;
    printf("Enter the pair of no.s ");
    scanf("%d%d",&x,&y);
        multiply(x,y);
}
