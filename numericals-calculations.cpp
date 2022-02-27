#include<iostream>
int main()
{
	float firstDigit, secondDigit, result;
	char operatorSymbol;
	
	
	///Ask to enter Floating number A
	printf("Enter Number:");
	scanf("%f", & firstDigit);
	///Ask to enter operator
	///With this sequence 
    ///It will display operator in the middle of numbers
	printf("Enter Operator:");
	scanf("%s",& operatorSymbol);
    ///Ask to enter Floating number b
	printf("Enter Number:");
	scanf("%f",& secondDigit);
	///condition applied
	switch (operatorSymbol)
	{
		//Ask to enter First operator with values
		case '+':
			result = firstDigit + secondDigit;
			break;
	
		//Ask to enter second operator with value
		case '-':
		    result = firstDigit - secondDigit;
		    break;
	
		//Ask to enter third operator with value 
		case '*':
		    result = firstDigit * secondDigit;
		    break;
	
		//Ask to enter Fourth operator with value
	    case '/':
	    	if (secondDigit==0){
	    		printf("Divided by zero is not applicable\n");
	    		result=0.0;
			}else{
				result = firstDigit / secondDigit;
			}
	    	break;
	    	
	    default:
	        ("invalid case");
	}	
	//It will show your answer
	printf("Your answer is: %f", result);
	//End
}
