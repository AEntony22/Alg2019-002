#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//Кубанов Антон , Урок2
void solution1();
int bin(int dec) {
	if (dec > 0) {
		int temp = (bin(dec /= 2)) * 10 + dec % 2;
		return temp;
	}
	else return 0;

}


void solution2();
void solution3();
void menu();


int main(void) {
	int sel = 0;
	do
	{
		menu();
		scanf("%i", &sel);
		switch (sel)
		{
		case 1:
			solution1();
			break;
		case 2:
			solution2();
			break;
		case 3:
			solution3();
			break;
		case 0:
			printf("Bye-bye");
			break;
		default:
			printf("Wrong selected\n");
		}
	} while (sel != 0);
	return 0;
}

	void solution1()
	{
		//1. Реализовать функцию перевода из 10 системы в двоичную используя рекурсию.
		printf("Solution 1\n");
		int n = 16;
		printf("%d perevod v BIN %d\n", n, (bin(n) * 10) + n % 2);  // не понял, как в рекурсию добавить первое деление
	}
	long power(int a, int b)
	{
		long p = 1;
		while (b)
		{
			p = p * a;
			b--;
		}
		return p;
	}

	long powerR (int a, int b)
	{
		
			if (b == 0) {
				return 1;
			}else {
				return (a*powerR(a, b - 1));
			}
			
		}
		
	void solution2()
	{
		/*2. Реализовать функцию возведения числа a в степень b:
           a. без рекурсии;
           b. рекурсивно;
           c. *рекурсивно, используя свойство чётности степени.*/
		printf("Solution 2\n");
		
	
			printf("stepen' bez recursii %ld\n", power(3, 3));
			printf("stepen' s recursii %ld\n", powerR(3, 3));
		
	}
	void solution3()
	{
		printf("Solution 3\n");
		// Решение
	}
	
	void menu()
	{
		printf("----------------------------------\n");
		printf("1 - task1 10 to 2\n");
		printf("2 - task2\n");
		printf("3 - task3\n");
		printf("0 - exit\n");
		printf("----------------------------------\n");
	}