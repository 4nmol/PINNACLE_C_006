#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,choice;
    float cash=0;
    char c;
    
    while(1){
        printf("Welcome to ATM simulator\n");
        printf("Enter 1 to Withdraw \n");
        printf("Enter 2 to deposite \n");
        printf("Enter 3 to balance check \n");
        printf("Enter 4 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int withdraw;
                printf("Enter amount to withdraw\n");
                scanf("%d",&withdraw);
                if(withdraw%100==0)
                {
                    if(cash>=withdraw)
                    {
                        cash=withdraw;
                        printf("Account after withdraw of cash is %0.f\n",cash);
                    }
                    else
                    {
                        printf("You do not have sufficient balance,please deposite\n");
                    }
                    
                }
                else
                {
                    printf("Enter withdraw amount in 100's\n");
                }
                break;
            }
            case 2:
            {
                int deposite;
                printf("Enter amount to deposite\n");
                scanf("%d",&deposite);
                if(deposite%100==0)
                {
                    cash=cash+deposite;
                    printf("Balance after deposite amount is %0.2f\n",cash);
                }
                else
                {
                    printf("Please enter amount in 100's\n");
                    
                }
                break;
            }
            case 3:
            {
              {
                  printf("balance in account is %0.2f\n",cash);
              }
              default:
              {
                  printf("enter valid choice\n");
              }
              break;
            }
            case 4:
                exit(0);
        }
    }
    printf("Thank you for using our machine\n");
}