#include<iostream>
int main()
{
	int marks;
	///Ask to enter marks
	printf("Enter Marks:");
	scanf("%d",& marks);
	
	///Calculate marks to check pass or fail 
	if (marks >= 33){
	    printf("Congratulations! You have passed");
	}else{
	    printf("Ohhh! Sorry You have failed");
    }
    ///End
    return 0;
}
