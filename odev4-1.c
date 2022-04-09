#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
	char nota;
	printf("Bu program, siz piyano kursumuzda ogrendiginiz parcalari evde de calisabilin diye\n");
	printf("degerli yazilimcilarimiz tarafindan yazildi.");	
	printf("Kullanimi soyle ki, ilk once bilgisayarinizin sesi acik olmali.\nOndan sonra tek yapmaniz gereken, harflere basmak\n");
	printf("Notalar ve notalarin harf karsiliklari soyle:\n");
	printf("\tDo->a\t");
	printf("Re->s\n");
	printf("\tMi->d\t");	
	printf("Fa->f\n");	
	printf("\tSol->g\t");	
	printf("La->h\n");	
	printf("\tSi->j\t");
	printf("Do->k\n");	
	while(1){
		nota = getch();
	switch(nota){
		case 'a':
		system("COLOR 14");
		Beep(261,275);
		printf("Do ");
		break;
		case 's':
		system("COLOR 0E");
		Beep(294,275);
		printf("Re ");
		break;
		case 'd':
		system("COLOR 4A");
		Beep(329,275);
		printf("Mi ");
		break;
		case 'f':
		system("COLOR 83");
		Beep(349,275);
		printf("Fa ");
		break;
		case 'g':
		system("COLOR 2C");
		Beep(392,275);
		printf("Sol ");
		break;
		case 'h':
		system("COLOR F0");
		Beep(440,275);
		printf("La ");
		break;
		case 'j':
		system("COLOR 8B");
		Beep(493,275);
		printf("Si ");
		break;
		case 'k':
		system("COLOR A5");
		Beep(523,275);
		printf("Do ");
		break;
		default:
			printf("\nLutfen yonergedeki harflerden birine tikladiginiza emin olunuz\n");
		}
	
}

	getch();
	return 0;
}
