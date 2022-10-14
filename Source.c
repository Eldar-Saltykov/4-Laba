					//Домашние задание 
#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
void main()
{
	int x, n, s;
	double s1, s2;
	setlocale(LC_ALL, "RUS");
	puts("Введите за сколько дней бригада должна построить дом ");
	scanf("%d", &x);
	puts("Введите за сколько дней бригада построила дом ");
	scanf("%d", &n);
	puts("Введите какую зарплату получат рабочие за сдачу объекта в срок");
	scanf("%d", &s);
	s1 = s - 50 / n;
	s2 = s + 50 / n;
	if (x > n)
		printf("Бригада получит зарплату = %lf", s2);
	else 
		printf("Бригада получит зарплату = %lf", s1);
















}
