#include<unistd.h>
#include<stdio.h>

void ft_Pr(int sum,int mod)
{ 

	printf("sum is %d and modular is  %d\n",sum,mod);

   
}

void ft_Pri(int g,int f)
{
	printf("the sum of a which is  %d and b which is  %d\n",g,f);

}

void ft_div_mod(int a,int b,int *div,int *mod)
{
	int sumAB=0;
	int ModAB=0;

	sumAB=(a/b);
       *div=sumAB;
        ModAB=a%b;
	*mod= ModAB;

	ft_Pri(a,b);
       
	ft_Pr(sumAB,ModAB);

}


int main()
{
	int a=0;
	int z=0;
	ft_div_mod(42,4,&z,&a);
   
	return 0;
}


