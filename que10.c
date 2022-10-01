//10. Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.


#include<stdio.h>

int main() {

float cp,sp;


printf("enter  a cost price:");
scanf("%f",&cp);
 
printf("enter  selling price:");
scanf("%f",&sp);

if(sp>cp)

 {
    float pp= ((sp-cp)/cp)*100;
   
    printf("profit percentage is:%f",pp);   
 }

 else{
    float lp=((cp-sp)/cp)*100;
    
    printf("loss percentage is:%f",lp);

}
  
return 0;

}
