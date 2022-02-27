#include<iostream>
#include<math.h>
int main()
{
    float radius,area;
    
	printf("Enter the Radius:");
	scanf("%f",& radius);
	
	///Formula to find Area
	area=3.141*radius*radius;
	
	printf("Area of circle is %f",area);
	
	return 0;
}

