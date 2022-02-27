#include<iostream>
int main()
{
	int age;
	char name[25], city[30];
	
	//Ask to enter your name
	printf("Enter your name:");
	scanf("%s", & name);
	
	//Ask to enter your city name
	printf("Enter your city name:");
	scanf("%s", & city);
	
	//Ask to enter your age
	printf("Enter your age:");
	scanf("%d",& age);

	//This will display your data on screen
	printf("Your name is: %s\n", name);
	printf("Your city name is: %s\n", city);
	printf("Your age is: %d\n", age);
}
