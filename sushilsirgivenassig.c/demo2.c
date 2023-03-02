/*taking data from the user*/
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("Enter A Value :");
    scanf("%d",&a);
    printf("Enter B value :");
    scanf("%d",&b);
    printf("a value=%d\n",a);
    printf("b value =%d\n",b);
    //exchange the values
    b=a-b;  //b=5-7=-2
    a=a-b;  //a=5-(-2)=7
    b=a+b;  //b=7+(-2)=5
    printf("after exchanging the a value=%d\n",a);
    printf("after exchanging the b value=%d\n",b);
}