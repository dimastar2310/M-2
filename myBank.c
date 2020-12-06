#include <stdio.h>
#include "myBank.h"
#include <stdbool.h>
static int count=901;
#define help 901
#define M 50
#define N 2
#define open 1 //heshbon patuah
#define close 0 //heshbon sagur
//float arr[N][M];


void Open(){ 
    float x;
    int j;
    int b;
    //900 basof
    if(count<951){
    b=scanf("%f",&x);//kabalat kelet 
    if(b==0){
        printf("Failed to read the amount\n");
    }
    
    else if(x>=0){
    
    int x1 = 0; //j+900
    for (j=0 ; j < M; j++) //shurot arr[i][j]
    {
     if(arr[1][j]==close){
         arr[1][j]=open;
         arr[0][j] = x;
         break;
     }
       
    }
    x1 =j+help;
    printf("New account number is: %d\n",x1);
    
count++;
}
else
{
    printf("Failed to read the amount\n");
}
}
else{
    printf("The bank is full!\n");
}
}

void bank_number(int accountnum){
int help1 = accountnum-help;

    if(arr[1][help1]==close){
        printf("This account is closed\n");
}
else
{
    float itra = arr[0][help1];
    printf("The balance of account number %d is: %0.2f\n",accountnum,itra);

}

}

void deposit(int account){
    
    int help1 = account-help;
    float deposeMoney;
   
   
     if(arr[1][help1]==close){
        printf("the account %d is close\n",account);
    }
    else
    {printf("how much money do you want to deposit?\n");
       scanf("%f",&deposeMoney);
       int flag;
        flag=scanf("%f",&deposeMoney);
        if(flag==0){
        printf("Failed to read the amount\n");
    }
    else{
 
     arr[0][help1]+=deposeMoney;
    printf("the new amount for the account %d is %0.2f\n",account,arr[0][help1]);

}
    
}
}
void withdraw(int account){

   int help1 = account-help;
   if(help1>49 || help1<0){
       printf("this is not a valid account!");
   }
   else{

    float deposeMoney;
   
     if(arr[1][help1]==close){
        printf("the account %d is close\n",account);
    }
    else
    {
       printf("how much money do you want to withdraw?\n");
        int flag;
         flag=scanf("%f",&deposeMoney);
         if(flag==0){
         printf("Failed to read the amount\n");
         }
         else{
    
        if(deposeMoney>arr[0][help1]){
        printf("Cannot withdraw more than the balance\n");
        }
     else
     {
         arr[0][help1]-=deposeMoney;
    printf("The new balance is %0.2f\n",arr[0][help1]);
     }

   }
}
   }
}
void close_account(int account){

    if(count<901){
         printf("There is no bank accounts to close\n");
    }
    else{
    if(account>900 && account<951){
     int help1 = account-help;
    
   
   
     if(arr[1][help1]==close){
        printf("the account %d was not open to close it.\n",account);
    }
    else{

     arr[1][help1]=close;
    printf("This account is closed!\n");
    count--;
    }
    }

    else{
        printf("The account %d is not validable\n",account);
    }
    }
}
void interest(float ribit){

    if(ribit<0){
        printf("The interest can not be a negative number!\n");
    }
    else{

    
for (int i = 0; i < M; i++)
{
    if(arr[1][i]==open){
        float sum=arr[0][i]*(ribit/100);
        arr[0][i]+=sum;
    }
}
    }

}
void print(){

    int count=901;
for (int i = 0; i < M; i++)
{
    if(arr[1][i]==open){
        printf("The balance of account number %d is: %0.2f\n",count+i,arr[0][i]);
    }
}

}
void Exit(){
    
    for (int i = 0; i < M; i++)
    {
        arr[1][i]=close;
    }
    
}