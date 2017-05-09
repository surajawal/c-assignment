#include<stdio.h>

void main()
{
	char name[50]; //Declaring name variable as array of characters
	int i; //Declaring variable for looping
	printf("Enter your name :: ");
	scanf("%s", name); //Input name
	for(i = 0; i < 10; i++) //for loop
	{
		printf("%s\n", name); //display name
	}
}