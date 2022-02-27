#include<iostream>
int main()
{
	int obtainedMarks, totalMarks;
	float percentage;
	
	///Statement Total Marks
	printf("Enter total marks:");
	scanf("%d",&totalMarks);

	///Statement obtained marks
	printf("Enter obtained marks:");
	scanf("%d",&obtainedMarks);
	
	///Percentage Formula
	percentage  = (obtainedMarks  * 100)/ totalMarks;	
	
	///Condition applied
	if(percentage >= 90){
	//If marks are greater or equal than 90 it shows given grading and per%
		printf("Your Grade is A+ with percentage of: %f \n ", percentage);
	//If marks less than 90 and greater than or equal to 80 
	}else if(percentage < 90 && percentage >=80){
		//It will show your grade with percentage
		printf("Your Grade is A with percentage of: %f \n ", percentage);
	//If marks are less than 80 and greater or equal to 70 
	}else if(percentage < 80 && percentage >=70){
		//It will show your grade with percentage
		printf("Your Grade is B+ with percentage of: %f \n ", percentage);
	//If marka are less than 70 and greater or equal to 60 
	}else if(percentage < 70 && percentage >=60){
		//It will show your grades with percentage
		printf("Your Grade is B with percentage of: %f \n ", percentage);
	//If marks are less than and greater or equal to 50 
	}else if(percentage < 60 && percentage >=50){
		//It will show your grade with percentage
		printf("Your Grade is C with percentage of: %f \n ", percentage);
	//If marks are less than and greater or equal to 40
	}else if(percentage < 50 && percentage >=40){
		//It will show your grades with percentage
		printf("Your Grade is D with percentage of: %f \n ", percentage);
	//Otherwise your result is given statement
	}else{
		//If marks less than 40 it will show your grade with percentage
		printf("Your Grade is F with percentage of: %f \n ", percentage);
	}
	//End	
	return 0;
}
