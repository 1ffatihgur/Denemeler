#include <stdio.h>

int faktoryel(int sayi)
{
	int faktoryel = 1;
	
	for(sayi; sayi>0; sayi--)
	{
		faktoryel = faktoryel * sayi;
	}
	
	return (faktoryel);
}



int main()
{
	
	int n;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	printf("faktoriyel: %d",faktoryel(n));
	
	
	
	return 0;
}
