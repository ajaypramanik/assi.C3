//Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.

#include<stdio.h>

int main() {

char ch;


printf("\nenter the alphabet:");
scanf("%c",&ch);


if(ch>=65 && ch<=90)
{
    printf("upper-case");   
}


else if(ch>=97 && ch<=122)
{
  
printf("lower-case");
}
else if(ch>=48 && ch<=57)
{
    printf("a digit");
}
 else 
{
printf("a special character");
}
printf("\n");
return 0;
}


