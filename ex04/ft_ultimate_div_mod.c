#include<stdio.h>
#include<unistd.h>




void ft_displayAB(int s ,int d)
{
	printf("The value of a is %d and the value of b is %d \n",s,d);
}



void ft_Result_display(int sum, int mod)
{
	printf("The sum of a and b is %d and the modular is %d",sum,mod);
}

void ft_ultimate_div_mod(int *a,int *b)
{
	/*am using a function to display the values*/

	ft_displayAB(*a,*b);

	/*am now storing the value of i devided by u  in the integer of sum*/
	int sum = *a/ (*b);
         /*am now storing the value of i mudular u to the  interger summod*/

	int summod=*a % *b;

	/*now am storing the value of sum to i and the summod to u*/


	*a=sum;
	*b=summod;

	/*now am displaying using a function i created*/


	ft_Result_display(*a,*b);

}

int main()
{  
	/*decleared 2 integers*/

	int i=42;
	int u=4;

         /*storing the addresses*/

	ft_ultimate_div_mod(&i,&u);

	return 0;

}



