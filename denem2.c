#include <stdio.h>


int topla(sayi1, sayi2)
{
	return (sayi1 + sayi2);
}



int main()
{
	
	int sayi1,sayi2,toplam;
	scanf("%d %d",&sayi1,&sayi2);
	toplam = topla(sayi1, sayi2);
	printf("%d",toplam);
	
	
	return 0;
}
