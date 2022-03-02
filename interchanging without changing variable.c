#include<stdio.h>

int main()
 {	
 	int a,b;
 	
 	printf ("Enter the value : ");
 	scanf("%d",&a);
 	
 	printf ("Enter the value : ");
 	scanf("%d",&b);
 	
 	printf("\n before swapping a=%d and b=%d",a,b);
 	
 	a=a+b;
 	b=a-b;
 	a=a-b;
 	
 	printf("\n after swapping a=%d and b=%d",a,b);
 	
 	return 0;
 }