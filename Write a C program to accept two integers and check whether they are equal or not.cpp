#include<iostream>
int main()
{
    int int1, int2;
 	//Ask to enter value of first number
    printf("Input the values for first Number: ");
    scanf("%d", & int1);
    //Ask to enter value of second number
    printf("Input the values for second Number: ");
    scanf("%d", & int2);
	
	//If first Number is equal to second Number
	if (int1 == int2){
    	//It will show given statement
	    printf("First Number and Second Number are equal\n");
	//Otherwise it will show the given one
	}else{
    	//First Number and Second Number are not than it will show given one
	    printf("First Number and Second Number are not equal\n");
	}
}
