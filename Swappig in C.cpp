#include<iostream>
int main()
{
	//To swap values enter 3 variables
	//C is empty variable
	int a,b,c;
	
		//Ask to enter first number
		printf("Please Enter First Number: ");
		//It will show the written number
		scanf("%d",&a);
	
			//Ask to enter second number
			printf("Please Enter First Number: ");
			//It will show the written number
			scanf("%d",&b);
		
				//It will show the values which are not swapped yet
				printf("Before swapping values are: A = %d, B = %d \n",a ,b);
				
					//It will store Value of C is in A coz c is emty variable
					c = a;
					
						//Valuse of A is in B
						a = b;
						
							//Valuse of B is in C
							b = c;
							
	//Now we will show the values of swapped numbers
	printf("After swapping values are: A = %d, B = %d \n",a ,b);
}
