#include "ft_printf.h"
#include "limits.h"

int main(void)
{
	int n;
	int test = 0;
	int ncm_p = 5;
	int id = 42;


	char *s_hidden = "hi low\0don't print me lol\0";
	char     a01;
	unsigned char a02;
	short a03;
	unsigned short a04;
	int a05;
	unsigned int a06;
	long a07;
	unsigned long a08;
	long long a09;
	unsigned long long a10;
	char *a11;
	void *a12;

//test 0 
	ft_printf("test %d|", test++);
	n = ft_printf("%00.0p", &ncm_p); //
	ft_printf("|%d\n", n);
ft_printf("*************************************************\n");

//test 1 
	ft_printf("test %d|", test++);
	n = ft_printf("%01.0p", &ncm_p); //
	ft_printf("|%d\n", n);
ft_printf("*************************************************\n");

//test 2 
	ft_printf("test %d|", test++);
	n = ft_printf("%02.1p", &ncm_p); //
	ft_printf("|%d\n", n);
ft_printf("*************************************************\n");

//test 3 
	ft_printf("test %d|", test++);
	n = ft_printf("%03.2p", &ncm_p); //
	ft_printf("|%d\n", n);
ft_printf("*************************************************\n");

//test 4 
	ft_printf("test %d|", test++);
	n = ft_printf("%04.3p", &ncm_p); //
	ft_printf("|%d\n", n);
ft_printf("*************************************************\n");

//test 5 
	ft_printf("test %d|", test++);
	n = ft_printf("%05.4p", &ncm_p); //
	ft_printf("|%d\n", n);
ft_printf("*************************************************\n");

//test 6 
	ft_printf("test %d|", test++);
	n = ft_printf("%06.5p", &ncm_p); //
	ft_printf("|%d\n", n);
ft_printf("*************************************************\n");



//test 7 
	ft_printf("test %d|", test++);
	n = ft_printf("%.4p", &ncm_p);
	ft_printf("|%d\n", n);
ft_printf("*************************************************\n");

	//test 8 
	ft_printf("test %d|", test++);
	n = ft_printf("%.6p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 9 
	ft_printf("test %d|", test++);
	n = ft_printf("%05p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 10 
	ft_printf("test %d|", test++);
	n = ft_printf("%0p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 11 
	ft_printf("test %d|", test++);
	n = ft_printf("%-p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 12 
	ft_printf("test %d|", test++);
	n = ft_printf("%#p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 13 
	ft_printf("test %d|", test++);
	n = ft_printf("%+p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 14 
	ft_printf("test %d|", test++);
	n = ft_printf("%+p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 15 
	ft_printf("test %d|", test++);
	n = ft_printf("% p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 16 
	ft_printf("test %d|", test++);
	n = ft_printf("% p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 17 
	ft_printf("test %d|", test++);
	n = ft_printf("%-p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 18 
	ft_printf("test %d|", test++);
	n = ft_printf("%p");
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 19 
	ft_printf("test %d|", test++);
	n = ft_printf("%p", NULL);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 20 
	ft_printf("test %d|", test++);
	n = ft_printf("%p", NULL);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 21 
	ft_printf("test %d|", test++);
	n = ft_printf("%.5p", 0);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 22 
	ft_printf("test %d|", test++);
	n = ft_printf("%.0p", 0);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 23 
	ft_printf("test %d|", test++);
	n = ft_printf("%5p", 0);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 24 
	ft_printf("test %d|", test++);
	n = ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 25 
	ft_printf("test %d|", test++);
	n = ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 26 
	ft_printf("test %d|", test++);
	n = ft_printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 27 
	ft_printf("test %d|", test++);
	n = ft_printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 28 
	ft_printf("test %d|", test++);
	n = ft_printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 29 
	ft_printf("test %d|", test++);
	n = ft_printf("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 30 
	ft_printf("test %d|", test++);
	n = ft_printf("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 31 
	ft_printf("test %d|", test++);
	n = ft_printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 32 
	ft_printf("test %d|", test++);
	n = ft_printf("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 33 
	ft_printf("test %d|", test++);
	n = ft_printf("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 34 
	ft_printf("test %d|", test++);
	n = ft_printf("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 35 
	ft_printf("test %d|", test++);
	n = ft_printf("%.4p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 36 
	ft_printf("test %d|", test++);
	n = ft_printf("%.7p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 37 
	ft_printf("test %d|", test++);
	n = ft_printf("%05p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 38 
	ft_printf("test %d|", test++);
	n = ft_printf("%0p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 39 
	ft_printf("test %d|", test++);
	n = ft_printf("%-p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 40 
	ft_printf("test %d|", test++);
	n = ft_printf("%#p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 41 
	ft_printf("test %d|", test++);
	n = ft_printf("%+p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 42 
	ft_printf("test %d|", test++);
	n = ft_printf("%+p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 43 
	ft_printf("test %d|", test++);
	n = ft_printf("% p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 44 
	ft_printf("test %d|", test++);
	n = ft_printf("% p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 45 
	ft_printf("test %d|", test++);
	n = ft_printf("%-p", &ncm_p);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 46 
	ft_printf("test %d|", test++);
	n = ft_printf("%p");
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 47 
	ft_printf("test %d|", test++);
	n = ft_printf("%p", NULL);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 48 
	ft_printf("test %d|", test++);
	n = ft_printf("%p", NULL);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 49 
	ft_printf("test %d|", test++);
	n = ft_printf("%.5p", 0);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 50 
	ft_printf("test %d|", test++);
	n = ft_printf("%.0p", 0);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 51 
	ft_printf("test %d|", test++);
	n = ft_printf("%5p", 0);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 52 
	ft_printf("test %d|", test++);
	n = ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 53 
	ft_printf("test %d|", test++);
	n = ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 54 
	ft_printf("test %d|", test++);
	n = ft_printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 55 
	ft_printf("test %d|", test++);
	n = ft_printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 56 
	ft_printf("test %d|", test++);
	n = ft_printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 57 
	ft_printf("test %d|", test++);
	n = ft_printf("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 58 
	ft_printf("test %d|", test++);
	n = ft_printf("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 59 
	ft_printf("test %d|", test++);
	n = ft_printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 60 
	ft_printf("test %d|", test++);
	n = ft_printf("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 61 
	ft_printf("test %d|", test++);
	n = ft_printf("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	//test 62 
	ft_printf("test %d|", test++);
	n = ft_printf("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("|%d\n", n);
	ft_printf("*************************************************\n");

	return (0);
}