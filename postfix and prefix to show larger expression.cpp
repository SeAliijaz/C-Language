#include<iostream>
int main()
{
	int a,b,x,y;
	//Values are equal 
	a=b=x=y=0;
	//Given values are postfix and prefix
	b = a++;
	y = ++x;
	
	//It will show your output of b
	printf("Output: %d", b);
	//It will show your output of y 
	printf("Output: %d", y);
    //End
	return 0;
}


