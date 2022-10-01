//12. Write a program to check whether a given alphabet is in uppercase or lowercase.//

#include<stdio.h>

int main() {

char ch;


printf("enter the alphabet:");
scanf("%c",&ch);


if(ch>=65 && ch<=90)
{
    printf("upper-case");   
}


else
{
printf("lower-case");
}
return 0;
}


