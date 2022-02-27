#include<iostream>
int main()
{
	int speed,time,distance;
	
	///Ask to enter Speed
	printf("Enter the speed in m/s:");
	scanf("%d",& speed);
	
	///Ask to enter time
	printf("Enter the time:");
	scanf("%d", & time);
	
	///Formula to find 
	distance = speed*time;
    
	///Statement
	printf("Covered distance is :%d m/s",distance);
    
	///End
	return 0;
}
