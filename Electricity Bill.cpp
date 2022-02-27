#include <stdio.h>
#include <string.h>  
int main()
{  
   	int customerid, consumedunits;
   	float charge, surcharge=0, groceamount,netamount;
   	char connm[25];
   
   	///Ask to enter Customer ID
   	printf("Input Customer ID :");
   	scanf("%d",&customerid);
   
  	///Ask to enter Customer name
   	printf("Input the name of the customer :");
   	scanf("%s",connm);
   
   	///Ask to enter unit consumed by customer 
   	printf("Input the unit consumed by the customer : ");
   	scanf("%d",&consumedunits);
   
   	///Start of code and condition applied
   	if (consumedunits <200 ){
   		//units less than 200 will be charged by 1.20
   		charge = 1.20;
   	} else if (consumedunits>=200 && consumedunits<400){
  		//units greater than 200 less than 400 will be charged by 1.50
	    charge = 1.50;
	}else if (consumedunits>=400 && consumedunits<600){
		//units greater than 400 less than 600 will be charged by 1.80	
		charge = 1.80;
    }else{
   		//Otherwise units will be charged 2.00
   		charge = 2.00;
    }
   
   	//Calculate gross amount with consumed units and charged units
  	groceamount = consumedunits*charge;
  	
	//Charge 15% if gross amount greater than 400  
    if (groceamount > 400){
		surcharge = groceamount*(15/100);
	}
    
	//Calculate net amount
	netamount = groceamount+surcharge;
  	
  	
  	//If net amount is less than 100
   	if (netamount  < 100){
	   	netamount = 100;
    }
    
	printf("\nElectricity Bill\n");
  
  	printf("Customer IDNO                       :%d\n",customerid);
  
   	printf("Customer Name                       :%s\n",connm);
  
   	printf("unit Consumed                       :%d\n",consumedunits);
  
   	printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",charge,groceamount);
  
   	printf("Surchage Amount                     :%8.2f\n",surcharge);
  
   	printf("Net Amount Paid By the Customer     :%8.2f\n",netamount);

}
