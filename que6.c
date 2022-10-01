//6. Write a program to print greater between two numbers. Print one number of both are

//the same.

#include<stdio.h>

int main() {

int x,y;


printf("enter two number:");
scanf("%d%d",&x,&y);

if(x>y)
{
    printf("the greater no is:%d",x);
    printf("the greater no is equal:%d",x);
    
}
else if(x==y){
    printf("the number is equal:%d",x);
    
}
else{
    printf("the greater no is:%d",y);
}
return 0;
}
