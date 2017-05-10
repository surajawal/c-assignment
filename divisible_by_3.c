#include<stdio.h>

void main()
{
	int num; //Declaring variable to take input
	printf("Enter any positive integer ::: ");
	scanf("%d", &num);	//Input an integer
	if (num % 3 == 0) //Checking whether an input number is divisible by 3 or not
	{
		printf("%d is divisible by 3. \n", num);
	}
	else
	{
		printf("%d is not divisible by 3. \n", num);
	}
}