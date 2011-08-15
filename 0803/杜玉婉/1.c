#include<stdio.h>
int main()
{
	int a[] = {1,37,33,43,72,24,98,3,0,90};
	int i,j;
	int t;

	for(i = 0; i < 10; i++)
	printf("%d  ",a[i]);
	putchar('\n');
	
	for(i = 0; i < 9; i++)
	for(j = i;j < 10; j++)
		if(a[j]%2 == 1)
		{
		t = a[i];
		a[i] = a[j];
		a[j] = t; 
		}

	for(i = 0; i < 10; i++)
	printf("%d  ",a[i]);
	putchar('\n');
	return 0;
}
