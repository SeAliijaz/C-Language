#include<iostream>
int main()
{
	int number;
	//Ask to enter a number
	printf("Enter a number:");
	scanf("%d", & number);
	//Condition if number is greatr or equal to zero
	if (number >= 0){
		//It will show given statement
		printf("Integer is positive");
	}else{
		//Otherwise it will show this one statement
		printf("Integer is negative");
	}
	
}
