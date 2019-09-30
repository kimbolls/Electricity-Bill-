#include <stdio.h>
main()
{
	double a, bill_1,bill_2,bill_3,pay;
	printf("Please enter usage :");
	scanf_s("%lf", &a);
	
	if (a > 200)
	{
		bill_1 = 200 * 21.8;
		a = a - 200;
	}
	else
	{
		bill_1 = a * 21.8;
		a = 0;
		pay = bill_1;
	}
		if  (a > 800)
		{
		bill_2 = 800 * 25.8;
		a = a - 800;
		pay = bill_2 + bill_1+ a * 27.8;
		
		}
		else if (a>0)
		{
			bill_2 = a * 25.8;
			pay = bill_1 + bill_2;
		}

	pay = pay / 100;
	printf("total =  RM %.2lf", pay);
}