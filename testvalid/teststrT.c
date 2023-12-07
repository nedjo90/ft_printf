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
// test 0
ft_printf("test %d|", test++);
n = ft_printf( "%s", "hello");
ft_printf("|%d\n", n);
// test 1
ft_printf("test %d|", test++);
n = ft_printf( "%#s", "hello");
ft_printf("|%d\n", n);
// test 2
ft_printf("test %d|", test++);
n = ft_printf( "%+s", "hello");
ft_printf("|%d\n", n);
// test 3
ft_printf("test %d|", test++);
n = ft_printf( "% s", "hello");
ft_printf("|%d\n", n);
// test 4
ft_printf("test %d|", test++);
n = ft_printf( "% s", NULL);
ft_printf("|%d\n", n);
// test 5
ft_printf("test %d|", test++);
n = ft_printf( "%#s", NULL);
ft_printf("|%d\n", n);
// test 6
ft_printf("test %d|", test++);
n = ft_printf( "%+s", NULL);
ft_printf("|%d\n", n);
// test 7
ft_printf("test %d|", test++);
n = ft_printf( "%-s", "hello");
ft_printf("|%d\n", n);
// test 8
ft_printf("test %d|", test++);
n = ft_printf( "%-s", NULL);
ft_printf("|%d\n", n);
// test 9
ft_printf("test %d|", test++);
n = ft_printf( "%.s", NULL);
ft_printf("|%d\n", n);
// test 10
ft_printf("test %d|", test++);
n = ft_printf( "%s", NULL);
ft_printf("|%d\n", n);
// test 11
ft_printf("test %d|", test++);
n = ft_printf( "hello,%s.", "gavin");
ft_printf("|%d\n", n);
// test 12
ft_printf("test %d|", test++);
n = ft_printf( "%s", "testing testing");
ft_printf("|%d\n", n);
// test 13
ft_printf("test %d|", test++);
n = ft_printf( "this %s is epty", "");
ft_printf("|%d\n", n);
// test 14
ft_printf("test %d|", test++);
n = ft_printf( "%.s", "hello");
ft_printf("|%d\n", n);
// test 15
ft_printf("test %d|", test++);
n = ft_printf( "hello,%s.", NULL);
ft_printf("|%d\n", n);
// test 16
ft_printf("test %d|", test++);
n = ft_printf( "%s", NULL);
ft_printf("|%d\n", n);
// test 17
ft_printf("test %d|", test++);
n = ft_printf( "%.s", "NULL");
ft_printf("|%d\n", n);
// test 18
ft_printf("test %d|", test++);
n = ft_printf( "%s", s_hidden);
ft_printf("|%d\n", n);
// test 19
ft_printf("test %d|", test++);
n = ft_printf( "%.s", s_hidden);
ft_printf("|%d\n", n);
// test 20
ft_printf("test %d|", test++);
n = ft_printf( "3.s", s_hidden);
ft_printf("|%d\n", n);
// test 21
ft_printf("test %d|", test++);
n = ft_printf( "%0.s", s_hidden);
ft_printf("|%d\n", n);
// test 22
ft_printf("test %d|", test++);
n = ft_printf( "3.s", NULL);
ft_printf("|%d\n", n);
// test 23
ft_printf("test %d|", test++);
n = ft_printf( "%0.s", NULL);
ft_printf("|%d\n", n);
// test 24
ft_printf("test %d|", test++);
n = ft_printf( "1.s", "\0");
ft_printf("|%d\n", n);
// test 25
ft_printf("test %d|", test++);
n = ft_printf( "2.s", "\0");
ft_printf("|%d\n", n);
// test 26
ft_printf("test %d|", test++);
n = ft_printf( "9.s", "\0");
ft_printf("|%d\n", n);
// test 27
ft_printf("test %d|", test++);
n = ft_printf( "%3.s", s_hidden);
ft_printf("|%d\n", n);
// test 28
ft_printf("test %d|", test++);
n = ft_printf( "%8.s", s_hidden);
ft_printf("|%d\n", n);
// test 29
ft_printf("test %d|", test++);
n = ft_printf( "%3.s", NULL);
ft_printf("|%d\n", n);
// test 30
ft_printf("test %d|", test++);
n = ft_printf( "%8.s", NULL);
ft_printf("|%d\n", n);
// test 31
ft_printf("test %d|", test++);
n = ft_printf( "%1.s", "\0");
ft_printf("|%d\n", n);
// test 32
ft_printf("test %d|", test++);
n = ft_printf( "%2.s", "\0");
ft_printf("|%d\n", n);
// test 33
ft_printf("test %d|", test++);
n = ft_printf( "%6.s", "\0");
ft_printf("|%d\n", n);
// test 34
ft_printf("test %d|", test++);
n = ft_printf( "%0-s", s_hidden);
ft_printf("|%d\n", n);
// test 35
ft_printf("test %d|", test++);
n = ft_printf( "%#s", "hello");
ft_printf("|%d\n", n);
// test 36
ft_printf("test %d|", test++);
n = ft_printf( "%+s", "hello");
ft_printf("|%d\n", n);
// test 37
ft_printf("test %d|", test++);
n = ft_printf( "% s", "hello");
ft_printf("|%d\n", n);
// test 38
ft_printf("test %d|", test++);
n = ft_printf( "% s", NULL);
ft_printf("|%d\n", n);
// test 39
ft_printf("test %d|", test++);
n = ft_printf( "%#s", NULL);
ft_printf("|%d\n", n);
// test 40
ft_printf("test %d|", test++);
n = ft_printf( "%+s", NULL);
ft_printf("|%d\n", n);
// test 41
ft_printf("test %d|", test++);
n = ft_printf( "%-s", "hello");
ft_printf("|%d\n", n);
// test 42
ft_printf("test %d|", test++);
n = ft_printf( "%-s", NULL);
ft_printf("|%d\n", n);
// test 43
ft_printf("test %d|", test++);
n = ft_printf( "%.s", NULL);
ft_printf("|%d\n", n);
// test 44
ft_printf("test %d|", test++);
n = ft_printf( "%s", NULL);
ft_printf("|%d\n", n);
// test 45
ft_printf("test %d|", test++);
n = ft_printf( "hello,%s.", "gavin");
ft_printf("|%d\n", n);
// test 46
ft_printf("test %d|", test++);
n = ft_printf( "%s", "", "b");
ft_printf("|%d\n", n);

