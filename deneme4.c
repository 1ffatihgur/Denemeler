#include <stdio.h>

int asalkontrol(int sayi)
{
	int i;
	
	for(i=2; sayi>i; i++)
	{
		if(sayi%i==0)
		{
			return 0;
		}
		
	}
	
	return 1;
	
}



int main()
{
	
	int n;
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	if(asalkontrol(n)==0)
	{
		printf("sayi asal degildir.");
	}
	else
	{
		printf("sayi asaldir.");
	}
	return 0;
}

