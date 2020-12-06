#include <stdio.h>
#include "myBank.h"




//ze zarih liot betoh main
int main(){
char ch;
do
{
 printf("\n");
 printf("Please choose a transaction type:\n");
 printf("O-Open Account\n");
 printf("B-Balance Inquiry\n");
 printf("D-Deposit\n");
 printf("W-Withdrawal\n");
 printf("C-Close Account\n");
 printf("I-Interest\n");
 printf("P-Print\n");
 printf("E-Exit\n");
 scanf("%s",&ch);
//printf("your choice is %s\n",&ch);
if(ch < 101 && ch>132){
    printf("please enter char that listed above");
}
 switch (ch)
 {
 case 'O':
 printf("Please enter amount for deposit: ");
      Open();
     break;
 case 'B':
 printf("Choose the account number: ");
 int a;
 int flag1;
 flag1=scanf("%d",&a);
 if(flag1==0){
   printf("Not a valid enter!\n");
 }
 else{
 bank_number(a);
 }
 break;
 case 'D':
 printf("Choose the account number: ");
 int b;
 int flag2;
 flag2=scanf("%d",&b);
 if(flag2==0){
   printf("Failed to read the amount\n");
 }
 else{
 deposit(b);
 }
 break;
 case 'W':
 printf("Choose the account number: ");
 int w;
 int flag4;
 flag4=scanf("%d",&w);
 if(flag4==0){
   printf("Failed to read the amount\n");
 }
 else{
 withdraw(w);
 }
 break;
 case 'C':
  printf("Choose the account number: ");
 int c;
 int flag5;
 flag5=scanf("%d",&c);
 if(flag5==0){
   printf("Failed to read the amount\n");
 }
 else{
 close_account(c);
 }
 break;
 case 'I':
 printf("Please enter interest rate: ");
 float i;
 int flag6;
 flag6=scanf("%f",&i);
 if(flag6==0){
   printf("Failed to read the amount\n");
 }
 else{
 interest(i);
 }
 break;
 case 'P':
 print();
 break;
 case 'E':
 printf("all the accaunts is close now\n");
 break;
 default:
 printf("Invalid transaction type\n");
     break;
  } 
} while (ch!='E');
return 0;
}


