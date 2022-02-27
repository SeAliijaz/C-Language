#include<iostream>
int main()
{
    int num1, num2, num3;
 	
	//Ask to enter 1st number
    printf("Input the value of 1st number: ");
    scanf("%d", & num1);
    
	//Ask to enter 2nd number
    printf("Input the value of 2nd number: ");
    scanf("%d", & num2);
    
	//Ask to enter 3rd number
    printf("Input the value of 3rd number: ");
    scanf("%d", & num3);
	//condition applied
    //If num 1 is greater than num 3
    if  (num1 > num3){
        	//it will show given statement 
            printf("The 1st Number is the greatest among three. \n");
        //If num 2 is greater than num 3 
		}else if (num2 > num3){
			//it will show given statement
            printf("The 2nd Number is the greatest among three. \n");
    }else{
    	//otherwise it will show given statement
        printf("The 3rd Number is the greatest among three \n");
	}
	return 0;
}
