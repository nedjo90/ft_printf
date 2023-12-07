#include "printf.h"

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
printf("test %d|", test++);
n = printf( "%s", "hello");
printf("|%d\n", n);
// test 1
printf("test %d|", test++);
n = printf( "%#s", "hello");
printf("|%d\n", n);
// test 2
printf("test %d|", test++);
n = printf( "%+s", "hello");
printf("|%d\n", n);
// test 3
printf("test %d|", test++);
n = printf( "% s", "hello");
printf("|%d\n", n);
// test 4
printf("test %d|", test++);
n = printf( "% s", NULL);
printf("|%d\n", n);
// test 5
printf("test %d|", test++);
n = printf( "%#s", NULL);
printf("|%d\n", n);
// test 6
printf("test %d|", test++);
n = printf( "%+s", NULL);
printf("|%d\n", n);
// test 7
printf("test %d|", test++);
n = printf( "%-s", "hello");
printf("|%d\n", n);
// test 8
printf("test %d|", test++);
n = printf( "%-s", NULL);
printf("|%d\n", n);
// test 9
printf("test %d|", test++);
n = printf( "%.s", NULL);
printf("|%d\n", n);
// test 10
printf("test %d|", test++);
n = printf( "%s", NULL);
printf("|%d\n", n);
// test 11
printf("test %d|", test++);
n = printf( "hello,%s.", "gavin");
printf("|%d\n", n);
// test 12
printf("test %d|", test++);
n = printf( "%s", "testing testing");
printf("|%d\n", n);
// test 13
printf("test %d|", test++);
n = printf( "this %s is epty", "");
printf("|%d\n", n);
// test 14
printf("test %d|", test++);
n = printf( "%.s", "hello");
printf("|%d\n", n);
// test 15
printf("test %d|", test++);
n = printf( "hello,%s.", NULL);
printf("|%d\n", n);
// test 16
printf("test %d|", test++);
n = printf( "%s", NULL);
printf("|%d\n", n);
// test 17
printf("test %d|", test++);
n = printf( "%.s", "NULL");
printf("|%d\n", n);
// test 18
printf("test %d|", test++);
n = printf( "%s", s_hidden);
printf("|%d\n", n);
// test 19
printf("test %d|", test++);
n = printf( "%.s", s_hidden);
printf("|%d\n", n);
// test 20
printf("test %d|", test++);
n = printf( "3.s", s_hidden);
printf("|%d\n", n);
// test 21
printf("test %d|", test++);
n = printf( "%0.s", s_hidden);
printf("|%d\n", n);
// test 22
printf("test %d|", test++);
n = printf( "3.s", NULL);
printf("|%d\n", n);
// test 23
printf("test %d|", test++);
n = printf( "%0.s", NULL);
printf("|%d\n", n);
// test 24
printf("test %d|", test++);
n = printf( "1.s", "\0");
printf("|%d\n", n);
// test 25
printf("test %d|", test++);
n = printf( "2.s", "\0");
printf("|%d\n", n);
// test 26
printf("test %d|", test++);
n = printf( "9.s", "\0");
printf("|%d\n", n);
// test 27
printf("test %d|", test++);
n = printf( "%3.s", s_hidden);
printf("|%d\n", n);
// test 28
printf("test %d|", test++);
n = printf( "%8.s", s_hidden);
printf("|%d\n", n);
// test 29
printf("test %d|", test++);
n = printf( "%3.s", NULL);
printf("|%d\n", n);
// test 30
printf("test %d|", test++);
n = printf( "%8.s", NULL);
printf("|%d\n", n);
// test 31
printf("test %d|", test++);
n = printf( "%1.s", "\0");
printf("|%d\n", n);
// test 32
printf("test %d|", test++);
n = printf( "%2.s", "\0");
printf("|%d\n", n);
// test 33
printf("test %d|", test++);
n = printf( "%6.s", "\0");
printf("|%d\n", n);
// test 34
printf("test %d|", test++);
n = printf( "%0-s", s_hidden);
printf("|%d\n", n);
// test 35
printf("test %d|", test++);
n = printf( "%#s", "hello");
printf("|%d\n", n);
// test 36
printf("test %d|", test++);
n = printf( "%+s", "hello");
printf("|%d\n", n);
// test 37
printf("test %d|", test++);
n = printf( "% s", "hello");
printf("|%d\n", n);
// test 38
printf("test %d|", test++);
n = printf( "% s", NULL);
printf("|%d\n", n);
// test 39
printf("test %d|", test++);
n = printf( "%#s", NULL);
printf("|%d\n", n);
// test 40
printf("test %d|", test++);
n = printf( "%+s", NULL);
printf("|%d\n", n);
// test 41
printf("test %d|", test++);
n = printf( "%-s", "hello");
printf("|%d\n", n);
// test 42
printf("test %d|", test++);
n = printf( "%-s", NULL);
printf("|%d\n", n);
// test 43
printf("test %d|", test++);
n = printf( "%.s", NULL);
printf("|%d\n", n);
// test 44
printf("test %d|", test++);
n = printf( "%s", NULL);
printf("|%d\n", n);
// test 45
printf("test %d|", test++);
n = printf( "hello,%s.", "gavin");
printf("|%d\n", n);
// test 46
printf("test %d|", test++);
n = printf( "%s", "", "b");
printf("|%d\n", n);

