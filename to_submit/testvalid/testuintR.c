#include "printf.h"
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
	printf("test %d|", test++);
	n = printf("%.0u", 42); //
	printf("|%d\n", n);

	//test 1
	printf("test %d|", test++);
	n = printf("%.1u", 42); //
	printf("|%d\n", n);

	//test 2
	printf("test %d|", test++);
	n = printf("%.2u", 42); //
	printf("|%d\n", n);

	//test 3
	printf("test %d|", test++);
	n = printf("%.3u", 42); //
	printf("|%d\n", n);

	//test 4
	printf("test %d|", test++);
	n = printf("%.4u", 42); //
	printf("|%d\n", n);

	//test 5
	printf("test %d|", test++);
	n = printf("%.5u", 42); //
	printf("|%d\n", n);

	//test 6
	printf("test %d|", test++);
	n = printf("%.6u", 42); //
	printf("|%d\n", n);

	//test 7
	printf("test %d|", test++);
	n = printf("%.7u", 42); //
	printf("|%d\n", n);

	//test 8
	printf("test %d|", test++);
	n = printf("%.8u", 42); //
	printf("|%d\n", n);

	//test 9
	printf("test %d|", test++);
	n = printf("%.9u", 42); //
	printf("|%d\n", n);

	//test 10
	printf("test %d|", test++);
	n = printf("%.10u", 42); //
	printf("|%d\n", n);

	//test 11
	printf("test %d|", test++);
	n = printf("%u", 42);
	printf("|%d\n", n);

	//test 12
	printf("test %d|", test++);
	n = printf("%+u", 42);
	printf("|%d\n", n);

	//test 13
	printf("test %d|", test++);
	n = printf("% u", 42);
	printf("|%d\n", n);

	//test 14
	printf("test %d|", test++);
	n = printf("%-u", 42);
	printf("|%d\n", n);

	//test 15
	printf("test %d|", test++);
	n = printf("%+x", 42);
	printf("|%d\n", n);

	//test 16
	printf("test %d|", test++);
	n = printf("% x", 42);
	printf("|%d\n", n);

	//test 17
	printf("test %d|", test++);
	n = printf("%+X", 42);
	printf("|%d\n", n);

	//test 18
	printf("test %d|", test++);
	n = printf("% X", 42);
	printf("|%d\n", n);

	//test 19
	printf("test %d|", test++);
	n = printf("%+u", 5);
	printf("|%d\n", n);

	//test 20
	printf("test %d|", test++);
	n = printf("%+u", 5);
	printf("|%d\n", n);

	//test 21
	printf("test %d|", test++);
	n = printf("%+u", 4294967295);
	printf("|%d\n", n);

	//test 22
	printf("test %d|", test++);
	n = printf("%+5u", 35);
	printf("|%d\n", n);

	//test 23
	printf("test %d|", test++);
	n = printf("%+7u", 0);
	printf("|%d\n", n);

	//test 24
	printf("test %d|", test++);
	n = printf("%+24u", 4294967295);
	printf("|%d\n", n);

	//test 25
	printf("test %d|", test++);
	n = printf("%+.7u", 234);
	printf("|%d\n", n);

	//test 26
	printf("test %d|", test++);
	n = printf("%+.3u", 3723);
	printf("|%d\n", n);

	//test 27
	printf("test %d|", test++);
	n = printf("%+05u", 432);
	printf("|%d\n", n);

	//test 28
	printf("test %d|", test++);
	n = printf("%+04u", 0);
	printf("|%d\n", n);

	//test 29
	printf("test %d|", test++);
	n = printf("%+8.5u", 34);
	printf("|%d\n", n);

	//test 30
	printf("test %d|", test++);
	n = printf("%+8.5u", 0);
	printf("|%d\n", n);

	//test 31
	printf("test %d|", test++);
	n = printf("%+8.3u", 8375);
	printf("|%d\n", n);

	//test 32
	printf("test %d|", test++);
	n = printf("%+3.7u", 3267);
	printf("|%d\n", n);

	//test 33
	printf("test %d|", test++);
	n = printf("%+3.3u", 6983);
	printf("|%d\n", n);

	//test 34
	printf("test %d|", test++);
	n = printf("%+-8.5u", 34);
	printf("|%d\n", n);

	//test 35
	printf("test %d|", test++);
	n = printf("%+-8.5u", 0);
	printf("|%d\n", n);

	//test 36
	printf("test %d|", test++);
	n = printf("%+-8.3u", 8375);
	printf("|%d\n", n);

	//test 37
	printf("test %d|", test++);
	n = printf("%+-3.7u", 3267);
	printf("|%d\n", n);

	//test 38
	printf("test %d|", test++);
	n = printf("%+-3.3u", 6983);
	printf("|%d\n", n);

	//test 39
	printf("test %d|", test++);
	n = printf("%0+8.5u", 34);
	printf("|%d\n", n);

	//test 40
	printf("test %d|", test++);
	n = printf("%0+8.5u", 0);
	printf("|%d\n", n);

	//test 41
	printf("test %d|", test++);
	n = printf("%0+8.3u", 8375);
	printf("|%d\n", n);

	//test 42
	printf("test %d|", test++);
	n = printf("%0+3.7u", 3267);
	printf("|%d\n", n);

	//test 43
	printf("test %d|", test++);
	n = printf("%0+3.3u", 6983);
	printf("|%d\n", n);

	//test 44
	printf("test %d|", test++);
	n = printf("%0+-8.5u", 34);
	printf("|%d\n", n);

	//test 45
	printf("test %d|", test++);
	n = printf("%0+-8.5u", 0);
	printf("|%d\n", n);

	//test 46
	printf("test %d|", test++);
	n = printf("%0+-8.3u", 8375);
	printf("|%d\n", n);

	//test 47
	printf("test %d|", test++);
	n = printf("%0+-3.7u", 3267);
	printf("|%d\n", n);

	//test 48
	printf("test %d|", test++);
	n = printf("%0+-3.3u", 6983);
	printf("|%d\n", n);

	//test 49
	printf("test %d|", test++);
	n = printf("%u", 42);
	printf("|%d\n", n);

	//test 50
	printf("test %d|", test++);
	n = printf("%+u", 42);
	printf("|%d\n", n);

	//test 51
	printf("test %d|", test++);
	n = printf("% u", 42);
	printf("|%d\n", n);

	//test 52
	printf("test %d|", test++);
	n = printf("%-u", 42);
	printf("|%d\n", n);

	//test 53
	printf("test %d|", test++);
	n = printf("%+u", 5);
	printf("|%d\n", n);

	//test 54
	printf("test %d|", test++);
	n = printf("%+u", 5);
	printf("|%d\n", n);

	//test 55
	printf("test %d|", test++);
	n = printf("%+u", 4294967295);
	printf("|%d\n", n);

	//test 56
	printf("test %d|", test++);
	n = printf("%+5u", 35);
	printf("|%d\n", n);

	//test 57
	printf("test %d|", test++);
	n = printf("%+7u", 0);
	printf("|%d\n", n);

	//test 58
	printf("test %d|", test++);
	n = printf("%+24u", 4294967295);
	printf("|%d\n", n);

	//test 59
	printf("test %d|", test++);
	n = printf("%+.7u", 234);
	printf("|%d\n", n);

	//test 60
	printf("test %d|", test++);
	n = printf("%+.3u", 3723);
	printf("|%d\n", n);

	//test 61
	printf("test %d|", test++);
	n = printf("%+05u", 432);
	printf("|%d\n", n);

	//test 62
	printf("test %d|", test++);
	n = printf("%+04u", 0);
	printf("|%d\n", n);

	//test 63
	printf("test %d|", test++);
	n = printf("%+8.5u", 34);
	printf("|%d\n", n);

	//test 64
	printf("test %d|", test++);
	n = printf("%+8.5u", 0);
	printf("|%d\n", n);

	//test 65
	printf("test %d|", test++);
	n = printf("%+8.3u", 8375);
	printf("|%d\n", n);

	//test 66
	printf("test %d|", test++);
	n = printf("%+3.7u", 3267);
	printf("|%d\n", n);

	//test 67
	printf("test %d|", test++);
	n = printf("%+3.3u", 6983);
	printf("|%d\n", n);

	//test 68
	printf("test %d|", test++);
	n = printf("%+-8.5u", 34);
	printf("|%d\n", n);

	//test 69
	printf("test %d|", test++);
	n = printf("%+-8.5u", 0);
	printf("|%d\n", n);

	//test 70
	printf("test %d|", test++);
	n = printf("%+-8.3u", 8375);
	printf("|%d\n", n);

	//test 71
	printf("test %d|", test++);
	n = printf("%+-3.7u", 3267);
	printf("|%d\n", n);

	//test 72
	printf("test %d|", test++);
	n = printf("%+-3.3u", 6983);
	printf("|%d\n", n);

	//test 73
	printf("test %d|", test++);
	n = printf("%0+8.5u", 34);
	printf("|%d\n", n);

	//test 74
	printf("test %d|", test++);
	n = printf("%0+8.5u", 0);
	printf("|%d\n", n);

	//test 75
	printf("test %d|", test++);
	n = printf("%0+8.3u", 8375);
	printf("|%d\n", n);

	//test 76
	printf("test %d|", test++);
	n = printf("%0+3.7u", 3267);
	printf("|%d\n", n);

	//test 77
	printf("test %d|", test++);
	n = printf("%0+3.3u", 6983);
	printf("|%d\n", n);

	//test 78
	printf("test %d|", test++);
	n = printf("%0+-8.5u", 34);
	printf("|%d\n", n);

	//test 79
	printf("test %d|", test++);
	n = printf("%0+-8.5u", 0);
	printf("|%d\n", n);

	//test 80
	printf("test %d|", test++);
	n = printf("%0+-8.3u", 8375);
	printf("|%d\n", n);

	//test 81
	printf("test %d|", test++);
	n = printf("%0+-3.7u", 3267);
	printf("|%d\n", n);

	//test 82
	printf("test %d|", test++);
	n = printf("%0+-3.3u", 6983);
	printf("|%d\n", n);

	//test 83
	printf("test %d|", test++);
	n = printf("%u");
	printf("|%d\n", n);

	//test 84
	printf("test %d|", test++);
	n = printf("%u", NULL);
	printf("|%d\n", n);

	//test 85
	printf("test %d|", test++);
	n = printf("%u", 3);
	printf("|%d\n", n);

	//test 86
	printf("test %d|", test++);
	n = printf("%u", 4294967295u);
	printf("|%d\n", n);

	//test 87
	printf("test %d|", test++);
	n = printf("%7u", 33);
	printf("|%d\n", n);

	//test 88
	printf("test %d|", test++);
	n = printf("%3u", 0);
	printf("|%d\n", n);

	//test 89
	printf("test %d|", test++);
	n = printf("%5u", 52625);
	printf("|%d\n", n);

	//test 90
	printf("test %d|", test++);
	n = printf("%4u", 94827);
	printf("|%d\n", n);

	//test 91
	printf("test %d|", test++);
	n = printf("%-7u", 33);
	printf("|%d\n", n);

	//test 92
	printf("test %d|", test++);
	n = printf("%-3u", 0);
	printf("|%d\n", n);

	//test 93
	printf("test %d|", test++);
	n = printf("%-5u", 52625);
	printf("|%d\n", n);

	//test 94
	printf("test %d|", test++);
	n = printf("%-4u", 94827);
	printf("|%d\n", n);

	//test 95
	printf("test %d|", test++);
	n = printf("%.5u", 2);
	printf("|%d\n", n);

	//test 96
	printf("test %d|", test++);
	n = printf("%.3u", 0);
	printf("|%d\n", n);

	//test 97
	printf("test %d|", test++);
	n = printf("%.4u", 5263);
	printf("|%d\n", n);

	//test 98
	printf("test %d|", test++);
	n = printf("%.3u", 13862);
	printf("|%d\n", n);

	//test 99
	printf("test %d|", test++);
	n = printf("%05u", 43);
	printf("|%d\n", n);

	//test 100
	printf("test %d|", test++);
	n = printf("%03u", 0);
	printf("|%d\n", n);

	//test 101
	printf("test %d|", test++);
	n = printf("%03u", 634);
	printf("|%d\n", n);

	//test 102
	printf("test %d|", test++);
	n = printf("%8.5u", 34);
	printf("|%d\n", n);

	//test 103
	printf("test %d|", test++);
	n = printf("%8.5u", 0);
	printf("|%d\n", n);

	//test 104
	printf("test %d|", test++);
	n = printf("%8.3u", 8375);
	printf("|%d\n", n);

	//test 105
	printf("test %d|", test++);
	n = printf("%3.7u", 3267);
	printf("|%d\n", n);

	//test 106
	printf("test %d|", test++);
	n = printf("%3.3u", 6983);
	printf("|%d\n", n);

	//test 107
	printf("test %d|", test++);
	n = printf("%-8.5u", 34);
	printf("|%d\n", n);

	//test 108
	printf("test %d|", test++);
	n = printf("%-8.5u", 0);
	printf("|%d\n", n);

	//test 109
	printf("test %d|", test++);
	n = printf("%-8.3u", 8375);
	printf("|%d\n", n);

	//test 110
	printf("test %d|", test++);
	n = printf("%-3.7u", 3267);
	printf("|%d\n", n);

	//test 111
	printf("test %d|", test++);
	n = printf("%-3.3u", 6983);
	printf("|%d\n", n);

	//test 112
	printf("test %d|", test++);
	n = printf("%08.5u", 34);
	printf("|%d\n", n);

	//test 113
	printf("test %d|", test++);
	n = printf("%08.5u", 0);
	printf("|%d\n", n);

	//test 114
	printf("test %d|", test++);
	n = printf("%08.3u", 8375);
	printf("|%d\n", n);

	//test 115
	printf("test %d|", test++);
	n = printf("%03.7u", 3267);
	printf("|%d\n", n);

	//test 116
	printf("test %d|", test++);
	n = printf("%03.3u", 6983);
	printf("|%d\n", n);

	//test 117
	printf("test %d|", test++);
	n = printf("%0-8.5u", 34);
	printf("|%d\n", n);

	//test 118
	printf("test %d|", test++);
	n = printf("%0-8.5u", 0);
	printf("|%d\n", n);

	//test 119
	printf("test %d|", test++);
	n = printf("%0-8.3u", 8375);
	printf("|%d\n", n);

	//test 120
	printf("test %d|", test++);
	n = printf("%0-3.7u", 3267);
	printf("|%d\n", n);

	//test 121
	printf("test %d|", test++);
	n = printf("%0-3.3u", 6983);
	printf("|%d\n", n);

	//test 122
	printf("test %d|", test++);
	n = printf("%.0u", 0);
	printf("|%d\n", n);

	//test 123
	printf("test %d|", test++);
	n = printf("%.u", 0);
	printf("|%d\n", n);

	//test 124
	printf("test %d|", test++);
	n = printf("%5.0u", 0);
	printf("|%d\n", n);

	//test 125
	printf("test %d|", test++);
	n = printf("%5.u", 0);
	printf("|%d\n", n);

	//test 126
	printf("test %d|", test++);
	n = printf("%-5.0u", 0);
	printf("|%d\n", n);

	//test 127
	printf("test %d|", test++);
	n = printf("%-5.u", 0);
	printf("|%d\n", n);

	//test 128
	printf("test %d|", test++);
	n = printf("%u", 42);
	printf("|%d\n", n);

	//test 129
	printf("test %d|", test++);
	n = printf("%+u", 42);
	printf("|%d\n", n);

	//test 130
	printf("test %d|", test++);
	n = printf("% u", 42);
	printf("|%d\n", n);

	//test 131
	printf("test %d|", test++);
	n = printf("%-u", 42);
	printf("|%d\n", n);

	//test 132
	printf("test %d|", test++);
	n = printf("%+u", 5);
	printf("|%d\n", n);

	//test 133
	printf("test %d|", test++);
	n = printf("%+u", 5);
	printf("|%d\n", n);

	//test 134
	printf("test %d|", test++);
	n = printf("%+u", 4294967295);
	printf("|%d\n", n);

	//test 135
	printf("test %d|", test++);
	n = printf("%+5u", 35);
	printf("|%d\n", n);

	//test 136
	printf("test %d|", test++);
	n = printf("%+7u", 0);
	printf("|%d\n", n);

	//test 137
	printf("test %d|", test++);
	n = printf("%+24u", 4294967295);
	printf("|%d\n", n);

	//test 138
	printf("test %d|", test++);
	n = printf("%+.7u", 234);
	printf("|%d\n", n);

	//test 139
	printf("test %d|", test++);
	n = printf("%+.3u", 3723);
	printf("|%d\n", n);

	//test 140
	printf("test %d|", test++);
	n = printf("%+05u", 432);
	printf("|%d\n", n);

	//test 141
	printf("test %d|", test++);
	n = printf("%+04u", 0);
	printf("|%d\n", n);

	//test 142
	printf("test %d|", test++);
	n = printf("%+8.5u", 34);
	printf("|%d\n", n);

	//test 143
	printf("test %d|", test++);
	n = printf("%+8.5u", 0);
	printf("|%d\n", n);

	//test 144
	printf("test %d|", test++);
	n = printf("%+8.3u", 8375);
	printf("|%d\n", n);

	//test 145
	printf("test %d|", test++);
	n = printf("%+3.7u", 3267);
	printf("|%d\n", n);

	//test 146
	printf("test %d|", test++);
	n = printf("%+3.3u", 6983);
	printf("|%d\n", n);

	//test 147
	printf("test %d|", test++);
	n = printf("%+-8.5u", 34);
	printf("|%d\n", n);

	//test 148
	printf("test %d|", test++);
	n = printf("%+-8.5u", 0);
	printf("|%d\n", n);

	//test 149
	printf("test %d|", test++);
	n = printf("%+-8.3u", 8375);
	printf("|%d\n", n);

	//test 150
	printf("test %d|", test++);
	n = printf("%+-3.7u", 3267);
	printf("|%d\n", n);

	//test 151
	printf("test %d|", test++);
	n = printf("%+-3.3u", 6983);
	printf("|%d\n", n);

	//test 152
	printf("test %d|", test++);
	n = printf("%0+8.5u", 34);
	printf("|%d\n", n);

	//test 153
	printf("test %d|", test++);
	n = printf("%0+8.5u", 0);
	printf("|%d\n", n);

	//test 154
	printf("test %d|", test++);
	n = printf("%0+8.3u", 8375);
	printf("|%d\n", n);

	//test 155
	printf("test %d|", test++);
	n = printf("%0+3.7u", 3267);
	printf("|%d\n", n);

	//test 156
	printf("test %d|", test++);
	n = printf("%0+3.3u", 6983);
	printf("|%d\n", n);

	//test 157
	printf("test %d|", test++);
	n = printf("%0+-8.5u", 34);
	printf("|%d\n", n);

	//test 158
	printf("test %d|", test++);
	n = printf("%0+-8.5u", 0);
	printf("|%d\n", n);

	//test 159
	printf("test %d|", test++);
	n = printf("%0+-8.3u", 8375);
	printf("|%d\n", n);

	//test 160
	printf("test %d|", test++);
	n = printf("%0+-3.7u", 3267);
	printf("|%d\n", n);

	//test 161
	printf("test %d|", test++);
	n = printf("%0+-3.3u", 6983);
	printf("|%d\n", n);

	//test 162
	printf("test %d|", test++);
	n = printf("%u");
	printf("|%d\n", n);

	//test 163
	printf("test %d|", test++);
	n = printf("%u", NULL);
	printf("|%d\n", n);

	//test 164
	printf("test %d|", test++);
	n = printf("%u", 3);
	printf("|%d\n", n);

	//test 165
	printf("test %d|", test++);
	n = printf("%u", 4294967295u);
	printf("|%d\n", n);

	//test 166
	printf("test %d|", test++);
	n = printf("%7u", 33);
	printf("|%d\n", n);

	//test 167
	printf("test %d|", test++);
	n = printf("%3u", 0);
	printf("|%d\n", n);

	//test 168
	printf("test %d|", test++);
	n = printf("%5u", 52625);
	printf("|%d\n", n);

	//test 169
	printf("test %d|", test++);
	n = printf("%4u", 94827);
	printf("|%d\n", n);

	//test 170
	printf("test %d|", test++);
	n = printf("%-7u", 33);
	printf("|%d\n", n);

	//test 171
	printf("test %d|", test++);
	n = printf("%-3u", 0);
	printf("|%d\n", n);

	//test 172
	printf("test %d|", test++);
	n = printf("%-5u", 52625);
	printf("|%d\n", n);

	//test 173
	printf("test %d|", test++);
	n = printf("%-4u", 94827);
	printf("|%d\n", n);

	//test 174
	printf("test %d|", test++);
	n = printf("%.5u", 2);
	printf("|%d\n", n);

	//test 175
	printf("test %d|", test++);
	n = printf("%.3u", 0);
	printf("|%d\n", n);

	//test 176
	printf("test %d|", test++);
	n = printf("%.4u", 5263);
	printf("|%d\n", n);

	//test 177
	printf("test %d|", test++);
	n = printf("%.3u", 13862);
	printf("|%d\n", n);

	//test 178
	printf("test %d|", test++);
	n = printf("%05u", 43);
	printf("|%d\n", n);

	//test 179
	printf("test %d|", test++);
	n = printf("%03u", 0);
	printf("|%d\n", n);

	//test 180
	printf("test %d|", test++);
	n = printf("%03u", 634);
	printf("|%d\n", n);

	//test 181
	printf("test %d|", test++);
	n = printf("%8.5u", 34);
	printf("|%d\n", n);

	//test 182
	printf("test %d|", test++);
	n = printf("%8.5u", 0);
	printf("|%d\n", n);

	//test 183
	printf("test %d|", test++);
	n = printf("%8.3u", 8375);
	printf("|%d\n", n);

	//test 184
	printf("test %d|", test++);
	n = printf("%3.7u", 3267);
	printf("|%d\n", n);

	//test 185
	printf("test %d|", test++);
	n = printf("%3.3u", 6983);
	printf("|%d\n", n);

	//test 186
	printf("test %d|", test++);
	n = printf("%-8.5u", 34);
	printf("|%d\n", n);

	//test 187
	printf("test %d|", test++);
	n = printf("%-8.5u", 0);
	printf("|%d\n", n);

	//test 188
	printf("test %d|", test++);
	n = printf("%-8.3u", 8375);
	printf("|%d\n", n);

	//test 189
	printf("test %d|", test++);
	n = printf("%-3.7u", 3267);
	printf("|%d\n", n);

	//test 190
	printf("test %d|", test++);
	n = printf("%-3.3u", 6983);
	printf("|%d\n", n);

	//test 191
	printf("test %d|", test++);
	n = printf("%08.5u", 34);
	printf("|%d\n", n);

	//test 192
	printf("test %d|", test++);
	n = printf("%08.5u", 0);
	printf("|%d\n", n);

	//test 193
	printf("test %d|", test++);
	n = printf("%08.3u", 8375);
	printf("|%d\n", n);

	//test 194
	printf("test %d|", test++);
	n = printf("%03.7u", 3267);
	printf("|%d\n", n);

	//test 195
	printf("test %d|", test++);
	n = printf("%03.3u", 6983);
	printf("|%d\n", n);

	//test 196
	printf("test %d|", test++);
	n = printf("%0-8.5u", 34);
	printf("|%d\n", n);

	//test 197
	printf("test %d|", test++);
	n = printf("%0-8.5u", 0);
	printf("|%d\n", n);

	//test 198
	printf("test %d|", test++);
	n = printf("%0-8.3u", 8375);
	printf("|%d\n", n);

	//test 199
	printf("test %d|", test++);
	n = printf("%0-3.7u", 3267);
	printf("|%d\n", n);

	//test 200
	printf("test %d|", test++);
	n = printf("%0-3.3u", 6983);
	printf("|%d\n", n);

	//test 201
	printf("test %d|", test++);
	n = printf("%.0u", 0);
	printf("|%d\n", n);

	//test 202
	printf("test %d|", test++);
	n = printf("%.u", 0);
	printf("|%d\n", n);

	//test 203
	printf("test %d|", test++);
	n = printf("%5.0u", 0);
	printf("|%d\n", n);

	//test 204
	printf("test %d|", test++);
	n = printf("%5.u", 0);
	printf("|%d\n", n);

	//test 205
	printf("test %d|", test++);
	n = printf("%-5.0u", 0);
	printf("|%d\n", n);

	//test 206
	printf("test %d|", test++);
	n = printf("%-5.u", 0);
	printf("|%d\n", n);

	return (0);
}