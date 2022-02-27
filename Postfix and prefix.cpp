#include<iostream>
int main()
{
	int a,b,x,y;
	a=b=x=y;
	a++;
	b=a;
	++x;
	y=x;
	
	printf("Output: %d", b);
	printf("Output: %d", y);
    return 0;
}


