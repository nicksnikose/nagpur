/* Read name , age ,height of a person , apply criteria for selection that is age should be in the range 18-
25 years and height should be >=5.4 */
#include<stdio.h>
#include<conio.h>
void main(){
    char r[20];
    int age,hei; //declared Variables
    printf("Enter Your Name :"); // Taking  data From user 
    scanf("%s",&r);
    printf("Enter Your Age :");
    scanf("%d",&age);
    printf("Enter Height Of the Person :");
    scanf("%d",&hei);
    //compute
 
    if(age>18 && age<25 && hei>=5.4)
        printf("You are Eligible for this criteria:",age,hei);
    else{
    printf("You are not Eligible for this criteria:",age,hei);
    }

}   