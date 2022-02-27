#include<iostream>
#include<conio.h>
int main()
{
	int number;
	
	///Ask to Enter a number 
	printf("Enter an number:");
	scanf("%d",& number);
		
	///Start of code and condition applied                  
	if (number%2==0){
		printf("%d is an even number", number);
	}else{
		printf("%d is an odd number", number);
	}
	///End
}
