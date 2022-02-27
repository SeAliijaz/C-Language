#include<iostream>
int main()
{
	int n = 1;
	//Loop where i want to go
	loop:
		//Print i want to show
		printf("C++\n");
			//increment to add print one by one
			n ++;
				//Condition applied	
				if (n <= 5)
					//goto upper statement
					goto loop;
						//End
						printf("End\n");	
	
}
