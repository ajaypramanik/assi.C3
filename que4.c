//4. Write a program to check whether a given number is an even number or an odd
//number without using % operator.


#include<stdio.h>

int main() {

int x;


printf("enter a number:");
scanf("%d",&x);
int result=x&1;
if(result==0)
{
    printf("even");

}
else{
    printf("odd");
}
return 0;
}