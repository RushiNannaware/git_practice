#include<stdio.h>

int main()
{
	int a=10;
	
	printf("%d %d %d \n",a++,a++,a++);//12,11,10
	printf("%d %d %d \n",--a,--a,--a);//16,16,16
	//printf("%d %d %d \n",a++,a++,a++);
	//printf("%d %d %d \n",a++,a++,a++);
	return 0;
}