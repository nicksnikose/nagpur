/*Read temp in centigrade and if it more than 30 display message hot , if it is more than 40 very hot else
normal*/
#include<stdio.h>
#include<conio.h>
void main(){
    int tem;
    printf("Enter a tempereature :");
    scanf("%d",&tem);
    
    if(tem>=30 && tem<40)
        printf("  The temperature is  Hot");
    else if(tem>=40)
        printf("  Temperature is very  HOT");
    else {
        printf("  The temperature is Normal");
    }
}