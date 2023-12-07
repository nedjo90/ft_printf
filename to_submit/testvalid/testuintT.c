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
	n = ft_printf("%.0u", 42); //
	ft_printf("|%d\n", n);

	//test 1
	ft_printf("test %d|", test++);
	n = ft_printf("%.1u", 42); //
	ft_printf("|%d\n", n);

	//test 2
	ft_printf("test %d|", test++);
	n = ft_printf("%.2u", 42); //
	ft_printf("|%d\n", n);

	//test 3
	ft_printf("test %d|", test++);
	n = ft_printf("%.3u", 42); //
	ft_printf("|%d\n", n);

	//test 4
	ft_printf("test %d|", test++);
	n = ft_printf("%.4u", 42); //
	ft_printf("|%d\n", n);

	//test 5
	ft_printf("test %d|", test++);
	n = ft_printf("%.5u", 42); //
	ft_printf("|%d\n", n);

	//test 6
	ft_printf("test %d|", test++);
	n = ft_printf("%.6u", 42); //
	ft_printf("|%d\n", n);

	//test 7
	ft_printf("test %d|", test++);
	n = ft_printf("%.7u", 42); //
	ft_printf("|%d\n", n);

	//test 8
	ft_printf("test %d|", test++);
	n = ft_printf("%.8u", 42); //
	ft_printf("|%d\n", n);

	//test 9
	ft_printf("test %d|", test++);
	n = ft_printf("%.9u", 42); //
	ft_printf("|%d\n", n);

	//test 10
	ft_printf("test %d|", test++);
	n = ft_printf("%.10u", 42); //
	ft_printf("|%d\n", n);

	//test 11
	ft_printf("test %d|", test++);
	n = ft_printf("%u", 42);
	ft_printf("|%d\n", n);

	//test 12
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 42);
	ft_printf("|%d\n", n);

	//test 13
	ft_printf("test %d|", test++);
	n = ft_printf("% u", 42);
	ft_printf("|%d\n", n);

	//test 14
	ft_printf("test %d|", test++);
	n = ft_printf("%-u", 42);
	ft_printf("|%d\n", n);

	//test 15
	ft_printf("test %d|", test++);
	n = ft_printf("%+x", 42);
	ft_printf("|%d\n", n);

	//test 16
	ft_printf("test %d|", test++);
	n = ft_printf("% x", 42);
	ft_printf("|%d\n", n);

	//test 17
	ft_printf("test %d|", test++);
	n = ft_printf("%+X", 42);
	ft_printf("|%d\n", n);

	//test 18
	ft_printf("test %d|", test++);
	n = ft_printf("% X", 42);
	ft_printf("|%d\n", n);

	//test 19
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 5);
	ft_printf("|%d\n", n);

	//test 20
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 5);
	ft_printf("|%d\n", n);

	//test 21
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 4294967295);
	ft_printf("|%d\n", n);

	//test 22
	ft_printf("test %d|", test++);
	n = ft_printf("%+5u", 35);
	ft_printf("|%d\n", n);

	//test 23
	ft_printf("test %d|", test++);
	n = ft_printf("%+7u", 0);
	ft_printf("|%d\n", n);

	//test 24
	ft_printf("test %d|", test++);
	n = ft_printf("%+24u", 4294967295);
	ft_printf("|%d\n", n);

	//test 25
	ft_printf("test %d|", test++);
	n = ft_printf("%+.7u", 234);
	ft_printf("|%d\n", n);

	//test 26
	ft_printf("test %d|", test++);
	n = ft_printf("%+.3u", 3723);
	ft_printf("|%d\n", n);

	//test 27
	ft_printf("test %d|", test++);
	n = ft_printf("%+05u", 432);
	ft_printf("|%d\n", n);

	//test 28
	ft_printf("test %d|", test++);
	n = ft_printf("%+04u", 0);
	ft_printf("|%d\n", n);

	//test 29
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5u", 34);
	ft_printf("|%d\n", n);

	//test 30
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5u", 0);
	ft_printf("|%d\n", n);

	//test 31
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 32
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 33
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 34
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5u", 34);
	ft_printf("|%d\n", n);

	//test 35
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5u", 0);
	ft_printf("|%d\n", n);

	//test 36
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 37
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 38
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 39
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5u", 34);
	ft_printf("|%d\n", n);

	//test 40
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5u", 0);
	ft_printf("|%d\n", n);

	//test 41
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 42
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 43
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 44
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5u", 34);
	ft_printf("|%d\n", n);

	//test 45
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5u", 0);
	ft_printf("|%d\n", n);

	//test 46
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 47
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 48
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 49
	ft_printf("test %d|", test++);
	n = ft_printf("%u", 42);
	ft_printf("|%d\n", n);

	//test 50
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 42);
	ft_printf("|%d\n", n);

	//test 51
	ft_printf("test %d|", test++);
	n = ft_printf("% u", 42);
	ft_printf("|%d\n", n);

	//test 52
	ft_printf("test %d|", test++);
	n = ft_printf("%-u", 42);
	ft_printf("|%d\n", n);

	//test 53
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 5);
	ft_printf("|%d\n", n);

	//test 54
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 5);
	ft_printf("|%d\n", n);

	//test 55
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 4294967295);
	ft_printf("|%d\n", n);

	//test 56
	ft_printf("test %d|", test++);
	n = ft_printf("%+5u", 35);
	ft_printf("|%d\n", n);

	//test 57
	ft_printf("test %d|", test++);
	n = ft_printf("%+7u", 0);
	ft_printf("|%d\n", n);

	//test 58
	ft_printf("test %d|", test++);
	n = ft_printf("%+24u", 4294967295);
	ft_printf("|%d\n", n);

	//test 59
	ft_printf("test %d|", test++);
	n = ft_printf("%+.7u", 234);
	ft_printf("|%d\n", n);

	//test 60
	ft_printf("test %d|", test++);
	n = ft_printf("%+.3u", 3723);
	ft_printf("|%d\n", n);

	//test 61
	ft_printf("test %d|", test++);
	n = ft_printf("%+05u", 432);
	ft_printf("|%d\n", n);

	//test 62
	ft_printf("test %d|", test++);
	n = ft_printf("%+04u", 0);
	ft_printf("|%d\n", n);

	//test 63
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5u", 34);
	ft_printf("|%d\n", n);

	//test 64
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5u", 0);
	ft_printf("|%d\n", n);

	//test 65
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 66
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 67
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 68
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5u", 34);
	ft_printf("|%d\n", n);

	//test 69
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5u", 0);
	ft_printf("|%d\n", n);

	//test 70
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 71
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 72
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 73
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5u", 34);
	ft_printf("|%d\n", n);

	//test 74
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5u", 0);
	ft_printf("|%d\n", n);

	//test 75
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 76
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 77
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 78
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5u", 34);
	ft_printf("|%d\n", n);

	//test 79
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5u", 0);
	ft_printf("|%d\n", n);

	//test 80
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 81
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 82
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 83
	ft_printf("test %d|", test++);
	n = ft_printf("%u");
	ft_printf("|%d\n", n);

	//test 84
	ft_printf("test %d|", test++);
	n = ft_printf("%u", NULL);
	ft_printf("|%d\n", n);

	//test 85
	ft_printf("test %d|", test++);
	n = ft_printf("%u", 3);
	ft_printf("|%d\n", n);

	//test 86
	ft_printf("test %d|", test++);
	n = ft_printf("%u", 4294967295u);
	ft_printf("|%d\n", n);

	//test 87
	ft_printf("test %d|", test++);
	n = ft_printf("%7u", 33);
	ft_printf("|%d\n", n);

	//test 88
	ft_printf("test %d|", test++);
	n = ft_printf("%3u", 0);
	ft_printf("|%d\n", n);

	//test 89
	ft_printf("test %d|", test++);
	n = ft_printf("%5u", 52625);
	ft_printf("|%d\n", n);

	//test 90
	ft_printf("test %d|", test++);
	n = ft_printf("%4u", 94827);
	ft_printf("|%d\n", n);

	//test 91
	ft_printf("test %d|", test++);
	n = ft_printf("%-7u", 33);
	ft_printf("|%d\n", n);

	//test 92
	ft_printf("test %d|", test++);
	n = ft_printf("%-3u", 0);
	ft_printf("|%d\n", n);

	//test 93
	ft_printf("test %d|", test++);
	n = ft_printf("%-5u", 52625);
	ft_printf("|%d\n", n);

	//test 94
	ft_printf("test %d|", test++);
	n = ft_printf("%-4u", 94827);
	ft_printf("|%d\n", n);

	//test 95
	ft_printf("test %d|", test++);
	n = ft_printf("%.5u", 2);
	ft_printf("|%d\n", n);

	//test 96
	ft_printf("test %d|", test++);
	n = ft_printf("%.3u", 0);
	ft_printf("|%d\n", n);

	//test 97
	ft_printf("test %d|", test++);
	n = ft_printf("%.4u", 5263);
	ft_printf("|%d\n", n);

	//test 98
	ft_printf("test %d|", test++);
	n = ft_printf("%.3u", 13862);
	ft_printf("|%d\n", n);

	//test 99
	ft_printf("test %d|", test++);
	n = ft_printf("%05u", 43);
	ft_printf("|%d\n", n);

	//test 100
	ft_printf("test %d|", test++);
	n = ft_printf("%03u", 0);
	ft_printf("|%d\n", n);

	//test 101
	ft_printf("test %d|", test++);
	n = ft_printf("%03u", 634);
	ft_printf("|%d\n", n);

	//test 102
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5u", 34);
	ft_printf("|%d\n", n);

	//test 103
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5u", 0);
	ft_printf("|%d\n", n);

	//test 104
	ft_printf("test %d|", test++);
	n = ft_printf("%8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 105
	ft_printf("test %d|", test++);
	n = ft_printf("%3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 106
	ft_printf("test %d|", test++);
	n = ft_printf("%3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 107
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5u", 34);
	ft_printf("|%d\n", n);

	//test 108
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5u", 0);
	ft_printf("|%d\n", n);

	//test 109
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 110
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 111
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 112
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5u", 34);
	ft_printf("|%d\n", n);

	//test 113
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5u", 0);
	ft_printf("|%d\n", n);

	//test 114
	ft_printf("test %d|", test++);
	n = ft_printf("%08.3u", 8375);
	ft_printf("|%d\n", n);

	//test 115
	ft_printf("test %d|", test++);
	n = ft_printf("%03.7u", 3267);
	ft_printf("|%d\n", n);

	//test 116
	ft_printf("test %d|", test++);
	n = ft_printf("%03.3u", 6983);
	ft_printf("|%d\n", n);

	//test 117
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5u", 34);
	ft_printf("|%d\n", n);

	//test 118
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5u", 0);
	ft_printf("|%d\n", n);

	//test 119
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 120
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 121
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 122
	ft_printf("test %d|", test++);
	n = ft_printf("%.0u", 0);
	ft_printf("|%d\n", n);

	//test 123
	ft_printf("test %d|", test++);
	n = ft_printf("%.u", 0);
	ft_printf("|%d\n", n);

	//test 124
	ft_printf("test %d|", test++);
	n = ft_printf("%5.0u", 0);
	ft_printf("|%d\n", n);

	//test 125
	ft_printf("test %d|", test++);
	n = ft_printf("%5.u", 0);
	ft_printf("|%d\n", n);

	//test 126
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.0u", 0);
	ft_printf("|%d\n", n);

	//test 127
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.u", 0);
	ft_printf("|%d\n", n);

	//test 128
	ft_printf("test %d|", test++);
	n = ft_printf("%u", 42);
	ft_printf("|%d\n", n);

	//test 129
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 42);
	ft_printf("|%d\n", n);

	//test 130
	ft_printf("test %d|", test++);
	n = ft_printf("% u", 42);
	ft_printf("|%d\n", n);

	//test 131
	ft_printf("test %d|", test++);
	n = ft_printf("%-u", 42);
	ft_printf("|%d\n", n);

	//test 132
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 5);
	ft_printf("|%d\n", n);

	//test 133
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 5);
	ft_printf("|%d\n", n);

	//test 134
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 4294967295);
	ft_printf("|%d\n", n);

	//test 135
	ft_printf("test %d|", test++);
	n = ft_printf("%+5u", 35);
	ft_printf("|%d\n", n);

	//test 136
	ft_printf("test %d|", test++);
	n = ft_printf("%+7u", 0);
	ft_printf("|%d\n", n);

	//test 137
	ft_printf("test %d|", test++);
	n = ft_printf("%+24u", 4294967295);
	ft_printf("|%d\n", n);

	//test 138
	ft_printf("test %d|", test++);
	n = ft_printf("%+.7u", 234);
	ft_printf("|%d\n", n);

	//test 139
	ft_printf("test %d|", test++);
	n = ft_printf("%+.3u", 3723);
	ft_printf("|%d\n", n);

	//test 140
	ft_printf("test %d|", test++);
	n = ft_printf("%+05u", 432);
	ft_printf("|%d\n", n);

	//test 141
	ft_printf("test %d|", test++);
	n = ft_printf("%+04u", 0);
	ft_printf("|%d\n", n);

	//test 142
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5u", 34);
	ft_printf("|%d\n", n);

	//test 143
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5u", 0);
	ft_printf("|%d\n", n);

	//test 144
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 145
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 146
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 147
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5u", 34);
	ft_printf("|%d\n", n);

	//test 148
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5u", 0);
	ft_printf("|%d\n", n);

	//test 149
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 150
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 151
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 152
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5u", 34);
	ft_printf("|%d\n", n);

	//test 153
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5u", 0);
	ft_printf("|%d\n", n);

	//test 154
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 155
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 156
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 157
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5u", 34);
	ft_printf("|%d\n", n);

	//test 158
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5u", 0);
	ft_printf("|%d\n", n);

	//test 159
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 160
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 161
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 162
	ft_printf("test %d|", test++);
	n = ft_printf("%u");
	ft_printf("|%d\n", n);

	//test 163
	ft_printf("test %d|", test++);
	n = ft_printf("%u", NULL);
	ft_printf("|%d\n", n);

	//test 164
	ft_printf("test %d|", test++);
	n = ft_printf("%u", 3);
	ft_printf("|%d\n", n);

	//test 165
	ft_printf("test %d|", test++);
	n = ft_printf("%u", 4294967295u);
	ft_printf("|%d\n", n);

	//test 166
	ft_printf("test %d|", test++);
	n = ft_printf("%7u", 33);
	ft_printf("|%d\n", n);

	//test 167
	ft_printf("test %d|", test++);
	n = ft_printf("%3u", 0);
	ft_printf("|%d\n", n);

	//test 168
	ft_printf("test %d|", test++);
	n = ft_printf("%5u", 52625);
	ft_printf("|%d\n", n);

	//test 169
	ft_printf("test %d|", test++);
	n = ft_printf("%4u", 94827);
	ft_printf("|%d\n", n);

	//test 170
	ft_printf("test %d|", test++);
	n = ft_printf("%-7u", 33);
	ft_printf("|%d\n", n);

	//test 171
	ft_printf("test %d|", test++);
	n = ft_printf("%-3u", 0);
	ft_printf("|%d\n", n);

	//test 172
	ft_printf("test %d|", test++);
	n = ft_printf("%-5u", 52625);
	ft_printf("|%d\n", n);

	//test 173
	ft_printf("test %d|", test++);
	n = ft_printf("%-4u", 94827);
	ft_printf("|%d\n", n);

	//test 174
	ft_printf("test %d|", test++);
	n = ft_printf("%.5u", 2);
	ft_printf("|%d\n", n);

	//test 175
	ft_printf("test %d|", test++);
	n = ft_printf("%.3u", 0);
	ft_printf("|%d\n", n);

	//test 176
	ft_printf("test %d|", test++);
	n = ft_printf("%.4u", 5263);
	ft_printf("|%d\n", n);

	//test 177
	ft_printf("test %d|", test++);
	n = ft_printf("%.3u", 13862);
	ft_printf("|%d\n", n);

	//test 178
	ft_printf("test %d|", test++);
	n = ft_printf("%05u", 43);
	ft_printf("|%d\n", n);

	//test 179
	ft_printf("test %d|", test++);
	n = ft_printf("%03u", 0);
	ft_printf("|%d\n", n);

	//test 180
	ft_printf("test %d|", test++);
	n = ft_printf("%03u", 634);
	ft_printf("|%d\n", n);

	//test 181
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5u", 34);
	ft_printf("|%d\n", n);

	//test 182
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5u", 0);
	ft_printf("|%d\n", n);

	//test 183
	ft_printf("test %d|", test++);
	n = ft_printf("%8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 184
	ft_printf("test %d|", test++);
	n = ft_printf("%3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 185
	ft_printf("test %d|", test++);
	n = ft_printf("%3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 186
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5u", 34);
	ft_printf("|%d\n", n);

	//test 187
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5u", 0);
	ft_printf("|%d\n", n);

	//test 188
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 189
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 190
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 191
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5u", 34);
	ft_printf("|%d\n", n);

	//test 192
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5u", 0);
	ft_printf("|%d\n", n);

	//test 193
	ft_printf("test %d|", test++);
	n = ft_printf("%08.3u", 8375);
	ft_printf("|%d\n", n);

	//test 194
	ft_printf("test %d|", test++);
	n = ft_printf("%03.7u", 3267);
	ft_printf("|%d\n", n);

	//test 195
	ft_printf("test %d|", test++);
	n = ft_printf("%03.3u", 6983);
	ft_printf("|%d\n", n);

	//test 196
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5u", 34);
	ft_printf("|%d\n", n);

	//test 197
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5u", 0);
	ft_printf("|%d\n", n);

	//test 198
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.3u", 8375);
	ft_printf("|%d\n", n);

	//test 199
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.7u", 3267);
	ft_printf("|%d\n", n);

	//test 200
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.3u", 6983);
	ft_printf("|%d\n", n);

	//test 201
	ft_printf("test %d|", test++);
	n = ft_printf("%.0u", 0);
	ft_printf("|%d\n", n);

	//test 202
	ft_printf("test %d|", test++);
	n = ft_printf("%.u", 0);
	ft_printf("|%d\n", n);

	//test 203
	ft_printf("test %d|", test++);
	n = ft_printf("%5.0u", 0);
	ft_printf("|%d\n", n);

	//test 204
	ft_printf("test %d|", test++);
	n = ft_printf("%5.u", 0);
	ft_printf("|%d\n", n);

	//test 205
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.0u", 0);
	ft_printf("|%d\n", n);

	//test 206
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.u", 0);
	ft_printf("|%d\n", n);

	return (0);
}