// test 47
ft_printf("test %d|", test++);
n = ft_printf( "%.s", "hello");
ft_printf("|%d\n", n);
// test 48
ft_printf("test %d|", test++);
n = ft_printf( "hello,%s.", NULL);
ft_printf("|%d\n", n);
// test 49
ft_printf("test %d|", test++);
n = ft_printf( "%s", NULL);
ft_printf("|%d\n", n);
// test 50
ft_printf("test %d|", test++);
n = ft_printf( "%.s", "NULL");
ft_printf("|%d\n", n);
// test 51
ft_printf("test %d|", test++);
n = ft_printf( "3.s", NULL);
ft_printf("|%d\n", n);
// test 52
ft_printf("test %d|", test++);
n = ft_printf( "%0.s", NULL);
ft_printf("|%d\n", n);
// test 53
ft_printf("test %d|", test++);
n = ft_printf( "1.s", "\0");
ft_printf("|%d\n", n);
// test 54
ft_printf("test %d|", test++);
n = ft_printf( "2.s", "\0");
ft_printf("|%d\n", n);
// test 55
ft_printf("test %d|", test++);
n = ft_printf( "9.s", "\0");
ft_printf("|%d\n", n);
// test 56
ft_printf("test %d|", test++);
n = ft_printf( "%3.s", NULL);
ft_printf("|%d\n", n);
// test 57
ft_printf("test %d|", test++);
n = ft_printf( "%8.s", NULL);
ft_printf("|%d\n", n);
// test 58
ft_printf("test %d|", test++);
n = ft_printf( "%1.s", "\0");
ft_printf("|%d\n", n);
// test 59
ft_printf("test %d|", test++);
n = ft_printf( "%2.s", "\0");
ft_printf("|%d\n", n);
// test 60
ft_printf("test %d|", test++);
n = ft_printf( "%6.s", "\0");
ft_printf("|%d\n", n);
// test 61
ft_printf("test %d|", test++);
n = ft_printf( "%1s", "");
ft_printf("|%d\n", n);
// test 62
ft_printf("test %d|", test++);
n = ft_printf( "-1s", "");
ft_printf("|%d\n", n);
// test 63
ft_printf("test %d|", test++);
n = ft_printf( " -2s", "");
ft_printf("|%d\n", n);
// test 64
ft_printf("test %d|", test++);
n = ft_printf( "%3s ", "");
ft_printf("|%d\n", n);
// test 65
ft_printf("test %d|", test++);
n = ft_printf( " %0s ", "");
ft_printf("|%d\n", n);
// test 66
ft_printf("test %d|", test++);
n = ft_printf( " -s ", "-");
ft_printf("|%d\n", n);
// test 67
ft_printf("test %d|", test++);
n = ft_printf( "%.s", "coucou je suis un test ahahah ohohohoh uhuuhu");
ft_printf("|%d\n", n);
// test 68
ft_printf("test %d|", test++);
n = ft_printf( ".0s", "coucou je suis un test ahahah ohohohoh uhuuhu");
ft_printf("|%d\n", n);
// test 69
ft_printf("test %d|", test++);
n = ft_printf( ".1s", "coucou je suis un test ahahah ohohohoh uhuuhu");
ft_printf("|%d\n", n);
// test 70
ft_printf("test %d|", test++);
n = ft_printf( "%10s", "coucou je suis un test ahahah ohohohoh uhuuhu");
ft_printf("|%d\n", n);
// test 71
ft_printf("test %d|", test++);
n = ft_printf( "%.00s", "coucou je suis un test ahahah ohohohoh uhuuhu");
ft_printf("|%d\n", n);
// test 72
ft_printf("test %d|", test++);
n = ft_printf( "%.200000s", "coucou je suis un test ahahah ohohohoh uhuuhu");
ft_printf("|%d\n", n);
// test 73
ft_printf("test %d|", test++);
n = ft_printf( "%.s", "");
ft_printf("|%d\n", n);
// test 74
ft_printf("test %d|", test++);
n = ft_printf( " .1s", "");
ft_printf("|%d\n", n);
// test 75
ft_printf("test %d|", test++);
n = ft_printf( "%1s ", "");
ft_printf("|%d\n", n);
// test 76
ft_printf("test %d|", test++);
n = ft_printf( " .s ", "");
ft_printf("|%d\n", n);
// test 77
ft_printf("test %d|", test++);
n = ft_printf( " .s ", "-");
ft_printf("|%d\n", n);
// test 78
ft_printf("test %d|", test++);
n = ft_printf( "%#s", "hello");
ft_printf("|%d\n", n);
// test 79
ft_printf("test %d|", test++);
n = ft_printf( "%+s", "hello");
ft_printf("|%d\n", n);
// test 80
ft_printf("test %d|", test++);
n = ft_printf( "% s", "hello");
ft_printf("|%d\n", n);
// test 81
ft_printf("test %d|", test++);
n = ft_printf( "% s", NULL);
ft_printf("|%d\n", n);
// test 82
ft_printf("test %d|", test++);
n = ft_printf( "%#s", NULL);
ft_printf("|%d\n", n);
// test 83
ft_printf("test %d|", test++);
n = ft_printf( "%+s", NULL);
ft_printf("|%d\n", n);
// test 84
ft_printf("test %d|", test++);
n = ft_printf( "%-21s", "abc");
ft_printf("|%d\n", n);
// test 85
ft_printf("test %d|", test++);
n = ft_printf( "%05s", "goes over");
ft_printf("|%d\n", n);
// test 86
ft_printf("test %d|", test++);
n = ft_printf( "%21s", NULL);
ft_printf("|%d\n", n);
// test 87
ft_printf("test %d|", test++);
n = ft_printf( "02s", NULL);
ft_printf("|%d\n", n);
// test 88
ft_printf("test %d|", test++);
n = ft_printf( "%-21s", NULL);
ft_printf("|%d\n", n);
// test 89
ft_printf("test %d|", test++);
n = ft_printf( "%03s", NULL);
ft_printf("|%d\n", n);
// test 90
ft_printf("test %d|", test++);
n = ft_printf( "05s", "hello");
ft_printf("|%d\n", n);
// test 91
ft_printf("test %d|", test++);
n = ft_printf( "%0s", "hello");
ft_printf("|%d\n", n);
// test 92
ft_printf("test %d|", test++);
n = ft_printf( "%-s", "hello");
ft_printf("|%d\n", n);
// test 93
ft_printf("test %d|", test++);
n = ft_printf( "%0s", NULL);
ft_printf("|%d\n", n);
// test 94
ft_printf("test %d|", test++);
n = ft_printf( "%-s", NULL);
ft_printf("|%d\n", n);
// test 95
ft_printf("test %d|", test++);
n = ft_printf( "23s", NULL);
ft_printf("|%d\n", n);
// test 96
ft_printf("test %d|", test++);
n = ft_printf( "%.s", NULL);
ft_printf("|%d\n", n);
// test 97
ft_printf("test %d|", test++);
n = ft_printf( "%s", NULL);
ft_printf("|%d\n", n);
// test 98
ft_printf("test %d|", test++);
n = ft_printf( "hello,%s.", "gavin");
ft_printf("|%d\n", n);
// test 99
ft_printf("test %d|", test++);
n = ft_printf( "%s", "testing testing");
ft_printf("|%d\n", n);
// test 100
ft_printf("test %d|", test++);
n = ft_printf( "32s", "abc");
ft_printf("|%d\n", n);
// test 101
ft_printf("test %d|", test++);
n = ft_printf( "16s", "nark nark");
ft_printf("|%d\n", n);
// test 102
ft_printf("test %d|", test++);
n = ft_printf( "%5s", "goes over");
ft_printf("|%d\n", n);
// test 103
ft_printf("test %d|", test++);
n = ft_printf( "%32s", "abc");
ft_printf("|%d\n", n);
// test 104
ft_printf("test %d|", test++);
n = ft_printf( "%16s", "nark nark");
ft_printf("|%d\n", n);
// test 105
ft_printf("test %d|", test++);
n = ft_printf( "-5s", "goes over");
ft_printf("|%d\n", n);
// test 106
ft_printf("test %d|", test++);
n = ft_printf( ".7s", "hello");
ft_printf("|%d\n", n);
// test 107
ft_printf("test %d|", test++);
n = ft_printf( ".3s", "hello");
ft_printf("|%d\n", n);
// test 108
ft_printf("test %d|", test++);
n = ft_printf( "%.s", "hello");
ft_printf("|%d\n", n);
// test 109
ft_printf("test %d|", test++);
n = ft_printf( ".0s", "hello");
ft_printf("|%d\n", n);
// test 110
ft_printf("test %d|", test++);
n = ft_printf( "%.5s", "yolo");
ft_printf("|%d\n", n);
// test 111
ft_printf("test %d|", test++);
n = ft_printf( "%.5s", "bombastic");
ft_printf("|%d\n", n);
// test 112
ft_printf("test %d|", test++);
n = ft_printf( "%-.5s", "yolo");
ft_printf("|%d\n", n);
// test 113
ft_printf("test %d|", test++);
n = ft_printf( "%-.5s", "tubular");
ft_printf("|%d\n", n);
// test 114
ft_printf("test %d|", test++);
n = ft_printf( "hello,%s.", NULL);
ft_printf("|%d\n", n);
// test 115
ft_printf("test %d|", test++);
n = ft_printf( "%s", NULL);
ft_printf("|%d\n", n);
// test 116
ft_printf("test %d|", test++);
n = ft_printf( "32s", NULL);
ft_printf("|%d\n", n);
// test 117
ft_printf("test %d|", test++);
n = ft_printf( "%2s", NULL);
ft_printf("|%d\n", n);
// test 118
ft_printf("test %d|", test++);
n = ft_printf( "%32s", NULL);
ft_printf("|%d\n", n);
// test 119
ft_printf("test %d|", test++);
n = ft_printf( "%16s", NULL);
ft_printf("|%d\n", n);
// test 120
ft_printf("test %d|", test++);
n = ft_printf( "-3s", NULL);
ft_printf("|%d\n", n);
// test 121
ft_printf("test %d|", test++);
n = ft_printf( ".9s", "NULL");
ft_printf("|%d\n", n);
// test 122
ft_printf("test %d|", test++);
n = ft_printf( ".3s", "NULL");
ft_printf("|%d\n", n);
// test 123
ft_printf("test %d|", test++);
n = ft_printf( "%.s", "NULL");
ft_printf("|%d\n", n);
// test 124
ft_printf("test %d|", test++);
n = ft_printf( ".0s", "NULL");
ft_printf("|%d\n", n);
// test 125
ft_printf("test %d|", test++);
n = ft_printf( "%s", s_hidden);
ft_printf("|%d\n", n);
// test 126
ft_printf("test %d|", test++);
n = ft_printf( "%3s", s_hidden);
ft_printf("|%d\n", n);
// test 127
ft_printf("test %d|", test++);
n = ft_printf( "%9s", s_hidden);
ft_printf("|%d\n", n);
// test 128
ft_printf("test %d|", test++);
n = ft_printf( "%.s", s_hidden);
ft_printf("|%d\n", n);
// test 129
ft_printf("test %d|", test++);
n = ft_printf( ".9s", s_hidden);
ft_printf("|%d\n", n);
// test 130
ft_printf("test %d|", test++);
n = ft_printf( "%03s", s_hidden);
ft_printf("|%d\n", n);
// test 131
ft_printf("test %d|", test++);
n = ft_printf( "%09s", s_hidden);
ft_printf("|%d\n", n);
// test 132
ft_printf("test %d|", test++);
n = ft_printf( "%03s", NULL);
ft_printf("|%d\n", n);
// test 133
ft_printf("test %d|", test++);
n = ft_printf( "%09s", NULL);
ft_printf("|%d\n", n);
// test 134
ft_printf("test %d|", test++);
n = ft_printf( "%00s", "\0");
ft_printf("|%d\n", n);
// test 135
ft_printf("test %d|", test++);
n = ft_printf( "%01s", "\0");
ft_printf("|%d\n", n);
// test 136
ft_printf("test %d|", test++);
n = ft_printf( "%03s", "\0");
ft_printf("|%d\n", n);
// test 137
ft_printf("test %d|", test++);
n = ft_printf( "%09s", "\0");
ft_printf("|%d\n", n);
// test 138
ft_printf("test %d|", test++);
n = ft_printf( "3.s", s_hidden);
ft_printf("|%d\n", n);
// test 139
ft_printf("test %d|", test++);
n = ft_printf( "%0.s", s_hidden);
ft_printf("|%d\n", n);
// test 140
ft_printf("test %d|", test++);
n = ft_printf( "3.s", NULL);
ft_printf("|%d\n", n);
// test 141
ft_printf("test %d|", test++);
n = ft_printf( "%0.s", NULL);
ft_printf("|%d\n", n);
// test 142
ft_printf("test %d|", test++);
n = ft_printf( "1.s", "\0");
ft_printf("|%d\n", n);
// test 143
ft_printf("test %d|", test++);
n = ft_printf( "2.s", "\0");
ft_printf("|%d\n", n);
// test 144
ft_printf("test %d|", test++);
n = ft_printf( "9.s", "\0");
ft_printf("|%d\n", n);
// test 145
ft_printf("test %d|", test++);
n = ft_printf( "%3.s", s_hidden);
ft_printf("|%d\n", n);
// test 146
ft_printf("test %d|", test++);
n = ft_printf( "%8.s", s_hidden);
ft_printf("|%d\n", n);
// test 147
ft_printf("test %d|", test++);
n = ft_printf( "%3.s", NULL);
ft_printf("|%d\n", n);
// test 148
ft_printf("test %d|", test++);
n = ft_printf( "%8.s", NULL);
ft_printf("|%d\n", n);
// test 149
ft_printf("test %d|", test++);
n = ft_printf( "%1.s", "\0");
ft_printf("|%d\n", n);
// test 150
ft_printf("test %d|", test++);
n = ft_printf( "%2.s", "\0");
ft_printf("|%d\n", n);
// test 151
ft_printf("test %d|", test++);
n = ft_printf( "%6.s", "\0");
ft_printf("|%d\n", n);
// test 152
ft_printf("test %d|", test++);
n = ft_printf( "%.1s", s_hidden);
ft_printf("|%d\n", n);
// test 153
ft_printf("test %d|", test++);
n = ft_printf( "%1.1s", s_hidden);
ft_printf("|%d\n", n);
// test 154
ft_printf("test %d|", test++);
n = ft_printf( "%.1s", NULL);
ft_printf("|%d\n", n);
// test 155
ft_printf("test %d|", test++);
n = ft_printf( "%.1s", NULL);
ft_printf("|%d\n", n);
// test 156
ft_printf("test %d|", test++);
n = ft_printf( "%-.1s", s_hidden);
ft_printf("|%d\n", n);
// test 157
ft_printf("test %d|", test++);
n = ft_printf( "%-1.1s", s_hidden);
ft_printf("|%d\n", n);
// test 158
ft_printf("test %d|", test++);
n = ft_printf( "%-.1s", NULL);
ft_printf("|%d\n", n);
// test 159
ft_printf("test %d|", test++);
n = ft_printf( "%-.1s", NULL);
ft_printf("|%d\n", n);
// test 160
ft_printf("test %d|", test++);
n = ft_printf( "%-.1s", "\0");
ft_printf("|%d\n", n);
// test 161
ft_printf("test %d|", test++);
n = ft_printf( "%-.1s", "\0");
ft_printf("|%d\n", n);
// test 162
ft_printf("test %d|", test++);
n = ft_printf( "%.6s", s_hidden);
ft_printf("|%d\n", n);
// test 163
ft_printf("test %d|", test++);
n = ft_printf( "%2.6s", s_hidden);
ft_printf("|%d\n", n);
// test 164
ft_printf("test %d|", test++);
n = ft_printf( "%.6s", NULL);
ft_printf("|%d\n", n);
// test 165
ft_printf("test %d|", test++);
n = ft_printf( "%2.6s", NULL);
ft_printf("|%d\n", n);
// test 166
ft_printf("test %d|", test++);
n = ft_printf( "%.6s", "\0");
ft_printf("|%d\n", n);
// test 167
ft_printf("test %d|", test++);
n = ft_printf( "%.6s", "\0");
ft_printf("|%d\n", n);
// test 168
ft_printf("test %d|", test++);
n = ft_printf( "%-.6s", s_hidden);
ft_printf("|%d\n", n);
// test 169
ft_printf("test %d|", test++);
n = ft_printf( "%-2.6s", s_hidden);
ft_printf("|%d\n", n);
// test 170
ft_printf("test %d|", test++);
n = ft_printf( "%-.8s", s_hidden);
ft_printf("|%d\n", n);
// test 171
ft_printf("test %d|", test++);
n = ft_printf( "%-1.8s", s_hidden);
ft_printf("|%d\n", n);
// test 172
ft_printf("test %d|", test++);
n = ft_printf( "%-.8s", NULL);
ft_printf("|%d\n", n);
// test 173
ft_printf("test %d|", test++);
n = ft_printf( "%-1.8s", NULL);
ft_printf("|%d\n", n);
// test 174
ft_printf("test %d|", test++);
n = ft_printf( "%-00s", s_hidden);
ft_printf("|%d\n", n);
// test 175
ft_printf("test %d|", test++);
n = ft_printf( "%-09s", s_hidden);
ft_printf("|%d\n", n);
// test 176
ft_printf("test %d|", test++);
n = ft_printf( "%+- 0606s", s_hidden);
ft_printf("|%d\n", n);
// test 177
ft_printf("test %d|", test++);
n = ft_printf( "% 0+-606s", s_hidden);
ft_printf("|%d\n", n);
// test 178
ft_printf("test %d|", test++);
n = ft_printf( "%0 +-606s", s_hidden);
ft_printf("|%d\n", n);
// test 179
ft_printf("test %d|", test++);
n = ft_printf( "%+-0 606s", s_hidden);
ft_printf("|%d\n", n);
// test 180
ft_printf("test %d|", test++);
n = ft_printf( "%-+ 0606s", s_hidden);
ft_printf("|%d\n", n);
// test 181
ft_printf("test %d|", test++);
n = ft_printf( "% -+0606s", s_hidden);
ft_printf("|%d\n", n);
// test 182
ft_printf("test %d|", test++);
n = ft_printf( "%+- 0706s", s_hidden);
ft_printf("|%d\n", n);
// test 183
ft_printf("test %d|", test++);
n = ft_printf( "% 0+-806s", s_hidden);
ft_printf("|%d\n", n);
// test 184
ft_printf("test %d|", test++);
n = ft_printf( "%0 +-906s", s_hidden);
ft_printf("|%d\n", n);
// test 185
ft_printf("test %d|", test++);
n = ft_printf( "%+-0 1006s", s_hidden);
ft_printf("|%d\n", n);
// test 186
ft_printf("test %d|", test++);
n = ft_printf( "%-+ 01106s", s_hidden);
ft_printf("|%d\n", n);
// test 187
ft_printf("test %d|", test++);
n = ft_printf( "% -+01206s", s_hidden);
ft_printf("|%d\n", n);
// test 188
ft_printf("test %d|", test++);
n = ft_printf( "%+- 0604s", s_hidden);
ft_printf("|%d\n", n);
// test 189
ft_printf("test %d|", test++);
n = ft_printf( "% 0+-604s", s_hidden);
ft_printf("|%d\n", n);
// test 190
ft_printf("test %d|", test++);
n = ft_printf( "%0 +-604s", s_hidden);
ft_printf("|%d\n", n);
// test 191
ft_printf("test %d|", test++);
n = ft_printf( "%+-0 604s", s_hidden);
ft_printf("|%d\n", n);
// test 192
ft_printf("test %d|", test++);
n = ft_printf( "%-+ 0604s", s_hidden);
ft_printf("|%d\n", n);
// test 193
ft_printf("test %d|", test++);
n = ft_printf( "% 0-+604s", s_hidden);
ft_printf("|%d\n", n);
// test 194
ft_printf("test %d|", test++);
n = ft_printf( "%+- 0609s", s_hidden);
ft_printf("|%d\n", n);
// test 195
ft_printf("test %d|", test++);
n = ft_printf( "% 0+-609s", s_hidden);
ft_printf("|%d\n", n);
// test 196
ft_printf("test %d|", test++);
n = ft_printf( "%0 +-609s", s_hidden);
ft_printf("|%d\n", n);
// test 197
ft_printf("test %d|", test++);
n = ft_printf( "%+-0 609s", s_hidden);
ft_printf("|%d\n", n);
// test 198
ft_printf("test %d|", test++);
n = ft_printf( "%-+ 0609s", s_hidden);
ft_printf("|%d\n", n);
// test 199
ft_printf("test %d|", test++);
n = ft_printf( "% 0-+609s", s_hidden);
ft_printf("|%d\n", n);
// test 200
ft_printf("test %d|", test++);
n = ft_printf( "%03s", s_hidden);
ft_printf("|%d\n", n);
// test 201
ft_printf("test %d|", test++);
n = ft_printf( "%09s", s_hidden);
ft_printf("|%d\n", n);
// test 202
ft_printf("test %d|", test++);
n = ft_printf( "% 3s", s_hidden);
ft_printf("|%d\n", n);
// test 203
ft_printf("test %d|", test++);
n = ft_printf( "% 6s", s_hidden);
ft_printf("|%d\n", n);
// test 204
ft_printf("test %d|", test++);
n = ft_printf( "00s", s_hidden);
ft_printf("|%d\n", n);
// test 205
ft_printf("test %d|", test++);
n = ft_printf( "%00s", s_hidden);
ft_printf("|%d\n", n);
// test 206
ft_printf("test %d|", test++);
n = ft_printf( "%000s", s_hidden);
ft_printf("|%d\n", n);
// test 207
ft_printf("test %d|", test++);
n = ft_printf( "%00s", s_hidden);
ft_printf("|%d\n", n);
// test 208
ft_printf("test %d|", test++);
n = ft_printf( "%-0s", s_hidden);
ft_printf("|%d\n", n);
// test 209
ft_printf("test %d|", test++);
n = ft_printf( "%0-s", s_hidden);
ft_printf("|%d\n", n);
// test 210
ft_printf("test %d|", test++);
n = ft_printf( "03s", s_hidden);
ft_printf("|%d\n", n);
// test 211
ft_printf("test %d|", test++);
n = ft_printf( "09s", s_hidden);
ft_printf("|%d\n", n);
// test 212
ft_printf("test %d|", test++);
n = ft_printf( "%03s", s_hidden);
ft_printf("|%d\n", n);
// test 213
ft_printf("test %d|", test++);
n = ft_printf( "%09s", s_hidden);
ft_printf("|%d\n", n);
// test 214
ft_printf("test %d|", test++);
n = ft_printf( "This is  %s", "random string");
ft_printf("|%d\n", n);
// test 215
ft_printf("test %d|", test++);
n = ft_printf( "This is a 10s", "random string");
ft_printf("|%d\n", n);
// test 216
ft_printf("test %d|", test++);
n = ft_printf( "This is a .5s", "random string");
ft_printf("|%d\n", n);
// test 217
ft_printf("test %d|", test++);
n = ft_printf( "%s", "WwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqp");
ft_printf("|%d\n", n);
// test 218
ft_printf("test %d|", test++);
n = ft_printf( "hello, s\n", "\0");
ft_printf("|%d\n", n);
// test 219
ft_printf("test %d|", test++);
n = ft_printf( "_ s_", "");
ft_printf("|%d\n", n);
// test 220
ft_printf("test %d|", test++);
n = ft_printf( "_+s_", "");
ft_printf("|%d\n", n);
// test 221
ft_printf("test %d|", test++);
n = ft_printf( "%5s", "hi");
ft_printf("|%d\n", n);
// test 222
ft_printf("test %d|", test++);
n = ft_printf( "%5s", "haiiii!!! UwU");
ft_printf("|%d\n", n);
// test 223
ft_printf("test %d|", test++);
n = ft_printf( "-5s", "hi");
ft_printf("|%d\n", n);
// test 224
ft_printf("test %d|", test++);
n = ft_printf( "-5s", "haiiii!!! UwU");
ft_printf("|%d\n", n);
// test 225
ft_printf("test %d|", test++);
n = ft_printf( "%.s", "hi");
ft_printf("|%d\n", n);
// test 226
ft_printf("test %d|", test++);
n = ft_printf( ".0s", "hi");
ft_printf("|%d\n", n);
// test 227
ft_printf("test %d|", test++);
n = ft_printf( ".1s", "hi");
ft_printf("|%d\n", n);
// test 228
ft_printf("test %d|", test++);
n = ft_printf( ".4s", "hi");
ft_printf("|%d\n", n);
// test 229
ft_printf("test %d|", test++);
n = ft_printf( ".3s", "hello!");
ft_printf("|%d\n", n);
// test 230
ft_printf("test %d|", test++);
n = ft_printf( "%.3s", "hai!");
ft_printf("|%d\n", n);
// test 231
ft_printf("test %d|", test++);
n = ft_printf( "%-.3s", "hai!");
ft_printf("|%d\n", n);
// test 232
ft_printf("test %d|", test++);
n = ft_printf( "hello, s\n", "world");
ft_printf("|%d\n", n);

	// test 233
	ft_printf("test %d|", test++);
	n = ft_printf("%-s", "hello");
	ft_printf("|%d\n", n);
	// test 234
	ft_printf("test %d|", test++);
	n = ft_printf("%-1s", "hello");
	ft_printf("|%d\n", n);
	// test 235
	ft_printf("test %d|", test++);
	n = ft_printf("%-2s", "hello");
	ft_printf("|%d\n", n);
	// test 236
	ft_printf("test %d|", test++);
	n = ft_printf("%-3s", "hello");
	ft_printf("|%d\n", n);
	// test 237
	ft_printf("test %d|", test++);
	n = ft_printf("%-4s", "hello");
	ft_printf("|%d\n", n);
	// test 238
	ft_printf("test %d|", test++);
	n = ft_printf("%-5s", "hello");
	ft_printf("|%d\n", n);
	// test 239
	ft_printf("test %d|", test++);
	n = ft_printf("%-10s", "hello");
	ft_printf("|%d\n", n);
	// test 240
	ft_printf("test %d|", test++);
	n = ft_printf("%-100s", "hello");
	ft_printf("|%d\n", n);
	// test 241
	ft_printf("test %d|", test++);
	n = ft_printf("%-.s", "hello");
	ft_printf("|%d\n", n);
	// test 242
	ft_printf("test %d|", test++);
	n = ft_printf("%-.1s", "hello");
	ft_printf("|%d\n", n);
	// test 243
	ft_printf("test %d|", test++);
	n = ft_printf("%-.2s", "hello");
	ft_printf("|%d\n", n);
	// test 244
	ft_printf("test %d|", test++);
	n = ft_printf("%-.3s", "hello");
	ft_printf("|%d\n", n);
	// test 245
	ft_printf("test %d|", test++);
	n = ft_printf("%-.4s", "hello");
	ft_printf("|%d\n", n);
	// test 246
	ft_printf("test %d|", test++);
	n = ft_printf("%-.5s", "hello");
	ft_printf("|%d\n", n);
	// test 247
	ft_printf("test %d|", test++);
	n = ft_printf("%-.10s", "hello");
	ft_printf("|%d\n", n);
	// test 248
	ft_printf("test %d|", test++);
	n = ft_printf("%-.100s", "hello");
	ft_printf("|%d\n", n);
	// test 249
	ft_printf("test %d|", test++);
	n = ft_printf("%-1.1s", "hello");
	ft_printf("|%d\n", n);
	// test 250
	ft_printf("test %d|", test++);
	n = ft_printf("%-2.2s", "hello");
	ft_printf("|%d\n", n);
	// test 251
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3s", "hello");
	ft_printf("|%d\n", n);
	// test 252
	ft_printf("test %d|", test++);
	n = ft_printf("%-4.4s", "hello");
	ft_printf("|%d\n", n);
	// test 253
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.5s", "hello");
	ft_printf("|%d\n", n);
	// test 254
	ft_printf("test %d|", test++);
	n = ft_printf("%-10.10s", "hello");
	ft_printf("|%d\n", n);
	// test 255
	ft_printf("test %d|", test++);
	n = ft_printf("%-100.100s", "hello");
	ft_printf("|%d\n", n);
}
