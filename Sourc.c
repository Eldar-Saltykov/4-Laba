#include<stdio.h>
#include<locale.h>

 void main()
{
	 char c = '!', c1;
	 int i = 2, i1;
	 float f = 3.14f, f1;
	 double d = 5e-12, d1;
	 setlocale(LC_ALL, "RUS");
	 printf("%c, \n%d, \n%.2f, \n%.e\n", c, i, f, d);
	 puts("������� �������� \n ");
	 scanf("%c%d%f%le", &c1, &i1, &f1, &d1);
	 printf("������ �����: \n%c\n%d\n%.2f\n%.le\n\n", c1, i1, f1, d1);
	 puts("������ 1�");
	 printf("����� ����� %d\n ������� ����� %f\n\n", (char)f1, f1 - (char)f1) ;
	 puts("������ 1�");
	 printf("����������������� ��� ������� : %x\n ��������� ��� : %i\n\n", (int)c1, (int)c1);
	 puts("������ 1�");
	 printf("���������� ����� 1/i = %.3f\n\n", (float)1/i1); 

	 puts("������� 2\n");
	 int a = 11, b = 3, x; 
	 float y;
	 double z;
	 x = a / b;
	 y = a / b;
	 z = a / b;
	 printf("%d, %f, %lf\n\n", x, y, z);
	 
	 puts("������� 2�");
	 printf("float %f\n ", (float)a / b);
	 printf("double %lf\n\n", (double)a / b);

	 puts("������� 3");
	 int n, r1, r2, r3;
	 scanf("%d", &n);
	 r1 = n % 10;
	 r2 = n / 100;
	 r3 = n / 10 % 10;
	 printf("��������� ����� %d, ������  %d, ����� ����� %d", r1, r2, r1 + r2 +r3);
}
