#include<stdio.h>
int lcm(int , int);
int lcm(int a , int b)
{
	static int x=1;
	if(x % a ==0 && x% b == 0)
	{
		return x;
	}
	x++;
	lcm(a,b);
	return x; ;
}
int main ()
{
	int a, b , result;
	printf("enter two number= \n");
	scanf("%d%d",&a,&b);
	result = lcm(a,b);
	printf("\n LCM of %d and %d = %d",a,b,result);
	return 0;
}
