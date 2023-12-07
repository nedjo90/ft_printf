#include "ft_printf.h"

int main(void)
{
	int n;
	int test = 0;
	int ncm_p = 5;
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
		n = ft_printf("%c", '\0');
		ft_printf("|%d\n", n);

		//test 1
		ft_printf("test %d|", test++);
		n = ft_printf("%c", 'A');
		ft_printf("|%d\n", n);

		//test 2
		ft_printf("test %d|", test++);
		n = ft_printf("%.c", '\0');
		ft_printf("|%d\n", n);

		//test 3
		ft_printf("test %d|", test++);
		n = ft_printf("%.c", 'A');
		ft_printf("|%d\n", n);

		//test 4
		ft_printf("test %d|", test++);
		n = ft_printf("%.1c", '\0');
		ft_printf("|%d\n", n);

		//test 5
		ft_printf("test %d|", test++);
		n = ft_printf("%.1c", 'A');
		ft_printf("|%d\n", n);

		//test 6
		ft_printf("test %d|", test++);
		n = ft_printf("%.2c", '\0');
		ft_printf("|%d\n", n);

		//test 7
		ft_printf("test %d|", test++);
		n = ft_printf("%.2c", 'A');
		ft_printf("|%d\n", n);

		//test 8
		ft_printf("test %d|", test++);
		n = ft_printf("%.10c", '\0');
		ft_printf("|%d\n", n);

		//test 9
		ft_printf("test %d|", test++);
		n = ft_printf("%.10c", 'A');
		ft_printf("|%d\n", n);

		//test 10
		ft_printf("test %d|", test++);
		n = ft_printf("%1.1c", '\0');
		ft_printf("|%d\n", n);

		//test 11
		ft_printf("test %d|", test++);
		n = ft_printf("%1.1c", 'A');
		ft_printf("|%d\n", n);

		//test 12
		ft_printf("test %d|", test++);
		n = ft_printf("%2.2c", '\0');
		ft_printf("|%d\n", n);

		//test 13
		ft_printf("test %d|", test++);
		n = ft_printf("%2.2c", 'A');
		ft_printf("|%d\n", n);

		//test 14
		ft_printf("test %d|", test++);
		n = ft_printf("%10.10c", '\0');
		ft_printf("|%d\n", n);

		//test 15
		ft_printf("test %d|", test++);
		n = ft_printf("%10.10c", 'A');
		ft_printf("|%d\n", n);

		//test 16
		ft_printf("test %d|", test++);
		n = ft_printf("%c", '\0');
		ft_printf("|%d\n", n);

		//test 17
		ft_printf("test %d|", test++);
		n = ft_printf("%c", 'A');
		ft_printf("|%d\n", n);

		//test 18
		ft_printf("test %d|", test++);
		n = ft_printf("%1c", '\0');
		ft_printf("|%d\n", n);

		//test 19
		ft_printf("test %d|", test++);
		n = ft_printf("%1c", 'A');
		ft_printf("|%d\n", n);

		//test 20
		ft_printf("test %d|", test++);
		n = ft_printf("%2c", '\0');
		ft_printf("|%d\n", n);

		//test 21
		ft_printf("test %d|", test++);
		n = ft_printf("%2c", 'A');
		ft_printf("|%d\n", n);

		//test 22
		ft_printf("test %d|", test++);
		n = ft_printf("%10c", '\0');
		ft_printf("|%d\n", n);

		//test 23
		ft_printf("test %d|", test++);
		n = ft_printf("%10c", 'A');
		ft_printf("|%d\n", n);

		//test 24
		ft_printf("test %d|", test++);
		n = ft_printf("%-c", '\0');
		ft_printf("|%d\n", n);

		//test 25
		ft_printf("test %d|", test++);
		n = ft_printf("%-c", 'A');
		ft_printf("|%d\n", n);

		//test 26
		ft_printf("test %d|", test++);
		n = ft_printf("%-1c", '\0');
		ft_printf("|%d\n", n);

		//test 27
		ft_printf("test %d|", test++);
		n = ft_printf("%-1c", 'A');
		ft_printf("|%d\n", n);

		//test 28
		ft_printf("test %d|", test++);
		n = ft_printf("%-2c", '\0');
		ft_printf("|%d\n", n);

		//test 29
		ft_printf("test %d|", test++);
		n = ft_printf("%-2c", 'A');
		ft_printf("|%d\n", n);

		//test 30
		ft_printf("test %d|", test++);
		n = ft_printf("%-10c", '\0');
		ft_printf("|%d\n", n);

		//test 31
		ft_printf("test %d|", test++);
		n = ft_printf("%-10c", 'A');
		ft_printf("|%d\n", n);

		//test 32
		ft_printf("test %d|", test++);
		n = ft_printf("%-.c", '\0');
		ft_printf("|%d\n", n);

		//test 33
		ft_printf("test %d|", test++);
		n = ft_printf("%-.c", 'A');
		ft_printf("|%d\n", n);

		//test 34
		ft_printf("test %d|", test++);
		n = ft_printf("%-1.1c", '\0');
		ft_printf("|%d\n", n);

		//test 35
		ft_printf("test %d|", test++);
		n = ft_printf("%-1.1c", 'A');
		ft_printf("|%d\n", n);

		//test 36
		ft_printf("test %d|", test++);
		n = ft_printf("%-2.2c", '\0');
		ft_printf("|%d\n", n);

		//test 37
		ft_printf("test %d|", test++);
		n = ft_printf("%-2.2c", 'A');
		ft_printf("|%d\n", n);

		//test 38
		ft_printf("test %d|", test++);
		n = ft_printf("%-10.10c", '\0');
		ft_printf("|%d\n", n);

		//test 39
		ft_printf("test %d|", test++);
		n = ft_printf("%-10.10c", 'A');
		ft_printf("|%d\n", n);

		//test 40
		ft_printf("test %d|", test++);
		n = ft_printf("%01c", '\0');
		ft_printf("|%d\n", n);

		//test 41
		ft_printf("test %d|", test++);
		n = ft_printf("%01c", 'A');
		ft_printf("|%d\n", n);

		//test 42
		ft_printf("test %d|", test++);
		n = ft_printf("%02c", '\0');
		ft_printf("|%d\n", n);

		//test 43
		ft_printf("test %d|", test++);
		n = ft_printf("%02c", 'A');
		ft_printf("|%d\n", n);

		//test 44
		ft_printf("test %d|", test++);
		n = ft_printf("%010c", '\0');
		ft_printf("|%d\n", n);

		//test 45
		ft_printf("test %d|", test++);
		n = ft_printf("%010c", 'A');
		ft_printf("|%d\n", n);

		//test 46
		ft_printf("test %d|", test++);
		n = ft_printf("%-01c", '\0');
		ft_printf("|%d\n", n);

		//test 47
		ft_printf("test %d|", test++);
		n = ft_printf("%-01c", 'A');
		ft_printf("|%d\n", n);

		//test 48
		ft_printf("test %d|", test++);
		n = ft_printf("%-02c", '\0');
		ft_printf("|%d\n", n);

		//test 49
		ft_printf("test %d|", test++);
		n = ft_printf("%-02c", 'A');
		ft_printf("|%d\n", n);

		//test 50
		ft_printf("test %d|", test++);
		n = ft_printf("%-010c", '\0');
		ft_printf("|%d\n", n);

		//test 51
		ft_printf("test %d|", test++);
		n = ft_printf("%-010c", 'A');
		ft_printf("|%d\n", n);

		//test 52
		ft_printf("test %d|", test++);
		n = ft_printf("%-01.1c", '\0');
		ft_printf("|%d\n", n);

		//test 53
		ft_printf("test %d|", test++);
		n = ft_printf("%-01.1c", 'A');
		ft_printf("|%d\n", n);

		//test 54
		ft_printf("test %d|", test++);
		n = ft_printf("%-02.2c", '\0');
		ft_printf("|%d\n", n);

		//test 55
		ft_printf("test %d|", test++);
		n = ft_printf("%-02.2c", 'A');
		ft_printf("|%d\n", n);

		//test 56
		ft_printf("test %d|", test++);
		n = ft_printf("%-010.10c", '\0');
		ft_printf("|%d\n", n);

		//test 57
		ft_printf("test %d|", test++);
		n = ft_printf("%-010.10c", 'A');
		ft_printf("|%d\n", n);
		
		//test 58
		ft_printf("test %d|", test++);
		n = ft_printf("%5c", '\0');
		ft_printf("|%d\n", n);
		
		//test 59
		ft_printf("test %d|", test++);
		n = ft_printf("%-5c", '\0');
		ft_printf("|%d\n", n);
		
		//test 60
		ft_printf("test %d|", test++);
		n = ft_printf("%.4c", 'a');
		ft_printf("|%d\n", n);
		
		//test 61
		ft_printf("test %d|", test++);
		n = ft_printf("%#c", 'a');
		ft_printf("|%d\n", n);
		
		//test 62
		ft_printf("test %d|", test++);
		n = ft_printf("%+c", 'a');
		ft_printf("|%d\n", n);
		
		//test 63
		ft_printf("test %d|", test++);
		n = ft_printf("%+c", -42);
		ft_printf("|%d\n", n);
		
		//test 64
		ft_printf("test %d|", test++);
		n = ft_printf("%05c", '\0');
		ft_printf("|%d\n", n);
		
		//test 65
		ft_printf("test %d|", test++);
		n = ft_printf("%-05c", '\0');
		ft_printf("|%d\n", n);
		
		//test 66
		ft_printf("test %d|", test++);
		n = ft_printf("%.c", 'a');
		ft_printf("|%d\n", n);
		
		//test 67
		ft_printf("test %d|", test++);
		n = ft_printf("%05c", 'a');
		ft_printf("|%d\n", n);
		
		//test 68
		ft_printf("test %d|", test++);
		n = ft_printf("%0c", 'a');
		ft_printf("|%d\n", n);
		
		//test 69
		ft_printf("test %d|", test++);
		n = ft_printf("% c", 'a');
		ft_printf("|%d\n", n);
		
		//test 70
		ft_printf("test %d|", test++);
		n = ft_printf("% c", -42);
		ft_printf("|%d\n", n);
		
		//test 71
		ft_printf("test %d|", test++);
		n = ft_printf("%-c", 'a');
		ft_printf("|%d\n", n);
		
		//test 72
		ft_printf("test %d|", test++);
		n = ft_printf("%c", '\0');
		ft_printf("|%d\n", n);
		
		//test 73
		ft_printf("test %d|", test++);
		n = ft_printf("%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
		%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
		%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
		%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
		%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)128,(char)129,(char)130,
		(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,
		(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,
		(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,
		(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,
		(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,
		(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,
		(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,
		(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,
		(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,
		(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,
		(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,
		(char)252,(char)253,(char)254,(char)255);
		ft_printf("|%d\n", n);
		
		//test 74
		ft_printf("test %d|", test++);
		n = ft_printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
		%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,
		(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,
		(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
		ft_printf("|%d\n", n);
		
		//test 75
		ft_printf("test %d|", test++);
		n = ft_printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
		%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
		%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
		%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c",
		'=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y',
		'Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u',
		'v','w','x','y','z','{','|','~');
		ft_printf("|%d\n", n);
		
		//test 76
		ft_printf("test %d|", test++);
		n = ft_printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c\
		%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
		%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
		%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",
		(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,
		(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,
		(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,
		(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,
		(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,
		(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,
		(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,
		(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,
		(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,
		(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,
		(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,
		(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);
		ft_printf("|%d\n", n);
		
		//test 77
		ft_printf("test %d|", test++);
		n = ft_printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c\
		%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
		%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c",
		';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','T','U',
		'V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
		'q','r','s','t','u','v','w','x','y','z','{','|','~');
		ft_printf("|%d\n", n);
		
		//test 78
		ft_printf("test %d|", test++);
		n = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
		%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
		%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
		(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,
		(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,
		(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,
		(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,
		(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,
		(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,
		(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,
		(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,
		(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,
		(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,
		(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,
		(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,
		(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,
		(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);	
		ft_printf("|%d\n", n);
		
		//test 79
		ft_printf("test %d|", test++);
		n = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
		(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char) 9,
		(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,
		(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,
		(char)26,(char)27,(char)28,(char)29 ,(char)30,(char)31);
		ft_printf("|%d\n", n);
		
		//test 80
		ft_printf("test %d|", test++);
		n = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
		%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
		%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',',
		'-','.','/','0','1','2','3','4','5','6','7','8','9',':',';', '<','=','>','?','@','A','B',
		'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y',
		'Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h', 'i','j','k','l','m','n','o',
		'p','q','r','s','t','u','v','w','x','y','z','{','|','~');
		ft_printf("|%d\n", n);

}