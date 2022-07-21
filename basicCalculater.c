#include<stdio.h>
void addition();
void substraction();
void multiplication();
void division();
int main()
{
	int option;
	printf("=====================================\n");
	printf("| Simple Arithmetic Calculations.   |\n");
	printf("=====================================\n");
	while(1)
	{
	printf("********************************************\n");
	printf("| Select The Option as an integer number : |\n");
	printf("|******************************************|\n");
	printf("| (1) Addition.                            |\n");
	printf("| (2) substraction.                        |\n");
	printf("| (3) multiplication.                      |\n");
	printf("| (4) division.                            |\n");
	printf("| (5) To Exit.                             |\n");
	printf("********************************************\n");
	printf("\n Option : ");
	scanf("%d",&option);
	printf("\n");
	switch(option)
	{
		case 1:
			addition();
			break;
		case 2:
			substraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
		case 5:
			return 0;
		default :
		printf("\n---------------------------------------------------------------\n");
		printf("| Entered Option is Wrong....! Kindly Choose correct Option.  |\n");
		printf("---------------------------------------------------------------\n\n");
	}
	}


	return 0;
}

void addition()
{
	int num1,num2,sum;
	printf("Enter the num1 : ");
	scanf("%d",&num1);
	printf("\n");
	printf("Enter the num2 : ");
	scanf("%d",&num2);
	sum = num1 + num2;
	printf("\n\n");
	printf("[ The Addition of %d and %d is : %d    ]",num1,num2,sum);
	printf("\n\n");
}
void substraction()
{
	int num1,num2,sub;
	printf("Enter the num1 : ");
	scanf("%d",&num1);
	printf("\n");
	printf("Enter the num2 : ");
	scanf("%d",&num2);
	sub = num1 - num2;
	printf("\n\n");
	printf("[ The Substraction of %d and %d is : %d    ]",num1,num2,sub);
	printf("\n\n");

}
void multiplication()
{
	int num1,num2,mul;
	printf("Enter the num1 : ");
	scanf("%d",&num1);
	printf("\n");
	printf("Enter the num2 : ");
	scanf("%d",&num2);
	mul = num1 * num2;
	printf("\n\n");
	printf("[ The Multiplication of %d and %d is : %d    ]",num1,num2,mul);
	printf("\n\n");

}
void division()
{
	int num1,num2,div;
	printf("Enter the num1 : ");
	scanf("%d",&num1);
	printf("\n");
	printf("Enter the num2 should not be 0 either less than, grater than and equal : ");
	scanf("%d",&num2);
	div = num1 / num2;
	printf("\n\n");
	printf("[ The Division of %d and %d is : %d    ]",num1,num2,div);
	printf("\n\n");
}
