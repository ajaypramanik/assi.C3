// Write a program which takes the length of the sides of a triangle as an input. Display
//whether the triangle is valid or not. 

#include<stdio.h>

int main() {

int a,b,c;


printf("enter the sides:");
scanf("%d%d%d",&a,&b,&c);



//if(a+b>c && b+c>a && a+c>b)

if(a+b>c && b+c>a && a+c>b)
{
    printf("valid triangle");   
}


else
{
printf("not valid");
}
return 0;
}


