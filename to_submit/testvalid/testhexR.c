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

	//test 589
	printf("test %d|", test++);
	n = printf("%00x", -0); //
	printf("|%d\n", n);

	//test 1
	printf("test %d|", test++);
	n = printf("%01.0x", -0); //
	printf("|%d\n", n);

	//test 2
	printf("test %d|", test++);
	n = printf("%02.x", -42); //
	printf("|%d\n", n);

	//test 3
	printf("test %d|", test++);
	n = printf("%03.0x", -42); //
	printf("|%d\n", n);
	
	//test 4
	printf("test %d|", test++);
	n = printf("%04.1x", -42); //
	printf("|%d\n", n);
	
	//test 5
	printf("test %d|", test++);
	n = printf("%05.2x", -42); //
	printf("|%d\n", n);
	
	//test 6
	printf("test %d|", test++);
	n = printf("%06.3x", -42); //
	printf("|%d\n", n);
	
	//test 7
	printf("test %d|", test++);
	n = printf("%07.4x", -42); //
	printf("|%d\n", n);
	
	//test 8
	printf("test %d|", test++);
	n = printf("%08.5x", -42); //
	printf("|%d\n", n);
	
	//test 9
	printf("test %d|", test++);
	n = printf("%09.6x", -42); //
	printf("|%d\n", n);

	//test 10
	printf("test %d|", test++);
	n = printf("%010x", 0); //
	printf("|%d\n", n);

	//test 11
	printf("test %d|", test++);
	n = printf("%011.0x", 0); //
	printf("|%d\n", n);

	//test 12
	printf("test %d|", test++);
	n = printf("%012.x", 42); //
	printf("|%d\n", n);

	//test 13
	printf("test %d|", test++);
	n = printf("%013.0x", 42); //
	printf("|%d\n", n);
	
	//test 14
	printf("test %d|", test++);
	n = printf("%014.1x", 42); //
	printf("|%d\n", n);
	
	//test 15
	printf("test %d|", test++);
	n = printf("%015.2x", 42); //
	printf("|%d\n", n);
	
	//test 16
	printf("test %d|", test++);
	n = printf("%016.3x", 42); //
	printf("|%d\n", n);
	
	//test 17
	printf("test %d|", test++);
	n = printf("%017.4x", 42); //
	printf("|%d\n", n);
	
	//test 18
	printf("test %d|", test++);
	n = printf("%018.5x", 42); //
	printf("|%d\n", n);
	
	//test 19
	printf("test %d|", test++);
	n = printf("%019.6x", 42); //
	printf("|%d\n", n);

	//test 20
	printf("test %d|", test++);
	n = printf("%+x", 42);
	printf("|%d\n", n);

	
	//test 21
	printf("test %d|", test++);
	n = printf("% x", 42);
	printf("|%d\n", n);

	
	//test 22
	printf("test %d|", test++);
	n = printf("%+X", 42);
	printf("|%d\n", n);

	
	//test 23
	printf("test %d|", test++);
	n = printf("% X", 42);
	printf("|%d\n", n);

	
	//test 24
	printf("test %d|", test++);
	n = printf("%##x", 42);
	printf("|%d\n", n);

	
	//test 25
	printf("test %d|", test++);
	n = printf("%#++#-5x", 42);
	printf("|%d\n", n);

	
	//test 26
	printf("test %d|", test++);
	n = printf("%-x", 42);
	printf("|%d\n", n);

	
	//test 27
	printf("test %d|", test++);
	n = printf("%x");
	printf("|%d\n", n);

	
	//test 28
	printf("test %d|", test++);
	n = printf("%X");
	printf("|%d\n", n);

	
	//test 29
	printf("test %d|", test++);
	n = printf("%x", NULL);
	printf("|%d\n", n);

	
	//test 30
	printf("test %d|", test++);
	n = printf("%X", NULL);
	printf("|%d\n", n);

	
	//test 31
	printf("test %d|", test++);
	n = printf("%x", 3);
	printf("|%d\n", n);

	
	//test 32
	printf("test %d|", test++);
	n = printf("%x", 4294967295u);
	printf("|%d\n", n);

	
	//test 33
	printf("test %d|", test++);
	n = printf("%7x", 33);
	printf("|%d\n", n);

	
	//test 34
	printf("test %d|", test++);
	n = printf("%3x", 0);
	printf("|%d\n", n);

	
	//test 35
	printf("test %d|", test++);
	n = printf("%5x", 52625);
	printf("|%d\n", n);

	
	//test 36
	printf("test %d|", test++);
	n = printf("%2x", 94827);
	printf("|%d\n", n);

	
	//test 37
	printf("test %d|", test++);
	n = printf("%-7x", 33);
	printf("|%d\n", n);

	
	//test 38
	printf("test %d|", test++);
	n = printf("%-3x", 0);
	printf("|%d\n", n);

	
	//test 39
	printf("test %d|", test++);
	n = printf("%-5x", 52625);
	printf("|%d\n", n);

	
	//test 40
	printf("test %d|", test++);
	n = printf("%-4x", 9648627);
	printf("|%d\n", n);

	
	//test 41
	printf("test %d|", test++);
	n = printf("%.5x", 21);
	printf("|%d\n", n);

	
	//test 42
	printf("test %d|", test++);
	n = printf("%.3x", 0);
	printf("|%d\n", n);

	
	//test 43
	printf("test %d|", test++);
	n = printf("%.4x", 5263);
	printf("|%d\n", n);

	
	//test 44
	printf("test %d|", test++);
	n = printf("%.3x", 938862);
	printf("|%d\n", n);

	
	//test 45
	printf("test %d|", test++);
	n = printf("%05x", 43);
	printf("|%d\n", n);

	
	//test 46
	printf("test %d|", test++);
	n = printf("%03x", 0);
	printf("|%d\n", n);

	
	//test 47
	printf("test %d|", test++);
	n = printf("%03x", 698334);
	printf("|%d\n", n);

	
	//test 48
	printf("test %d|", test++);
	n = printf("%8.5x", 34);
	printf("|%d\n", n);

	
	//test 49
	printf("test %d|", test++);
	n = printf("%8.5x", 0);
	printf("|%d\n", n);

	
	//test 50
	printf("test %d|", test++);
	n = printf("%8.3x", 8375);
	printf("|%d\n", n);

	
	//test 51
	printf("test %d|", test++);
	n = printf("%2.7x", 3267);
	printf("|%d\n", n);

	
	//test 52
	printf("test %d|", test++);
	n = printf("%3.3x", 6983);
	printf("|%d\n", n);

	
	//test 53
	printf("test %d|", test++);
	n = printf("%-8.5x", 34);
	printf("|%d\n", n);

	
	//test 54
	printf("test %d|", test++);
	n = printf("%-8.5x", 0);
	printf("|%d\n", n);

	
	//test 55
	printf("test %d|", test++);
	n = printf("%-8.3x", 8375);
	printf("|%d\n", n);

	
	//test 56
	printf("test %d|", test++);
	n = printf("%-2.7x", 3267);
	printf("|%d\n", n);

	
	//test 57
	printf("test %d|", test++);
	n = printf("%-3.3x", 6983);
	printf("|%d\n", n);

	
	//test 58
	printf("test %d|", test++);
	n = printf("%08.5x", 34);
	printf("|%d\n", n);

	
	//test 59
	printf("test %d|", test++);
	n = printf("%08.5x", 0);
	printf("|%d\n", n);

	
	//test 60
	printf("test %d|", test++);
	n = printf("%08.3x", 8375);
	printf("|%d\n", n);

	
	//test 61
	printf("test %d|", test++);
	n = printf("%02.7x", 3267);
	printf("|%d\n", n);

	
	//test 62
	printf("test %d|", test++);
	n = printf("%03.3x", 6983);
	printf("|%d\n", n);

	
	//test 63
	printf("test %d|", test++);
	n = printf("%0-8.5x", 34);
	printf("|%d\n", n);

	
	//test 64
	printf("test %d|", test++);
	n = printf("%0-8.5x", 0);
	printf("|%d\n", n);

	
	//test 65
	printf("test %d|", test++);
	n = printf("%0-8.3x", 8375);
	printf("|%d\n", n);

	
	//test 66
	printf("test %d|", test++);
	n = printf("%0-2.7x", 3267);
	printf("|%d\n", n);

	
	//test 67
	printf("test %d|", test++);
	n = printf("%0-3.3x", 6983);
	printf("|%d\n", n);

	
	//test 68
	printf("test %d|", test++);
	n = printf("%.0x", 0);
	printf("|%d\n", n);

	
	//test 69
	printf("test %d|", test++);
	n = printf("%.7x", 0);
	printf("|%d\n", n);

	
	//test 70
	printf("test %d|", test++);
	n = printf("%5.0x", 0);
	printf("|%d\n", n);

	
	//test 71
	printf("test %d|", test++);
	n = printf("%5.x", 0);
	printf("|%d\n", n);

	
	//test 72
	printf("test %d|", test++);
	n = printf("%-5.0x", 0);
	printf("|%d\n", n);

	
	//test 73
	printf("test %d|", test++);
	n = printf("%-5.x", 0);
	printf("|%d\n", n);

	
	//test 74
	printf("test %d|", test++);
	n = printf("%x", 3);
	printf("|%d\n", n);

	
	//test 75
	printf("test %d|", test++);
	n = printf("%x", 4294967295u);
	printf("|%d\n", n);

	
	//test 76
	printf("test %d|", test++);
	n = printf("%7x", 33);
	printf("|%d\n", n);

	
	//test 77
	printf("test %d|", test++);
	n = printf("%3x", 0);
	printf("|%d\n", n);

	
	//test 78
	printf("test %d|", test++);
	n = printf("%5x", 52625);
	printf("|%d\n", n);

	
	//test 79
	printf("test %d|", test++);
	n = printf("%2x", 94827);
	printf("|%d\n", n);

	
	//test 80
	printf("test %d|", test++);
	n = printf("%-7x", 33);
	printf("|%d\n", n);

	
	//test 81
	printf("test %d|", test++);
	n = printf("%-3x", 0);
	printf("|%d\n", n);

	
	//test 82
	printf("test %d|", test++);
	n = printf("%-5x", 52625);
	printf("|%d\n", n);

	
	//test 83
	printf("test %d|", test++);
	n = printf("%-4x", 9648627);
	printf("|%d\n", n);

	
	//test 84
	printf("test %d|", test++);
	n = printf("%.5x", 21);
	printf("|%d\n", n);

	
	//test 85
	printf("test %d|", test++);
	n = printf("%.3x", 0);
	printf("|%d\n", n);

	
	//test 86
	printf("test %d|", test++);
	n = printf("%.4x", 5263);
	printf("|%d\n", n);

	
	//test 87
	printf("test %d|", test++);
	n = printf("%.3x", 938862);
	printf("|%d\n", n);

	
	//test 88
	printf("test %d|", test++);
	n = printf("%05x", 43);
	printf("|%d\n", n);

	
	//test 89
	printf("test %d|", test++);
	n = printf("%03x", 0);
	printf("|%d\n", n);

	
	//test 90
	printf("test %d|", test++);
	n = printf("%03x", 698334);
	printf("|%d\n", n);

	
	//test 91
	printf("test %d|", test++);
	n = printf("%8.5x", 34);
	printf("|%d\n", n);

	
	//test 92
	printf("test %d|", test++);
	n = printf("%8.5x", 0);
	printf("|%d\n", n);

	
	//test 93
	printf("test %d|", test++);
	n = printf("%8.3x", 8375);
	printf("|%d\n", n);

	
	//test 94
	printf("test %d|", test++);
	n = printf("%2.7x", 3267);
	printf("|%d\n", n);

	
	//test 95
	printf("test %d|", test++);
	n = printf("%3.3x", 6983);
	printf("|%d\n", n);

	
	//test 96
	printf("test %d|", test++);
	n = printf("%-8.5x", 34);
	printf("|%d\n", n);

	
	//test 97
	printf("test %d|", test++);
	n = printf("%-8.5x", 0);
	printf("|%d\n", n);

	
	//test 98
	printf("test %d|", test++);
	n = printf("%-8.3x", 8375);
	printf("|%d\n", n);

	
	//test 99
	printf("test %d|", test++);
	n = printf("%-2.7x", 3267);
	printf("|%d\n", n);

	
	//test 100
	printf("test %d|", test++);
	n = printf("%-3.3x", 6983);
	printf("|%d\n", n);

	
	//test 101
	printf("test %d|", test++);
	n = printf("%08.5x", 34);
	printf("|%d\n", n);

	
	//test 102
	printf("test %d|", test++);
	n = printf("%08.5x", 0);
	printf("|%d\n", n);

	
	//test 103
	printf("test %d|", test++);
	n = printf("%08.3x", 8375);
	printf("|%d\n", n);

	
	//test 104
	printf("test %d|", test++);
	n = printf("%02.7x", 3267);
	printf("|%d\n", n);

	
	//test 105
	printf("test %d|", test++);
	n = printf("%03.3x", 6983);
	printf("|%d\n", n);

	
	//test 106
	printf("test %d|", test++);
	n = printf("%0-8.5x", 34);
	printf("|%d\n", n);

	
	//test 107
	printf("test %d|", test++);
	n = printf("%0-8.5x", 0);
	printf("|%d\n", n);

	
	//test 108
	printf("test %d|", test++);
	n = printf("%0-8.3x", 8375);
	printf("|%d\n", n);

	
	//test 109
	printf("test %d|", test++);
	n = printf("%0-2.7x", 3267);
	printf("|%d\n", n);

	
	//test 110
	printf("test %d|", test++);
	n = printf("%0-3.3x", 6983);
	printf("|%d\n", n);

	
	//test 111
	printf("test %d|", test++);
	n = printf("%.0x", 0);
	printf("|%d\n", n);

	
	//test 112
	printf("test %d|", test++);
	n = printf("%.8x", 0);
	printf("|%d\n", n);

	
	//test 113
	printf("test %d|", test++);
	n = printf("%5.0x", 0);
	printf("|%d\n", n);

	
	//test 114
	printf("test %d|", test++);
	n = printf("%5.x", 0);
	printf("|%d\n", n);

	
	//test 115
	printf("test %d|", test++);
	n = printf("%-5.0x", 0);
	printf("|%d\n", n);

	
	//test 116
	printf("test %d|", test++);
	n = printf("%-5.x", 0);
	printf("|%d\n", n);

	
	//test 117
	printf("test %d|", test++);
	n = printf("%#.0x", 0);
	printf("|%d\n", n);

	
	//test 118
	printf("test %d|", test++);
	n = printf("%#.x", 0);
	printf("|%d\n", n);

	
	//test 119
	printf("test %d|", test++);
	n = printf("%#5.0x", 0);
	printf("|%d\n", n);

	
	//test 120
	printf("test %d|", test++);
	n = printf("%#5.x", 0);
	printf("|%d\n", n);

	
	//test 121
	printf("test %d|", test++);
	n = printf("%#-5.0x", 0);
	printf("|%d\n", n);

	
	//test 122
	printf("test %d|", test++);
	n = printf("%#-5.x", 0);
	printf("|%d\n", n);

	
	//test 123
	printf("test %d|", test++);
	n = printf("%#x", 4294967295u);
	printf("|%d\n", n);

	
	//test 124
	printf("test %d|", test++);
	n = printf("%#7x", 33);
	printf("|%d\n", n);

	
	//test 125
	printf("test %d|", test++);
	n = printf("%#3x", 0);
	printf("|%d\n", n);

	
	//test 126
	printf("test %d|", test++);
	n = printf("%#5x", 52625);
	printf("|%d\n", n);

	
	//test 127
	printf("test %d|", test++);
	n = printf("%#2x", 94827);
	printf("|%d\n", n);

	
	//test 128
	printf("test %d|", test++);
	n = printf("%#-7x", 33);
	printf("|%d\n", n);

	
	//test 129
	printf("test %d|", test++);
	n = printf("%#-3x", 0);
	printf("|%d\n", n);

	
	//test 130
	printf("test %d|", test++);
	n = printf("%#-5x", 52625);
	printf("|%d\n", n);

	
	//test 131
	printf("test %d|", test++);
	n = printf("%#-4x", 9648627);
	printf("|%d\n", n);

	
	//test 132
	printf("test %d|", test++);
	n = printf("%#.5x", 21);
	printf("|%d\n", n);

	
	//test 133
	printf("test %d|", test++);
	n = printf("%#.3x", 0);
	printf("|%d\n", n);

	
	//test 134
	printf("test %d|", test++);
	n = printf("%#.4x", 5263);
	printf("|%d\n", n);

	
	//test 135
	printf("test %d|", test++);
	n = printf("%#.3x", 938862);
	printf("|%d\n", n);

	
	//test 136
	printf("test %d|", test++);
	n = printf("%#05x", 43);
	printf("|%d\n", n);

	
	//test 137
	printf("test %d|", test++);
	n = printf("%#03x", 0);
	printf("|%d\n", n);

	
	//test 138
	printf("test %d|", test++);
	n = printf("%#03x", 698334);
	printf("|%d\n", n);

	
	//test 139
	printf("test %d|", test++);
	n = printf("%#8.5x", 34);
	printf("|%d\n", n);

	
	//test 140
	printf("test %d|", test++);
	n = printf("%#8.5x", 0);
	printf("|%d\n", n);

	
	//test 141
	printf("test %d|", test++);
	n = printf("%#x", 4294967295u);
	printf("|%d\n", n);

	
	//test 142
	printf("test %d|", test++);
	n = printf("%#07x", 33);
	printf("|%d\n", n);

	
	//test 143
	printf("test %d|", test++);
	n = printf("%#3x", 0);
	printf("|%d\n", n);

	
	//test 144
	printf("test %d|", test++);
	n = printf("%#5x", 52625);
	printf("|%d\n", n);

	
	//test 145
	printf("test %d|", test++);
	n = printf("%#2x", 94827);
	printf("|%d\n", n);

	
	//test 146
	printf("test %d|", test++);
	n = printf("%#-7x", 33);
	printf("|%d\n", n);

	
	//test 147
	printf("test %d|", test++);
	n = printf("%#-3x", 0);
	printf("|%d\n", n);

	
	//test 148
	printf("test %d|", test++);
	n = printf("%#-5x", 52625);
	printf("|%d\n", n);

	
	//test 149
	printf("test %d|", test++);
	n = printf("%#-4x", 9648627);
	printf("|%d\n", n);

	
	//test 150
	printf("test %d|", test++);
	n = printf("%#.5x", 21);
	printf("|%d\n", n);

	
	//test 151
	printf("test %d|", test++);
	n = printf("%#.3x", 0);
	printf("|%d\n", n);

	
	//test 152
	printf("test %d|", test++);
	n = printf("%#.4x", 5263);
	printf("|%d\n", n);

	
	//test 153
	printf("test %d|", test++);
	n = printf("%#.3x", 938862);
	printf("|%d\n", n);

	
	//test 154
	printf("test %d|", test++);
	n = printf("%#05x", 43);
	printf("|%d\n", n);

	
	//test 155
	printf("test %d|", test++);
	n = printf("%#03x", 0);
	printf("|%d\n", n);

	
	//test 156
	printf("test %d|", test++);
	n = printf("%#03x", 698334);
	printf("|%d\n", n);

	
	//test 157
	printf("test %d|", test++);
	n = printf("%#8.5x", 34);
	printf("|%d\n", n);

	
	//test 158
	printf("test %d|", test++);
	n = printf("%#8.5x", 0);
	printf("|%d\n", n);

	
	//test 159
	printf("test %d|", test++);
	n = printf("%#.0x", 0);
	printf("|%d\n", n);

	
	//test 160
	printf("test %d|", test++);
	n = printf("%#.x", 0);
	printf("|%d\n", n);

	
	//test 161
	printf("test %d|", test++);
	n = printf("%#5.0x", 0);
	printf("|%d\n", n);

	
	//test 162
	printf("test %d|", test++);
	n = printf("%#5.x", 0);
	printf("|%d\n", n);

	
	//test 163
	printf("test %d|", test++);
	n = printf("%#-5.0x", 0);
	printf("|%d\n", n);

	
	//test 164
	printf("test %d|", test++);
	n = printf("%#-5.x", 0);
	printf("|%d\n", n);

	
	//test 165
	printf("test %d|", test++);
	n = printf("%X", 3);
	printf("|%d\n", n);

	
	//test 166
	printf("test %d|", test++);
	n = printf("%X", 4294967295u);
	printf("|%d\n", n);

	
	//test 167
	printf("test %d|", test++);
	n = printf("%7X", 33);
	printf("|%d\n", n);

	
	//test 168
	printf("test %d|", test++);
	n = printf("%3X", 0);
	printf("|%d\n", n);

	
	//test 169
	printf("test %d|", test++);
	n = printf("%5X", 52625);
	printf("|%d\n", n);

	
	//test 170
	printf("test %d|", test++);
	n = printf("%2X", 94827);
	printf("|%d\n", n);

	
	//test 171
	printf("test %d|", test++);
	n = printf("%-7X", 33);
	printf("|%d\n", n);

	
	//test 172
	printf("test %d|", test++);
	n = printf("%-3X", 0);
	printf("|%d\n", n);

	
	//test 173
	printf("test %d|", test++);
	n = printf("%-5X", 52625);
	printf("|%d\n", n);

	
	//test 174
	printf("test %d|", test++);
	n = printf("%-4X", 9648627);
	printf("|%d\n", n);

	
	//test 175
	printf("test %d|", test++);
	n = printf("%.5X", 21);
	printf("|%d\n", n);

	
	//test 176
	printf("test %d|", test++);
	n = printf("%.3X", 0);
	printf("|%d\n", n);

	
	//test 177
	printf("test %d|", test++);
	n = printf("%.4X", 5263);
	printf("|%d\n", n);

	
	//test 178
	printf("test %d|", test++);
	n = printf("%.3X", 938862);
	printf("|%d\n", n);

	
	//test 179
	printf("test %d|", test++);
	n = printf("%05X", 43);
	printf("|%d\n", n);

	
	//test 180
	printf("test %d|", test++);
	n = printf("%03X", 0);
	printf("|%d\n", n);

	
	//test 181
	printf("test %d|", test++);
	n = printf("%03X", 698334);
	printf("|%d\n", n);

	
	//test 182
	printf("test %d|", test++);
	n = printf("%8.5X", 34);
	printf("|%d\n", n);

	
	//test 183
	printf("test %d|", test++);
	n = printf("%8.5X", 0);
	printf("|%d\n", n);

	
	//test 184
	printf("test %d|", test++);
	n = printf("%8.3X", 8375);
	printf("|%d\n", n);

	
	//test 185
	printf("test %d|", test++);
	n = printf("%2.7X", 3267);
	printf("|%d\n", n);

	
	//test 186
	printf("test %d|", test++);
	n = printf("%3.3X", 6983);
	printf("|%d\n", n);

	
	//test 187
	printf("test %d|", test++);
	n = printf("%-8.5X", 34);
	printf("|%d\n", n);

	
	//test 188
	printf("test %d|", test++);
	n = printf("%-8.5X", 0);
	printf("|%d\n", n);

	
	//test 189
	printf("test %d|", test++);
	n = printf("%-8.3X", 8375);
	printf("|%d\n", n);

	
	//test 190
	printf("test %d|", test++);
	n = printf("%-2.7X", 3267);
	printf("|%d\n", n);

	
	//test 191
	printf("test %d|", test++);
	n = printf("%-3.3X", 6983);
	printf("|%d\n", n);

	
	//test 192
	printf("test %d|", test++);
	n = printf("%08.5X", 34);
	printf("|%d\n", n);

	
	//test 193
	printf("test %d|", test++);
	n = printf("%08.5X", 0);
	printf("|%d\n", n);

	
	//test 194
	printf("test %d|", test++);
	n = printf("%08.3X", 8375);
	printf("|%d\n", n);

	
	//test 195
	printf("test %d|", test++);
	n = printf("%02.7X", 3267);
	printf("|%d\n", n);

	
	//test 196
	printf("test %d|", test++);
	n = printf("%03.3X", 6983);
	printf("|%d\n", n);

	
	//test 197
	printf("test %d|", test++);
	n = printf("%0-8.5X", 34);
	printf("|%d\n", n);

	
	//test 198
	printf("test %d|", test++);
	n = printf("%0-8.5X", 0);
	printf("|%d\n", n);

	
	//test 199
	printf("test %d|", test++);
	n = printf("%0-8.3X", 8375);
	printf("|%d\n", n);

	
	//test 200
	printf("test %d|", test++);
	n = printf("%0-2.7X", 3267);
	printf("|%d\n", n);

	
	//test 201
	printf("test %d|", test++);
	n = printf("%0-3.3X", 6983);
	printf("|%d\n", n);

	
	//test 202
	printf("test %d|", test++);
	n = printf("%#X", 3);
	printf("|%d\n", n);

	
	//test 203
	printf("test %d|", test++);
	n = printf("%#X", 4294967295u);
	printf("|%d\n", n);

	
	//test 204
	printf("test %d|", test++);
	n = printf("%#7X", 33);
	printf("|%d\n", n);

	
	//test 205
	printf("test %d|", test++);
	n = printf("%#3X", 0);
	printf("|%d\n", n);

	
	//test 206
	printf("test %d|", test++);
	n = printf("%#7X", 52625);
	printf("|%d\n", n);

	
	//test 207
	printf("test %d|", test++);
	n = printf("%#2X", 94827);
	printf("|%d\n", n);

	
	//test 208
	printf("test %d|", test++);
	n = printf("%#-7X", 33);
	printf("|%d\n", n);

	
	//test 209
	printf("test %d|", test++);
	n = printf("%#-3X", 0);
	printf("|%d\n", n);

	
	//test 210
	printf("test %d|", test++);
	n = printf("%#-7X", 52625);
	printf("|%d\n", n);

	
	//test 211
	printf("test %d|", test++);
	n = printf("%#-4X", 9648627);
	printf("|%d\n", n);

	
	//test 212
	printf("test %d|", test++);
	n = printf("%#.5X", 21);
	printf("|%d\n", n);

	
	//test 213
	printf("test %d|", test++);
	n = printf("%#.3X", 0);
	printf("|%d\n", n);

	
	//test 214
	printf("test %d|", test++);
	n = printf("%#.4X", 5263);
	printf("|%d\n", n);

	
	//test 215
	printf("test %d|", test++);
	n = printf("%#.3X", 938862);
	printf("|%d\n", n);

	
	//test 216
	printf("test %d|", test++);
	n = printf("%#05X", 43);
	printf("|%d\n", n);

	
	//test 217
	printf("test %d|", test++);
	n = printf("%#03X", 0);
	printf("|%d\n", n);

	
	//test 218
	printf("test %d|", test++);
	n = printf("%#03X", 698334);
	printf("|%d\n", n);

	
	//test 219
	printf("test %d|", test++);
	n = printf("%#8.5X", 34);
	printf("|%d\n", n);

	
	//test 220
	printf("test %d|", test++);
	n = printf("%#8.5X", 0);
	printf("|%d\n", n);

	
	//test 221
	printf("test %d|", test++);
	n = printf("%#8.3X", 8375);
	printf("|%d\n", n);

	
	//test 222
	printf("test %d|", test++);
	n = printf("%#2.7X", 3267);
	printf("|%d\n", n);

	
	//test 223
	printf("test %d|", test++);
	n = printf("%#3.3X", 6983);
	printf("|%d\n", n);

	
	//test 224
	printf("test %d|", test++);
	n = printf("%#-8.5X", 34);
	printf("|%d\n", n);

	
	//test 225
	printf("test %d|", test++);
	n = printf("%#-8.5X", 0);
	printf("|%d\n", n);

	
	//test 226
	printf("test %d|", test++);
	n = printf("%#-8.3X", 8375);
	printf("|%d\n", n);

	
	//test 227
	printf("test %d|", test++);
	n = printf("%5.X", 0);
	printf("|%d\n", n);

	
	//test 228
	printf("test %d|", test++);
	n = printf("%-5.X", 0);
	printf("|%d\n", n);

	
	//test 229
	printf("test %d|", test++);
	n = printf("%#.0X", 0);
	printf("|%d\n", n);

	
	//test 230
	printf("test %d|", test++);
	n = printf("%#.X", 0);
	printf("|%d\n", n);

	
	//test 231
	printf("test %d|", test++);
	n = printf("%#5.0X", 0);
	printf("|%d\n", n);

	
	//test 232
	printf("test %d|", test++);
	n = printf("%#5.X", 0);
	printf("|%d\n", n);

	
	//test 233
	printf("test %d|", test++);
	n = printf("%#-5.0X", 0);
	printf("|%d\n", n);

	
	//test 234
	printf("test %d|", test++);
	n = printf("%#-5.X", 0);
	printf("|%d\n", n);

	
	//test 235
	printf("test %d|", test++);
	n = printf("%X", 3);
	printf("|%d\n", n);

	
	//test 236
	printf("test %d|", test++);
	n = printf("%X", 4294967295u);
	printf("|%d\n", n);

	
	//test 237
	printf("test %d|", test++);
	n = printf("%7X", 33);
	printf("|%d\n", n);

	
	//test 238
	printf("test %d|", test++);
	n = printf("%3X", 0);
	printf("|%d\n", n);

	
	//test 239
	printf("test %d|", test++);
	n = printf("%5X", 52625);
	printf("|%d\n", n);

	
	//test 240
	printf("test %d|", test++);
	n = printf("%2X", 94827);
	printf("|%d\n", n);

	
	//test 241
	printf("test %d|", test++);
	n = printf("%-7X", 33);
	printf("|%d\n", n);

	
	//test 242
	printf("test %d|", test++);
	n = printf("%-3X", 0);
	printf("|%d\n", n);

	
	//test 243
	printf("test %d|", test++);
	n = printf("%-5X", 52625);
	printf("|%d\n", n);

	
	//test 244
	printf("test %d|", test++);
	n = printf("%-4X", 9648627);
	printf("|%d\n", n);

	
	//test 245
	printf("test %d|", test++);
	n = printf("%.5X", 21);
	printf("|%d\n", n);

	
	//test 246
	printf("test %d|", test++);
	n = printf("%.3X", 0);
	printf("|%d\n", n);

	
	//test 247
	printf("test %d|", test++);
	n = printf("%.4X", 5263);
	printf("|%d\n", n);

	
	//test 248
	printf("test %d|", test++);
	n = printf("%.3X", 938862);
	printf("|%d\n", n);

	
	//test 249
	printf("test %d|", test++);
	n = printf("%05X", 43);
	printf("|%d\n", n);

	
	//test 250
	printf("test %d|", test++);
	n = printf("%03X", 0);
	printf("|%d\n", n);

	
	//test 251
	printf("test %d|", test++);
	n = printf("%03X", 698334);
	printf("|%d\n", n);

	
	//test 252
	printf("test %d|", test++);
	n = printf("%8.5X", 34);
	printf("|%d\n", n);

	
	//test 253
	printf("test %d|", test++);
	n = printf("%8.5X", 0);
	printf("|%d\n", n);

	
	//test 254
	printf("test %d|", test++);
	n = printf("%8.3X", 8375);
	printf("|%d\n", n);

	
	//test 255
	printf("test %d|", test++);
	n = printf("%2.7X", 3267);
	printf("|%d\n", n);

	
	//test 256
	printf("test %d|", test++);
	n = printf("%3.3X", 6983);
	printf("|%d\n", n);

	
	//test 257
	printf("test %d|", test++);
	n = printf("%-8.5X", 34);
	printf("|%d\n", n);

	
	//test 258
	printf("test %d|", test++);
	n = printf("%-8.5X", 0);
	printf("|%d\n", n);

	
	//test 259
	printf("test %d|", test++);
	n = printf("%-8.3X", 8375);
	printf("|%d\n", n);

	
	//test 260
	printf("test %d|", test++);
	n = printf("%-2.7X", 3267);
	printf("|%d\n", n);

	
	//test 261
	printf("test %d|", test++);
	n = printf("%-3.3X", 6983);
	printf("|%d\n", n);

	
	//test 262
	printf("test %d|", test++);
	n = printf("%08.5X", 34);
	printf("|%d\n", n);

	
	//test 263
	printf("test %d|", test++);
	n = printf("%08.5X", 0);
	printf("|%d\n", n);

	
	//test 264
	printf("test %d|", test++);
	n = printf("%08.3X", 8375);
	printf("|%d\n", n);

	
	//test 265
	printf("test %d|", test++);
	n = printf("%02.7X", 3267);
	printf("|%d\n", n);

	
	//test 266
	printf("test %d|", test++);
	n = printf("%03.3X", 6983);
	printf("|%d\n", n);

	
	//test 267
	printf("test %d|", test++);
	n = printf("%0-8.5X", 34);
	printf("|%d\n", n);

	
	//test 268
	printf("test %d|", test++);
	n = printf("%0-8.5X", 0);
	printf("|%d\n", n);

	
	//test 269
	printf("test %d|", test++);
	n = printf("%0-8.3X", 8375);
	printf("|%d\n", n);

	
	//test 270
	printf("test %d|", test++);
	n = printf("%0-2.7X", 3267);
	printf("|%d\n", n);

	
	//test 271
	printf("test %d|", test++);
	n = printf("%0-3.3X", 6983);
	printf("|%d\n", n);

	
	//test 272
	printf("test %d|", test++);
	n = printf("%#X", 3);
	printf("|%d\n", n);

	
	//test 273
	printf("test %d|", test++);
	n = printf("%#X", 4294967295u);
	printf("|%d\n", n);

	
	//test 274
	printf("test %d|", test++);
	n = printf("%#7X", 33);
	printf("|%d\n", n);

	
	//test 275
	printf("test %d|", test++);
	n = printf("%#3X", 0);
	printf("|%d\n", n);

	
	//test 276
	printf("test %d|", test++);
	n = printf("%#7X", 52625);
	printf("|%d\n", n);

	
	//test 277
	printf("test %d|", test++);
	n = printf("%#2X", 94827);
	printf("|%d\n", n);

	
	//test 278
	printf("test %d|", test++);
	n = printf("%#-7X", 33);
	printf("|%d\n", n);

	
	//test 279
	printf("test %d|", test++);
	n = printf("%#-3X", 0);
	printf("|%d\n", n);

	
	//test 280
	printf("test %d|", test++);
	n = printf("%#-7X", 52625);
	printf("|%d\n", n);

	
	//test 281
	printf("test %d|", test++);
	n = printf("%#-4X", 9648627);
	printf("|%d\n", n);

	
	//test 282
	printf("test %d|", test++);
	n = printf("%#.5X", 21);
	printf("|%d\n", n);

	
	//test 283
	printf("test %d|", test++);
	n = printf("%#.3X", 0);
	printf("|%d\n", n);

	
	//test 284
	printf("test %d|", test++);
	n = printf("%#.4X", 5263);
	printf("|%d\n", n);

	
	//test 285
	printf("test %d|", test++);
	n = printf("%#.3X", 938862);
	printf("|%d\n", n);

	
	//test 286
	printf("test %d|", test++);
	n = printf("%#05X", 43);
	printf("|%d\n", n);

	
	//test 287
	printf("test %d|", test++);
	n = printf("%#03X", 0);
	printf("|%d\n", n);

	
	//test 288
	printf("test %d|", test++);
	n = printf("%#03X", 698334);
	printf("|%d\n", n);

	
	//test 289
	printf("test %d|", test++);
	n = printf("%#8.5X", 34);
	printf("|%d\n", n);

	
	//test 290
	printf("test %d|", test++);
	n = printf("%#8.5X", 0);
	printf("|%d\n", n);

	
	//test 291
	printf("test %d|", test++);
	n = printf("%#8.3X", 8375);
	printf("|%d\n", n);

	
	//test 292
	printf("test %d|", test++);
	n = printf("%#2.7X", 3267);
	printf("|%d\n", n);

	
	//test 293
	printf("test %d|", test++);
	n = printf("%#3.3X", 6983);
	printf("|%d\n", n);

	
	//test 294
	printf("test %d|", test++);
	n = printf("%#-8.5X", 34);
	printf("|%d\n", n);

	
	//test 295
	printf("test %d|", test++);
	n = printf("%#-8.5X", 0);
	printf("|%d\n", n);

	
	//test 296
	printf("test %d|", test++);
	n = printf("%#-8.3X", 8375);	
	printf("|%d\n", n);

	
	//test 297
	printf("test %d|", test++);
	n = printf("%5.X", 0);
	printf("|%d\n", n);

	
	//test 298
	printf("test %d|", test++);
	n = printf("%-5.X", 0);
	printf("|%d\n", n);

	
	//test 299
	printf("test %d|", test++);
	n = printf("%#.0X", 0);
	printf("|%d\n", n);

	
	//test 300
	printf("test %d|", test++);
	n = printf("%#.X", 0);
	printf("|%d\n", n);

	
	//test 301
	printf("test %d|", test++);
	n = printf("%#5.0X", 0);
	printf("|%d\n", n);

	
	//test 302
	printf("test %d|", test++);
	n = printf("%#5.X", 0);
	printf("|%d\n", n);

	
	//test 303
	printf("test %d|", test++);
	n = printf("%#-5.0X", 0);
	printf("|%d\n", n);

	
	//test 304
	printf("test %d|", test++);
	n = printf("%#-5.X", 0);
	printf("|%d\n", n);

	
	//test 305
	printf("test %d|", test++);
	n = printf("%+x", 42);
	printf("|%d\n", n);

	
	//test 306
	printf("test %d|", test++);
	n = printf("% x", 42);
	printf("|%d\n", n);

	
	//test 307
	printf("test %d|", test++);
	n = printf("%+X", 42);
	printf("|%d\n", n);

	
	//test 308
	printf("test %d|", test++);
	n = printf("% X", 42);
	printf("|%d\n", n);

	
	//test 309
	printf("test %d|", test++);
	n = printf("%##x", 42);
	printf("|%d\n", n);

	
	//test 310
	printf("test %d|", test++);
	n = printf("%#++#-5x", 42);
	printf("|%d\n", n);

	
	//test 311
	printf("test %d|", test++);
	n = printf("%-x", 42);
	printf("|%d\n", n);

	
	//test 312
	printf("test %d|", test++);
	n = printf("%x");
	printf("|%d\n", n);

	
	//test 313
	printf("test %d|", test++);
	n = printf("%X");
	printf("|%d\n", n);

	
	//test 314
	printf("test %d|", test++);
	n = printf("%x", NULL);
	printf("|%d\n", n);

	
	//test 315
	printf("test %d|", test++);
	n = printf("%X", NULL);
	printf("|%d\n", n);

	
	//test 316
	printf("test %d|", test++);
	n = printf("%x", 3);
	printf("|%d\n", n);

	
	//test 317
	printf("test %d|", test++);
	n = printf("%x", 4294967295u);
	printf("|%d\n", n);

	
	//test 318
	printf("test %d|", test++);
	n = printf("%7x", 33);
	printf("|%d\n", n);

	
	//test 319
	printf("test %d|", test++);
	n = printf("%3x", 0);
	printf("|%d\n", n);

	
	//test 320
	printf("test %d|", test++);
	n = printf("%5x", 52625);
	printf("|%d\n", n);

	
	//test 321
	printf("test %d|", test++);
	n = printf("%2x", 94827);
	printf("|%d\n", n);

	
	//test 322
	printf("test %d|", test++);
	n = printf("%-7x", 33);
	printf("|%d\n", n);

	
	//test 323
	printf("test %d|", test++);
	n = printf("%-3x", 0);
	printf("|%d\n", n);

	
	//test 324
	printf("test %d|", test++);
	n = printf("%-5x", 52625);
	printf("|%d\n", n);

	
	//test 325
	printf("test %d|", test++);
	n = printf("%-4x", 9648627);
	printf("|%d\n", n);

	
	//test 326
	printf("test %d|", test++);
	n = printf("%.5x", 21);
	printf("|%d\n", n);

	
	//test 327
	printf("test %d|", test++);
	n = printf("%.3x", 0);
	printf("|%d\n", n);

	
	//test 328
	printf("test %d|", test++);
	n = printf("%.4x", 5263);
	printf("|%d\n", n);

	
	//test 329
	printf("test %d|", test++);
	n = printf("%.3x", 938862);
	printf("|%d\n", n);

	
	//test 330
	printf("test %d|", test++);
	n = printf("%05x", 43);
	printf("|%d\n", n);

	
	//test 331
	printf("test %d|", test++);
	n = printf("%03x", 0);
	printf("|%d\n", n);

	
	//test 332
	printf("test %d|", test++);
	n = printf("%03x", 698334);
	printf("|%d\n", n);

	
	//test 333
	printf("test %d|", test++);
	n = printf("%8.5x", 34);
	printf("|%d\n", n);

	
	//test 334
	printf("test %d|", test++);
	n = printf("%8.5x", 0);
	printf("|%d\n", n);

	
	//test 335
	printf("test %d|", test++);
	n = printf("%8.3x", 8375);
	printf("|%d\n", n);

	
	//test 336
	printf("test %d|", test++);
	n = printf("%2.7x", 3267);
	printf("|%d\n", n);

	
	//test 337
	printf("test %d|", test++);
	n = printf("%3.3x", 6983);
	printf("|%d\n", n);

	
	//test 338
	printf("test %d|", test++);
	n = printf("%-8.5x", 34);
	printf("|%d\n", n);

	
	//test 339
	printf("test %d|", test++);
	n = printf("%-8.5x", 0);
	printf("|%d\n", n);

	
	//test 340
	printf("test %d|", test++);
	n = printf("%-8.3x", 8375);
	printf("|%d\n", n);

	
	//test 341
	printf("test %d|", test++);
	n = printf("%-2.7x", 3267);
	printf("|%d\n", n);

	
	//test 342
	printf("test %d|", test++);
	n = printf("%-3.3x", 6983);
	printf("|%d\n", n);

	
	//test 343
	printf("test %d|", test++);
	n = printf("%08.5x", 34);
	printf("|%d\n", n);

	
	//test 344
	printf("test %d|", test++);
	n = printf("%08.5x", 0);
	printf("|%d\n", n);

	
	//test 345
	printf("test %d|", test++);
	n = printf("%08.3x", 8375);
	printf("|%d\n", n);

	
	//test 346
	printf("test %d|", test++);
	n = printf("%02.7x", 3267);
	printf("|%d\n", n);

	
	//test 347
	printf("test %d|", test++);
	n = printf("%03.3x", 6983);
	printf("|%d\n", n);

	
	//test 348
	printf("test %d|", test++);
	n = printf("%0-8.5x", 34);
	printf("|%d\n", n);

	
	//test 349
	printf("test %d|", test++);
	n = printf("%0-8.5x", 0);
	printf("|%d\n", n);

	
	//test 350
	printf("test %d|", test++);
	n = printf("%0-8.3x", 8375);
	printf("|%d\n", n);

	
	//test 351
	printf("test %d|", test++);
	n = printf("%0-2.7x", 3267);
	printf("|%d\n", n);

	
	//test 352
	printf("test %d|", test++);
	n = printf("%0-3.3x", 6983);
	printf("|%d\n", n);

	
	//test 353
	printf("test %d|", test++);
	n = printf("%.0x", 0);
	printf("|%d\n", n);

	
	//test 354
	printf("test %d|", test++);
	n = printf("%.9x", 0);
	printf("|%d\n", n);

	
	//test 355
	printf("test %d|", test++);
	n = printf("%5.0x", 0);
	printf("|%d\n", n);

	
	//test 356
	printf("test %d|", test++);
	n = printf("%5.x", 0);
	printf("|%d\n", n);

	
	//test 357
	printf("test %d|", test++);
	n = printf("%-5.0x", 0);
	printf("|%d\n", n);

	
	//test 358
	printf("test %d|", test++);
	n = printf("%-5.x", 0);
	printf("|%d\n", n);

	
	//test 359
	printf("test %d|", test++);
	n = printf("%x", 3);
	printf("|%d\n", n);

	
	//test 360
	printf("test %d|", test++);
	n = printf("%x", 4294967295u);
	printf("|%d\n", n);

	
	//test 361
	printf("test %d|", test++);
	n = printf("%7x", 33);
	printf("|%d\n", n);

	
	//test 362
	printf("test %d|", test++);
	n = printf("%3x", 0);
	printf("|%d\n", n);

	
	//test 363
	printf("test %d|", test++);
	n = printf("%5x", 52625);
	printf("|%d\n", n);

	
	//test 364
	printf("test %d|", test++);
	n = printf("%2x", 94827);
	printf("|%d\n", n);

	
	//test 365
	printf("test %d|", test++);
	n = printf("%-7x", 33);
	printf("|%d\n", n);

	
	//test 366
	printf("test %d|", test++);
	n = printf("%-3x", 0);
	printf("|%d\n", n);

	
	//test 367
	printf("test %d|", test++);
	n = printf("%-5x", 52625);
	printf("|%d\n", n);

	
	//test 368
	printf("test %d|", test++);
	n = printf("%-4x", 9648627);
	printf("|%d\n", n);

	
	//test 369
	printf("test %d|", test++);
	n = printf("%.5x", 21);
	printf("|%d\n", n);

	
	//test 370
	printf("test %d|", test++);
	n = printf("%.3x", 0);
	printf("|%d\n", n);

	
	//test 371
	printf("test %d|", test++);
	n = printf("%.4x", 5263);
	printf("|%d\n", n);

	
	//test 372
	printf("test %d|", test++);
	n = printf("%.3x", 938862);
	printf("|%d\n", n);

	
	//test 373
	printf("test %d|", test++);
	n = printf("%05x", 43);
	printf("|%d\n", n);

	
	//test 374
	printf("test %d|", test++);
	n = printf("%03x", 0);
	printf("|%d\n", n);

	
	//test 375
	printf("test %d|", test++);
	n = printf("%03x", 698334);
	printf("|%d\n", n);

	
	//test 376
	printf("test %d|", test++);
	n = printf("%8.5x", 34);
	printf("|%d\n", n);

	
	//test 377
	printf("test %d|", test++);
	n = printf("%8.5x", 0);
	printf("|%d\n", n);

	
	//test 378
	printf("test %d|", test++);
	n = printf("%8.3x", 8375);
	printf("|%d\n", n);

	
	//test 379
	printf("test %d|", test++);
	n = printf("%2.7x", 3267);
	printf("|%d\n", n);

	
	//test 380
	printf("test %d|", test++);
	n = printf("%3.3x", 6983);
	printf("|%d\n", n);

	
	//test 381
	printf("test %d|", test++);
	n = printf("%-8.5x", 34);
	printf("|%d\n", n);

	
	//test 382
	printf("test %d|", test++);
	n = printf("%-8.5x", 0);
	printf("|%d\n", n);

	
	//test 383
	printf("test %d|", test++);
	n = printf("%-8.3x", 8375);
	printf("|%d\n", n);

	
	//test 384
	printf("test %d|", test++);
	n = printf("%-2.7x", 3267);
	printf("|%d\n", n);

	
	//test 385
	printf("test %d|", test++);
	n = printf("%-3.3x", 6983);
	printf("|%d\n", n);

	
	//test 386
	printf("test %d|", test++);
	n = printf("%08.5x", 34);
	printf("|%d\n", n);

	
	//test 387
	printf("test %d|", test++);
	n = printf("%08.5x", 0);
	printf("|%d\n", n);

	
	//test 388
	printf("test %d|", test++);
	n = printf("%08.3x", 8375);
	printf("|%d\n", n);

	
	//test 389
	printf("test %d|", test++);
	n = printf("%02.7x", 3267);
	printf("|%d\n", n);

	
	//test 390
	printf("test %d|", test++);
	n = printf("%03.3x", 6983);
	printf("|%d\n", n);

	
	//test 391
	printf("test %d|", test++);
	n = printf("%0-8.5x", 34);
	printf("|%d\n", n);

	
	//test 392
	printf("test %d|", test++);
	n = printf("%0-8.5x", 0);
	printf("|%d\n", n);

	
	//test 393
	printf("test %d|", test++);
	n = printf("%0-8.3x", 8375);
	printf("|%d\n", n);

	
	//test 394
	printf("test %d|", test++);
	n = printf("%0-2.7x", 3267);
	printf("|%d\n", n);

	
	//test 395
	printf("test %d|", test++);
	n = printf("%0-3.3x", 6983);
	printf("|%d\n", n);

	
	//test 396
	printf("test %d|", test++);
	n = printf("%.0x", 0);
	printf("|%d\n", n);

	
	//test 397
	printf("test %d|", test++);
	n = printf("%.10x", 0);
	printf("|%d\n", n);

	
	//test 398
	printf("test %d|", test++);
	n = printf("%5.0x", 0);
	printf("|%d\n", n);

	
	//test 399
	printf("test %d|", test++);
	n = printf("%5.x", 0);
	printf("|%d\n", n);

	
	//test 400
	printf("test %d|", test++);
	n = printf("%-5.0x", 0);
	printf("|%d\n", n);

	
	//test 401
	printf("test %d|", test++);
	n = printf("%-5.x", 0);
	printf("|%d\n", n);

	
	//test 402
	printf("test %d|", test++);
	n = printf("%#.0x", 0);
	printf("|%d\n", n);

	
	//test 403
	printf("test %d|", test++);
	n = printf("%#.x", 0);
	printf("|%d\n", n);

	
	//test 404
	printf("test %d|", test++);
	n = printf("%#5.0x", 0);
	printf("|%d\n", n);

	
	//test 405
	printf("test %d|", test++);
	n = printf("%#5.x", 0);
	printf("|%d\n", n);

	
	//test 406
	printf("test %d|", test++);
	n = printf("%#-5.0x", 0);
	printf("|%d\n", n);

	
	//test 407
	printf("test %d|", test++);
	n = printf("%#-5.x", 0);
	printf("|%d\n", n);

	
	//test 408
	printf("test %d|", test++);
	n = printf("%#x", 4294967295u);
	printf("|%d\n", n);

	
	//test 409
	printf("test %d|", test++);
	n = printf("%#7x", 33);
	printf("|%d\n", n);

	
	//test 410
	printf("test %d|", test++);
	n = printf("%#3x", 0);
	printf("|%d\n", n);

	
	//test 411
	printf("test %d|", test++);
	n = printf("%#5x", 52625);
	printf("|%d\n", n);

	
	//test 412
	printf("test %d|", test++);
	n = printf("%#2x", 94827);
	printf("|%d\n", n);

	
	//test 413
	printf("test %d|", test++);
	n = printf("%#-7x", 33);
	printf("|%d\n", n);

	
	//test 414
	printf("test %d|", test++);
	n = printf("%#-3x", 0);
	printf("|%d\n", n);

	
	//test 415
	printf("test %d|", test++);
	n = printf("%#-5x", 52625);
	printf("|%d\n", n);

	
	//test 416
	printf("test %d|", test++);
	n = printf("%#-4x", 9648627);
	printf("|%d\n", n);

	
	//test 417
	printf("test %d|", test++);
	n = printf("%#.5x", 21);
	printf("|%d\n", n);

	
	//test 418
	printf("test %d|", test++);
	n = printf("%#.3x", 0);
	printf("|%d\n", n);

	
	//test 419
	printf("test %d|", test++);
	n = printf("%#.4x", 5263);
	printf("|%d\n", n);

	
	//test 420
	printf("test %d|", test++);
	n = printf("%#.3x", 938862);
	printf("|%d\n", n);

	
	//test 421
	printf("test %d|", test++);
	n = printf("%#05x", 43);
	printf("|%d\n", n);

	
	//test 422
	printf("test %d|", test++);
	n = printf("%#03x", 0);
	printf("|%d\n", n);

	
	//test 423
	printf("test %d|", test++);
	n = printf("%#03x", 698334);
	printf("|%d\n", n);

	
	//test 424
	printf("test %d|", test++);
	n = printf("%#8.5x", 34);
	printf("|%d\n", n);

	
	//test 425
	printf("test %d|", test++);
	n = printf("%#8.5x", 0);
	printf("|%d\n", n);

	
	//test 426
	printf("test %d|", test++);
	n = printf("%#x", 4294967295u);
	printf("|%d\n", n);

	
	//test 427
	printf("test %d|", test++);
	n = printf("%#7x", 33);
	printf("|%d\n", n);

	
	//test 428
	printf("test %d|", test++);
	n = printf("%#3x", 0);
	printf("|%d\n", n);

	
	//test 429
	printf("test %d|", test++);
	n = printf("%#5x", 52625);
	printf("|%d\n", n);

	
	//test 430
	printf("test %d|", test++);
	n = printf("%#2x", 94827);
	printf("|%d\n", n);

	
	//test 431
	printf("test %d|", test++);
	n = printf("%#-7x", 33);
	printf("|%d\n", n);

	
	//test 432
	printf("test %d|", test++);
	n = printf("%#-3x", 0);
	printf("|%d\n", n);

	
	//test 433
	printf("test %d|", test++);
	n = printf("%#-5x", 52625);
	printf("|%d\n", n);

	
	//test 434
	printf("test %d|", test++);
	n = printf("%#-4x", 9648627);
	printf("|%d\n", n);

	
	//test 435
	printf("test %d|", test++);
	n = printf("%#.5x", 21);
	printf("|%d\n", n);

	
	//test 436
	printf("test %d|", test++);
	n = printf("%#.3x", 0);
	printf("|%d\n", n);

	
	//test 437
	printf("test %d|", test++);
	n = printf("%#.4x", 5263);
	printf("|%d\n", n);

	
	//test 438
	printf("test %d|", test++);
	n = printf("%#.3x", 938862);
	printf("|%d\n", n);

	
	//test 439
	printf("test %d|", test++);
	n = printf("%#05x", 43);
	printf("|%d\n", n);

	
	//test 440
	printf("test %d|", test++);
	n = printf("%#03x", 0);
	printf("|%d\n", n);

	
	//test 441
	printf("test %d|", test++);
	n = printf("%#03x", 698334);
	printf("|%d\n", n);

	
	//test 442
	printf("test %d|", test++);
	n = printf("%#8.5x", 34);
	printf("|%d\n", n);

	
	//test 443
	printf("test %d|", test++);
	n = printf("%#8.5x", 0);
	printf("|%d\n", n);

	
	//test 444
	printf("test %d|", test++);
	n = printf("%#.0x", 0);
	printf("|%d\n", n);

	
	//test 445
	printf("test %d|", test++);
	n = printf("%#.x", 0);
	printf("|%d\n", n);

	
	//test 446
	printf("test %d|", test++);
	n = printf("%#5.0x", 0);
	printf("|%d\n", n);

	
	//test 447
	printf("test %d|", test++);
	n = printf("%#5.x", 0);
	printf("|%d\n", n);

	
	//test 448
	printf("test %d|", test++);
	n = printf("%#-5.0x", 0);
	printf("|%d\n", n);

	
	//test 449
	printf("test %d|", test++);
	n = printf("%#-5.x", 0);
	printf("|%d\n", n);

	
	//test 450
	printf("test %d|", test++);
	n = printf("%X", 3);
	printf("|%d\n", n);

	
	//test 451
	printf("test %d|", test++);
	n = printf("%X", 4294967295u);
	printf("|%d\n", n);

	
	//test 452
	printf("test %d|", test++);
	n = printf("%7X", 33);
	printf("|%d\n", n);

	
	//test 453
	printf("test %d|", test++);
	n = printf("%3X", 0);
	printf("|%d\n", n);

	
	//test 454
	printf("test %d|", test++);
	n = printf("%5X", 52625);
	printf("|%d\n", n);

	
	//test 455
	printf("test %d|", test++);
	n = printf("%2X", 94827);
	printf("|%d\n", n);

	
	//test 456
	printf("test %d|", test++);
	n = printf("%-7X", 33);
	printf("|%d\n", n);

	
	//test 457
	printf("test %d|", test++);
	n = printf("%-3X", 0);
	printf("|%d\n", n);

	
	//test 458
	printf("test %d|", test++);
	n = printf("%-5X", 52625);
	printf("|%d\n", n);

	
	//test 459
	printf("test %d|", test++);
	n = printf("%-4X", 9648627);
	printf("|%d\n", n);

	
	//test 460
	printf("test %d|", test++);
	n = printf("%.5X", 21);
	printf("|%d\n", n);

	
	//test 461
	printf("test %d|", test++);
	n = printf("%.3X", 0);
	printf("|%d\n", n);

	
	//test 462
	printf("test %d|", test++);
	n = printf("%.4X", 5263);
	printf("|%d\n", n);

	
	//test 463
	printf("test %d|", test++);
	n = printf("%.3X", 938862);
	printf("|%d\n", n);

	
	//test 464
	printf("test %d|", test++);
	n = printf("%05X", 43);
	printf("|%d\n", n);

	
	//test 465
	printf("test %d|", test++);
	n = printf("%03X", 0);
	printf("|%d\n", n);

	
	//test 466
	printf("test %d|", test++);
	n = printf("%03X", 698334);
	printf("|%d\n", n);

	
	//test 467
	printf("test %d|", test++);
	n = printf("%8.5X", 34);
	printf("|%d\n", n);

	
	//test 468
	printf("test %d|", test++);
	n = printf("%8.5X", 0);
	printf("|%d\n", n);

	
	//test 469
	printf("test %d|", test++);
	n = printf("%8.3X", 8375);
	printf("|%d\n", n);

	
	//test 470
	printf("test %d|", test++);
	n = printf("%2.7X", 3267);
	printf("|%d\n", n);

	
	//test 471
	printf("test %d|", test++);
	n = printf("%3.3X", 6983);
	printf("|%d\n", n);

	
	//test 472
	printf("test %d|", test++);
	n = printf("%-8.5X", 34);
	printf("|%d\n", n);

	
	//test 473
	printf("test %d|", test++);
	n = printf("%-8.5X", 0);
	printf("|%d\n", n);

	
	//test 474
	printf("test %d|", test++);
	n = printf("%-8.3X", 8375);
	printf("|%d\n", n);

	
	//test 475
	printf("test %d|", test++);
	n = printf("%-2.7X", 3267);
	printf("|%d\n", n);

	
	//test 476
	printf("test %d|", test++);
	n = printf("%-3.3X", 6983);
	printf("|%d\n", n);

	
	//test 477
	printf("test %d|", test++);
	n = printf("%08.5X", 34);
	printf("|%d\n", n);

	
	//test 478
	printf("test %d|", test++);
	n = printf("%08.5X", 0);
	printf("|%d\n", n);

	
	//test 479
	printf("test %d|", test++);
	n = printf("%08.3X", 8375);
	printf("|%d\n", n);

	
	//test 480
	printf("test %d|", test++);
	n = printf("%02.7X", 3267);
	printf("|%d\n", n);

	
	//test 481
	printf("test %d|", test++);
	n = printf("%03.3X", 6983);
	printf("|%d\n", n);

	
	//test 482
	printf("test %d|", test++);
	n = printf("%0-8.5X", 34);
	printf("|%d\n", n);

	
	//test 483
	printf("test %d|", test++);
	n = printf("%0-8.5X", 0);
	printf("|%d\n", n);

	
	//test 484
	printf("test %d|", test++);
	n = printf("%0-8.3X", 8375);
	printf("|%d\n", n);

	
	//test 485
	printf("test %d|", test++);
	n = printf("%0-2.7X", 3267);
	printf("|%d\n", n);

	
	//test 486
	printf("test %d|", test++);
	n = printf("%0-3.3X", 6983);
	printf("|%d\n", n);

	
	//test 487
	printf("test %d|", test++);
	n = printf("%#X", 3);
	printf("|%d\n", n);

	
	//test 488
	printf("test %d|", test++);
	n = printf("%#X", 4294967295u);
	printf("|%d\n", n);

	
	//test 489
	printf("test %d|", test++);
	n = printf("%#7X", 33);
	printf("|%d\n", n);

	
	//test 490
	printf("test %d|", test++);
	n = printf("%#3X", 0);
	printf("|%d\n", n);

	
	//test 491
	printf("test %d|", test++);
	n = printf("%#7X", 52625);
	printf("|%d\n", n);

	
	//test 492
	printf("test %d|", test++);
	n = printf("%#2X", 94827);
	printf("|%d\n", n);

	
	//test 493
	printf("test %d|", test++);
	n = printf("%#-7X", 33);
	printf("|%d\n", n);

	
	//test 494
	printf("test %d|", test++);
	n = printf("%#-3X", 0);
	printf("|%d\n", n);

	
	//test 495
	printf("test %d|", test++);
	n = printf("%#-7X", 52625);
	printf("|%d\n", n);

	
	//test 496
	printf("test %d|", test++);
	n = printf("%#-4X", 9648627);
	printf("|%d\n", n);

	
	//test 497
	printf("test %d|", test++);
	n = printf("%#.5X", 21);
	printf("|%d\n", n);

	
	//test 498
	printf("test %d|", test++);
	n = printf("%#.3X", 0);
	printf("|%d\n", n);

	
	//test 499
	printf("test %d|", test++);
	n = printf("%#.4X", 5263);
	printf("|%d\n", n);

	
	//test 500
	printf("test %d|", test++);
	n = printf("%#.3X", 938862);
	printf("|%d\n", n);

	
	//test 501
	printf("test %d|", test++);
	n = printf("%#05X", 43);
	printf("|%d\n", n);

	
	//test 502
	printf("test %d|", test++);
	n = printf("%#03X", 0);
	printf("|%d\n", n);

	
	//test 503
	printf("test %d|", test++);
	n = printf("%#03X", 698334);
	printf("|%d\n", n);

	
	//test 504
	printf("test %d|", test++);
	n = printf("%#8.5X", 34);
	printf("|%d\n", n);

	
	//test 505
	printf("test %d|", test++);
	n = printf("%#8.5X", 0);
	printf("|%d\n", n);

	
	//test 506
	printf("test %d|", test++);
	n = printf("%#8.3X", 8375);
	printf("|%d\n", n);

	
	//test 507
	printf("test %d|", test++);
	n = printf("%#2.7X", 3267);
	printf("|%d\n", n);

	
	//test 508
	printf("test %d|", test++);
	n = printf("%#3.3X", 6983);
	printf("|%d\n", n);

	
	//test 509
	printf("test %d|", test++);
	n = printf("%#-8.5X", 34);
	printf("|%d\n", n);

	
	//test 510
	printf("test %d|", test++);
	n = printf("%#-8.5X", 0);
	printf("|%d\n", n);

	
	//test 511
	printf("test %d|", test++);
	n = printf("%#-8.3X", 8375);
	printf("|%d\n", n);

	
	//test 512
	printf("test %d|", test++);
	n = printf("%5.X", 0);
	printf("|%d\n", n);

	
	//test 513
	printf("test %d|", test++);
	n = printf("%-5.X", 0);
	printf("|%d\n", n);

	
	//test 514
	printf("test %d|", test++);
	n = printf("%#.0X", 0);
	printf("|%d\n", n);

	
	//test 515
	printf("test %d|", test++);
	n = printf("%#.X", 0);
	printf("|%d\n", n);

	
	//test 516
	printf("test %d|", test++);
	n = printf("%#5.0X", 0);
	printf("|%d\n", n);

	
	//test 517
	printf("test %d|", test++);
	n = printf("%#5.X", 0);
	printf("|%d\n", n);

	
	//test 518
	printf("test %d|", test++);
	n = printf("%#-5.0X", 0);
	printf("|%d\n", n);

	
	//test 519
	printf("test %d|", test++);
	n = printf("%#-5.X", 0);
	printf("|%d\n", n);

	
	//test 520
	printf("test %d|", test++);
	n = printf("%X", 3);
	printf("|%d\n", n);

	
	//test 521
	printf("test %d|", test++);
	n = printf("%X", 4294967295u);
	printf("|%d\n", n);

	
	//test 522
	printf("test %d|", test++);
	n = printf("%7X", 33);
	printf("|%d\n", n);

	
	//test 523
	printf("test %d|", test++);
	n = printf("%3X", 0);
	printf("|%d\n", n);

	
	//test 524
	printf("test %d|", test++);
	n = printf("%5X", 52625);
	printf("|%d\n", n);

	
	//test 525
	printf("test %d|", test++);
	n = printf("%2X", 94827);
	printf("|%d\n", n);

	
	//test 526
	printf("test %d|", test++);
	n = printf("%-7X", 33);
	printf("|%d\n", n);

	
	//test 527
	printf("test %d|", test++);
	n = printf("%-3X", 0);
	printf("|%d\n", n);

	
	//test 528
	printf("test %d|", test++);
	n = printf("%-5X", 52625);
	printf("|%d\n", n);

	
	//test 529
	printf("test %d|", test++);
	n = printf("%-4X", 9648627);
	printf("|%d\n", n);

	
	//test 530
	printf("test %d|", test++);
	n = printf("%.5X", 21);
	printf("|%d\n", n);

	
	//test 531
	printf("test %d|", test++);
	n = printf("%.3X", 0);
	printf("|%d\n", n);

	
	//test 532
	printf("test %d|", test++);
	n = printf("%.4X", 5263);
	printf("|%d\n", n);

	
	//test 533
	printf("test %d|", test++);
	n = printf("%.3X", 938862);
	printf("|%d\n", n);

	
	//test 534
	printf("test %d|", test++);
	n = printf("%05X", 43);
	printf("|%d\n", n);

	
	//test 535
	printf("test %d|", test++);
	n = printf("%03X", 0);
	printf("|%d\n", n);

	
	//test 536
	printf("test %d|", test++);
	n = printf("%03X", 698334);
	printf("|%d\n", n);

	
	//test 537
	printf("test %d|", test++);
	n = printf("%8.5X", 34);
	printf("|%d\n", n);

	
	//test 538
	printf("test %d|", test++);
	n = printf("%8.5X", 0);
	printf("|%d\n", n);

	
	//test 539
	printf("test %d|", test++);
	n = printf("%8.3X", 8375);
	printf("|%d\n", n);

	
	//test 540
	printf("test %d|", test++);
	n = printf("%2.7X", 3267);
	printf("|%d\n", n);

	
	//test 541
	printf("test %d|", test++);
	n = printf("%3.3X", 6983);
	printf("|%d\n", n);

	
	//test 542
	printf("test %d|", test++);
	n = printf("%-8.5X", 34);
	printf("|%d\n", n);

	
	//test 543
	printf("test %d|", test++);
	n = printf("%-8.5X", 0);
	printf("|%d\n", n);

	
	//test 544
	printf("test %d|", test++);
	n = printf("%-8.3X", 8375);
	printf("|%d\n", n);

	
	//test 545
	printf("test %d|", test++);
	n = printf("%-2.7X", 3267);
	printf("|%d\n", n);

	
	//test 546
	printf("test %d|", test++);
	n = printf("%-3.3X", 6983);
	printf("|%d\n", n);

	
	//test 547
	printf("test %d|", test++);
	n = printf("%08.5X", 34);
	printf("|%d\n", n);

	
	//test 548
	printf("test %d|", test++);
	n = printf("%08.5X", 0);
	printf("|%d\n", n);

	
	//test 549
	printf("test %d|", test++);
	n = printf("%08.3X", 8375);
	printf("|%d\n", n);

	
	//test 550
	printf("test %d|", test++);
	n = printf("%02.7X", 3267);
	printf("|%d\n", n);

	
	//test 551
	printf("test %d|", test++);
	n = printf("%03.3X", 6983);
	printf("|%d\n", n);

	
	//test 552
	printf("test %d|", test++);
	n = printf("%0-8.5X", 34);
	printf("|%d\n", n);

	
	//test 553
	printf("test %d|", test++);
	n = printf("%0-8.5X", 0);
	printf("|%d\n", n);

	
	//test 554
	printf("test %d|", test++);
	n = printf("%0-8.3X", 8375);
	printf("|%d\n", n);

	
	//test 555
	printf("test %d|", test++);
	n = printf("%0-2.7X", 3267);
	printf("|%d\n", n);

	
	//test 556
	printf("test %d|", test++);
	n = printf("%0-3.3X", 6983);
	printf("|%d\n", n);

	
	//test 557
	printf("test %d|", test++);
	n = printf("%#X", 3);
	printf("|%d\n", n);

	
	//test 558
	printf("test %d|", test++);
	n = printf("%#X", 4294967295u);
	printf("|%d\n", n);

	
	//test 559
	printf("test %d|", test++);
	n = printf("%#7X", 33);
	printf("|%d\n", n);

	
	//test 560
	printf("test %d|", test++);
	n = printf("%#3X", 0);
	printf("|%d\n", n);

	
	//test 561
	printf("test %d|", test++);
	n = printf("%#7X", 52625);
	printf("|%d\n", n);

	
	//test 562
	printf("test %d|", test++);
	n = printf("%#2X", 94827);
	printf("|%d\n", n);

	
	//test 563
	printf("test %d|", test++);
	n = printf("%#-7X", 33);
	printf("|%d\n", n);

	
	//test 564
	printf("test %d|", test++);
	n = printf("%#-3X", 0);
	printf("|%d\n", n);

	
	//test 565
	printf("test %d|", test++);
	n = printf("%#-7X", 52625);
	printf("|%d\n", n);

	
	//test 566
	printf("test %d|", test++);
	n = printf("%#-4X", 9648627);
	printf("|%d\n", n);

	
	//test 567
	printf("test %d|", test++);
	n = printf("%#.5X", 21);
	printf("|%d\n", n);

	
	//test 568
	printf("test %d|", test++);
	n = printf("%#.3X", 0);
	printf("|%d\n", n);

	
	//test 569
	printf("test %d|", test++);
	n = printf("%#.4X", 5263);
	printf("|%d\n", n);

	
	//test 570
	printf("test %d|", test++);
	n = printf("%#.3X", 938862);
	printf("|%d\n", n);

	
	//test 571
	printf("test %d|", test++);
	n = printf("%#05X", 43);
	printf("|%d\n", n);

	
	//test 572
	printf("test %d|", test++);
	n = printf("%#03X", 0);
	printf("|%d\n", n);

	
	//test 573
	printf("test %d|", test++);
	n = printf("%#03X", 698334);
	printf("|%d\n", n);

	
	//test 574
	printf("test %d|", test++);
	n = printf("%#8.5X", 34);
	printf("|%d\n", n);

	
	//test 575
	printf("test %d|", test++);
	n = printf("%#8.5X", 0);
	printf("|%d\n", n);

	
	//test 576
	printf("test %d|", test++);
	n = printf("%#8.3X", 8375);
	printf("|%d\n", n);

	
	//test 577
	printf("test %d|", test++);
	n = printf("%#2.7X", 3267);
	printf("|%d\n", n);

	
	//test 578
	printf("test %d|", test++);
	n = printf("%#3.3X", 6983);
	printf("|%d\n", n);

	
	//test 579
	printf("test %d|", test++);
	n = printf("%#-8.5X", 34);
	printf("|%d\n", n);

	
	//test 580
	printf("test %d|", test++);
	n = printf("%#-8.5X", 0);
	printf("|%d\n", n);

	
	//test 581
	printf("test %d|", test++);
	n = printf("%#-8.3X", 8375);	
	printf("|%d\n", n);

	
	//test 582
	printf("test %d|", test++);
	n = printf("%5.X", 0);
	printf("|%d\n", n);

	
	//test 583
	printf("test %d|", test++);
	n = printf("%-5.X", 0);
	printf("|%d\n", n);

	
	//test 584
	printf("test %d|", test++);
	n = printf("%#.0X", 0);
	printf("|%d\n", n);

	
	//test 585
	printf("test %d|", test++);
	n = printf("%#.X", 0);
	printf("|%d\n", n);

	
	//test 586
	printf("test %d|", test++);
	n = printf("%#5.0X", 0);
	printf("|%d\n", n);

	
	//test 587
	printf("test %d|", test++);
	n = printf("%#5.X", 0);
	printf("|%d\n", n);

	
	//test 588
	printf("test %d|", test++);
	n = printf("%#-5.0X", 0);
	printf("|%d\n", n);

	
	//test 0
	printf("test %d|", test++);
	n = printf("%#-5.X", 0);
	printf("|%d\n", n);

	return (0);
}