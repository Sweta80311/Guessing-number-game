#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int n,number,i,j,sum;     //number=random number
srand(time(0));
number=rand()%100+1;             //generation of random number
//printf("The number is %d\n",number);
printf("                                     Welcome! to the game of guessing a number\n              ");
printf("                      guessing a number between 1 to 100\n         ");
printf("    '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n        ");
while(n!=number){
for (i=1;i<number;i++)
{
printf("guess a number: ");
scanf("%d",&n);                //n=guess number
if(n<number)
{
printf("Higher number please!\n");
}
else if(n>number)
{
printf("Lower number please!\n");
}
else
{
printf("wow! your guess is right\n");
n=number;
break;
}
}
}
for(j=1;j<=i;j++){      //calculation of number of guesses
sum=0;
sum+=i;
}
printf("Number of your guesses is %d",sum);
return 0;
}
