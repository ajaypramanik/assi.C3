//5. Write a program to check whether a given number is a three-digit number or not

#include<stdio.h>

int main() {

int x;


printf("enter a number:");
scanf("%d",&x);
int result=x&1;
if(x>99 && x<1000)
{
    printf("three-digit");

}
else{
    printf("not a 3 digit no");
}
return 0;
}