// ATM:

#include <stdio.h>
int main()
{
	
int pin= 13245, enter_pin, choice, new_pin, attempt=0;
float balance,deposit,withdrawl;
balance= 1000;
	
	
	while(attempt<3){
	
    printf("Enter ATM pin:");
    scanf("%d",&enter_pin);

    if(enter_pin != pin){printf("wrong pin\n"); 
	attempt++;
	if(attempt==3){
	printf("3 ATTEMPTS COMPLETED\n*CARD IS BLOCKED*");}

	}
	 else {
	 
	printf("**Acess granted**.\n {welcome to ATM}!!\n");
        printf("$ATM menu$\n");
	 	printf("1. for balance:\n");
	    printf("2. for deposit money:\n");
	    printf("3. for withdrawl money:\n");
		printf("4. for change pin:\n");
		printf("5. for exit:\n");
	    scanf("%d",&choice);
	
	while(choice !=5){
		
		
		switch(choice){
			
		case 1:{
			printf("balance= %.2f\n",balance);
			scanf("%d",&choice);}
			
		break;
			
			case 2:{
			        printf("enter deposit amount:\n");
			        scanf("%f",&deposit);
			        balance= balance+deposit;
			         printf("deposit sucessfull!!!\n");
					 printf("current balance= %f\n",balance);
			        scanf("%d",&choice);
			        
			  }
				break;
			
			case 3:  {printf("enter withdrawl amount:\n");
				     scanf("%f",&withdrawl);
					 if(withdrawl <= balance)
					 {
				     balance = balance-withdrawl;
					 printf("withdrawl sucessfull!!!\n");
					 printf("current balance= %f\n",balance);
					 scanf("%d",&choice);
				}
				     else printf(" INSUFFICIENT AMOUNT\n");
					 break;
				     
			case 4: {printf("enter new_pin\n");
			         scanf("%d",&new_pin);
					 pin=new_pin;
					 scanf("%d",&choice);
				    }	     
		        }
     	    }	
	
        }
    }
	
}
}

/*

output:
Enter ATM pin:13245
**Acess granted**.
 {welcome to ATM}!!
$ATM menu$
1. for balance:
2. for deposit money:
3. for withdrawl money:
4. for change pin:
5. for exit:
1
balance= 1000.00
2
enter deposit amount:
100
deposit sucessfull!!!
current balance= 1100.000000
3
enter withdrawl amount:
2000
 INSUFFICIENT AMOUNT
enter withdrawl amount:
100
withdrawl sucessfull!!!
current balance= 1000.000000
4
enter new_pin
1234
5
Enter ATM pin:13245
wrong pin
Enter ATM pin:13245
wrong pin
Enter ATM pin:13245
wrong pin
3 ATTEMPTS COMPLETED
*CARD IS BLOCKED*

*/	
	
