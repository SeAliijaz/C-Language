#include<iostream>

int main(void){
	
	float area;
	int base,per;
	
	printf("Enter Base : ");
	scanf("%d",&base);
	
	printf("Enter Perpendicular : ");
	scanf("%d",&per);
	
	area = ((base * per)/2);
	
	printf("Area of a Triangle is : %f",area);
}
