#include<stdio.h>
int max(int a[], int n)
{
	int m = a[0];
	int j;
	int s;

	for(j = 1; j < n; j++)
	if(a[j] > m)
	m = a[j];
	//m = a[j]>m?a[j]:m;
	s = a[0];
	for(j = 1; j < n; j++)
	if(a[j] > s && a[j] != m)
	s = a[j];
	return s;
}


int main()
{
	int a[] = {2,1,23,34,45,322,6,7,234,9,900};
	int n = sizeof(a)/sizeof(a[0]);
	int i;

	printf("n = %d\n",n);

	for(i = 0; i < n; i++)
	printf("%d  ",a[i]);
	printf("\n");

	printf(" next big is:%d ", max(a,n));
	
	return 0;
}
