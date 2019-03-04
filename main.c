#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int(*fun_ptr[4]) (int x,int y);
int main()
{
	int a, b;
	int result;
	int i;
	fun_ptr[0]=plus;
	fun_ptr[1]=minus;
	fun_ptr[2]=multiply;
	fun_ptr[3]=divided;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("0:plus,1:minus,2:multiply,3:divided\n");
	while(i<0 || i>3)
{
	printf("Enter number of fun:");
	scanf("%d",&i);
};
	result=(*fun_ptr[i])(a,b);
	printf("%d \n",result);
	return 0;
	
}
