#include<iostream>
#include<conio.h>
int main()
{
	//define varibale year
	int year;
	
	//get remainder of year in temporary variable
	int temp = year%100;
	
	//get input of year
	printf("Enter an Year=");
	scanf("%d",& year);
	
	if (year%4==0){
		printf("%d is a leap year",year);
	}else{
		printf("%d is not a leap year",year);
	}
	
	return 0;
}