// test 47
printf("test %d|", test++);
n = printf( "%.s", "hello");
printf("|%d\n", n);
// test 48
printf("test %d|", test++);
n = printf( "hello,%s.", NULL);
printf("|%d\n", n);
// test 49
printf("test %d|", test++);
n = printf( "%s", NULL);
printf("|%d\n", n);
// test 50
printf("test %d|", test++);
n = printf( "%.s", "NULL");
printf("|%d\n", n);
// test 51
printf("test %d|", test++);
n = printf( "3.s", NULL);
printf("|%d\n", n);
// test 52
printf("test %d|", test++);
n = printf( "%0.s", NULL);
printf("|%d\n", n);
// test 53
printf("test %d|", test++);
n = printf( "1.s", "\0");
printf("|%d\n", n);
// test 54
printf("test %d|", test++);
n = printf( "2.s", "\0");
printf("|%d\n", n);
// test 55
printf("test %d|", test++);
n = printf( "9.s", "\0");
printf("|%d\n", n);
// test 56
printf("test %d|", test++);
n = printf( "%3.s", NULL);
printf("|%d\n", n);
// test 57
printf("test %d|", test++);
n = printf( "%8.s", NULL);
printf("|%d\n", n);
// test 58
printf("test %d|", test++);
n = printf( "%1.s", "\0");
printf("|%d\n", n);
// test 59
printf("test %d|", test++);
n = printf( "%2.s", "\0");
printf("|%d\n", n);
// test 60
printf("test %d|", test++);
n = printf( "%6.s", "\0");
printf("|%d\n", n);
// test 61
printf("test %d|", test++);
n = printf( "%1s", "");
printf("|%d\n", n);
// test 62
printf("test %d|", test++);
n = printf( "-1s", "");
printf("|%d\n", n);
// test 63
printf("test %d|", test++);
n = printf( " -2s", "");
printf("|%d\n", n);
// test 64
printf("test %d|", test++);
n = printf( "%3s ", "");
printf("|%d\n", n);
// test 65
printf("test %d|", test++);
n = printf( " %0s ", "");
printf("|%d\n", n);
// test 66
printf("test %d|", test++);
n = printf( " -s ", "-");
printf("|%d\n", n);
// test 67
printf("test %d|", test++);
n = printf( "%.s", "coucou je suis un test ahahah ohohohoh uhuuhu");
printf("|%d\n", n);
// test 68
printf("test %d|", test++);
n = printf( ".0s", "coucou je suis un test ahahah ohohohoh uhuuhu");
printf("|%d\n", n);
// test 69
printf("test %d|", test++);
n = printf( ".1s", "coucou je suis un test ahahah ohohohoh uhuuhu");
printf("|%d\n", n);
// test 70
printf("test %d|", test++);
n = printf( "%10s", "coucou je suis un test ahahah ohohohoh uhuuhu");
printf("|%d\n", n);
// test 71
printf("test %d|", test++);
n = printf( "%.00s", "coucou je suis un test ahahah ohohohoh uhuuhu");
printf("|%d\n", n);
// test 72
printf("test %d|", test++);
n = printf( "%.200000s", "coucou je suis un test ahahah ohohohoh uhuuhu");
printf("|%d\n", n);
// test 73
printf("test %d|", test++);
n = printf( "%.s", "");
printf("|%d\n", n);
// test 74
printf("test %d|", test++);
n = printf( " .1s", "");
printf("|%d\n", n);
// test 75
printf("test %d|", test++);
n = printf( "%1s ", "");
printf("|%d\n", n);
// test 76
printf("test %d|", test++);
n = printf( " .s ", "");
printf("|%d\n", n);
// test 77
printf("test %d|", test++);
n = printf( " .s ", "-");
printf("|%d\n", n);
// test 78
printf("test %d|", test++);
n = printf( "%#s", "hello");
printf("|%d\n", n);
// test 79
printf("test %d|", test++);
n = printf( "%+s", "hello");
printf("|%d\n", n);
// test 80
printf("test %d|", test++);
n = printf( "% s", "hello");
printf("|%d\n", n);
// test 81
printf("test %d|", test++);
n = printf( "% s", NULL);
printf("|%d\n", n);
// test 82
printf("test %d|", test++);
n = printf( "%#s", NULL);
printf("|%d\n", n);
// test 83
printf("test %d|", test++);
n = printf( "%+s", NULL);
printf("|%d\n", n);
// test 84
printf("test %d|", test++);
n = printf( "%-21s", "abc");
printf("|%d\n", n);
// test 85
printf("test %d|", test++);
n = printf( "%05s", "goes over");
printf("|%d\n", n);
// test 86
printf("test %d|", test++);
n = printf( "%21s", NULL);
printf("|%d\n", n);
// test 87
printf("test %d|", test++);
n = printf( "02s", NULL);
printf("|%d\n", n);
// test 88
printf("test %d|", test++);
n = printf( "%-21s", NULL);
printf("|%d\n", n);
// test 89
printf("test %d|", test++);
n = printf( "%03s", NULL);
printf("|%d\n", n);
// test 90
printf("test %d|", test++);
n = printf( "05s", "hello");
printf("|%d\n", n);
// test 91
printf("test %d|", test++);
n = printf( "%0s", "hello");
printf("|%d\n", n);
// test 92
printf("test %d|", test++);
n = printf( "%-s", "hello");
printf("|%d\n", n);
// test 93
printf("test %d|", test++);
n = printf( "%0s", NULL);
printf("|%d\n", n);
// test 94
printf("test %d|", test++);
n = printf( "%-s", NULL);
printf("|%d\n", n);
// test 95
printf("test %d|", test++);
n = printf( "23s", NULL);
printf("|%d\n", n);
// test 96
printf("test %d|", test++);
n = printf( "%.s", NULL);
printf("|%d\n", n);
// test 97
printf("test %d|", test++);
n = printf( "%s", NULL);
printf("|%d\n", n);
// test 98
printf("test %d|", test++);
n = printf( "hello,%s.", "gavin");
printf("|%d\n", n);
// test 99
printf("test %d|", test++);
n = printf( "%s", "testing testing");
printf("|%d\n", n);
// test 100
printf("test %d|", test++);
n = printf( "32s", "abc");
printf("|%d\n", n);
// test 101
printf("test %d|", test++);
n = printf( "16s", "nark nark");
printf("|%d\n", n);
// test 102
printf("test %d|", test++);
n = printf( "%5s", "goes over");
printf("|%d\n", n);
// test 103
printf("test %d|", test++);
n = printf( "%32s", "abc");
printf("|%d\n", n);
// test 104
printf("test %d|", test++);
n = printf( "%16s", "nark nark");
printf("|%d\n", n);
// test 105
printf("test %d|", test++);
n = printf( "-5s", "goes over");
printf("|%d\n", n);
// test 106
printf("test %d|", test++);
n = printf( ".7s", "hello");
printf("|%d\n", n);
// test 107
printf("test %d|", test++);
n = printf( ".3s", "hello");
printf("|%d\n", n);
// test 108
printf("test %d|", test++);
n = printf( "%.s", "hello");
printf("|%d\n", n);
// test 109
printf("test %d|", test++);
n = printf( ".0s", "hello");
printf("|%d\n", n);
// test 110
printf("test %d|", test++);
n = printf( "%.5s", "yolo");
printf("|%d\n", n);
// test 111
printf("test %d|", test++);
n = printf( "%.5s", "bombastic");
printf("|%d\n", n);
// test 112
printf("test %d|", test++);
n = printf( "%-.5s", "yolo");
printf("|%d\n", n);
// test 113
printf("test %d|", test++);
n = printf( "%-.5s", "tubular");
printf("|%d\n", n);
// test 114
printf("test %d|", test++);
n = printf( "hello,%s.", NULL);
printf("|%d\n", n);
// test 115
printf("test %d|", test++);
n = printf( "%s", NULL);
printf("|%d\n", n);
// test 116
printf("test %d|", test++);
n = printf( "32s", NULL);
printf("|%d\n", n);
// test 117
printf("test %d|", test++);
n = printf( "%2s", NULL);
printf("|%d\n", n);
// test 118
printf("test %d|", test++);
n = printf( "%32s", NULL);
printf("|%d\n", n);
// test 119
printf("test %d|", test++);
n = printf( "%16s", NULL);
printf("|%d\n", n);
// test 120
printf("test %d|", test++);
n = printf( "-3s", NULL);
printf("|%d\n", n);
// test 121
printf("test %d|", test++);
n = printf( ".9s", "NULL");
printf("|%d\n", n);
// test 122
printf("test %d|", test++);
n = printf( ".3s", "NULL");
printf("|%d\n", n);
// test 123
printf("test %d|", test++);
n = printf( "%.s", "NULL");
printf("|%d\n", n);
// test 124
printf("test %d|", test++);
n = printf( ".0s", "NULL");
printf("|%d\n", n);
// test 125
printf("test %d|", test++);
n = printf( "%s", s_hidden);
printf("|%d\n", n);
// test 126
printf("test %d|", test++);
n = printf( "%3s", s_hidden);
printf("|%d\n", n);
// test 127
printf("test %d|", test++);
n = printf( "%9s", s_hidden);
printf("|%d\n", n);
// test 128
printf("test %d|", test++);
n = printf( "%.s", s_hidden);
printf("|%d\n", n);
// test 129
printf("test %d|", test++);
n = printf( ".9s", s_hidden);
printf("|%d\n", n);
// test 130
printf("test %d|", test++);
n = printf( "%03s", s_hidden);
printf("|%d\n", n);
// test 131
printf("test %d|", test++);
n = printf( "%09s", s_hidden);
printf("|%d\n", n);
// test 132
printf("test %d|", test++);
n = printf( "%03s", NULL);
printf("|%d\n", n);
// test 133
printf("test %d|", test++);
n = printf( "%09s", NULL);
printf("|%d\n", n);
// test 134
printf("test %d|", test++);
n = printf( "%00s", "\0");
printf("|%d\n", n);
// test 135
printf("test %d|", test++);
n = printf( "%01s", "\0");
printf("|%d\n", n);
// test 136
printf("test %d|", test++);
n = printf( "%03s", "\0");
printf("|%d\n", n);
// test 137
printf("test %d|", test++);
n = printf( "%09s", "\0");
printf("|%d\n", n);
// test 138
printf("test %d|", test++);
n = printf( "3.s", s_hidden);
printf("|%d\n", n);
// test 139
printf("test %d|", test++);
n = printf( "%0.s", s_hidden);
printf("|%d\n", n);
// test 140
printf("test %d|", test++);
n = printf( "3.s", NULL);
printf("|%d\n", n);
// test 141
printf("test %d|", test++);
n = printf( "%0.s", NULL);
printf("|%d\n", n);
// test 142
printf("test %d|", test++);
n = printf( "1.s", "\0");
printf("|%d\n", n);
// test 143
printf("test %d|", test++);
n = printf( "2.s", "\0");
printf("|%d\n", n);
// test 144
printf("test %d|", test++);
n = printf( "9.s", "\0");
printf("|%d\n", n);
// test 145
printf("test %d|", test++);
n = printf( "%3.s", s_hidden);
printf("|%d\n", n);
// test 146
printf("test %d|", test++);
n = printf( "%8.s", s_hidden);
printf("|%d\n", n);
// test 147
printf("test %d|", test++);
n = printf( "%3.s", NULL);
printf("|%d\n", n);
// test 148
printf("test %d|", test++);
n = printf( "%8.s", NULL);
printf("|%d\n", n);
// test 149
printf("test %d|", test++);
n = printf( "%1.s", "\0");
printf("|%d\n", n);
// test 150
printf("test %d|", test++);
n = printf( "%2.s", "\0");
printf("|%d\n", n);
// test 151
printf("test %d|", test++);
n = printf( "%6.s", "\0");
printf("|%d\n", n);
// test 152
printf("test %d|", test++);
n = printf( "%.1s", s_hidden);
printf("|%d\n", n);
// test 153
printf("test %d|", test++);
n = printf( "%1.1s", s_hidden);
printf("|%d\n", n);
// test 154
printf("test %d|", test++);
n = printf( "%.1s", NULL);
printf("|%d\n", n);
// test 155
printf("test %d|", test++);
n = printf( "%.1s", NULL);
printf("|%d\n", n);
// test 156
printf("test %d|", test++);
n = printf( "%-.1s", s_hidden);
printf("|%d\n", n);
// test 157
printf("test %d|", test++);
n = printf( "%-1.1s", s_hidden);
printf("|%d\n", n);
// test 158
printf("test %d|", test++);
n = printf( "%-.1s", NULL);
printf("|%d\n", n);
// test 159
printf("test %d|", test++);
n = printf( "%-.1s", NULL);
printf("|%d\n", n);
// test 160
printf("test %d|", test++);
n = printf( "%-.1s", "\0");
printf("|%d\n", n);
// test 161
printf("test %d|", test++);
n = printf( "%-.1s", "\0");
printf("|%d\n", n);
// test 162
printf("test %d|", test++);
n = printf( "%.6s", s_hidden);
printf("|%d\n", n);
// test 163
printf("test %d|", test++);
n = printf( "%2.6s", s_hidden);
printf("|%d\n", n);
// test 164
printf("test %d|", test++);
n = printf( "%.6s", NULL);
printf("|%d\n", n);
// test 165
printf("test %d|", test++);
n = printf( "%2.6s", NULL);
printf("|%d\n", n);
// test 166
printf("test %d|", test++);
n = printf( "%.6s", "\0");
printf("|%d\n", n);
// test 167
printf("test %d|", test++);
n = printf( "%.6s", "\0");
printf("|%d\n", n);
// test 168
printf("test %d|", test++);
n = printf( "%-.6s", s_hidden);
printf("|%d\n", n);
// test 169
printf("test %d|", test++);
n = printf( "%-2.6s", s_hidden);
printf("|%d\n", n);
// test 170
printf("test %d|", test++);
n = printf( "%-.8s", s_hidden);
printf("|%d\n", n);
// test 171
printf("test %d|", test++);
n = printf( "%-1.8s", s_hidden);
printf("|%d\n", n);
// test 172
printf("test %d|", test++);
n = printf( "%-.8s", NULL);
printf("|%d\n", n);
// test 173
printf("test %d|", test++);
n = printf( "%-1.8s", NULL);
printf("|%d\n", n);
// test 174
printf("test %d|", test++);
n = printf( "%-00s", s_hidden);
printf("|%d\n", n);
// test 175
printf("test %d|", test++);
n = printf( "%-09s", s_hidden);
printf("|%d\n", n);
// test 176
printf("test %d|", test++);
n = printf( "%+- 0606s", s_hidden);
printf("|%d\n", n);
// test 177
printf("test %d|", test++);
n = printf( "% 0+-606s", s_hidden);
printf("|%d\n", n);
// test 178
printf("test %d|", test++);
n = printf( "%0 +-606s", s_hidden);
printf("|%d\n", n);
// test 179
printf("test %d|", test++);
n = printf( "%+-0 606s", s_hidden);
printf("|%d\n", n);
// test 180
printf("test %d|", test++);
n = printf( "%-+ 0606s", s_hidden);
printf("|%d\n", n);
// test 181
printf("test %d|", test++);
n = printf( "% -+0606s", s_hidden);
printf("|%d\n", n);
// test 182
printf("test %d|", test++);
n = printf( "%+- 0706s", s_hidden);
printf("|%d\n", n);
// test 183
printf("test %d|", test++);
n = printf( "% 0+-806s", s_hidden);
printf("|%d\n", n);
// test 184
printf("test %d|", test++);
n = printf( "%0 +-906s", s_hidden);
printf("|%d\n", n);
// test 185
printf("test %d|", test++);
n = printf( "%+-0 1006s", s_hidden);
printf("|%d\n", n);
// test 186
printf("test %d|", test++);
n = printf( "%-+ 01106s", s_hidden);
printf("|%d\n", n);
// test 187
printf("test %d|", test++);
n = printf( "% -+01206s", s_hidden);
printf("|%d\n", n);
// test 188
printf("test %d|", test++);
n = printf( "%+- 0604s", s_hidden);
printf("|%d\n", n);
// test 189
printf("test %d|", test++);
n = printf( "% 0+-604s", s_hidden);
printf("|%d\n", n);
// test 190
printf("test %d|", test++);
n = printf( "%0 +-604s", s_hidden);
printf("|%d\n", n);
// test 191
printf("test %d|", test++);
n = printf( "%+-0 604s", s_hidden);
printf("|%d\n", n);
// test 192
printf("test %d|", test++);
n = printf( "%-+ 0604s", s_hidden);
printf("|%d\n", n);
// test 193
printf("test %d|", test++);
n = printf( "% 0-+604s", s_hidden);
printf("|%d\n", n);
// test 194
printf("test %d|", test++);
n = printf( "%+- 0609s", s_hidden);
printf("|%d\n", n);
// test 195
printf("test %d|", test++);
n = printf( "% 0+-609s", s_hidden);
printf("|%d\n", n);
// test 196
printf("test %d|", test++);
n = printf( "%0 +-609s", s_hidden);
printf("|%d\n", n);
// test 197
printf("test %d|", test++);
n = printf( "%+-0 609s", s_hidden);
printf("|%d\n", n);
// test 198
printf("test %d|", test++);
n = printf( "%-+ 0609s", s_hidden);
printf("|%d\n", n);
// test 199
printf("test %d|", test++);
n = printf( "% 0-+609s", s_hidden);
printf("|%d\n", n);
// test 200
printf("test %d|", test++);
n = printf( "%03s", s_hidden);
printf("|%d\n", n);
// test 201
printf("test %d|", test++);
n = printf( "%09s", s_hidden);
printf("|%d\n", n);
// test 202
printf("test %d|", test++);
n = printf( "% 3s", s_hidden);
printf("|%d\n", n);
// test 203
printf("test %d|", test++);
n = printf( "% 6s", s_hidden);
printf("|%d\n", n);
// test 204
printf("test %d|", test++);
n = printf( "00s", s_hidden);
printf("|%d\n", n);
// test 205
printf("test %d|", test++);
n = printf( "%00s", s_hidden);
printf("|%d\n", n);
// test 206
printf("test %d|", test++);
n = printf( "%000s", s_hidden);
printf("|%d\n", n);
// test 207
printf("test %d|", test++);
n = printf( "%00s", s_hidden);
printf("|%d\n", n);
// test 208
printf("test %d|", test++);
n = printf( "%-0s", s_hidden);
printf("|%d\n", n);
// test 209
printf("test %d|", test++);
n = printf( "%0-s", s_hidden);
printf("|%d\n", n);
// test 210
printf("test %d|", test++);
n = printf( "03s", s_hidden);
printf("|%d\n", n);
// test 211
printf("test %d|", test++);
n = printf( "09s", s_hidden);
printf("|%d\n", n);
// test 212
printf("test %d|", test++);
n = printf( "%03s", s_hidden);
printf("|%d\n", n);
// test 213
printf("test %d|", test++);
n = printf( "%09s", s_hidden);
printf("|%d\n", n);
// test 214
printf("test %d|", test++);
n = printf( "This is  %s", "random string");
printf("|%d\n", n);
// test 215
printf("test %d|", test++);
n = printf( "This is a 10s", "random string");
printf("|%d\n", n);
// test 216
printf("test %d|", test++);
n = printf( "This is a .5s", "random string");
printf("|%d\n", n);
// test 217
printf("test %d|", test++);
n = printf( "%s", "WwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqpWwyAlxbZGYIJZGzkjomuMGJgEuAZPbUAUimRUBeAAyoSGmhJCGmBOguEdCViaCsqohhsuRGLkoFQNmTZEZQFLEwvHAEctloDFOpLZGQyDDexpPllnNXympcKOxDyygGcWpdzqp");
printf("|%d\n", n);
// test 218
printf("test %d|", test++);
n = printf( "hello, s\n", "\0");
printf("|%d\n", n);
// test 219
printf("test %d|", test++);
n = printf( "_ s_", "");
printf("|%d\n", n);
// test 220
printf("test %d|", test++);
n = printf( "_+s_", "");
printf("|%d\n", n);
// test 221
printf("test %d|", test++);
n = printf( "%5s", "hi");
printf("|%d\n", n);
// test 222
printf("test %d|", test++);
n = printf( "%5s", "haiiii!!! UwU");
printf("|%d\n", n);
// test 223
printf("test %d|", test++);
n = printf( "-5s", "hi");
printf("|%d\n", n);
// test 224
printf("test %d|", test++);
n = printf( "-5s", "haiiii!!! UwU");
printf("|%d\n", n);
// test 225
printf("test %d|", test++);
n = printf( "%.s", "hi");
printf("|%d\n", n);
// test 226
printf("test %d|", test++);
n = printf( ".0s", "hi");
printf("|%d\n", n);
// test 227
printf("test %d|", test++);
n = printf( ".1s", "hi");
printf("|%d\n", n);
// test 228
printf("test %d|", test++);
n = printf( ".4s", "hi");
printf("|%d\n", n);
// test 229
printf("test %d|", test++);
n = printf( ".3s", "hello!");
printf("|%d\n", n);
// test 230
printf("test %d|", test++);
n = printf( "%.3s", "hai!");
printf("|%d\n", n);
// test 231
printf("test %d|", test++);
n = printf( "%-.3s", "hai!");
printf("|%d\n", n);
// test 232
printf("test %d|", test++);
n = printf( "hello, s\n", "world");
printf("|%d\n", n);

	// test 233
	printf("test %d|", test++);
	n = printf("%-s", "hello");
	printf("|%d\n", n);
	// test 234
	printf("test %d|", test++);
	n = printf("%-1s", "hello");
	printf("|%d\n", n);
	// test 235
	printf("test %d|", test++);
	n = printf("%-2s", "hello");
	printf("|%d\n", n);
	// test 236
	printf("test %d|", test++);
	n = printf("%-3s", "hello");
	printf("|%d\n", n);
	// test 237
	printf("test %d|", test++);
	n = printf("%-4s", "hello");
	printf("|%d\n", n);
	// test 238
	printf("test %d|", test++);
	n = printf("%-5s", "hello");
	printf("|%d\n", n);
	// test 239
	printf("test %d|", test++);
	n = printf("%-10s", "hello");
	printf("|%d\n", n);
	// test 240
	printf("test %d|", test++);
	n = printf("%-100s", "hello");
	printf("|%d\n", n);
	// test 241
	printf("test %d|", test++);
	n = printf("%-.s", "hello");
	printf("|%d\n", n);
	// test 242
	printf("test %d|", test++);
	n = printf("%-.1s", "hello");
	printf("|%d\n", n);
	// test 243
	printf("test %d|", test++);
	n = printf("%-.2s", "hello");
	printf("|%d\n", n);
	// test 244
	printf("test %d|", test++);
	n = printf("%-.3s", "hello");
	printf("|%d\n", n);
	// test 245
	printf("test %d|", test++);
	n = printf("%-.4s", "hello");
	printf("|%d\n", n);
	// test 246
	printf("test %d|", test++);
	n = printf("%-.5s", "hello");
	printf("|%d\n", n);
	// test 247
	printf("test %d|", test++);
	n = printf("%-.10s", "hello");
	printf("|%d\n", n);
	// test 248
	printf("test %d|", test++);
	n = printf("%-.100s", "hello");
	printf("|%d\n", n);
	// test 249
	printf("test %d|", test++);
	n = printf("%-1.1s", "hello");
	printf("|%d\n", n);
	// test 250
	printf("test %d|", test++);
	n = printf("%-2.2s", "hello");
	printf("|%d\n", n);
	// test 251
	printf("test %d|", test++);
	n = printf("%-3.3s", "hello");
	printf("|%d\n", n);
	// test 252
	printf("test %d|", test++);
	n = printf("%-4.4s", "hello");
	printf("|%d\n", n);
	// test 253
	printf("test %d|", test++);
	n = printf("%-5.5s", "hello");
	printf("|%d\n", n);
	// test 254
	printf("test %d|", test++);
	n = printf("%-10.10s", "hello");
	printf("|%d\n", n);
	// test 255
	printf("test %d|", test++);
	n = printf("%-100.100s", "hello");
	printf("|%d\n", n);
}
