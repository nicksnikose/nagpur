/*Read person age to display following message as per age
< 18 --Jr. Kid
>=18 <25 College going
>=25 <40 Career oriented
>=40 <60 middle age
>=60 Old age */
#include<stdio.h>
#include<conio.h>
 void main(){
    int age;
    printf("Enter Person Age :");
    scanf("%d",&age);
    if(age<=18)
        printf(" you are a  Jr. Kid");
     if(age>18 && age<=25)
        printf("You are a  college going student");
     if(age>25 && age<=40)
        printf("You are  a  career oriented person");
     if(age>40 && age<=60)
        printf("you are a  middle Age Person");
    if(age>=60){
        printf("You are Old age");
    }
 }