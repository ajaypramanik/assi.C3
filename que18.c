//18. Write a program which takes the month number as an input and display number of
//days in that month



#include<stdio.h>

int main() {

int n;


printf("\nenter the month no:");
scanf("%d",&n);


if(n==1)
{
    printf(" jan 31 days");   
}


else if(n==2)
{
  
printf(" feb 28 days");
}
else if(n==3)
{
    printf("march 30 days");
}

else if(n==4)
{
    printf("aprial 31 days");
}
else if(n==5)
{
    printf("may 30 days");
}
else if(n==6)
{
    printf("juan 31 days");
}
else if(n==7)
{
    printf("july 30 days");
}
else if(n==8)
{
    printf("aug 31 days");
}
else if(n==9)
{
    printf("sep 30 days");
}
else if(n==10)
{
    printf("october 31 days");
}
else if(n==11)
{
    printf("nov 30 days");
}
else if(n==12)
{
    printf("december 31 days");
}
 else 
{
printf("not avalid month");
}
printf("\n");
return 0;
}


