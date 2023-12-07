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


	printf("test %d|", test++);
	n = printf(" %.2d ", -1);
	printf("|%d\n", n);
	
	printf("test %d|", test++);
	n = printf(" %.3d ", -11);
	printf("|%d\n", n);
	
	printf("test %d|", test++);
	n = printf(" %.3d ", -99);
	printf("|%d\n", n);
	
	printf("test %d|", test++);
	n = printf(" %.4d ", -101);
	printf("|%d\n", n);
	
	printf("test %d|", test++);
	n = printf(" %.2i ", -1);
	printf("|%d\n", n);
	
	printf("test %d|", test++);
	n = printf(" %.3i ", -11);
	printf("|%d\n", n);
	
	printf("test %d|", test++);
	n = printf(" %.3i ", -99);
	printf("|%d\n", n);
	
	printf("test %d|", test++);
	n = printf(" %.4i ", -101);
	printf("|%d\n", n);
	
/*
		//test 0
		ft_printf("test %d|", test++);
		n = ft_printf("%+.5i", 42);
		ft_printf("|%d\n", n);

		//test 1
		ft_printf("test %d|", test++);
		n = ft_printf("%.i", 42);
		ft_printf("|%d\n", n);

		//test 2
		ft_printf("test %d|", test++);
		n = ft_printf("%.1i", 42);
		ft_printf("|%d\n", n);

		//test 3
		ft_printf("test %d|", test++);
		n = ft_printf("%.2i", 42);
		ft_printf("|%d\n", n);

		//test 4
		ft_printf("test %d|", test++);
		n = ft_printf("%.3i", 42);
		ft_printf("|%d\n", n);

		//test 5
		ft_printf("test %d|", test++);
		n = ft_printf("%.4i", 42);
		ft_printf("|%d\n", n);

		//test 6
		ft_printf("test %d|", test++);
		n = ft_printf("%.10i", 42);
		ft_printf("|%d\n", n);

		//test 7
		ft_printf("test %d|", test++);
		n = ft_printf("%.100i", -42);
		ft_printf("|%d\n", n);


		//test 8 
		ft_printf("test %d|", test++);
		n = ft_printf("this %i number", 17);
		ft_printf("|%d\n", n);
		
		//test 9 
		ft_printf("test %d|", test++);
		n = ft_printf("this %i number", -267);
		ft_printf("|%d\n", n);
		
		//test 10 
		ft_printf("test %d|", test++);
		n = ft_printf("this %i number", 0);
		ft_printf("|%d\n", n);
		
		//test 11 
		ft_printf("test %d|", test++);
		n = ft_printf("%i", 3);
		ft_printf("|%d\n", n);
		
		//test 12 
		ft_printf("test %d|", test++);
		n = ft_printf("%i", -1);
		ft_printf("|%d\n", n);
		
		//test 13 
		ft_printf("test %d|", test++);
		n = ft_printf("%i", 0);
		ft_printf("|%d\n", n);
		
		//test 14 
		ft_printf("test %d|", test++);
		n = ft_printf("%i",  2147483647);
		ft_printf("|%d\n", n);
		
		//test 15 
		ft_printf("test %d|", test++);
		n = ft_printf("%i", (int)(-2147483678));
		ft_printf("|%d\n", n);
		
		//test 16 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 17 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 18 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 19 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 20 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 21 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 22 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 23 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 24 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 25 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 26 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+-10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 27 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 28 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 29 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 30 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 31 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 32 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 33 
		ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 34 
		ft_printf("test %d|", test++);
		n = ft_printf("%+i", 5);
		ft_printf("|%d\n", n);
		
		//test 35 
		ft_printf("test %d|", test++);
		n = ft_printf("%+i", -7);
		ft_printf("|%d\n", n);
		
		//test 36 
		ft_printf("test %d|", test++);
		n = ft_printf("%+i", 2147483647);
		ft_printf("|%d\n", n);
		
		//test 37 
		ft_printf("test %d|", test++);
		n = ft_printf("%+5i", 35);
		ft_printf("|%d\n", n);
		
		//test 38 
		ft_printf("test %d|", test++);
		n = ft_printf("%+7i", 0);
		ft_printf("|%d\n", n);
		
		//test 39 
		ft_printf("test %d|", test++);
		n = ft_printf("%+24i", 2147483647);
		ft_printf("|%d\n", n);
		
		//test 40 
		ft_printf("test %d|", test++);
		n = ft_printf("%+.7i", 234);
		ft_printf("|%d\n", n);
		
		//test 41 
		ft_printf("test %d|", test++);
		n = ft_printf("%+.7i", -446);
		ft_printf("|%d\n", n);
		
		//test 42 
		ft_printf("test %d|", test++);
		n = ft_printf("%+.3i", 3723);
		ft_printf("|%d\n", n);
		
		//test 43 
		ft_printf("test %d|", test++);
		n = ft_printf("%+05i", 432);
		ft_printf("|%d\n", n);
		
		//test 44 
		ft_printf("test %d|", test++);
		n = ft_printf("%+04i", 0);
		ft_printf("|%d\n", n);
		
		//test 45 
		ft_printf("test %d|", test++);
		n = ft_printf("%+8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 46 
		ft_printf("test %d|", test++);
		n = ft_printf("%+10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 47 
		ft_printf("test %d|", test++);
		n = ft_printf("%+8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 48 
		ft_printf("test %d|", test++);
		n = ft_printf("%+8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 49 
		ft_printf("test %d|", test++);
		n = ft_printf("%+8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 50 
		ft_printf("test %d|", test++);
		n = ft_printf("%+3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 51 
		ft_printf("test %d|", test++);
		n = ft_printf("%+3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 52 
		ft_printf("test %d|", test++);
		n = ft_printf("%+3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 53 
		ft_printf("test %d|", test++);
		n = ft_printf("%+3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 54 
		ft_printf("test %d|", test++);
		n = ft_printf("%+-8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 55 
		ft_printf("test %d|", test++);
		n = ft_printf("%+-10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 56 
		ft_printf("test %d|", test++);
		n = ft_printf("%+-8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 57 
		ft_printf("test %d|", test++);
		n = ft_printf("%+-8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 58 
		ft_printf("test %d|", test++);
		n = ft_printf("%+-8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 59 
		ft_printf("test %d|", test++);
		n = ft_printf("%+-3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 60 
		ft_printf("test %d|", test++);
		n = ft_printf("%+-3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 61 
		ft_printf("test %d|", test++);
		n = ft_printf("%+-3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 62 
		ft_printf("test %d|", test++);
		n = ft_printf("%+-3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 63 
		ft_printf("test %d|", test++);
		n = ft_printf("this % i number", 17);
		ft_printf("|%d\n", n);
		
		//test 64 
		ft_printf("test %d|", test++);
		n = ft_printf("this % i number", -267);
		ft_printf("|%d\n", n);
		
		//test 65 
		ft_printf("test %d|", test++);
		n = ft_printf("this % i number", 0);
		ft_printf("|%d\n", n);
		
		//test 66 
		ft_printf("test %d|", test++);
		n = ft_printf("% i", 3);
		ft_printf("|%d\n", n);
		
		//test 67 
		ft_printf("test %d|", test++);
		n = ft_printf("% i", -1);
		ft_printf("|%d\n", n);
		
		//test 68 
		ft_printf("test %d|", test++);
		n = ft_printf("% i", 0);	
		ft_printf("|%d\n", n);
		
		//test 69 
		ft_printf("test %d|", test++);
		n = ft_printf("% i", 2147483647);
		ft_printf("|%d\n", n);
		
		//test 70 
		ft_printf("test %d|", test++);
		n = ft_printf("% i", (int)(-2147483678));
		ft_printf("|%d\n", n);
		
		//test 71 
		ft_printf("test %d|", test++);
		n = ft_printf("% +i", 5);
		ft_printf("|%d\n", n);
		
		//test 72 
		ft_printf("test %d|", test++);
		n = ft_printf("% +i", -7);
		ft_printf("|%d\n", n);
		
		//test 73 
		ft_printf("test %d|", test++);
		n = ft_printf("% +i", 2147483647);
		ft_printf("|%d\n", n);
		
		//test 74 
		ft_printf("test %d|", test++);
		n = ft_printf("% 7i", 33);
		ft_printf("|%d\n", n);
		
		//test 75 
		ft_printf("test %d|", test++);
		n = ft_printf("% 7i", -14);
		ft_printf("|%d\n", n);
		
		//test 76 
		ft_printf("test %d|", test++);
		n = ft_printf("% 3i", 0);
		ft_printf("|%d\n", n);
		
		//test 77 
		ft_printf("test %d|", test++);
		n = ft_printf("% 5i", 52625);
		ft_printf("|%d\n", n);
		
		//test 78 
		ft_printf("test %d|", test++);
		n = ft_printf("% 5i", -2562);
		ft_printf("|%d\n", n);
		
		//test 79 
		ft_printf("test %d|", test++);
		n = ft_printf("% 4i", 94827);
		ft_printf("|%d\n", n);
		
		//test 80 
		ft_printf("test %d|", test++);
		n = ft_printf("% 4i", -2464);
		ft_printf("|%d\n", n);
		
		//test 81 
		ft_printf("test %d|", test++);
		n = ft_printf("% -7i", 33);
		ft_printf("|%d\n", n);
		
		//test 82 
		ft_printf("test %d|", test++);
		n = ft_printf("% -7i", -14);
		ft_printf("|%d\n", n);
		
		//test 83 
		ft_printf("test %d|", test++);
		n = ft_printf("% -3i", 0);
		ft_printf("|%d\n", n);
		
		//test 84 
		ft_printf("test %d|", test++);
		n = ft_printf("% -5i", 52625);
		ft_printf("|%d\n", n);
		
		//test 85 
		ft_printf("test %d|", test++);
		n = ft_printf("% -5i", -2562);
		ft_printf("|%d\n", n);
		
		//test 86 
		ft_printf("test %d|", test++);
		n = ft_printf("% -4i", 94827);
		ft_printf("|%d\n", n);
		
		//test 87 
		ft_printf("test %d|", test++);
		n = ft_printf("% -4i", -2464);
		ft_printf("|%d\n", n);
		
		//test 88 
		ft_printf("test %d|", test++);
		n = ft_printf("% +5i", 35);
		ft_printf("|%d\n", n);
		
		//test 89 
		ft_printf("test %d|", test++);
		n = ft_printf("% +7i", 0);
		ft_printf("|%d\n", n);
		
		//test 90 
		ft_printf("test %d|", test++);
		n = ft_printf("% +24i", 2147483647);
		ft_printf("|%d\n", n);
		
		//test 91 
		ft_printf("test %d|", test++);
		n = ft_printf("% .5i", 2);
		ft_printf("|%d\n", n);
		
		//test 92 
		ft_printf("test %d|", test++);
		n = ft_printf("% .6i", -3);
		ft_printf("|%d\n", n);
		
		//test 93 
		ft_printf("test %d|", test++);
		n = ft_printf("% .3i", 0);
		ft_printf("|%d\n", n);
		
		//test 94 
		ft_printf("test %d|", test++);
		n = ft_printf("% .4i", 5263);
		ft_printf("|%d\n", n);
		
		//test 95 
		ft_printf("test %d|", test++);
		n = ft_printf("% .4i", -2372);
		ft_printf("|%d\n", n);
		
		//test 96 
		ft_printf("test %d|", test++);
		n = ft_printf("% .3i", 13862);
		ft_printf("|%d\n", n);
		
		//test 97 
		ft_printf("test %d|", test++);
		n = ft_printf("% .3i",-23646);
		ft_printf("|%d\n", n);
		
		//test 98 
		ft_printf("test %d|", test++);
		n = ft_printf("% +.7i", 234);
		ft_printf("|%d\n", n);
		
		//test 99 
		ft_printf("test %d|", test++);
		n = ft_printf("% +.7i", -446);
		ft_printf("|%d\n", n);
		
		//test 100 
		ft_printf("test %d|", test++);
		n = ft_printf("% +.3i", 3723);
		ft_printf("|%d\n", n);
		
		//test 101 
		ft_printf("test %d|", test++);
		n = ft_printf("% 05i", 43);
		ft_printf("|%d\n", n);
		
		//test 102 
		ft_printf("test %d|", test++);
		n = ft_printf("% 07i", -54);
		ft_printf("|%d\n", n);
		
		//test 103 
		ft_printf("test %d|", test++);
		n = ft_printf("% 03i", 0);
		ft_printf("|%d\n", n);
		
		//test 104 
		ft_printf("test %d|", test++);
		n = ft_printf("% 03i", 634);
		ft_printf("|%d\n", n);
		
		//test 105 
		ft_printf("test %d|", test++);
		n = ft_printf("% 04i", -532);
		ft_printf("|%d\n", n);
		
		//test 106 
		ft_printf("test %d|", test++);
		n = ft_printf("% 04i", -4825);
		ft_printf("|%d\n", n);
		
		//test 107 
		ft_printf("test %d|", test++);
		n = ft_printf("% +05i", 432);
		ft_printf("|%d\n", n);
		
		//test 108 
		ft_printf("test %d|", test++);
		n = ft_printf("% +04i", 0);
		ft_printf("|%d\n", n);
		
		//test 109 
		ft_printf("test %d|", test++);
		n = ft_printf("% 8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 110 
		ft_printf("test %d|", test++);
		n = ft_printf("% 10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 111 
		ft_printf("test %d|", test++);
		n = ft_printf("% 8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 112 
		ft_printf("test %d|", test++);
		n = ft_printf("% 8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 113 
		ft_printf("test %d|", test++);
		n = ft_printf("% 8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 114 
		ft_printf("test %d|", test++);
		n = ft_printf("% 3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 115 
		ft_printf("test %d|", test++);
		n = ft_printf("% 3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 116 
		ft_printf("test %d|", test++);
		n = ft_printf("% 3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 117 
		ft_printf("test %d|", test++);
		n = ft_printf("% 3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 118 
		ft_printf("test %d|", test++);
		n = ft_printf("% -8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 119 
		ft_printf("test %d|", test++);
		n = ft_printf("% -10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 120 
		ft_printf("test %d|", test++);
		n = ft_printf("% -8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 121 
		ft_printf("test %d|", test++);
		n = ft_printf("% -8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 122 
		ft_printf("test %d|", test++);
		n = ft_printf("% -8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 123 
		ft_printf("test %d|", test++);
		n = ft_printf("% -3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 124 
		ft_printf("test %d|", test++);
		n = ft_printf("% -3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 125 
		ft_printf("test %d|", test++);
		n = ft_printf("% -3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 126 
		ft_printf("test %d|", test++);
		n = ft_printf("% -3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 127 
		ft_printf("test %d|", test++);
		n = ft_printf("% +8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 128 
		ft_printf("test %d|", test++);
		n = ft_printf("% +10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 129 
		ft_printf("test %d|", test++);
		n = ft_printf("% +8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 130 
		ft_printf("test %d|", test++);
		n = ft_printf("% +8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 131 
		ft_printf("test %d|", test++);
		n = ft_printf("% +8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 132 
		ft_printf("test %d|", test++);
		n = ft_printf("% +3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 133 
		ft_printf("test %d|", test++);
		n = ft_printf("% +3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 134 
		ft_printf("test %d|", test++);
		n = ft_printf("% +3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 135 
		ft_printf("test %d|", test++);
		n = ft_printf("% +3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 136 
		ft_printf("test %d|", test++);
		n = ft_printf("% +-8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 137 
		ft_printf("test %d|", test++);
		n = ft_printf("% +-10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 138 
		ft_printf("test %d|", test++);
		n = ft_printf("% +-8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 139 
		ft_printf("test %d|", test++);
		n = ft_printf("% +-8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 140 
		ft_printf("test %d|", test++);
		n = ft_printf("% +-8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 141 
		ft_printf("test %d|", test++);
		n = ft_printf("% +-3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 142 
		ft_printf("test %d|", test++);
		n = ft_printf("% +-3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 143 
		ft_printf("test %d|", test++);
		n = ft_printf("% +-3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 144 
		ft_printf("test %d|", test++);
		n = ft_printf("% +-3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 145 
		ft_printf("test %d|", test++);
		n = ft_printf("% 08.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 146 
		ft_printf("test %d|", test++);
		n = ft_printf("% 010.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 147 
		ft_printf("test %d|", test++);
		n = ft_printf("% 08.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 148 
		ft_printf("test %d|", test++);
		n = ft_printf("% 08.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 149 
		ft_printf("test %d|", test++);
		n = ft_printf("% 08.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 150 
		ft_printf("test %d|", test++);
		n = ft_printf("% 03.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 151 
		ft_printf("test %d|", test++);
		n = ft_printf("% 03.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 152 
		ft_printf("test %d|", test++);
		n = ft_printf("% 03.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 153 
		ft_printf("test %d|", test++);
		n = ft_printf("% 03.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 154 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 155 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0-10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 156 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 157 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 158 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 159 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 160 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 161 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 162 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 163 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 164 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 165 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 166 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 167 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 168 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 169 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 170 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 171 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 172 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 173 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+-10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 174 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 175 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 176 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 177 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 178 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 179 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 180 
		ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 181 
		ft_printf("test %d|", test++);
		n = ft_printf("%+.0i", 0);
		ft_printf("|%d\n", n);
		
		//test 182 
		ft_printf("test %d|", test++);
		n = ft_printf("%+.i", 0);
		ft_printf("|%d\n", n);
		
		//test 183 
		ft_printf("test %d|", test++);
		n = ft_printf("%+5.0i", 0);
		ft_printf("|%d\n", n);
		
		//test 184 
		ft_printf("test %d|", test++);
		n = ft_printf("%+5.i", 0);
		ft_printf("|%d\n", n);
		
		//test 185 
		ft_printf("test %d|", test++);
		n = ft_printf("%+-5.0i", 0);
		ft_printf("|%d\n", n);
		
		//test 186 
		ft_printf("test %d|", test++);
		n = ft_printf("%+-5.i", 0);
		ft_printf("|%d\n", n);
		
		//test 187 
		ft_printf("test %d|", test++);
		n = ft_printf("%7i", 33);
		ft_printf("|%d\n", n);
		
		//test 188 
		ft_printf("test %d|", test++);
		n = ft_printf("%7i", -14);
		ft_printf("|%d\n", n);
		
		//test 189 
		ft_printf("test %d|", test++);
		n = ft_printf("%3i", 0);
		ft_printf("|%d\n", n);
		
		//test 190 
		ft_printf("test %d|", test++);
		n = ft_printf("%5i", 52625);
		ft_printf("|%d\n", n);
		
		//test 191 
		ft_printf("test %d|", test++);
		n = ft_printf("%5i", -2562);
		ft_printf("|%d\n", n);
		
		//test 192 
		ft_printf("test %d|", test++);
		n = ft_printf("%4i", 94827);
		ft_printf("|%d\n", n);
		
		//test 193 
		ft_printf("test %d|", test++);
		n = ft_printf("%4i", -2464);
		ft_printf("|%d\n", n);
		
		//test 194 
		ft_printf("test %d|", test++);
		n = ft_printf("%-7i", 33);
		ft_printf("|%d\n", n);
		
		//test 195 
		ft_printf("test %d|", test++);
		n = ft_printf("%-7i", -14);
		ft_printf("|%d\n", n);
		
		//test 196 
		ft_printf("test %d|", test++);
		n = ft_printf("%-3i", 0);
		ft_printf("|%d\n", n);
		
		//test 197 
		ft_printf("test %d|", test++);
		n = ft_printf("%-5i", 52625);
		ft_printf("|%d\n", n);
		
		//test 198 
		ft_printf("test %d|", test++);
		n = ft_printf("%-5i", -2562);
		ft_printf("|%d\n", n);
		
		//test 199 
		ft_printf("test %d|", test++);
		n = ft_printf("%-4i", 94827);
		ft_printf("|%d\n", n);
		
		//test 200 
		ft_printf("test %d|", test++);
		n = ft_printf("%-4i", -2464);
		ft_printf("|%d\n", n);
		
		//test 201 
		ft_printf("test %d|", test++);
		n = ft_printf("%.5i", 2);
		ft_printf("|%d\n", n);
		
		//test 202 
		ft_printf("test %d|", test++);
		n = ft_printf("%.6i", -3);
		ft_printf("|%d\n", n);
		
		//test 203 
		ft_printf("test %d|", test++);
		n = ft_printf("%.3i", 0);
		ft_printf("|%d\n", n);
		
		//test 204 
		ft_printf("test %d|", test++);
		n = ft_printf("%.4i", 5263);
		ft_printf("|%d\n", n);
		
		//test 205 
		ft_printf("test %d|", test++);
		n = ft_printf("%.4i", -2372);
		ft_printf("|%d\n", n);
		
		//test 206 
		ft_printf("test %d|", test++);
		n = ft_printf("%.3i", 13862);
		ft_printf("|%d\n", n);
		
		//test 207 
		ft_printf("test %d|", test++);
		n = ft_printf("%.3i",-23646);
		ft_printf("|%d\n", n);
		
		//test 208 
		ft_printf("test %d|", test++);
		n = ft_printf("%05i", 43);
		ft_printf("|%d\n", n);
		
		//test 209 
		ft_printf("test %d|", test++);
		n = ft_printf("%07i", -54);
		ft_printf("|%d\n", n);
		
		//test 210 
		ft_printf("test %d|", test++);
		n = ft_printf("%03i", 0);
		ft_printf("|%d\n", n);
		
		//test 211 
		ft_printf("test %d|", test++);
		n = ft_printf("%03i", 634);
		ft_printf("|%d\n", n);
		
		//test 212 
		ft_printf("test %d|", test++);
		n = ft_printf("%04i", -532);
		ft_printf("|%d\n", n);
		
		//test 213 
		ft_printf("test %d|", test++);
		n = ft_printf("%04i", -4825);
		ft_printf("|%d\n", n);
		
		//test 214 
		ft_printf("test %d|", test++);
		n = ft_printf("%8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 215 
		ft_printf("test %d|", test++);
		n = ft_printf("%10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 216 
		ft_printf("test %d|", test++);
		n = ft_printf("%8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 217 
		ft_printf("test %d|", test++);
		n = ft_printf("%8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 218 
		ft_printf("test %d|", test++);
		n = ft_printf("%8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 219 
		ft_printf("test %d|", test++);
		n = ft_printf("%3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 220 
		ft_printf("test %d|", test++);
		n = ft_printf("%3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 221 
		ft_printf("test %d|", test++);
		n = ft_printf("%3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 222 
		ft_printf("test %d|", test++);
		n = ft_printf("%3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 223 
		ft_printf("test %d|", test++);
		n = ft_printf("%-8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 224 
		ft_printf("test %d|", test++);
		n = ft_printf("%-10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 225 
		ft_printf("test %d|", test++);
		n = ft_printf("%-8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 226 
		ft_printf("test %d|", test++);
		n = ft_printf("%-8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 227 
		ft_printf("test %d|", test++);
		n = ft_printf("%-8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 228 
		ft_printf("test %d|", test++);
		n = ft_printf("%-3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 229 
		ft_printf("test %d|", test++);
		n = ft_printf("%-3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 230 
		ft_printf("test %d|", test++);
		n = ft_printf("%-3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 231 
		ft_printf("test %d|", test++);
		n = ft_printf("%-3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 232 
		ft_printf("test %d|", test++);
		n = ft_printf("%08.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 233 
		ft_printf("test %d|", test++);
		n = ft_printf("%010.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 234 
		ft_printf("test %d|", test++);
		n = ft_printf("%08.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 235 
		ft_printf("test %d|", test++);
		n = ft_printf("%08.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 236 
		ft_printf("test %d|", test++);
		n = ft_printf("%08.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 237 
		ft_printf("test %d|", test++);
		n = ft_printf("%03.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 238 
		ft_printf("test %d|", test++);
		n = ft_printf("%03.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 239 
		ft_printf("test %d|", test++);
		n = ft_printf("%03.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 240 
		ft_printf("test %d|", test++);
		n = ft_printf("%03.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 241 
		ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5i", 34);
		ft_printf("|%d\n", n);
		
		//test 242 
		ft_printf("test %d|", test++);
		n = ft_printf("%0-10.5i", -216);
		ft_printf("|%d\n", n);
		
		//test 243 
		ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5i", 0);
		ft_printf("|%d\n", n);
		
		//test 244 
		ft_printf("test %d|", test++);
		n = ft_printf("%0-8.3i", 8375);
		ft_printf("|%d\n", n);
		
		//test 245 
		ft_printf("test %d|", test++);
		n = ft_printf("%0-8.3i", -8473);
		ft_printf("|%d\n", n);
		
		//test 246 
		ft_printf("test %d|", test++);
		n = ft_printf("%0-3.7i", 3267);
		ft_printf("|%d\n", n);
		
		//test 247 
		ft_printf("test %d|", test++);
		n = ft_printf("%0-3.7i", -2375);
		ft_printf("|%d\n", n);
		
		//test 248 
		ft_printf("test %d|", test++);
		n = ft_printf("%0-3.3i", 6983);
		ft_printf("|%d\n", n);
		
		//test 249 
		ft_printf("test %d|", test++);
		n = ft_printf("%0-3.3i", -8462);
		ft_printf("|%d\n", n);
		
		//test 250 
		ft_printf("test %d|", test++);
		n = ft_printf("%.0i", 0);
		ft_printf("|%d\n", n);
		
		//test 251 
		ft_printf("test %d|", test++);
		n = ft_printf("%.i", 0);
		ft_printf("|%d\n", n);
		
		//test 252 
		ft_printf("test %d|", test++);
		n = ft_printf("%5.0i", 0);
		ft_printf("|%d\n", n);
		
		//test 253 
		ft_printf("test %d|", test++);
		n = ft_printf("%5.i", 0);
		ft_printf("|%d\n", n);
		
		//test 254 
		ft_printf("test %d|", test++);
		n = ft_printf("%-5.0i", 0);
		ft_printf("|%d\n", n);
		
		//test 255 
		ft_printf("test %d|", test++);
		n = ft_printf("%-5.i", 0);
		ft_printf("|%d\n", n);

	//test 256 
		    ft_printf("test %d|", test++);
	n = ft_printf("%d", id);
	ft_printf("|%d\n", n);
	
    //test 257 
	ft_printf("test %d|", test++);
	n = ft_printf("%  d", id);
	ft_printf("|%d\n", n);
	
    //test 258 
	ft_printf("test %d|", test++);
	n = ft_printf("% + d", id);
	ft_printf("|%d\n", n);
	
    //test 259 
	ft_printf("test %d|", test++);
	n = ft_printf("%--5d", id);
	ft_printf("|%d\n", n);
	
    //test 260 
	ft_printf("test %d|", test++);
	n = ft_printf("%-+-5d", id);
	ft_printf("|%d\n", n);
	
    //test 261 
	ft_printf("test %d|", test++);
	n = ft_printf("%d", id);
	ft_printf("|%d\n", n);
	
    //test 262 
	ft_printf("test %d|", test++);
	n = ft_printf("this %d number", id);
	ft_printf("|%d\n", n);
	
    //test 263 
	ft_printf("test %d|", test++);
	n = ft_printf("this %d number", id);
	ft_printf("|%d\n", n);
	
    //test 264 
	ft_printf("test %d|", test++);
	n = ft_printf("this %d number", id);
	ft_printf("|%d\n", n);
	
    //test 265 
	ft_printf("test %d|", test++);
	n = ft_printf("this % d number", id);
	ft_printf("|%d\n", n);
	
    //test 266 
	ft_printf("test %d|", test++);
	n = ft_printf("this % d number", id);
	ft_printf("|%d\n", n);
	
    //test 267 
	ft_printf("test %d|", test++);
	n = ft_printf("this % d number", id);
	ft_printf("|%d\n", n);
	
    //test 268 
	ft_printf("test %d|", test++);
	n = ft_printf("this %d number", id);
	ft_printf("|%d\n", n);
	
    //test 269 
	ft_printf("test %d|", test++);
	n = ft_printf("this %d number", id);
	ft_printf("|%d\n", n);
	
    //test 270 
	ft_printf("test %d|", test++);
	n = ft_printf("this %d number", id);
	ft_printf("|%d\n", n);
	
    //test 271 
	ft_printf("test %d|", test++);
	n = ft_printf("%+d", id);
	ft_printf("|%d\n", n);
	
    //test 272 
	ft_printf("test %d|", test++);
	n = ft_printf("%+d", id);
	ft_printf("|%d\n", n);
	
    //test 273 
	ft_printf("test %d|", test++);
	n = ft_printf("%+d", id);
	ft_printf("|%d\n", n);
	
    //test 274 
	ft_printf("test %d|", test++);
	n = ft_printf("%+5d", id);
	ft_printf("|%d\n", n);
	
    //test 275 
	ft_printf("test %d|", test++);
	n = ft_printf("%+7d", id);
	ft_printf("|%d\n", n);
	
    //test 276 
	ft_printf("test %d|", test++);
	n = ft_printf("%+24d", id);
	ft_printf("|%d\n", n);
	
    //test 277 
	ft_printf("test %d|", test++);
	n = ft_printf("%+.7d", id);
	ft_printf("|%d\n", n);
	
    //test 278 
	ft_printf("test %d|", test++);
	n = ft_printf("%+.7d", id);
	ft_printf("|%d\n", n);
	
    //test 279 
	ft_printf("test %d|", test++);
	n = ft_printf("%+.3d", id);
	ft_printf("|%d\n", n);
	
    //test 280 
	ft_printf("test %d|", test++);
	n = ft_printf("%+05d", id);
	ft_printf("|%d\n", n);
	
    //test 281 
	ft_printf("test %d|", test++);
	n = ft_printf("%+04d", id);
	ft_printf("|%d\n", n);
	
    //test 282 
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 283 
	ft_printf("test %d|", test++);
	n = ft_printf("%+10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 284 
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 285 
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 286 
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 287 
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 288 
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 289 
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 290 
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 291 
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 292 
	ft_printf("test %d|", test++);
	n = ft_printf("%+-10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 293 
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 294 
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 295 
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 296 
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 297 
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 298 
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 299 
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 300 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 301 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 302 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 303 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 304 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 305 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 306 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 307 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 308 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 309 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 310 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 311 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 312 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 313 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 314 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 315 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 316 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 317 
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 318 
	ft_printf("test %d|", test++);
	n = ft_printf("this % d number", id);
	ft_printf("|%d\n", n);
	
    //test 319 
	ft_printf("test %d|", test++);
	n = ft_printf("this % d number", id);
	ft_printf("|%d\n", n);
	
    //test 320 
	ft_printf("test %d|", test++);
	n = ft_printf("this % d number", id);
	ft_printf("|%d\n", n);
	
    //test 321 
	ft_printf("test %d|", test++);
	n = ft_printf("% d", id);
	ft_printf("|%d\n", n);
	
    //test 322 
	ft_printf("test %d|", test++);
	n = ft_printf("% d", id);
	ft_printf("|%d\n", n);
	
    //test 323 
	ft_printf("test %d|", test++);
	n = ft_printf("% d", id);
	ft_printf("|%d\n", n);
	
    //test 324 
	ft_printf("test %d|", test++);
	n = ft_printf("this % d number", id);
	ft_printf("|%d\n", n);
	
    //test 325 
	ft_printf("test %d|", test++);
	n = ft_printf("this % d number", id);
	ft_printf("|%d\n", n);
	
    //test 326 
	ft_printf("test %d|", test++);
	n = ft_printf("this % d number", id);
	ft_printf("|%d\n", n);
	
    //test 327 
	ft_printf("test %d|", test++);
	n = ft_printf("% d", id);
	ft_printf("|%d\n", n);
	
    //test 328 
	ft_printf("test %d|", test++);
	n = ft_printf("% d", id);
	ft_printf("|%d\n", n);
	
    //test 329 
	ft_printf("test %d|", test++);
	n = ft_printf("% +d", id);
	ft_printf("|%d\n", n);
	
    //test 330 
	ft_printf("test %d|", test++);
	n = ft_printf("% +d", id);
	ft_printf("|%d\n", n);
	
    //test 331 
	ft_printf("test %d|", test++);
	n = ft_printf("% +d", id);
	ft_printf("|%d\n", n);
	
    //test 332 
	ft_printf("test %d|", test++);
	n = ft_printf("% 7d", id);
	ft_printf("|%d\n", n);
	
    //test 333 
	ft_printf("test %d|", test++);
	n = ft_printf("% 7d", id);
	ft_printf("|%d\n", n);
	
    //test 334 
	ft_printf("test %d|", test++);
	n = ft_printf("% 3d", id);
	ft_printf("|%d\n", n);
	
    //test 335 
	ft_printf("test %d|", test++);
	n = ft_printf("% 5d", id);
	ft_printf("|%d\n", n);
	
    //test 336 
	ft_printf("test %d|", test++);
	n = ft_printf("% 5d", id);
	ft_printf("|%d\n", n);
	
    //test 337 
	ft_printf("test %d|", test++);
	n = ft_printf("% 4d", id);
	ft_printf("|%d\n", n);
	
    //test 338 
	ft_printf("test %d|", test++);
	n = ft_printf("% 4d", id);
	ft_printf("|%d\n", n);
	
    //test 339 
	ft_printf("test %d|", test++);
	n = ft_printf("% -7d", id);
	ft_printf("|%d\n", n);
	
    //test 340 
	ft_printf("test %d|", test++);
	n = ft_printf("% -7d", id);
	ft_printf("|%d\n", n);
	
    //test 341 
	ft_printf("test %d|", test++);
	n = ft_printf("% -3d", id);
	ft_printf("|%d\n", n);
	
    //test 342 
	ft_printf("test %d|", test++);
	n = ft_printf("% -5d", id);
	ft_printf("|%d\n", n);
	
    //test 343 
	ft_printf("test %d|", test++);
	n = ft_printf("% -5d", id);
	ft_printf("|%d\n", n);
	
    //test 344 
	ft_printf("test %d|", test++);
	n = ft_printf("% -4d", id);
	ft_printf("|%d\n", n);
	
    //test 345 
	ft_printf("test %d|", test++);
	n = ft_printf("% -4d", id);
	ft_printf("|%d\n", n);
	
    //test 346 
	ft_printf("test %d|", test++);
	n = ft_printf("% +5d", id);
	ft_printf("|%d\n", n);
	
    //test 347 
	ft_printf("test %d|", test++);
	n = ft_printf("% +7d", id);
	ft_printf("|%d\n", n);
	
    //test 348 
	ft_printf("test %d|", test++);
	n = ft_printf("% +24d", id);
	ft_printf("|%d\n", n);
	
    //test 349 
	ft_printf("test %d|", test++);
	n = ft_printf("% .5d", id);
	ft_printf("|%d\n", n);
	
    //test 350 
	ft_printf("test %d|", test++);
	n = ft_printf("% .6d", id);
	ft_printf("|%d\n", n);
	
    //test 351 
	ft_printf("test %d|", test++);
	n = ft_printf("% .3d", id);
	ft_printf("|%d\n", n);
	
    //test 352 
	ft_printf("test %d|", test++);
	n = ft_printf("% .4d", id);
	ft_printf("|%d\n", n);
	
    //test 353 
	ft_printf("test %d|", test++);
	n = ft_printf("% .4d", id);
	ft_printf("|%d\n", n);
	
    //test 354 
	ft_printf("test %d|", test++);
	n = ft_printf("% +.7d", id);
	ft_printf("|%d\n", n);
	
    //test 355 
	ft_printf("test %d|", test++);
	n = ft_printf("% +.7d", id);
	ft_printf("|%d\n", n);
	
    //test 356 
	ft_printf("test %d|", test++);
	n = ft_printf("% +.3d", id);
	ft_printf("|%d\n", n);
	
    //test 357 
	ft_printf("test %d|", test++);
	n = ft_printf("% 05d", id);
	ft_printf("|%d\n", n);
	
    //test 358 
	ft_printf("test %d|", test++);
	n = ft_printf("% 07d", id);
	ft_printf("|%d\n", n);
	
    //test 359 
	ft_printf("test %d|", test++);
	n = ft_printf("% 03d", id);
	ft_printf("|%d\n", n);
	
    //test 360 
	ft_printf("test %d|", test++);
	n = ft_printf("% 03d", id);
	ft_printf("|%d\n", n);
	
    //test 361 
	ft_printf("test %d|", test++);
	n = ft_printf("% 04d", id);
	ft_printf("|%d\n", n);
	
    //test 362 
	ft_printf("test %d|", test++);
	n = ft_printf("% 04d", id);
	ft_printf("|%d\n", n);
	
    //test 363 
	ft_printf("test %d|", test++);
	n = ft_printf("% +05d", id);
	ft_printf("|%d\n", n);
	
    //test 364 
	ft_printf("test %d|", test++);
	n = ft_printf("% +04d", id);
	ft_printf("|%d\n", n);
	
    //test 365 
	ft_printf("test %d|", test++);
	n = ft_printf("% 8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 366 
	ft_printf("test %d|", test++);
	n = ft_printf("% 10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 367 
	ft_printf("test %d|", test++);
	n = ft_printf("% 8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 368 
	ft_printf("test %d|", test++);
	n = ft_printf("% 8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 369 
	ft_printf("test %d|", test++);
	n = ft_printf("% 8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 370 
	ft_printf("test %d|", test++);
	n = ft_printf("% 3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 371 
	ft_printf("test %d|", test++);
	n = ft_printf("% 3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 372 
	ft_printf("test %d|", test++);
	n = ft_printf("% 3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 373 
	ft_printf("test %d|", test++);
	n = ft_printf("% 3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 374 
	ft_printf("test %d|", test++);
	n = ft_printf("% -8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 375 
	ft_printf("test %d|", test++);
	n = ft_printf("% -10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 376 
	ft_printf("test %d|", test++);
	n = ft_printf("% -8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 377 
	ft_printf("test %d|", test++);
	n = ft_printf("% -8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 378 
	ft_printf("test %d|", test++);
	n = ft_printf("% -8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 379 
	ft_printf("test %d|", test++);
	n = ft_printf("% -3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 380 
	ft_printf("test %d|", test++);
	n = ft_printf("% -3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 381 
	ft_printf("test %d|", test++);
	n = ft_printf("% -3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 382 
	ft_printf("test %d|", test++);
	n = ft_printf("% -3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 383 
	ft_printf("test %d|", test++);
	n = ft_printf("% +8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 384 
	ft_printf("test %d|", test++);
	n = ft_printf("% +10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 385 
	ft_printf("test %d|", test++);
	n = ft_printf("% +8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 386 
	ft_printf("test %d|", test++);
	n = ft_printf("% +8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 387 
	ft_printf("test %d|", test++);
	n = ft_printf("% +8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 388 
	ft_printf("test %d|", test++);
	n = ft_printf("% +3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 389 
	ft_printf("test %d|", test++);
	n = ft_printf("% +3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 390 
	ft_printf("test %d|", test++);
	n = ft_printf("% +3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 391 
	ft_printf("test %d|", test++);
	n = ft_printf("% +3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 392 
	ft_printf("test %d|", test++);
	n = ft_printf("% +-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 393 
	ft_printf("test %d|", test++);
	n = ft_printf("% +-10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 394 
	ft_printf("test %d|", test++);
	n = ft_printf("% +-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 395 
	ft_printf("test %d|", test++);
	n = ft_printf("% +-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 396 
	ft_printf("test %d|", test++);
	n = ft_printf("% +-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 397 
	ft_printf("test %d|", test++);
	n = ft_printf("% +-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 398 
	ft_printf("test %d|", test++);
	n = ft_printf("% +-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 399 
	ft_printf("test %d|", test++);
	n = ft_printf("% +-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 400 
	ft_printf("test %d|", test++);
	n = ft_printf("% +-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 401 
	ft_printf("test %d|", test++);
	n = ft_printf("% 08.5d", id);
	ft_printf("|%d\n", n);
	
    //test 402 
	ft_printf("test %d|", test++);
	n = ft_printf("% 010.5d", id);
	ft_printf("|%d\n", n);
	
    //test 403 
	ft_printf("test %d|", test++);
	n = ft_printf("% 08.5d", id);
	ft_printf("|%d\n", n);
	
    //test 404 
	ft_printf("test %d|", test++);
	n = ft_printf("% 08.3d", id);
	ft_printf("|%d\n", n);
	
    //test 405 
	ft_printf("test %d|", test++);
	n = ft_printf("% 08.3d", id);
	ft_printf("|%d\n", n);
	
    //test 406 
	ft_printf("test %d|", test++);
	n = ft_printf("% 03.7d", id);
	ft_printf("|%d\n", n);
	
    //test 407 
	ft_printf("test %d|", test++);
	n = ft_printf("% 03.7d", id);
	ft_printf("|%d\n", n);
	
    //test 408 
	ft_printf("test %d|", test++);
	n = ft_printf("% 03.3d", id);
	ft_printf("|%d\n", n);
	
    //test 409 
	ft_printf("test %d|", test++);
	n = ft_printf("% 03.3d", id);
	ft_printf("|%d\n", n);
	
    //test 410 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 411 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 412 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 413 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 414 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 415 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 416 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 417 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 418 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 419 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 420 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 421 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 422 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 423 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 424 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 425 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 426 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 427 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 428 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 429 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 430 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 431 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 432 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 433 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 434 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 435 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 436 
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 437 
	ft_printf("test %d|", test++);
	n = ft_printf("%+.0d", id);
	ft_printf("|%d\n", n);
	
    //test 438 
	ft_printf("test %d|", test++);
	n = ft_printf("%+.d", id);
	ft_printf("|%d\n", n);
	
    //test 439 
	ft_printf("test %d|", test++);
	n = ft_printf("%+5.0d", id);
	ft_printf("|%d\n", n);
	
    //test 440 
	ft_printf("test %d|", test++);
	n = ft_printf("%+5.d", id);
	ft_printf("|%d\n", n);
	
    //test 441 
	ft_printf("test %d|", test++);
	n = ft_printf("%+-5.0d", id);
	ft_printf("|%d\n", n);
	
    //test 442 
	ft_printf("test %d|", test++);
	n = ft_printf("%+-5.d", id);
	ft_printf("|%d\n", n);
	
    //test 443 
	ft_printf("test %d|", test++);
	n = ft_printf("%d", id);
	ft_printf("|%d\n", n);
	
    //test 444 
	ft_printf("test %d|", test++);
	n = ft_printf("%d", id);
	ft_printf("|%d\n", n);
	
    //test 445 
	ft_printf("test %d|", test++);
	n = ft_printf("%d", id);
	ft_printf("|%d\n", n);
	
    //test 446 
	ft_printf("test %d|", test++);
	n = ft_printf("%d", id);
	ft_printf("|%d\n", n);
	
    //test 447 
	ft_printf("test %d|", test++);
	n = ft_printf("%d", id);
	ft_printf("|%d\n", n);
	
    //test 448 
	ft_printf("test %d|", test++);
	n = ft_printf("%7d", id);
	ft_printf("|%d\n", n);
	
    //test 449 
	ft_printf("test %d|", test++);
	n = ft_printf("%7d", id);
	ft_printf("|%d\n", n);
	
    //test 450 
	ft_printf("test %d|", test++);
	n = ft_printf("%3d", id);
	ft_printf("|%d\n", n);
	
    //test 451 
	ft_printf("test %d|", test++);
	n = ft_printf("%5d", id);
	ft_printf("|%d\n", n);
	
    //test 452 
	ft_printf("test %d|", test++);
	n = ft_printf("%5d", id);
	ft_printf("|%d\n", n);
	
    //test 453 
	ft_printf("test %d|", test++);
	n = ft_printf("%4d", id);
	ft_printf("|%d\n", n);
	
    //test 454 
	ft_printf("test %d|", test++);
	n = ft_printf("%4d", id);
	ft_printf("|%d\n", n);
	
    //test 455 
	ft_printf("test %d|", test++);
	n = ft_printf("%-7d", id);
	ft_printf("|%d\n", n);
	
    //test 456 
	ft_printf("test %d|", test++);
	n = ft_printf("%-7d", id);
	ft_printf("|%d\n", n);
	
    //test 457 
	ft_printf("test %d|", test++);
	n = ft_printf("%-3d", id);
	ft_printf("|%d\n", n);
	
    //test 458 
	ft_printf("test %d|", test++);
	n = ft_printf("%-5d", id);
	ft_printf("|%d\n", n);
	
    //test 459 
	ft_printf("test %d|", test++);
	n = ft_printf("%-5d", id);
	ft_printf("|%d\n", n);
	
    //test 460 
	ft_printf("test %d|", test++);
	n = ft_printf("%-4d", id);
	ft_printf("|%d\n", n);
	
    //test 461 
	ft_printf("test %d|", test++);
	n = ft_printf("%-4d", id);
	ft_printf("|%d\n", n);
	
    //test 462 
	ft_printf("test %d|", test++);
	n = ft_printf("%.5d", id);
	ft_printf("|%d\n", n);
	
    //test 463 
	ft_printf("test %d|", test++);
	n = ft_printf("%.6d", id);
	ft_printf("|%d\n", n);
	
    //test 464 
	ft_printf("test %d|", test++);
	n = ft_printf("%.3d", id);
	ft_printf("|%d\n", n);
	
    //test 465 
	ft_printf("test %d|", test++);
	n = ft_printf("%.4d", id);
	ft_printf("|%d\n", n);
	
    //test 466 
	ft_printf("test %d|", test++);
	n = ft_printf("%.4d", id);
	ft_printf("|%d\n", n);
	
    //test 467 
	ft_printf("test %d|", test++);
	n = ft_printf("%.3d", id);
	ft_printf("|%d\n", n);
	
    //test 468 
	ft_printf("test %d|", test++);
	n = ft_printf("%07d", id);
	ft_printf("|%d\n", n);
	
    //test 469 
	ft_printf("test %d|", test++);
	n = ft_printf("%03d", id);
	ft_printf("|%d\n", n);
	
    //test 470 
	ft_printf("test %d|", test++);
	n = ft_printf("%03d", id);
	ft_printf("|%d\n", n);
	
    //test 471 
	ft_printf("test %d|", test++);
	n = ft_printf("%04d", id);
	ft_printf("|%d\n", n);
	
    //test 472 
	ft_printf("test %d|", test++);
	n = ft_printf("%04d", id);
	ft_printf("|%d\n", n);
	
    //test 473 
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 474 
	ft_printf("test %d|", test++);
	n = ft_printf("%10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 475 
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 476 
	ft_printf("test %d|", test++);
	n = ft_printf("%8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 477 
	ft_printf("test %d|", test++);
	n = ft_printf("%8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 478 
	ft_printf("test %d|", test++);
	n = ft_printf("%3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 479 
	ft_printf("test %d|", test++);
	n = ft_printf("%3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 480 
	ft_printf("test %d|", test++);
	n = ft_printf("%3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 481 
	ft_printf("test %d|", test++);
	n = ft_printf("%3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 482 
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 483 
	ft_printf("test %d|", test++);
	n = ft_printf("%-10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 484 
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 485 
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 486 
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 487 
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 488 
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 489 
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 490 
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 491 
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5d", id);
	ft_printf("|%d\n", n);
	
    //test 492 
	ft_printf("test %d|", test++);
	n = ft_printf("%010.5d", id);
	ft_printf("|%d\n", n);
	
    //test 493 
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5d", id);
	ft_printf("|%d\n", n);
	
    //test 494 
	ft_printf("test %d|", test++);
	n = ft_printf("%08.3d", id);
	ft_printf("|%d\n", n);
	
    //test 495 
	ft_printf("test %d|", test++);
	n = ft_printf("%08.3d", id);
	ft_printf("|%d\n", n);
	
    //test 496 
	ft_printf("test %d|", test++);
	n = ft_printf("%03.7d", id);
	ft_printf("|%d\n", n);
	
    //test 497 
	ft_printf("test %d|", test++);
	n = ft_printf("%03.7d", id);
	ft_printf("|%d\n", n);
	
    //test 498 
	ft_printf("test %d|", test++);
	n = ft_printf("%03.3d", id);
	ft_printf("|%d\n", n);
	
    //test 499 
	ft_printf("test %d|", test++);
	n = ft_printf("%03.3d", id);
	ft_printf("|%d\n", n);
	
    //test 500 
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 501 
	ft_printf("test %d|", test++);
	n = ft_printf("%0-10.5d", id);
	ft_printf("|%d\n", n);
	
    //test 502 
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5d", id);
	ft_printf("|%d\n", n);
	
    //test 503 
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 504 
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.3d", id);
	ft_printf("|%d\n", n);
	
    //test 505 
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 506 
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.7d", id);
	ft_printf("|%d\n", n);
	
    //test 507 
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 508 
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.3d", id);
	ft_printf("|%d\n", n);
	
    //test 509 
	ft_printf("test %d|", test++);
	n = ft_printf("%.0d", id);
	ft_printf("|%d\n", n);
	
    //test 510 
	ft_printf("test %d|", test++);
	n = ft_printf("%.d", id);
	ft_printf("|%d\n", n);
	
    //test 511 
	ft_printf("test %d|", test++);
	n = ft_printf("%5.0d", id);
	ft_printf("|%d\n", n);
	
    //test 512 
	ft_printf("test %d|", test++);
	n = ft_printf("%5.d", id);
	ft_printf("|%d\n", n);
	
    //test 513 
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.0d", id);
	ft_printf("|%d\n", n);
	
    //test 514 
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.d", id);
	ft_printf("|%d\n", n);

    //test 515 
	ft_printf("test %d|", test++);
	n = ft_printf("coucou %-5.d un autre %0+- .10d hey %0-8.5d encore %+.d enfin %+-3.3d", id, 42, 100, INT_MAX, INT_MIN);
	ft_printf("|%d\n", n);
*/
}