// Read an age and check voting ellibility 
#include <stdio.h>
#include <conio.h>
main()
{
	char nm[20];
	int age;
	printf("Enter Your Name :");
	scanf("%d",&nm);
	printf("Enter an Age \n");
	scanf("%d",&age);
	// Conditial Expression for checking voting elligibility
	if(age>18)
	{
		// then block
	printf("%s is elligible age :%d\n",nm,age);
	}
	else
	{
	printf("%s is not elligible is vote age :%d\n",nm,age);
	}
	return 0;
}
// Output 
// Enter Name : xx
// Enter Age : xx
