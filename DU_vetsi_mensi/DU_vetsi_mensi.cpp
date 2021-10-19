//porovnání jaké číslo ze dvou zadaných je větší

//možno bude třeba do definice postprocesoru přidat: _CRT_SECURE_NO_WARNINGS
//microsoft vyhodnucuje funkci scanf() jako bezpečnostní riziko

#include <stdio.h>

int main(void) {
	int a;
	int b;

	printf("Zadejte cislo a: ");
	scanf("%d", &a);

	printf("Zadejte cislo b: ");
	scanf("%d", &b);

	printf("\nCislo %d je ", a);

	if (a < b) {
		printf("mensi");
	}
	else {
		printf("vetsi");
	}

	printf(" nez cislo %d\n", b);
}