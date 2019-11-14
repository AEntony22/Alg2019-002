#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
//Кубанов Антон , Урок3
/*2. *Реализовать шейкерную сортировку.
3. Реализовать бинарный алгоритм поиска в виде функции, которой передается отсортированный массив. Функция возвращает индекс найденного элемента или -1, если элемент не найден.
4. *Подсчитать количество операций для каждой из сортировок и сравнить его с асимптотической сложностью алгоритма. */
void solution1();
#define MaxN 11
void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}
								// Распечатываем массив
void print(int N, int *a)
{
	int i;
	for (i = 0; i < N; i++)
		printf("%6i", a[i]);
	printf("\n");
}


void solution2();
void solution3();
void menu();


int main(int argc, char *argv[]) {
	srand(time(NULL));
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
		//1. Попробовать оптимизировать пузырьковую сортировку. Сравнить количество операций сравнения оптимизированной и не оптимизированной программы.
		//Написать функции сортировки, которые возвращают количество операций.

		printf("Solution 1\n");
		printf("Size of arr - MaxN %d\n", MaxN);  //выводим размер нашего массива
		int ref[MaxN],a[MaxN], b[MaxN];          // Создаём массивы
		
		int N=MaxN; //заводим переменные для работы с массивом
		int i;      //заводим переменные для работы с массивом
		int c_a = 0;      //заводим переменные для подсчета операций
		int c_b = 0;      //заводим переменные для подсчета операций
		int total_a = 0;      //заводим переменные для для подсчета операций
		int total_b = 0;      //заводим переменные для для подсчета операций
		for (i = 0; i < N; i++)
		{
			ref[i] = 80 + rand() % 1421;  //заполняем массивы рандомными числами [80,1500]
			a[i] = ref[i];
			b[i] = ref[i];
		}
		puts("Array before sort");
		printf("ref[] %d %d %d\n",ref[0], ref[N/2], ref[N-1]);  //выводим массивы частично 
		printf("a[]   %d %d %d\n", a[0], a[N / 2], a[N - 1]);
		printf("b[]   %d %d %d\n", b[0], b[N / 2], b[N - 1]);
		system("pause");
		int j = 0;

		for (i = 0; i < N; i++) {
			for (j = 0; j < N - 1; j++)
				if (a[j] > a[j + 1])
				{
					swap(&a[j], &a[j + 1]);          // меняем местами, если текущий эелемент масива больше следующего "пузырь всплывает"
					c_a++;
				}
			printf("%d ", c_a);
			total_a += c_a;
		}
		system("pause");
		for (i = 0; i < N; i++) {
			c_b = 0;
			for (j = 0; j < N - 1; j++) {
				if (b[j] > b[j + 1])
				{
					swap(&b[j], &b[j + 1]);          // меняем местами, если текущий эелемент масива больше следующего "пузырь всплывает"
					c_b++;
				}
				printf("%d ",c_b);
			}
			if (c_b == 0)
				break;
			total_b += c_b;
		}
		puts("Array after sort");
		printf("ref[] %d %d %d\n", ref[0], ref[N / 2], ref[N - 1]);  //выводим массивы частично 
		printf("a[]   %d %d %d\n", a[0], a[N / 2], a[N - 1]);
		printf("b[]   %d %d %d\n", b[0], b[N / 2], b[N - 1]);

		printf("tot %d %d\n", total_a,total_b);


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
		printf("1 - task1 Puzyr\n");
		printf("2 - task2\n");
		printf("3 - task3\n");
		printf("4 - task4\n");
		printf("0 - exit\n");
		printf("----------------------------------\n");
	}