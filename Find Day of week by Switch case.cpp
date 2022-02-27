#include<iostream>
int main()
{
    int week;
    
	///Input week number from user
    printf("Enter week number: ");
    scanf("%d", &week);
    
	///Condition applied
    switch(week)
    {
    	///Ask to enter Case 1
        case 1: 
            printf("Monday");
            break;
        ///Ask to enter case 2
		case 2: 
            printf("Tuesday");
            break;
        ///Ask to enter case 3
		case 3: 
            printf("Wednesday");
            break;
        ///Ask to enter case 4
		case 4: 
            printf("Thursday");
            break;
        ///Ask to enter case 5
		case 5: 
            printf("Friday");
            break;
        ///Ask to enter case 6
		case 6: 
            printf("Saturday");
            break;
        ///Ask to enter case 7
		case 7: 
            printf("Sunday");
            break;
        
		default: 
        	///Statement 
			printf("Invalid input! Please enter week number between 1-7");
    }
    ///End  
    return 0;
}
