#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
void main()
{
	int x, n, s;
	double s1, s2;
	setlocale(LC_ALL, "RUS");
	puts("������� �� ������� ���� ������� ������ ��������� ��� ");
	scanf("%d", &x);
	puts("������� �� ������� ���� ������� ��������� ��� ");
	scanf("%d", &n);
	puts("������� ����� �������� ������� ������� �� ����� ������� � ����");
	scanf("%d", &s);
	s1 = s - 50 / n;
	s2 = s + 50 / n;
	if (x > n)
		printf("������� ������� �������� = %lf", s2);
	else 
		printf("������� ������� �������� = %lf", s1);
















}
