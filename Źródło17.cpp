//Zadanie stosy

#include<stdio.h>
#include<stdlib.h>

void wyswietlanie();

void dodaj(); 

void usun(); 

void rozmiar();

void sprawdz_czy_pusty(); 
int wielkosc;
int* wilkosc_zadana_stosu;
int ilosc_elementow_stosu;
int zmienna_switch;

int main()
{
	{
		printf("Podaj wielkosc stosu: ");
		scanf_s("%d", &wielkosc);
		wilkosc_zadana_stosu = new int[wielkosc];
	}
	for (;;)
	{
		wyswietlanie();

		
		
		printf("1 - dodaj\n");
		printf("2 - usun\n");
		printf("3 -  sprawdz romiar\n");
		printf("4 - czy stos jest pusty?\n");
		printf("5 - koniec progrmu\n\n");
		printf("Podaj co chcesz zrobic: ");

		scanf_s("%d", &zmienna_switch);

		switch (zmienna_switch)
		{
			case 1:
				dodaj();
				break;
			
			case 2:
				usun();
				break;

			case 3:
				rozmiar();
				break;

			case 4:
				sprawdz_czy_pusty();
				break;

			case 5:
				exit(0);

			default:
				printf("Podales zla liczbe");
		}

	}


	system("PAUSE");
	return 0;
}

void wyswietlanie()
{
	system("CLS");
	printf("------------------------------\n");
	printf("NASZ STOS WYGLADA NASTEPUJACO:\n\n");

	if (ilosc_elementow_stosu == 0)
	{
		printf("STOS JEST PUSTY!!\n");
	}
	else
	{
		for (int i = ilosc_elementow_stosu; i > 0; i--)
		{
			printf("%d\n", wilkosc_zadana_stosu[i - 1]);
		}
		printf("\n");
	}
	printf("------------------------------\n");
}



void dodaj()
{
	if (ilosc_elementow_stosu >= wielkosc)
	{
		printf("STOS JEST PELNY!!\n");
		system("PAUSE");
	}
	else
	{
		printf("Podaj jaka liczbe dodac do stosu: ");
		scanf_s("%d", &wilkosc_zadana_stosu[ilosc_elementow_stosu]);
		ilosc_elementow_stosu += 1;
	}
}


void usun()
{
	if (ilosc_elementow_stosu >= 1)
	{
		printf("Usuwam ze stosu liczbe z jego wierzcholka\n");
		system("PAUSE");
		ilosc_elementow_stosu -= 1;
	}
	else
	{
		printf("STOS JEST PUSTY!!\n");
		system("PAUSE");
	}
}


void rozmiar()
{
	printf("Na stosie znajduje sie %d elementow \n", ilosc_elementow_stosu);
	system("PAUSE");
}


void sprawdz_czy_pusty()
{
	if (ilosc_elementow_stosu == 0)
	{
		printf("STOS JEST PUSTY\n");
		system("PAUSE");
	}
	else
	{
		printf("STOS NIE JEST PUSTY\n");
		system("PAUSE");
	}
}