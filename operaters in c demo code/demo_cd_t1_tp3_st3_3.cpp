/*  
Four Partners - A,B,C,D ----net capital 
Profit - 10,000/-rs 
How they will share the profit ??
	Net - A+B+C+D;
		10,000*A/Net
		25%

		30%
*/


#include <stdio.h>
#include<conio.h>

main()
{
	float A,B,C,D,Net;
	printf("Enter Capital of A\tB\tC\tD :");
	scanf("%f%f%f%f",&A,&B,&C,&D);
	Net=A+B+C+D;
	// Compute Profit Share 
	printf("Share of A :%.2f\tProfit Share :%.2f\n",(A/Net),10000*(A/Net));
	printf("Share of B :%.2f\tProfit Share :%.2f\n",(B/Net),10000*(B/Net));
	printf("Share of C :%.2f\tProfit Share :%.2f\n",(C/Net),10000*(C/Net));
	printf("Share of A :%.2f\tProfit Share :%.2f\n",(D/Net),10000*(D/Net));
	return 0;

}
