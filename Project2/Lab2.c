#include <stdio.h>
#include <locale.h>
int zadanie1()
{
	printf("123\n");
	printf("1\n2\n3\n");
	printf("1\n\t2\n\t\t3\n");
	printf("%d\n%4d\n%8d\n%12d\n", 1, 2, 3, 4);
	printf("%10.3f\n",12.234567);
	printf("%10.5f\n", 12.234567);
	printf("деление %d на %d равно %.3f\n", 7, 5, 7.0 / 5.0);
	printf("деление %d на %d равно %d\n", 2000, 4, 2000*4);
	printf("%g разделить %g равно %g\n", 5., 2000000., 5. / 2000000);
	return 0;
}
int zadanie2()
{
	int N, K;
	N = 16;
	K = 3;
	printf("Cейчас %d час %d минуты 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N - 1, 60 - K);
	printf("С 8.00 прошло %d секунд\n", (N - 8) * 3600 + K);
	printf("Текущий час  = %.2f суток  и текущая минута = %.2f часа\n", N/24., K/60.);
	return 0;
}
int zadanie3()
{
	int n, l, k, m;
	double N, L,rez;
	N = 3.0;
	L = 1333.0;
	rez = N / L;
	n = 3;
	k = 3;
	l = 1333;
	m = 5;
	printf("Дано:\n%10d\n%10d\n\t_____\nОтвет:\n\t%+0*.*f",n,l,k+m+2,m,rez);
	return 0;
}
int main()
{
		setlocale(LC_CTYPE, ".UTF-8");
		zadanie1();
		zadanie2();
		zadanie3();
}