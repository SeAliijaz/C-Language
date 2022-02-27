#include<iostream>
int main()
{
	int n = 1;
	//goto Statement  
	printMyCode:
		//Statement to show print
		printf("\n %d",n);
		//increment to add one by one
		n++;
			//Condition applied
			if(n==3) 
				//it will go down on three to print
				goto three;	
		//Condition applied if n is less than 5 or equal to 3
		if (n < 5) 
		//Than it will go to printMycode
		goto printMyCode;
			//End of statement
			printf("\n End");
		//We only want to see 3 numbers just
		three:
			//here it will tell number is reached  to 3 or not
			printf("\n N has reached to 3");
}
