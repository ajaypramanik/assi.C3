//7Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots



#include<stdio.h>

int main() {

int a,b,c,d;


printf("enter value of roots a,b,c:");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
    printf("roots are real");   
}
else if(d==0)
{
   printf("roots are equal");  
    
}
else{
    printf("imaginary");
}
return 0;
}
