#include <stdio.h>
#include <stdlib.h>

int main(void)
{   int i;
    int a[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    int sum_odd , sum_even , last_digit ,check_digit , ans_odd , ans_even;
    int ch;

    char pin[20]="1234";
	char str[20];
	int p,j,flag;
	float accbal=1000;
	int cnt;

	int od= 500;
	int wd;

    printf("******* (: WELCOME TO KEEPSAFE BANK ATM :) *******");
    printf("\n");
    printf("\n PRESS 1 for Card Check......");
    printf ("\n PRESS 2 for pin verification .....");
    printf("\n PRESS 3 for Withdraw Cash And OverDrawing Balance...");
    printf("\n");

    scanf("%d",&ch);

  switch(ch)

  // For Card Check
  case 1 : if(ch==1)
  {
    printf ("enter 12 digit:\n");
    for (i=1;i<12;i++)
    {
        printf("digit %d -->\t",i);
        scanf("%d",&a[i]);

       if (a[i]>=10)
       {
           a[i]=0;
           printf("Error\n");

           i=i-1;
       }
        if(i%2==0)
           sum_odd=sum_odd+a[i];
        else
           sum_even=sum_even+a[i];

    }
    printf("digit 12 -->\t");
    scanf("%d",&a[12]);

 ans_odd=sum_odd*3;
 ans_even = ans_odd + sum_even;
    last_digit=ans_even%10;

    return 0;
}
void check (int a[],int i)
{
    int last_digit,check_digit;
if (last_digit==0)
     check_digit=0;
    else
        check_digit=10-last_digit;

    if (check_digit==a[12])
    {
        printf("\n your cod is valid.\n");
    }
    else
        printf ("\n your cod is incorrect.\n");

}
switch(ch)

// For Pin Verification

  case 2 :
    if (ch==2)
    {

        for(p=0;p<=3;p++){
		flag=0;
		printf("\n Enter pin:");
		scanf("%s",str);
		for(j=0;str[j]!='\0';j++){
			if(pin[j]!=str[j]){
				flag=1;
				break;
			}
		}
		if(flag==1){
			printf("\n Wrong pin ! try again...");

		}
		else{
			printf("\n PIN Verification successfully..!");
			printf("\n");
			break;
		}
}

    }
        if (pin[j]==pin[j])
        {

       printf("\n Account Balance = %.2f",accbal);
       printf("\n");

        }
        // for overdrawing
        switch(ch)

        case 3 : if (ch==3)
        {
            printf("Enter the amount to withdraw");
            scanf("%d",&wd);
            accbal= wd-accbal;
        }
            if(wd>accbal)
           {
               printf("\n Not Enough Money. ");

               printf("\n OVERDRAWN balance = %d",od);

           }



}


