#define _CRT_SECURE_NO_WARNINGS
//#include "Algr01.h"

#include <stdio.h>
#include <math.h>
//Кубанов Антон, Урок2
int bin(int dec) {
	if (dec > 0) {
		int temp = (bin(dec /= 2)) * 10 + dec % 2;
		return temp;

	}
	else return 0;

}
int main(void) {
	int n = 16;
	printf("%d perevod v BIN %d\n", n, (bin(n) * 10) + n % 2);  // не понял, как вы рекурсию добавить первое деление
	system("pause");
	return 0;

}
