 //Read a no to check whether it is even or odd
#include<stdio.h>
#include<conio.h>
void main(){
    int ev;
    printf("Enter a number :");
    scanf("%d",&ev);
    //compute
  if(ev%2==0)
    printf("the Given number is Even\n");
    else{
      printf("the given number id Odd");
    }
}