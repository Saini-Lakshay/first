#include<iostream>

int main()
{
	
	printf("Enter the number : ");
	int x;
	scanf("%d",&x);
	
    printf("%d", ((((x>>31)&1) | (((~x)+1)&1))^1));                 

	
	return 0;
}
