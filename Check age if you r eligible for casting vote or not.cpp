#include <iostream>
int main()
{
  	int vote_age;
	//Ask to enter the age
  	printf("Input the age of the candidate : ");
  	scanf("%d",&vote_age);
  	
	//Condition applied
	if (vote_age<18){
	///If Your <18 than it will show given statement
 	printf("Sorry, You are not eligible to caste your vote.\n");
    //It will show when to cast vote 
	printf("You would be able to caste your vote after %d year.\n",18-vote_age);
    //if you are eligible for vote it will show given statement
	}else{	
    printf("Congratulation! You are eligible for casting your vote.\n");

	}
}
