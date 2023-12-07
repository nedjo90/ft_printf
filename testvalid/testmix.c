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

	FILE *reel;
	reel = fopen("reeloutput", "ab");

		

		// test 0
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "");


		fprintf(reel, "|%d\n", n);
	

		// test 1
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "\t\n\r\v\f\n");


		fprintf(reel, "|%d\n", n);
	

		// test 2
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%%");


		fprintf(reel, "|%d\n", n);
	

		// test 3
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5%");


		fprintf(reel, "|%d\n", n);
	

		// test 4
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5%");


		fprintf(reel, "|%d\n", n);
	

		// test 5
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05%");


		fprintf(reel, "|%d\n", n);
	

		// test 6
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-05%");


		fprintf(reel, "|%d\n", n);
	

		// test 7
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%");


		fprintf(reel, "|%d\n", n);
	

		// test 8
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5");


		fprintf(reel, "|%d\n", n);
	

		// test 9
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05");


		fprintf(reel, "|%d\n", n);
	

		// test 10
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-05");


		fprintf(reel, "|%d\n", n);
	

		// test 11
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5");


		fprintf(reel, "|%d\n", n);
	

		// test 12
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.4p", &ncm_p);


		fprintf(reel, "|%d\n", n);
	

		// test 13
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.p", &ncm_p);


		fprintf(reel, "|%d\n", n);
	

		// test 14
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05p", &ncm_p);


		fprintf(reel, "|%d\n", n);
	

		// test 15
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0p", &ncm_p);


		fprintf(reel, "|%d\n", n);
	

		// test 16
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-p", &ncm_p);


		fprintf(reel, "|%d\n", n);
	

		// test 17
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#p", &ncm_p);


		fprintf(reel, "|%d\n", n);
	

		// test 18
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+p", &ncm_p);


		fprintf(reel, "|%d\n", n);
	

		// test 19
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+p", &ncm_p);


		fprintf(reel, "|%d\n", n);
	

		// test 20
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% p", &ncm_p);


		fprintf(reel, "|%d\n", n);
	

		// test 21
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% p", &ncm_p);


		fprintf(reel, "|%d\n", n);
	

		// test 22
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-p", &ncm_p);


		fprintf(reel, "|%d\n", n);
	

		// test 23
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#d", 42);;


		fprintf(reel, "|%d\n", n);
	

		// test 24
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#i", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 25
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-i", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 26
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#u", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 27
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+u", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 28
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% u", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 29
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-u", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 30
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+x", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 31
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% x", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 32
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+X", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 33
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% X", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 34
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+u", 5);


		fprintf(reel, "|%d\n", n);
	

		// test 35
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+u", 5);


		fprintf(reel, "|%d\n", n);
	

		// test 36
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+u", 4294967295);


		fprintf(reel, "|%d\n", n);
	

		// test 37
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+5u", 35);


		fprintf(reel, "|%d\n", n);
	

		// test 38
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+7u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 39
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+24u", 4294967295);


		fprintf(reel, "|%d\n", n);
	

		// test 40
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.7u", 234);


		fprintf(reel, "|%d\n", n);
	

		// test 41
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.3u", 3723);


		fprintf(reel, "|%d\n", n);
	

		// test 42
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+05u", 432);


		fprintf(reel, "|%d\n", n);
	

		// test 43
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+04u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 44
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+8.5u", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 45
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+8.5u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 46
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+8.3u", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 47
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+3.7u", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 48
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+3.3u", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 49
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-8.5u", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 50
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-8.5u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 51
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-8.3u", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 52
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-3.7u", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 53
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-3.3u", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 54
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+8.5u", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 55
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+8.5u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 56
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+8.3u", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 57
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+3.7u", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 58
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+3.3u", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 59
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-8.5u", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 60
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-8.5u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 61
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-8.3u", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 62
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-3.7u", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 63
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-3.3u", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 64
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%++d", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 65
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%  d", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 66
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% + d", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 67
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%--5d", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 68
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-+-5d", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 69
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%##x", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 70
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#++#-5x", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 71
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.4c", 'a');


		fprintf(reel, "|%d\n", n);
	

		// test 72
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#c", 'a');


		fprintf(reel, "|%d\n", n);
	

		// test 73
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+c", 'a');


		fprintf(reel, "|%d\n", n);
	

		// test 74
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+c", -42);


		fprintf(reel, "|%d\n", n);
	

		// test 75
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#s", "hello");


		fprintf(reel, "|%d\n", n);
	

		// test 76
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+s", "hello");


		fprintf(reel, "|%d\n", n);
	

		// test 77
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% s", "hello");


		fprintf(reel, "|%d\n", n);
	

		// test 78
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 79
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 80
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 81
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-x", 42);


		fprintf(reel, "|%d\n", n);
	

		// test 82
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-021s", "abc");


		fprintf(reel, "|%d\n", n);
	

		// test 83
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-05s", "goes over");


		fprintf(reel, "|%d\n", n);
	

		// test 84
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%021s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 85
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%02s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 86
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-021s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 87
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-03s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 88
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05c", '\0');


		fprintf(reel, "|%d\n", n);
	

		// test 89
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-05c", '\0');


		fprintf(reel, "|%d\n", n);
	

		// test 90
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.c", 'a');


		fprintf(reel, "|%d\n", n);
	

		// test 91
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05c", 'a');


		fprintf(reel, "|%d\n", n);
	

		// test 92
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0c", 'a');


		fprintf(reel, "|%d\n", n);
	

		// test 93
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% c", 'a');


		fprintf(reel, "|%d\n", n);
	

		// test 94
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% c", -42);


		fprintf(reel, "|%d\n", n);
	

		// test 95
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-c", 'a');


		fprintf(reel, "|%d\n", n);
	

		// test 96
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05s", "hello");


		fprintf(reel, "|%d\n", n);
	

		// test 97
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0s", "hello");


		fprintf(reel, "|%d\n", n);
	

		// test 98
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-s", "hello");


		fprintf(reel, "|%d\n", n);
	

		// test 99
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0");


		fprintf(reel, "|%d\n", n);
	

		// test 100
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-");


		fprintf(reel, "|%d\n", n);
	

		// test 101
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%23");


		fprintf(reel, "|%d\n", n);
	

		// test 102
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.");


		fprintf(reel, "|%d\n", n);
	

		// test 103
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%p");


		fprintf(reel, "|%d\n", n);
	

		// test 104
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%d");


		fprintf(reel, "|%d\n", n);
	

		// test 105
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%u");


		fprintf(reel, "|%d\n", n);
	

		// test 106
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%x");


		fprintf(reel, "|%d\n", n);
	

		// test 107
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%X");


		fprintf(reel, "|%d\n", n);
	

		// test 108
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%c");


		fprintf(reel, "|%d\n", n);
	

		// test 109
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 110
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 111
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%23s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 112
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 113
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%p", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 114
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%d", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 115
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%u", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 116
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%x", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 117
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%X", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 118
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 119
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%c", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 120
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "hello, %s.", "gavin");


		fprintf(reel, "|%d\n", n);
	

		// test 121
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%s", "testing testing");


		fprintf(reel, "|%d\n", n);
	

		// test 122
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "..%s stuff %s", "a", "b");


		fprintf(reel, "|%d\n", n);
	

		// test 123
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %s is empty", "");


		fprintf(reel, "|%d\n", n);
	

		// test 124
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %s is %s", "hello", "");


		fprintf(reel, "|%d\n", n);
	

		// test 125
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %s is %s", "", "hello");


		fprintf(reel, "|%d\n", n);
	

		// test 126
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%s%s%s", "1", "2", "3's a charm");


		fprintf(reel, "|%d\n", n);
	

		// test 127
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%32s", "abc");


		fprintf(reel, "|%d\n", n);
	

		// test 128
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%16s", "nark nark");


		fprintf(reel, "|%d\n", n);
	

		// test 129
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5s", "goes over");


		fprintf(reel, "|%d\n", n);
	

		// test 130
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-32s", "abc");


		fprintf(reel, "|%d\n", n);
	

		// test 131
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-16s", "nark nark");


		fprintf(reel, "|%d\n", n);
	

		// test 132
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5s", "goes over");


		fprintf(reel, "|%d\n", n);
	

		// test 133
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.7s", "hello");


		fprintf(reel, "|%d\n", n);
	

		// test 134
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3s", "hello");


		fprintf(reel, "|%d\n", n);
	

		// test 135
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.s", "hello");


		fprintf(reel, "|%d\n", n);
	

		// test 136
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.0s", "hello");


		fprintf(reel, "|%d\n", n);
	

		// test 137
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3s%.2s", "holla", "bitch");


		fprintf(reel, "|%d\n", n);
	

		// test 138
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.5s%7s", "yo", "boi");


		fprintf(reel, "|%d\n", n);
	

		// test 139
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%7.5s", "yolo");


		fprintf(reel, "|%d\n", n);
	

		// test 140
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%7.5s", "bombastic");


		fprintf(reel, "|%d\n", n);
	

		// test 141
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-7.5s", "yolo");


		fprintf(reel, "|%d\n", n);
	

		// test 142
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-7.5s", "tubular");


		fprintf(reel, "|%d\n", n);
	

		// test 143
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "hello, %s.", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 144
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 145
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%32s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 146
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 147
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-32s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 148
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-16s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 149
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 150
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.9s", "NULL");


		fprintf(reel, "|%d\n", n);
	

		// test 151
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3s", "NULL");


		fprintf(reel, "|%d\n", n);
	

		// test 152
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.s", "NULL");


		fprintf(reel, "|%d\n", n);
	

		// test 153
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.0s", "NULL");


		fprintf(reel, "|%d\n", n);
	

		// test 154
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 155
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 156
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%9s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 157
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 158
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.9s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 159
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.03s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 160
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.09s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 161
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.03s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 162
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.09s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 163
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.00s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 164
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.01s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 165
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.03s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 166
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.09s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 167
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 168
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%10.s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 169
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 170
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%10.s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 171
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%1.s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 172
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2.s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 173
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%9.s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 174
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 175
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 176
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 177
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 178
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-1.s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 179
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-2.s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 180
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-6.s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 181
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.1s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 182
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%10.1s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 183
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.1s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 184
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%9.1s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 185
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.1s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 186
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-10.1s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 187
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.1s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 188
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-9.1s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 189
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.1s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 190
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-6.1s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 191
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.6s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 192
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%20.6s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 193
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.6s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 194
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%20.6s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 195
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.6s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 196
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%6.6s", "\0");


		fprintf(reel, "|%d\n", n);
	

		// test 197
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.6s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 198
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-20.6s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 199
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.8s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 200
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-10.8s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 201
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.8s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 202
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-10.8s", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 203
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-.00s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 204
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-.09s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 205
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+- 06.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 206
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-6.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 207
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0 +-6.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 208
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-0 6.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 209
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-+ 06.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 210
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -+06.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 211
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+- 07.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 212
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-8.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 213
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0 +-9.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 214
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-0 10.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 215
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-+ 011.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 216
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -+012.06s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 217
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+- 06.04s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 218
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-6.04s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 219
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0 +-6.04s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 220
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-0 6.04s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 221
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-+ 06.04s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 222
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-+6.04s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 223
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+- 06.09s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 224
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-6.09s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 225
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0 +-6.09s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 226
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-0 6.09s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 227
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-+ 06.09s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 228
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-+6.09s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 229
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+03s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 230
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+09s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 231
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+ 3s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 232
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+ 6s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 233
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%00s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 234
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%000s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 235
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0000s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 236
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-00s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 237
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-0s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 238
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%00-s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 239
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 240
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%09s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 241
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-03s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 242
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-09s", s_hidden);


		fprintf(reel, "|%d\n", n);
	

		// test 243
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %i number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 244
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %i number", -267);


		fprintf(reel, "|%d\n", n);
	

		// test 245
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %i number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 246
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%i", 3);


		fprintf(reel, "|%d\n", n);
	

		// test 247
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%i", -1);


		fprintf(reel, "|%d\n", n);
	

		// test 248
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 249
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %d number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 250
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %d number", -267);


		fprintf(reel, "|%d\n", n);
	

		// test 251
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %d number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 252
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%i",  2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 253
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%i", (int)(-2147483678));


		fprintf(reel, "|%d\n", n);
	

		// test 254
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 255
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 256
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 257
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 258
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 259
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 260
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 261
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 262
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 263
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 264
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 265
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 266
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 267
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 268
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 269
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 270
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 271
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 272
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+i", 5);


		fprintf(reel, "|%d\n", n);
	

		// test 273
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+i", -7);


		fprintf(reel, "|%d\n", n);
	

		// test 274
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+i", 2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 275
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+5i", 35);


		fprintf(reel, "|%d\n", n);
	

		// test 276
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+7i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 277
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+24i", 2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 278
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.7i", 234);


		fprintf(reel, "|%d\n", n);
	

		// test 279
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.7i", -446);


		fprintf(reel, "|%d\n", n);
	

		// test 280
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.3i", 3723);


		fprintf(reel, "|%d\n", n);
	

		// test 281
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+05i", 432);


		fprintf(reel, "|%d\n", n);
	

		// test 282
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+04i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 283
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 284
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 285
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 286
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 287
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 288
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 289
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 290
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 291
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 292
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 293
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 294
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 295
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 296
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 297
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 298
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 299
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 300
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 301
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%037i", 22337203685477);


		fprintf(reel, "|%d\n", n);
	

		// test 302
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.37i", -22337203685477);


		fprintf(reel, "|%d\n", n);
	

		// test 303
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%37i", 522337203685470);


		fprintf(reel, "|%d\n", n);
	

		// test 304
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-37i", -522337203685470);


		fprintf(reel, "|%d\n", n);
	

		// test 305
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+i", 22337203685477);




		fprintf(reel, "|%d\n", n);
	

		// test 306
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % i number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 307
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % i number", -267);


		fprintf(reel, "|%d\n", n);
	

		// test 308
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % i number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 309
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% i", 3);


		fprintf(reel, "|%d\n", n);
	

		// test 310
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% i", -1);


		fprintf(reel, "|%d\n", n);
	

		// test 311
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 312
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % d number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 313
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % d number", -267);


		fprintf(reel, "|%d\n", n);
	

		// test 314
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % d number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 315
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% i", 2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 316
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% i", (int)(-2147483678));


		fprintf(reel, "|%d\n", n);
	

		// test 317
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +i", 5);


		fprintf(reel, "|%d\n", n);
	

		// test 318
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +i", -7);


		fprintf(reel, "|%d\n", n);
	

		// test 319
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +i", 2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 320
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 7i", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 321
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 7i", -14);


		fprintf(reel, "|%d\n", n);
	

		// test 322
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 3i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 323
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 5i", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 324
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 5i", -2562);


		fprintf(reel, "|%d\n", n);
	

		// test 325
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 4i", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 326
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 4i", -2464);


		fprintf(reel, "|%d\n", n);
	

		// test 327
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -7i", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 328
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -7i", -14);


		fprintf(reel, "|%d\n", n);
	

		// test 329
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -3i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 330
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -5i", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 331
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -5i", -2562);


		fprintf(reel, "|%d\n", n);
	

		// test 332
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -4i", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 333
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -4i", -2464);


		fprintf(reel, "|%d\n", n);
	

		// test 334
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +5i", 35);


		fprintf(reel, "|%d\n", n);
	

		// test 335
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +7i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 336
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +24i", 2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 337
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .5i", 2);


		fprintf(reel, "|%d\n", n);
	

		// test 338
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .6i", -3);


		fprintf(reel, "|%d\n", n);
	

		// test 339
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .3i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 340
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .4i", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 341
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .4i", -2372);


		fprintf(reel, "|%d\n", n);
	

		// test 342
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .3i", 13862);


		fprintf(reel, "|%d\n", n);
	

		// test 343
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .3i",-23646);


		fprintf(reel, "|%d\n", n);
	

		// test 344
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +.7i", 234);


		fprintf(reel, "|%d\n", n);
	

		// test 345
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +.7i", -446);


		fprintf(reel, "|%d\n", n);
	

		// test 346
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +.3i", 3723);


		fprintf(reel, "|%d\n", n);
	

		// test 347
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 05i", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 348
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 07i", -54);


		fprintf(reel, "|%d\n", n);
	

		// test 349
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 350
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03i", 634);


		fprintf(reel, "|%d\n", n);
	

		// test 351
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 04i", -532);


		fprintf(reel, "|%d\n", n);
	

		// test 352
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 04i", -4825);


		fprintf(reel, "|%d\n", n);
	

		// test 353
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +05i", 432);


		fprintf(reel, "|%d\n", n);
	

		// test 354
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +04i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 355
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 356
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 357
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 358
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 359
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 360
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 361
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 362
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 363
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 364
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 365
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 366
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 367
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 368
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 369
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 370
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 371
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 372
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 373
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 374
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 375
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 376
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 377
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 378
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 379
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 380
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 381
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 382
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 383
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 384
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 385
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 386
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 387
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 388
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 389
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 390
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 391
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 08.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 392
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 010.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 393
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 08.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 394
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 08.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 395
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 08.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 396
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 397
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 398
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 399
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 400
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 401
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 402
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 403
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 404
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 405
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 406
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 407
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 408
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 409
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 410
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 411
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 412
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 413
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 414
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 415
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 416
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 417
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 418
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 419
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 420
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 421
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 422
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 423
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 424
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 425
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 426
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 427
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% hhi", (char)45);


		fprintf(reel, "|%d\n", n);
	

		// test 428
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% hhi", (char)-45);


		fprintf(reel, "|%d\n", n);
	

		// test 429
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% hi", (short)385);


		fprintf(reel, "|%d\n", n);
	

		// test 430
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% hi", (short)-385);


		fprintf(reel, "|%d\n", n);
	

		// test 431
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% li", (long)32);


		fprintf(reel, "|%d\n", n);
	

		// test 432
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% li", (long)-32);


		fprintf(reel, "|%d\n", n);
	

		// test 433
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% lli", (long long)43);


		fprintf(reel, "|%d\n", n);
	

		// test 434
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% lli", (long long)-43);


		fprintf(reel, "|%d\n", n);
	

		// test 435
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% i", 22337203685477);


		fprintf(reel, "|%d\n", n);
	

		// test 436
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% i", -22337203685477);


		fprintf(reel, "|%d\n", n);
	

		// test 437
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% i", 522337203685470);


		fprintf(reel, "|%d\n", n);
	

		// test 438
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% i", -522337203685470);


		fprintf(reel, "|%d\n", n);
	

		// test 439
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% i", 9223372036854775807);


		fprintf(reel, "|%d\n", n);
	

		// test 440
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% i", 9223372036854775807);


		fprintf(reel, "|%d\n", n);
	

		// test 441
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% hi", (short)32767);


		fprintf(reel, "|%d\n", n);
	

		// test 442
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% hi", (short)(-32768));


		fprintf(reel, "|%d\n", n);
	

		// test 443
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% hhi", (char)(127));


		fprintf(reel, "|%d\n", n);
	

		// test 444
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% hhi", (char)(-128));


		fprintf(reel, "|%d\n", n);
	

		// test 445
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.0i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 446
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 447
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+5.0i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 448
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+5.i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 449
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-5.0i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 450
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-5.i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 451
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%7i", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 452
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%7i", -14);


		fprintf(reel, "|%d\n", n);
	

		// test 453
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 454
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5i", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 455
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5i", -2562);


		fprintf(reel, "|%d\n", n);
	

		// test 456
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%4i", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 457
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%4i", -2464);


		fprintf(reel, "|%d\n", n);
	

		// test 458
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-7i", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 459
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-7i", -14);


		fprintf(reel, "|%d\n", n);
	

		// test 460
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 461
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5i", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 462
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5i", -2562);


		fprintf(reel, "|%d\n", n);
	

		// test 463
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-4i", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 464
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-4i", -2464);


		fprintf(reel, "|%d\n", n);
	

		// test 465
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.5i", 2);


		fprintf(reel, "|%d\n", n);
	

		// test 466
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.6i", -3);


		fprintf(reel, "|%d\n", n);
	

		// test 467
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 468
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.4i", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 469
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.4i", -2372);


		fprintf(reel, "|%d\n", n);
	

		// test 470
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3i", 13862);


		fprintf(reel, "|%d\n", n);
	

		// test 471
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3i",-23646);


		fprintf(reel, "|%d\n", n);
	

		// test 472
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05i", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 473
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%07i", -54);


		fprintf(reel, "|%d\n", n);
	

		// test 474
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 475
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03i", 634);


		fprintf(reel, "|%d\n", n);
	

		// test 476
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%04i", -532);


		fprintf(reel, "|%d\n", n);
	

		// test 477
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%04i", -4825);


		fprintf(reel, "|%d\n", n);
	

		// test 478
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 479
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 480
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 481
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 482
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 483
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 484
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 485
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 486
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 487
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 488
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 489
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 490
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 491
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 492
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 493
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 494
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 495
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 496
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 497
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%010.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 498
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 499
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 500
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 501
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 502
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 503
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 504
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 505
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5i", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 506
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-10.5i", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 507
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 508
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.3i", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 509
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.3i", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 510
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.7i", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 511
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.7i", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 512
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.3i", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 513
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.3i", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 514
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.0i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 515
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 516
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5.0i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 517
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5.i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 518
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.0i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 519
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.i", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 520
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %d number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 521
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %d number", -267);


		fprintf(reel, "|%d\n", n);
	

		// test 522
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %d number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 523
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+d", 5);


		fprintf(reel, "|%d\n", n);
	

		// test 524
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+d", -7);


		fprintf(reel, "|%d\n", n);
	

		// test 525
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+d", 2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 526
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+5d", 35);


		fprintf(reel, "|%d\n", n);
	

		// test 527
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+7d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 528
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+24d", 2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 529
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.7d", 234);


		fprintf(reel, "|%d\n", n);
	

		// test 530
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.7d", -446);


		fprintf(reel, "|%d\n", n);
	

		// test 531
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.3d", 3723);


		fprintf(reel, "|%d\n", n);
	

		// test 532
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+05d", 432);


		fprintf(reel, "|%d\n", n);
	

		// test 533
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+04d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 534
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 535
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 536
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 537
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 538
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 539
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 540
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 541
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 542
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 543
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 544
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 545
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 546
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 547
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 548
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 549
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 550
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 551
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 552
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 553
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 554
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 555
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 556
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 557
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 558
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 559
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 560
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 561
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 562
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 563
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 564
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 565
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 566
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 567
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 568
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 569
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0+-3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 570
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % d number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 571
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % d number", -267);


		fprintf(reel, "|%d\n", n);
	

		// test 572
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % d number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 573
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% d", 3);


		fprintf(reel, "|%d\n", n);
	

		// test 574
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% d", -1);


		fprintf(reel, "|%d\n", n);
	

		// test 575
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 576
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % d number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 577
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % d number", -267);


		fprintf(reel, "|%d\n", n);
	

		// test 578
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this % d number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 579
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% d", 2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 580
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% d", (int)(-2147483678));


		fprintf(reel, "|%d\n", n);
	

		// test 581
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +d", 5);


		fprintf(reel, "|%d\n", n);
	

		// test 582
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +d", -7);


		fprintf(reel, "|%d\n", n);
	

		// test 583
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +d", 2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 584
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 7d", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 585
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 7d", -14);


		fprintf(reel, "|%d\n", n);
	

		// test 586
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 3d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 587
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 5d", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 588
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 5d", -2562);


		fprintf(reel, "|%d\n", n);
	

		// test 589
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 4d", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 590
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 4d", -2464);


		fprintf(reel, "|%d\n", n);
	

		// test 591
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -7d", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 592
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -7d", -14);


		fprintf(reel, "|%d\n", n);
	

		// test 593
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -3d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 594
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -5d", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 595
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -5d", -2562);


		fprintf(reel, "|%d\n", n);
	

		// test 596
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -4d", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 597
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -4d", -2464);


		fprintf(reel, "|%d\n", n);
	

		// test 598
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +5d", 35);


		fprintf(reel, "|%d\n", n);
	

		// test 599
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +7d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 600
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +24d", 2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 601
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .5d", 2);


		fprintf(reel, "|%d\n", n);
	

		// test 602
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .6d", -3);


		fprintf(reel, "|%d\n", n);
	

		// test 603
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .3d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 604
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .4d", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 605
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .4d", -2372);


		fprintf(reel, "|%d\n", n);
	

		// test 606
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .3d", 13862);


		fprintf(reel, "|%d\n", n);
	

		// test 607
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% .3d",-23646);


		fprintf(reel, "|%d\n", n);
	

		// test 608
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +.7d", 234);


		fprintf(reel, "|%d\n", n);
	

		// test 609
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +.7d", -446);


		fprintf(reel, "|%d\n", n);
	

		// test 610
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +.3d", 3723);


		fprintf(reel, "|%d\n", n);
	

		// test 611
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 05d", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 612
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 07d", -54);


		fprintf(reel, "|%d\n", n);
	

		// test 613
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 614
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03d", 634);


		fprintf(reel, "|%d\n", n);
	

		// test 615
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 04d", -532);


		fprintf(reel, "|%d\n", n);
	

		// test 616
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 04d", -4825);


		fprintf(reel, "|%d\n", n);
	

		// test 617
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +05d", 432);


		fprintf(reel, "|%d\n", n);
	

		// test 618
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +04d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 619
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 620
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 621
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 622
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 623
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 624
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 625
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 626
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 627
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 628
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 629
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 630
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 631
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 632
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 633
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 634
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 635
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 636
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% -3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 637
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 638
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 639
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 640
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 641
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 642
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 643
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 644
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 645
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 646
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 647
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 648
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 649
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 650
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 651
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 652
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 653
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 654
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% +-3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 655
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 08.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 656
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 010.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 657
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 08.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 658
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 08.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 659
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 08.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 660
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 661
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 662
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 663
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 03.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 664
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 665
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 666
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 667
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 668
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 669
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 670
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 671
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 672
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0-3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 673
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 674
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 675
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 676
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 677
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 678
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 679
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 680
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 681
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 682
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 683
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 684
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 685
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 686
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 687
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 688
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 689
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 690
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "% 0+-3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 691
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.0d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 692
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+.d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 693
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+5.0d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 694
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+5.d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 695
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-5.0d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 696
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%+-5.d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 697
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%d", 3);


		fprintf(reel, "|%d\n", n);
	

		// test 698
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%d", -1);


		fprintf(reel, "|%d\n", n);
	

		// test 699
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 700
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%d",  2147483647);


		fprintf(reel, "|%d\n", n);
	

		// test 701
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%d", (int)(-2147483678));


		fprintf(reel, "|%d\n", n);
	

		// test 702
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%7d", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 703
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%7d", -14);


		fprintf(reel, "|%d\n", n);
	

		// test 704
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 705
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5d", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 706
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5d", -2562);


		fprintf(reel, "|%d\n", n);
	

		// test 707
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%4d", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 708
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%4d", -2464);


		fprintf(reel, "|%d\n", n);
	

		// test 709
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-7d", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 710
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-7d", -14);


		fprintf(reel, "|%d\n", n);
	

		// test 711
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 712
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5d", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 713
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5d", -2562);


		fprintf(reel, "|%d\n", n);
	

		// test 714
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-4d", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 715
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-4d", -2464);


		fprintf(reel, "|%d\n", n);
	

		// test 716
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.5d", 2);


		fprintf(reel, "|%d\n", n);
	

		// test 717
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.6d", -3);


		fprintf(reel, "|%d\n", n);
	

		// test 718
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 719
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.4d", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 720
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.4d", -2372);


		fprintf(reel, "|%d\n", n);
	

		// test 721
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3d", 13862);


		fprintf(reel, "|%d\n", n);
	

		// test 722
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3d",-23646);


		fprintf(reel, "|%d\n", n);
	

		// test 723
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05d", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 724
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%07d", -54);


		fprintf(reel, "|%d\n", n);
	

		// test 725
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 726
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03d", 634);


		fprintf(reel, "|%d\n", n);
	

		// test 727
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%04d", -532);


		fprintf(reel, "|%d\n", n);
	

		// test 728
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%04d", -4825);


		fprintf(reel, "|%d\n", n);
	

		// test 729
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 730
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 731
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 732
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 733
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 734
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 735
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 736
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 737
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 738
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 739
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 740
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 741
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 742
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 743
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 744
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 745
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 746
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 747
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 748
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%010.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 749
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 750
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 751
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 752
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 753
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 754
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 755
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.3d", -8462);


		fprintf(reel, "|%d\n", n);
	

		// test 756
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5d", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 757
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-10.5d", -216);


		fprintf(reel, "|%d\n", n);
	

		// test 758
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 759
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.3d", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 760
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.3d", -8473);


		fprintf(reel, "|%d\n", n);
	

		// test 761
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.7d", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 762
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.7d", -2375);


		fprintf(reel, "|%d\n", n);
	

		// test 763
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.3d", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 764
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.3d", -8462);




		fprintf(reel, "|%d\n", n);
	

		// test 765
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.0d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 766
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 767
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5.0d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 768
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5.d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 769
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.0d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 770
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.d", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 771
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %u number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 772
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %u number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 773
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%u", 3);


		fprintf(reel, "|%d\n", n);
	

		// test 774
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%u", 4294967295u);


		fprintf(reel, "|%d\n", n);
	

		// test 775
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%7u", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 776
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 777
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5u", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 778
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%4u", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 779
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-7u", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 780
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 781
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5u", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 782
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-4u", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 783
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.5u", 2);


		fprintf(reel, "|%d\n", n);
	

		// test 784
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 785
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.4u", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 786
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3u", 13862);


		fprintf(reel, "|%d\n", n);
	

		// test 787
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05u", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 788
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 789
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03u", 634);


		fprintf(reel, "|%d\n", n);
	

		// test 790
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5u", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 791
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 792
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.3u", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 793
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.7u", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 794
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.3u", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 795
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5u", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 796
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 797
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.3u", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 798
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.7u", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 799
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.3u", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 800
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5u", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 801
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 802
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.3u", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 803
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.7u", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 804
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.3u", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 805
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5u", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 806
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 807
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.3u", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 808
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.7u", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 809
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.3u", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 810
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.0u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 811
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 812
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5.0u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 813
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5.u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 814
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.0u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 815
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.u", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 816
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %x number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 817
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %x number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 818
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%x", 3);


		fprintf(reel, "|%d\n", n);
	

		// test 819
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%x", 4294967295u);


		fprintf(reel, "|%d\n", n);
	

		// test 820
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%7x", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 821
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 822
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5x", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 823
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2x", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 824
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-7x", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 825
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 826
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5x", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 827
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-4x", 9648627);


		fprintf(reel, "|%d\n", n);
	

		// test 828
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.5x", 21);


		fprintf(reel, "|%d\n", n);
	

		// test 829
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 830
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.4x", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 831
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3x", 938862);


		fprintf(reel, "|%d\n", n);
	

		// test 832
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05x", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 833
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 834
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03x", 698334);


		fprintf(reel, "|%d\n", n);
	

		// test 835
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5x", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 836
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 837
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.3x", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 838
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2.7x", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 839
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.3x", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 840
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5x", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 841
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 842
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.3x", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 843
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-2.7x", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 844
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.3x", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 845
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5x", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 846
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 847
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.3x", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 848
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%02.7x", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 849
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.3x", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 850
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5x", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 851
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 852
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.3x", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 853
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-2.7x", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 854
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.3x", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 855
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 856
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 857
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 858
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 859
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 860
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 861
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %x number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 862
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %x number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 863
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%x", 3);


		fprintf(reel, "|%d\n", n);
	

		// test 864
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%x", 4294967295u);


		fprintf(reel, "|%d\n", n);
	

		// test 865
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%7x", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 866
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 867
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5x", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 868
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2x", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 869
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-7x", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 870
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 871
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5x", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 872
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-4x", 9648627);


		fprintf(reel, "|%d\n", n);
	

		// test 873
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.5x", 21);


		fprintf(reel, "|%d\n", n);
	

		// test 874
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 875
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.4x", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 876
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3x", 938862);


		fprintf(reel, "|%d\n", n);
	

		// test 877
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05x", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 878
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 879
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03x", 698334);


		fprintf(reel, "|%d\n", n);
	

		// test 880
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5x", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 881
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 882
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.3x", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 883
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2.7x", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 884
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.3x", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 885
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5x", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 886
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 887
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.3x", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 888
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-2.7x", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 889
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.3x", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 890
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5x", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 891
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 892
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.3x", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 893
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%02.7x", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 894
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.3x", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 895
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5x", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 896
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 897
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.3x", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 898
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-2.7x", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 899
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.3x", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 900
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 901
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 902
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 903
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 904
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 905
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 906
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 907
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 908
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#5.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 909
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#5.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 910
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-5.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 911
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-5.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 912
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#x", 4294967295u);


		fprintf(reel, "|%d\n", n);
	

		// test 913
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#7x", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 914
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 915
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#5x", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 916
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#2x", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 917
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-7x", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 918
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 919
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-5x", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 920
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-4x", 9648627);


		fprintf(reel, "|%d\n", n);
	

		// test 921
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.5x", 21);


		fprintf(reel, "|%d\n", n);
	

		// test 922
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 923
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.4x", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 924
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.3x", 938862);


		fprintf(reel, "|%d\n", n);
	

		// test 925
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#05x", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 926
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#03x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 927
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#03x", 698334);


		fprintf(reel, "|%d\n", n);
	

		// test 928
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#8.5x", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 929
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#8.5x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 930
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#x", 4294967295u);


		fprintf(reel, "|%d\n", n);
	

		// test 931
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#7x", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 932
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 933
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#5x", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 934
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#2x", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 935
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-7x", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 936
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 937
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-5x", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 938
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-4x", 9648627);


		fprintf(reel, "|%d\n", n);
	

		// test 939
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.5x", 21);


		fprintf(reel, "|%d\n", n);
	

		// test 940
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.3x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 941
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.4x", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 942
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.3x", 938862);


		fprintf(reel, "|%d\n", n);
	

		// test 943
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#05x", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 944
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#03x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 945
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#03x", 698334);


		fprintf(reel, "|%d\n", n);
	

		// test 946
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#8.5x", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 947
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#8.5x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 948
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 949
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 950
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#5.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 951
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#5.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 952
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-5.0x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 953
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-5.x", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 954
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %X number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 955
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %X number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 956
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%X", 3);


		fprintf(reel, "|%d\n", n);
	

		// test 957
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%X", 4294967295u);


		fprintf(reel, "|%d\n", n);
	

		// test 958
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%7X", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 959
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 960
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5X", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 961
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2X", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 962
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-7X", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 963
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 964
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5X", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 965
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-4X", 9648627);


		fprintf(reel, "|%d\n", n);
	

		// test 966
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.5X", 21);


		fprintf(reel, "|%d\n", n);
	

		// test 967
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 968
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.4X", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 969
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3X", 938862);


		fprintf(reel, "|%d\n", n);
	

		// test 970
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05X", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 971
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 972
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03X", 698334);


		fprintf(reel, "|%d\n", n);
	

		// test 973
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 974
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 975
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.3X", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 976
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2.7X", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 977
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.3X", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 978
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 979
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 980
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.3X", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 981
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-2.7X", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 982
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.3X", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 983
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 984
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 985
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.3X", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 986
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%02.7X", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 987
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.3X", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 988
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 989
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 990
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.3X", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 991
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-2.7X", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 992
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.3X", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 993
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %#X number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 994
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %#X number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 995
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#X", 3);


		fprintf(reel, "|%d\n", n);
	

		// test 996
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#X", 4294967295u);


		fprintf(reel, "|%d\n", n);
	

		// test 997
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#7X", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 998
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 999
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#7X", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 1000
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#2X", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 1001
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-7X", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 1002
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1003
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-7X", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 1004
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-4X", 9648627);


		fprintf(reel, "|%d\n", n);
	

		// test 1005
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.5X", 21);


		fprintf(reel, "|%d\n", n);
	

		// test 1006
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1007
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.4X", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 1008
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.3X", 938862);


		fprintf(reel, "|%d\n", n);
	

		// test 1009
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#05X", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 1010
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#03X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1011
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#03X", 698334);


		fprintf(reel, "|%d\n", n);
	

		// test 1012
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#8.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 1013
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#8.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1014
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#8.3X", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 1015
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#2.7X", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 1016
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#3.3X", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 1017
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-8.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 1018
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-8.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1019
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-8.3X", 8375);

	
		fprintf(reel, "%5.X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1020
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1021
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.0X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1022
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1023
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#5.0X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1024
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#5.X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1025
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-5.0X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1026
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-5.X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1027
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %X number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 1028
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %X number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1029
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%X", 3);


		fprintf(reel, "|%d\n", n);
	

		// test 1030
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%X", 4294967295u);


		fprintf(reel, "|%d\n", n);
	

		// test 1031
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%7X", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 1032
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1033
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5X", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 1034
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2X", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 1035
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-7X", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 1036
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1037
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5X", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 1038
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-4X", 9648627);


		fprintf(reel, "|%d\n", n);
	

		// test 1039
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.5X", 21);


		fprintf(reel, "|%d\n", n);
	

		// test 1040
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1041
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.4X", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 1042
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.3X", 938862);


		fprintf(reel, "|%d\n", n);
	

		// test 1043
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%05X", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 1044
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1045
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03X", 698334);


		fprintf(reel, "|%d\n", n);
	

		// test 1046
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 1047
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1048
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8.3X", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 1049
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2.7X", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 1050
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%3.3X", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 1051
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 1052
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1053
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8.3X", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 1054
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-2.7X", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 1055
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-3.3X", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 1056
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 1057
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1058
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%08.3X", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 1059
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%02.7X", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 1060
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%03.3X", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 1061
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 1062
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1063
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-8.3X", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 1064
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-2.7X", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 1065
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%0-3.3X", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 1066
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %#X number", 17);


		fprintf(reel, "|%d\n", n);
	

		// test 1067
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "this %#X number", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1068
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#X", 3);


		fprintf(reel, "|%d\n", n);
	

		// test 1069
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#X", 4294967295u);


		fprintf(reel, "|%d\n", n);
	

		// test 1070
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#7X", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 1071
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1072
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#7X", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 1073
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#2X", 94827);


		fprintf(reel, "|%d\n", n);
	

		// test 1074
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-7X", 33);


		fprintf(reel, "|%d\n", n);
	

		// test 1075
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1076
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-7X", 52625);


		fprintf(reel, "|%d\n", n);
	

		// test 1077
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-4X", 9648627);


		fprintf(reel, "|%d\n", n);
	

		// test 1078
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.5X", 21);


		fprintf(reel, "|%d\n", n);
	

		// test 1079
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.3X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1080
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.4X", 5263);


		fprintf(reel, "|%d\n", n);
	

		// test 1081
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.3X", 938862);


		fprintf(reel, "|%d\n", n);
	

		// test 1082
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#05X", 43);


		fprintf(reel, "|%d\n", n);
	

		// test 1083
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#03X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1084
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#03X", 698334);


		fprintf(reel, "|%d\n", n);
	

		// test 1085
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#8.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 1086
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#8.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1087
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#8.3X", 8375);


		fprintf(reel, "|%d\n", n);
	

		// test 1088
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#2.7X", 3267);


		fprintf(reel, "|%d\n", n);
	

		// test 1089
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#3.3X", 6983);


		fprintf(reel, "|%d\n", n);
	

		// test 1090
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-8.5X", 34);


		fprintf(reel, "|%d\n", n);
	

		// test 1091
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-8.5X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1092
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-8.3X", 8375);	fprintf(reel, "%5.X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1093
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5.X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1094
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.0X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1095
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#.X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1096
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#5.0X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1097
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#5.X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1098
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-5.0X", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1099
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#-5.X", 0);



		fprintf(reel, "|%d\n", n);
	

		// test 1100
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%p", NULL);


		fprintf(reel, "|%d\n", n);
	

		// test 1101
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%9.2p\n", 1234);


		fprintf(reel, "|%d\n", n);
	

		// test 1102
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2.9p\n", 1234);


		fprintf(reel, "|%d\n", n);
	

		// test 1103
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.5p", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1104
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%.0p", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1105
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5p", 0);


		fprintf(reel, "|%d\n", n);
	

		// test 1106
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		fprintf(reel, "|%d\n", n);
	

		// test 1107
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		fprintf(reel, "|%d\n", n);
	

		// test 1108
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		fprintf(reel, "|%d\n", n);
	

		// test 1109
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		fprintf(reel, "|%d\n", n);
	

		// test 1110
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		fprintf(reel, "|%d\n", n);
	

		// test 1111
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		fprintf(reel, "|%d\n", n);
	

		// test 1112
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		fprintf(reel, "|%d\n", n);
	

		// test 1113
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		fprintf(reel, "|%d\n", n);
	

		// test 1114
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		fprintf(reel, "|%d\n", n);
	

		// test 1115
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		fprintf(reel, "|%d\n", n);
	

		// test 1116
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


	fprintf(reel, "|%d\n", n);


	// test 1117
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
				' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',',
				'-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B',
				'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
				'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
				'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '~');
	fprintf(reel, "|%d\n", n);


	// test 1118
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
				(char)1, (char)2, (char)3, (char)4, (char)5, (char)6, (char)7, (char)8, (char)9,
				(char)10, (char)11, (char)12, (char)13, (char)14, (char)15, (char)16, (char)17,
				(char)18, (char)19, (char)20, (char)21, (char)22, (char)23, (char)24, (char)25,
				(char)26, (char)27, (char)28, (char)29, (char)30, (char)31);

	fprintf(reel, "|%d\n", n);


	// test 1119
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
				(char)128, (char)129, (char)130, (char)131, (char)132, (char)133, (char)134, (char)135, (char)136,
				(char)137, (char)138, (char)139, (char)140, (char)141, (char)142, (char)143, (char)144, (char)145,
				(char)146, (char)147, (char)148, (char)149, (char)150, (char)151, (char)152, (char)153, (char)154,
				(char)155, (char)156, (char)157, (char)158, (char)159, (char)160, (char)161, (char)162, (char)163,
				(char)164, (char)165, (char)166, (char)167, (char)168, (char)169, (char)170, (char)171, (char)172,
				(char)173, (char)174, (char)175, (char)176, (char)177, (char)178, (char)179, (char)180, (char)181,
				(char)182, (char)183, (char)184, (char)185, (char)186, (char)187, (char)188, (char)189, (char)190,
				(char)191, (char)192, (char)193, (char)194, (char)195, (char)196, (char)197, (char)198, (char)199,
				(char)200, (char)201, (char)202, (char)203, (char)204, (char)205, (char)206, (char)207, (char)208,
				(char)209, (char)210, (char)211, (char)212, (char)213, (char)214, (char)215, (char)216, (char)217,
				(char)218, (char)219, (char)220, (char)221, (char)222, (char)223, (char)224, (char)225, (char)226,
				(char)227, (char)228, (char)229, (char)230, (char)231, (char)232, (char)233, (char)234, (char)235,
				(char)236, (char)237, (char)238, (char)239, (char)240, (char)241, (char)242, (char)243, (char)244,
				(char)245, (char)246, (char)247, (char)248, (char)249, (char)250, (char)251, (char)252, (char)253, (char)254, (char)255);

	fprintf(reel, "|%d\n", n);


	// test 1120
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c\
	%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
	%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c",
				';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
				'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
				'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '~');

	fprintf(reel, "|%d\n", n);


	// test 1121
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",

				(char)1, (char)2, (char)3, (char)4, (char)5, (char)6, (char)7, (char)8, (char)9, (char)10, (char)11, (char)12,
				(char)13, (char)14, (char)15, (char)16, (char)17, (char)18, (char)19, (char)20, (char)21, (char)22, (char)23, (char)24,
				(char)25, (char)26, (char)27, (char)28, (char)29, (char)30, (char)31);
	fprintf(reel, "|%d\n", n);


	// test 1122
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c\
	%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
	%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
	%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",
				(char)128, (char)129, (char)130, (char)131, (char)132, (char)133, (char)134, (char)135, (char)136, (char)137, (char)138,
				(char)139, (char)140, (char)141, (char)142, (char)143, (char)144, (char)145, (char)146, (char)147, (char)148, (char)149,
				(char)150, (char)151, (char)152, (char)153, (char)154, (char)155, (char)156, (char)157, (char)158, (char)159, (char)160,
				(char)161, (char)162, (char)163, (char)164, (char)165, (char)166, (char)167, (char)168, (char)169, (char)170, (char)171,
				(char)172, (char)173, (char)174, (char)175, (char)176, (char)177, (char)178, (char)179, (char)180, (char)181, (char)182,
				(char)183, (char)184, (char)185, (char)186, (char)187, (char)188, (char)189, (char)190, (char)191, (char)192, (char)193,
				(char)194, (char)195, (char)196, (char)197, (char)198, (char)199, (char)200, (char)201, (char)202, (char)203, (char)204,
				(char)205, (char)206, (char)207, (char)208, (char)209, (char)210, (char)211, (char)212, (char)213, (char)214, (char)215,
				(char)216, (char)217, (char)218, (char)219, (char)220, (char)221, (char)222, (char)223, (char)224, (char)225, (char)226,
				(char)227, (char)228, (char)229, (char)230, (char)231, (char)232, (char)233, (char)234, (char)235, (char)236, (char)237,
				(char)238, (char)239, (char)240, (char)241, (char)242, (char)243, (char)244, (char)245, (char)246, (char)247, (char)248,
				(char)249, (char)250, (char)251, (char)252, (char)253, (char)254, (char)255);

	fprintf(reel, "|%d\n", n);


	// test 1123
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c",
				'=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
				'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
				'v', 'w', 'x', 'y', 'z', '{', '|', '~');

	fprintf(reel, "|%d\n", n);


	// test 1124
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c",
				(char)1, (char)2, (char)3, (char)4, (char)5, (char)6, (char)7, (char)8, (char)9, (char)10, (char)11,
				(char)12, (char)13, (char)14, (char)15, (char)16, (char)17, (char)18, (char)19, (char)20, (char)21, (char)22, (char)23, (char)24,
				(char)25, (char)26, (char)27, (char)28, (char)29, (char)30, (char)31);

	fprintf(reel, "|%d\n", n);


	// test 1125
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
	%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
	%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
	%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
	%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",
				(char)128, (char)129, (char)130,
				(char)131, (char)132, (char)133, (char)134, (char)135, (char)136, (char)137, (char)138, (char)139, (char)140, (char)141,
				(char)142, (char)143, (char)144, (char)145, (char)146, (char)147, (char)148, (char)149, (char)150, (char)151, (char)152,
				(char)153, (char)154, (char)155, (char)156, (char)157, (char)158, (char)159, (char)160, (char)161, (char)162, (char)163,
				(char)164, (char)165, (char)166, (char)167, (char)168, (char)169, (char)170, (char)171, (char)172, (char)173, (char)174,
				(char)175, (char)176, (char)177, (char)178, (char)179, (char)180, (char)181, (char)182, (char)183, (char)184, (char)185,
				(char)186, (char)187, (char)188, (char)189, (char)190, (char)191, (char)192, (char)193, (char)194, (char)195, (char)196,
				(char)197, (char)198, (char)199, (char)200, (char)201, (char)202, (char)203, (char)204, (char)205, (char)206, (char)207,
				(char)208, (char)209, (char)210, (char)211, (char)212, (char)213, (char)214, (char)215, (char)216, (char)217, (char)218,
				(char)219, (char)220, (char)221, (char)222, (char)223, (char)224, (char)225, (char)226, (char)227, (char)228, (char)229,
				(char)230, (char)231, (char)232, (char)233, (char)234, (char)235, (char)236, (char)237, (char)238, (char)239, (char)240,
				(char)241, (char)242, (char)243, (char)244, (char)245, (char)246, (char)247, (char)248, (char)249, (char)250, (char)251,
				(char)252, (char)253, (char)254, (char)255);

	fprintf(reel, "|%d\n", n);


	// test 1126
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%c", '\0');

	fprintf(reel, "|%d\n", n);


	// test 1127
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5c", '\0');

	fprintf(reel, "|%d\n", n);


	// test 1128
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5c", '\0');

	fprintf(reel, "|%d\n", n);


	// test 1129
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "");
	fprintf(reel, "|%d\n", n);


	// test 1130
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "\t\n\r\v\f\n");
	fprintf(reel, "|%d\n", n);


	// test 1131
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%%");
	fprintf(reel, "|%d\n", n);


	// test 1132
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5%");
	fprintf(reel, "|%d\n", n);


	// test 1133
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5%");
	fprintf(reel, "|%d\n", n);


	// test 1134
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05%");
	fprintf(reel, "|%d\n", n);


	// test 1135
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-05%");
	fprintf(reel, "|%d\n", n);


	// test 1136
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%");
	fprintf(reel, "|%d\n", n);


	// test 1137
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5");
	fprintf(reel, "|%d\n", n);


	// test 1138
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05");
	fprintf(reel, "|%d\n", n);


	// test 1139
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-05");
	fprintf(reel, "|%d\n", n);


	// test 1140
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5");
	fprintf(reel, "|%d\n", n);


	// test 1141
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.4p", &ncm_p);
	fprintf(reel, "|%d\n", n);


	// test 1142
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.p", &ncm_p);
	fprintf(reel, "|%d\n", n);


	// test 1143
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05p", &ncm_p);
	fprintf(reel, "|%d\n", n);


	// test 1144
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0p", &ncm_p);
	fprintf(reel, "|%d\n", n);


	// test 1145
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-p", &ncm_p);
	fprintf(reel, "|%d\n", n);


	// test 1146
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#p", &ncm_p);
	fprintf(reel, "|%d\n", n);


	// test 1147
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+p", &ncm_p);
	fprintf(reel, "|%d\n", n);


	// test 1148
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+p", &ncm_p);
	fprintf(reel, "|%d\n", n);


	// test 1149
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% p", &ncm_p);
	fprintf(reel, "|%d\n", n);


	// test 1150
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% p", &ncm_p);
	fprintf(reel, "|%d\n", n);


	// test 1151
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-p", &ncm_p);
	fprintf(reel, "|%d\n", n);


	// test 1152
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#i", 42);
	fprintf(reel, "|%d\n", n);


	// test 1153
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-i", 42);
	fprintf(reel, "|%d\n", n);


	// test 1154
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#u", 42);
	fprintf(reel, "|%d\n", n);


	// test 1155
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+u", 42);
	fprintf(reel, "|%d\n", n);


	// test 1156
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% u", 42);
	fprintf(reel, "|%d\n", n);


	// test 1157
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-u", 42);
	fprintf(reel, "|%d\n", n);


	// test 1158
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+x", 42);
	fprintf(reel, "|%d\n", n);


	// test 1159
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% x", 42);
	fprintf(reel, "|%d\n", n);


	// test 1160
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+X", 42);
	fprintf(reel, "|%d\n", n);


	// test 1161
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% X", 42);
	fprintf(reel, "|%d\n", n);


	// test 1162
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+u", 5);
	fprintf(reel, "|%d\n", n);


	// test 1163
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+u", 5);
	fprintf(reel, "|%d\n", n);


	// test 1164
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+u", 4294967295);
	fprintf(reel, "|%d\n", n);


	// test 1165
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+5u", 35);
	fprintf(reel, "|%d\n", n);


	// test 1166
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+7u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1167
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+24u", 4294967295);
	fprintf(reel, "|%d\n", n);


	// test 1168
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+.7u", 234);
	fprintf(reel, "|%d\n", n);


	// test 1169
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+.3u", 3723);
	fprintf(reel, "|%d\n", n);


	// test 1170
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+05u", 432);
	fprintf(reel, "|%d\n", n);


	// test 1171
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+04u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1172
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+8.5u", 34);
	fprintf(reel, "|%d\n", n);


	// test 1173
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+8.5u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1174
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+8.3u", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1175
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+3.7u", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1176
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+3.3u", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1177
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-8.5u", 34);
	fprintf(reel, "|%d\n", n);


	// test 1178
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-8.5u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1179
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-8.3u", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1180
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-3.7u", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1181
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-3.3u", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1182
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+8.5u", 34);
	fprintf(reel, "|%d\n", n);


	// test 1183
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+8.5u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1184
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+8.3u", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1185
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+3.7u", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1186
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+3.3u", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1187
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-8.5u", 34);
	fprintf(reel, "|%d\n", n);


	// test 1188
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-8.5u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1189
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-8.3u", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1190
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-3.7u", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1191
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-3.3u", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1192
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%##x", 42);
	fprintf(reel, "|%d\n", n);


	// test 1193
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#++#-5x", 42);
	fprintf(reel, "|%d\n", n);


	// test 1194
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.4c", 'a');
	fprintf(reel, "|%d\n", n);


	// test 1195
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#c", 'a');
	fprintf(reel, "|%d\n", n);


	// test 1196
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+c", 'a');
	fprintf(reel, "|%d\n", n);


	// test 1197
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+c", -42);
	fprintf(reel, "|%d\n", n);


	// test 1198
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#s", "hello");
	fprintf(reel, "|%d\n", n);


	// test 1199
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+s", "hello");
	fprintf(reel, "|%d\n", n);


	// test 1200
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% s", "hello");
	fprintf(reel, "|%d\n", n);


	// test 1201
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1202
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1203
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1204
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-x", 42);
	fprintf(reel, "|%d\n", n);


	// test 1205
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-021s", "abc");
	fprintf(reel, "|%d\n", n);


	// test 1206
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-05s", "goes over");
	fprintf(reel, "|%d\n", n);


	// test 1207
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%021s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1208
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%02s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1209
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-021s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1210
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-03s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1211
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05c", '\0');
	fprintf(reel, "|%d\n", n);


	// test 1212
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-05c", '\0');
	fprintf(reel, "|%d\n", n);


	// test 1213
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.c", 'a');
	fprintf(reel, "|%d\n", n);


	// test 1214
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05c", 'a');
	fprintf(reel, "|%d\n", n);


	// test 1215
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0c", 'a');
	fprintf(reel, "|%d\n", n);


	// test 1216
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% c", 'a');
	fprintf(reel, "|%d\n", n);


	// test 1217
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% c", -42);
	fprintf(reel, "|%d\n", n);


	// test 1218
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-c", 'a');
	fprintf(reel, "|%d\n", n);


	// test 1219
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05s", "hello");
	fprintf(reel, "|%d\n", n);


	// test 1220
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0s", "hello");
	fprintf(reel, "|%d\n", n);


	// test 1221
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-s", "hello");
	fprintf(reel, "|%d\n", n);


	// test 1222
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0");
	fprintf(reel, "|%d\n", n);


	// test 1223
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-");
	fprintf(reel, "|%d\n", n);


	// test 1224
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%23");
	fprintf(reel, "|%d\n", n);


	// test 1225
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.");
	fprintf(reel, "|%d\n", n);


	// test 1226
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%p");

	fprintf(reel, "|%d\n", n);


	// test 1227
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%u");
	fprintf(reel, "|%d\n", n);


	// test 1228
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%x");
	fprintf(reel, "|%d\n", n);


	// test 1229
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%X");
	fprintf(reel, "|%d\n", n);


	// test 1230
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%c");
	fprintf(reel, "|%d\n", n);


	// test 1231
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1232
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1233
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%23s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1234
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1235
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%p", NULL);

	fprintf(reel, "|%d\n", n);


	// test 1236
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%u", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1237
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%x", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1238
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%X", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1239
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1240
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%c", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1241
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "hello, %s.", "gavin");
	fprintf(reel, "|%d\n", n);


	// test 1242
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%s", "testing testing");
	fprintf(reel, "|%d\n", n);


	// test 1243
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "..%s stuff %s", "a", "b");
	fprintf(reel, "|%d\n", n);


	// test 1244
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %s is empty", "");
	fprintf(reel, "|%d\n", n);


	// test 1245
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %s is %s", "hello", "");
	fprintf(reel, "|%d\n", n);


	// test 1246
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %s is %s", "", "hello");
	fprintf(reel, "|%d\n", n);


	// test 1247
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%s%s%s", "1", "2", "3's a charm");
	fprintf(reel, "|%d\n", n);


	// test 1248
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%32s", "abc");
	fprintf(reel, "|%d\n", n);


	// test 1249
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%16s", "nark nark");
	fprintf(reel, "|%d\n", n);


	// test 1250
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5s", "goes over");
	fprintf(reel, "|%d\n", n);


	// test 1251
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-32s", "abc");
	fprintf(reel, "|%d\n", n);


	// test 1252
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-16s", "nark nark");
	fprintf(reel, "|%d\n", n);


	// test 1253
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5s", "goes over");
	fprintf(reel, "|%d\n", n);


	// test 1254
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.7s", "hello");
	fprintf(reel, "|%d\n", n);


	// test 1255
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3s", "hello");
	fprintf(reel, "|%d\n", n);


	// test 1256
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.s", "hello");
	fprintf(reel, "|%d\n", n);


	// test 1257
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.0s", "hello");
	fprintf(reel, "|%d\n", n);


	// test 1258
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3s%.2s", "holla", "bitch");
	fprintf(reel, "|%d\n", n);


	// test 1259
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.5s%7s", "yo", "boi");
	fprintf(reel, "|%d\n", n);


	// test 1260
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%7.5s", "yolo");
	fprintf(reel, "|%d\n", n);


	// test 1261
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%7.5s", "bombastic");
	fprintf(reel, "|%d\n", n);


	// test 1262
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-7.5s", "yolo");
	fprintf(reel, "|%d\n", n);


	// test 1263
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-7.5s", "tubular");
	fprintf(reel, "|%d\n", n);


	// test 1264
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "hello, %s.", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1265
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1266
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%32s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1267
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1268
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-32s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1269
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-16s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1270
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1271
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.9s", "NULL");
	fprintf(reel, "|%d\n", n);


	// test 1272
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3s", "NULL");
	fprintf(reel, "|%d\n", n);


	// test 1273
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.s", "NULL");
	fprintf(reel, "|%d\n", n);


	// test 1274
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.0s", "NULL");
	fprintf(reel, "|%d\n", n);


	// test 1275
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.03s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1276
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.09s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1277
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.00s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1278
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.01s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1279
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.03s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1280
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.09s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1281
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1282
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%10.s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1283
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%1.s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1284
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2.s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1285
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%9.s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1286
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1287
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1288
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-1.s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1289
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-2.s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1290
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-6.s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1291
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.1s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1292
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%9.1s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1293
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.1s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1294
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-9.1s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1295
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.1s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1296
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-6.1s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1297
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.6s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1298
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%20.6s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1299
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.6s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1300
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%6.6s", "\0");
	fprintf(reel, "|%d\n", n);


	// test 1301
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.8s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1302
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-10.8s", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1303
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %i number", 17);
	fprintf(reel, "|%d\n", n);


	// test 1304
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %i number", -267);
	fprintf(reel, "|%d\n", n);


	// test 1305
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %i number", 0);
	fprintf(reel, "|%d\n", n);


	// test 1306
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%i", 3);
	fprintf(reel, "|%d\n", n);


	// test 1307
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%i", -1);
	fprintf(reel, "|%d\n", n);


	// test 1308
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1309
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%i", 2147483647);
	fprintf(reel, "|%d\n", n);


	// test 1310
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%i", (int)(-2147483678));
	fprintf(reel, "|%d\n", n);


	// test 1311
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1312
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1313
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1314
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1315
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1316
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1317
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1318
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1319
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1320
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1321
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1322
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1323
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1324
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1325
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1326
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1327
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1328
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0+-3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1329
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+i", 5);
	fprintf(reel, "|%d\n", n);


	// test 1330
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+i", -7);
	fprintf(reel, "|%d\n", n);


	// test 1331
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+i", 2147483647);
	fprintf(reel, "|%d\n", n);


	// test 1332
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+5i", 35);
	fprintf(reel, "|%d\n", n);


	// test 1333
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+7i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1334
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+24i", 2147483647);
	fprintf(reel, "|%d\n", n);


	// test 1335
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+.7i", 234);
	fprintf(reel, "|%d\n", n);


	// test 1336
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+.7i", -446);
	fprintf(reel, "|%d\n", n);


	// test 1337
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+.3i", 3723);
	fprintf(reel, "|%d\n", n);


	// test 1338
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+05i", 432);
	fprintf(reel, "|%d\n", n);


	// test 1339
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+04i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1340
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1341
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1342
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1343
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1344
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1345
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1346
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1347
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1348
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1349
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1350
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1351
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1352
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1353
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1354
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1355
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1356
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1357
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1358
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this % i number", 17);
	fprintf(reel, "|%d\n", n);


	// test 1359
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this % i number", -267);
	fprintf(reel, "|%d\n", n);


	// test 1360
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this % i number", 0);
	fprintf(reel, "|%d\n", n);


	// test 1361
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% i", 3);
	fprintf(reel, "|%d\n", n);


	// test 1362
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% i", -1);
	fprintf(reel, "|%d\n", n);


	// test 1363
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1364
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% i", 2147483647);
	fprintf(reel, "|%d\n", n);


	// test 1365
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% i", (int)(-2147483678));
	fprintf(reel, "|%d\n", n);


	// test 1366
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +i", 5);
	fprintf(reel, "|%d\n", n);


	// test 1367
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +i", -7);
	fprintf(reel, "|%d\n", n);


	// test 1368
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +i", 2147483647);
	fprintf(reel, "|%d\n", n);


	// test 1369
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 7i", 33);
	fprintf(reel, "|%d\n", n);


	// test 1370
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 7i", -14);
	fprintf(reel, "|%d\n", n);


	// test 1371
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 3i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1372
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 5i", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1373
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 5i", -2562);
	fprintf(reel, "|%d\n", n);


	// test 1374
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 4i", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1375
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 4i", -2464);
	fprintf(reel, "|%d\n", n);


	// test 1376
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -7i", 33);
	fprintf(reel, "|%d\n", n);


	// test 1377
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -7i", -14);
	fprintf(reel, "|%d\n", n);


	// test 1378
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -3i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1379
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -5i", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1380
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -5i", -2562);
	fprintf(reel, "|%d\n", n);


	// test 1381
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -4i", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1382
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -4i", -2464);
	fprintf(reel, "|%d\n", n);


	// test 1383
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +5i", 35);
	fprintf(reel, "|%d\n", n);


	// test 1384
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +7i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1385
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +24i", 2147483647);
	fprintf(reel, "|%d\n", n);


	// test 1386
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% .5i", 2);
	fprintf(reel, "|%d\n", n);


	// test 1387
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% .6i", -3);
	fprintf(reel, "|%d\n", n);


	// test 1388
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% .3i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1389
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% .4i", 5263);
	fprintf(reel, "|%d\n", n);


	// test 1390
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% .4i", -2372);
	fprintf(reel, "|%d\n", n);


	// test 1391
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% .3i", 13862);
	fprintf(reel, "|%d\n", n);


	// test 1392
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% .3i", -23646);
	fprintf(reel, "|%d\n", n);


	// test 1393
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +.7i", 234);
	fprintf(reel, "|%d\n", n);


	// test 1394
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +.7i", -446);
	fprintf(reel, "|%d\n", n);


	// test 1395
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +.3i", 3723);
	fprintf(reel, "|%d\n", n);


	// test 1396
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 05i", 43);
	fprintf(reel, "|%d\n", n);


	// test 1397
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 07i", -54);
	fprintf(reel, "|%d\n", n);


	// test 1398
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 03i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1399
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 03i", 634);
	fprintf(reel, "|%d\n", n);


	// test 1400
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 04i", -532);
	fprintf(reel, "|%d\n", n);


	// test 1401
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 04i", -4825);
	fprintf(reel, "|%d\n", n);


	// test 1402
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +05i", 432);
	fprintf(reel, "|%d\n", n);


	// test 1403
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +04i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1404
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1405
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1406
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1407
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1408
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1409
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1410
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1411
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1412
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1413
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1414
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1415
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1416
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1417
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1418
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1419
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1420
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1421
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% -3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1422
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1423
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1424
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1425
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1426
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1427
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1428
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1429
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1430
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1431
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +-8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1432
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +-10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1433
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +-8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1434
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +-8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1435
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +-8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1436
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +-3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1437
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +-3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1438
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +-3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1439
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% +-3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1440
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 08.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1441
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 010.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1442
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 08.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1443
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 08.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1444
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 08.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1445
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 03.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1446
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 03.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1447
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 03.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1448
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 03.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1449
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0-8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1450
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0-10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1451
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0-8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1452
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0-8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1453
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0-8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1454
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0-3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1455
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0-3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1456
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0-3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1457
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0-3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1458
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1459
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1460
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1461
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1462
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1463
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1464
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1465
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1466
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1467
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+-8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1468
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+-10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1469
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+-8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1470
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+-8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1471
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+-8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1472
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+-3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1473
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+-3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1474
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+-3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1475
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "% 0+-3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1476
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+.0i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1477
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+.i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1478
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+5.0i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1479
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+5.i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1480
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-5.0i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1481
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%+-5.i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1482
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%7i", 33);
	fprintf(reel, "|%d\n", n);


	// test 1483
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%7i", -14);
	fprintf(reel, "|%d\n", n);


	// test 1484
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1485
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5i", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1486
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5i", -2562);
	fprintf(reel, "|%d\n", n);


	// test 1487
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%4i", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1488
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%4i", -2464);
	fprintf(reel, "|%d\n", n);


	// test 1489
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-7i", 33);
	fprintf(reel, "|%d\n", n);


	// test 1490
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-7i", -14);
	fprintf(reel, "|%d\n", n);


	// test 1491
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1492
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5i", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1493
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5i", -2562);
	fprintf(reel, "|%d\n", n);


	// test 1494
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-4i", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1495
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-4i", -2464);
	fprintf(reel, "|%d\n", n);


	// test 1496
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.5i", 2);
	fprintf(reel, "|%d\n", n);


	// test 1497
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.6i", -3);
	fprintf(reel, "|%d\n", n);


	// test 1498
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1499
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.4i", 5263);
	fprintf(reel, "|%d\n", n);


	// test 1500
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.4i", -2372);
	fprintf(reel, "|%d\n", n);


	// test 1501
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3i", 13862);
	fprintf(reel, "|%d\n", n);


	// test 1502
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3i", -23646);
	fprintf(reel, "|%d\n", n);


	// test 1503
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05i", 43);
	fprintf(reel, "|%d\n", n);


	// test 1504
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%07i", -54);
	fprintf(reel, "|%d\n", n);


	// test 1505
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1506
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03i", 634);
	fprintf(reel, "|%d\n", n);


	// test 1507
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%04i", -532);
	fprintf(reel, "|%d\n", n);


	// test 1508
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%04i", -4825);
	fprintf(reel, "|%d\n", n);


	// test 1509
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1510
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1511
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1512
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1513
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1514
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1515
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1516
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1517
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1518
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1519
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1520
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1521
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1522
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1523
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1524
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1525
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1526
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1527
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1528
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%010.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1529
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1530
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1531
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1532
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1533
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1534
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1535
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1536
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5i", 34);
	fprintf(reel, "|%d\n", n);


	// test 1537
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-10.5i", -216);
	fprintf(reel, "|%d\n", n);


	// test 1538
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1539
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.3i", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1540
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.3i", -8473);
	fprintf(reel, "|%d\n", n);


	// test 1541
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-3.7i", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1542
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-3.7i", -2375);
	fprintf(reel, "|%d\n", n);


	// test 1543
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-3.3i", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1544
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-3.3i", -8462);
	fprintf(reel, "|%d\n", n);


	// test 1545
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.0i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1546
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1547
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5.0i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1548
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5.i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1549
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5.0i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1550
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5.i", 0);
	fprintf(reel, "|%d\n", n);


	// test 1551
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %u number", 17);
	fprintf(reel, "|%d\n", n);


	// test 1552
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %u number", 0);
	fprintf(reel, "|%d\n", n);


	// test 1553
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%u", 3);
	fprintf(reel, "|%d\n", n);


	// test 1554
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%u", 4294967295u);
	fprintf(reel, "|%d\n", n);


	// test 1555
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%7u", 33);
	fprintf(reel, "|%d\n", n);


	// test 1556
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1557
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5u", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1558
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%4u", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1559
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-7u", 33);
	fprintf(reel, "|%d\n", n);


	// test 1560
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1561
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5u", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1562
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-4u", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1563
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.5u", 2);
	fprintf(reel, "|%d\n", n);


	// test 1564
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1565
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.4u", 5263);
	fprintf(reel, "|%d\n", n);


	// test 1566
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3u", 13862);
	fprintf(reel, "|%d\n", n);


	// test 1567
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05u", 43);
	fprintf(reel, "|%d\n", n);


	// test 1568
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1569
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03u", 634);
	fprintf(reel, "|%d\n", n);


	// test 1570
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5u", 34);
	fprintf(reel, "|%d\n", n);


	// test 1571
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1572
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.3u", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1573
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.7u", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1574
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.3u", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1575
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5u", 34);
	fprintf(reel, "|%d\n", n);


	// test 1576
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1577
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.3u", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1578
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.7u", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1579
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.3u", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1580
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5u", 34);
	fprintf(reel, "|%d\n", n);


	// test 1581
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1582
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.3u", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1583
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03.7u", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1584
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03.3u", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1585
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5u", 34);
	fprintf(reel, "|%d\n", n);


	// test 1586
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1587
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.3u", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1588
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-3.7u", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1589
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-3.3u", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1590
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.0u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1591
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1592
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5.0u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1593
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5.u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1594
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5.0u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1595
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5.u", 0);
	fprintf(reel, "|%d\n", n);


	// test 1596
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %x number", 17);
	fprintf(reel, "|%d\n", n);


	// test 1597
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %x number", 0);
	fprintf(reel, "|%d\n", n);


	// test 1598
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%x", 3);
	fprintf(reel, "|%d\n", n);


	// test 1599
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%x", 4294967295u);
	fprintf(reel, "|%d\n", n);


	// test 1600
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%7x", 33);
	fprintf(reel, "|%d\n", n);


	// test 1601
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1602
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5x", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1603
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2x", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1604
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-7x", 33);
	fprintf(reel, "|%d\n", n);


	// test 1605
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1606
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5x", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1607
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-4x", 9648627);
	fprintf(reel, "|%d\n", n);


	// test 1608
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.5x", 21);
	fprintf(reel, "|%d\n", n);


	// test 1609
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1610
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.4x", 5263);
	fprintf(reel, "|%d\n", n);


	// test 1611
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3x", 938862);
	fprintf(reel, "|%d\n", n);


	// test 1612
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05x", 43);
	fprintf(reel, "|%d\n", n);


	// test 1613
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1614
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03x", 698334);
	fprintf(reel, "|%d\n", n);


	// test 1615
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5x", 34);
	fprintf(reel, "|%d\n", n);


	// test 1616
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1617
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.3x", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1618
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2.7x", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1619
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.3x", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1620
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5x", 34);
	fprintf(reel, "|%d\n", n);


	// test 1621
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1622
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.3x", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1623
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-2.7x", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1624
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.3x", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1625
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5x", 34);
	fprintf(reel, "|%d\n", n);


	// test 1626
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1627
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.3x", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1628
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%02.7x", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1629
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03.3x", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1630
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5x", 34);
	fprintf(reel, "|%d\n", n);


	// test 1631
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1632
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.3x", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1633
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-2.7x", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1634
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-3.3x", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1635
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1636
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1637
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1638
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1639
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1640
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1641
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %x number", 17);
	fprintf(reel, "|%d\n", n);


	// test 1642
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %x number", 0);
	fprintf(reel, "|%d\n", n);


	// test 1643
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%x", 3);
	fprintf(reel, "|%d\n", n);


	// test 1644
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%x", 4294967295u);
	fprintf(reel, "|%d\n", n);


	// test 1645
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%7x", 33);
	fprintf(reel, "|%d\n", n);


	// test 1646
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1647
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5x", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1648
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2x", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1649
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-7x", 33);
	fprintf(reel, "|%d\n", n);


	// test 1650
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1651
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5x", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1652
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-4x", 9648627);
	fprintf(reel, "|%d\n", n);


	// test 1653
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.5x", 21);
	fprintf(reel, "|%d\n", n);


	// test 1654
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1655
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.4x", 5263);
	fprintf(reel, "|%d\n", n);


	// test 1656
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3x", 938862);
	fprintf(reel, "|%d\n", n);


	// test 1657
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05x", 43);
	fprintf(reel, "|%d\n", n);


	// test 1658
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1659
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03x", 698334);
	fprintf(reel, "|%d\n", n);


	// test 1660
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5x", 34);
	fprintf(reel, "|%d\n", n);


	// test 1661
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1662
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.3x", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1663
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2.7x", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1664
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.3x", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1665
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5x", 34);
	fprintf(reel, "|%d\n", n);


	// test 1666
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1667
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.3x", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1668
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-2.7x", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1669
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.3x", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1670
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5x", 34);
	fprintf(reel, "|%d\n", n);


	// test 1671
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1672
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.3x", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1673
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%02.7x", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1674
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03.3x", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1675
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5x", 34);
	fprintf(reel, "|%d\n", n);


	// test 1676
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1677
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.3x", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1678
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-2.7x", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1679
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-3.3x", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1680
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1681
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1682
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1683
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1684
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1685
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1686
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1687
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1688
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#5.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1689
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#5.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1690
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-5.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1691
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-5.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1692
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#x", 4294967295u);
	fprintf(reel, "|%d\n", n);


	// test 1693
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#7x", 33);
	fprintf(reel, "|%d\n", n);


	// test 1694
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1695
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#5x", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1696
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#2x", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1697
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-7x", 33);
	fprintf(reel, "|%d\n", n);


	// test 1698
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1699
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-5x", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1700
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-4x", 9648627);
	fprintf(reel, "|%d\n", n);


	// test 1701
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.5x", 21);
	fprintf(reel, "|%d\n", n);


	// test 1702
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1703
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.4x", 5263);
	fprintf(reel, "|%d\n", n);


	// test 1704
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.3x", 938862);
	fprintf(reel, "|%d\n", n);


	// test 1705
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#05x", 43);
	fprintf(reel, "|%d\n", n);


	// test 1706
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#03x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1707
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#03x", 698334);
	fprintf(reel, "|%d\n", n);


	// test 1708
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#8.5x", 34);
	fprintf(reel, "|%d\n", n);


	// test 1709
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#8.5x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1710
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#x", 4294967295u);
	fprintf(reel, "|%d\n", n);


	// test 1711
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#7x", 33);
	fprintf(reel, "|%d\n", n);


	// test 1712
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1713
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#5x", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1714
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#2x", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1715
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-7x", 33);
	fprintf(reel, "|%d\n", n);


	// test 1716
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1717
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-5x", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1718
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-4x", 9648627);
	fprintf(reel, "|%d\n", n);


	// test 1719
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.5x", 21);
	fprintf(reel, "|%d\n", n);


	// test 1720
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.3x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1721
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.4x", 5263);
	fprintf(reel, "|%d\n", n);


	// test 1722
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.3x", 938862);
	fprintf(reel, "|%d\n", n);


	// test 1723
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#05x", 43);
	fprintf(reel, "|%d\n", n);


	// test 1724
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#03x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1725
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#03x", 698334);
	fprintf(reel, "|%d\n", n);


	// test 1726
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#8.5x", 34);
	fprintf(reel, "|%d\n", n);


	// test 1727
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#8.5x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1728
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1729
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1730
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#5.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1731
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#5.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1732
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-5.0x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1733
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-5.x", 0);
	fprintf(reel, "|%d\n", n);


	// test 1734
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %X number", 17);
	fprintf(reel, "|%d\n", n);


	// test 1735
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %X number", 0);
	fprintf(reel, "|%d\n", n);


	// test 1736
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%X", 3);
	fprintf(reel, "|%d\n", n);


	// test 1737
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%X", 4294967295u);
	fprintf(reel, "|%d\n", n);


	// test 1738
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%7X", 33);
	fprintf(reel, "|%d\n", n);


	// test 1739
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1740
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5X", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1741
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2X", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1742
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-7X", 33);
	fprintf(reel, "|%d\n", n);


	// test 1743
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1744
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5X", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1745
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-4X", 9648627);
	fprintf(reel, "|%d\n", n);


	// test 1746
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.5X", 21);
	fprintf(reel, "|%d\n", n);


	// test 1747
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1748
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.4X", 5263);
	fprintf(reel, "|%d\n", n);


	// test 1749
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3X", 938862);
	fprintf(reel, "|%d\n", n);


	// test 1750
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05X", 43);
	fprintf(reel, "|%d\n", n);


	// test 1751
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1752
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03X", 698334);
	fprintf(reel, "|%d\n", n);


	// test 1753
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1754
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1755
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.3X", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1756
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2.7X", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1757
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.3X", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1758
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1759
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1760
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.3X", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1761
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-2.7X", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1762
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.3X", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1763
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1764
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1765
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.3X", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1766
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%02.7X", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1767
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03.3X", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1768
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1769
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1770
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.3X", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1771
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-2.7X", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1772
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-3.3X", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1773
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %#X number", 17);
	fprintf(reel, "|%d\n", n);


	// test 1774
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %#X number", 0);
	fprintf(reel, "|%d\n", n);


	// test 1775
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#X", 3);
	fprintf(reel, "|%d\n", n);


	// test 1776
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#X", 4294967295u);
	fprintf(reel, "|%d\n", n);


	// test 1777
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#7X", 33);
	fprintf(reel, "|%d\n", n);


	// test 1778
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1779
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#7X", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1780
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#2X", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1781
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-7X", 33);
	fprintf(reel, "|%d\n", n);


	// test 1782
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1783
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-7X", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1784
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-4X", 9648627);
	fprintf(reel, "|%d\n", n);


	// test 1785
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.5X", 21);
	fprintf(reel, "|%d\n", n);


	// test 1786
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1787
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.4X", 5263);
	fprintf(reel, "|%d\n", n);


	// test 1788
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.3X", 938862);
	fprintf(reel, "|%d\n", n);


	// test 1789
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#05X", 43);
	fprintf(reel, "|%d\n", n);


	// test 1790
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#03X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1791
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#03X", 698334);
	fprintf(reel, "|%d\n", n);


	// test 1792
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#8.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1793
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#8.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1794
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#8.3X", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1795
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#2.7X", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1796
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#3.3X", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1797
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-8.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1798
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-8.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1799
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-8.3X", 8375);
	fprintf(reel, "%5.X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1800
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5.X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1801
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.0X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1802
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1803
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#5.0X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1804
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#5.X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1805
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-5.0X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1806
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-5.X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1807
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %X number", 17);
	fprintf(reel, "|%d\n", n);


	// test 1808
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %X number", 0);
	fprintf(reel, "|%d\n", n);


	// test 1809
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%X", 3);
	fprintf(reel, "|%d\n", n);


	// test 1810
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%X", 4294967295u);
	fprintf(reel, "|%d\n", n);


	// test 1811
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%7X", 33);
	fprintf(reel, "|%d\n", n);


	// test 1812
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1813
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5X", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1814
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2X", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1815
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-7X", 33);
	fprintf(reel, "|%d\n", n);


	// test 1816
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1817
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5X", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1818
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-4X", 9648627);
	fprintf(reel, "|%d\n", n);


	// test 1819
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.5X", 21);
	fprintf(reel, "|%d\n", n);


	// test 1820
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1821
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.4X", 5263);
	fprintf(reel, "|%d\n", n);


	// test 1822
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.3X", 938862);
	fprintf(reel, "|%d\n", n);


	// test 1823
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%05X", 43);
	fprintf(reel, "|%d\n", n);


	// test 1824
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1825
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03X", 698334);
	fprintf(reel, "|%d\n", n);


	// test 1826
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1827
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1828
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8.3X", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1829
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2.7X", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1830
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%3.3X", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1831
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1832
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1833
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8.3X", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1834
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-2.7X", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1835
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-3.3X", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1836
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1837
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1838
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%08.3X", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1839
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%02.7X", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1840
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%03.3X", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1841
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1842
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1843
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-8.3X", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1844
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-2.7X", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1845
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%0-3.3X", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1846
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %#X number", 17);
	fprintf(reel, "|%d\n", n);


	// test 1847
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "this %#X number", 0);
	fprintf(reel, "|%d\n", n);


	// test 1848
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#X", 3);
	fprintf(reel, "|%d\n", n);


	// test 1849
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#X", 4294967295u);
	fprintf(reel, "|%d\n", n);


	// test 1850
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#7X", 33);
	fprintf(reel, "|%d\n", n);


	// test 1851
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1852
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#7X", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1853
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#2X", 94827);
	fprintf(reel, "|%d\n", n);


	// test 1854
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-7X", 33);
	fprintf(reel, "|%d\n", n);


	// test 1855
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1856
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-7X", 52625);
	fprintf(reel, "|%d\n", n);


	// test 1857
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-4X", 9648627);
	fprintf(reel, "|%d\n", n);


	// test 1858
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.5X", 21);
	fprintf(reel, "|%d\n", n);


	// test 1859
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.3X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1860
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.4X", 5263);
	fprintf(reel, "|%d\n", n);


	// test 1861
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.3X", 938862);
	fprintf(reel, "|%d\n", n);


	// test 1862
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#05X", 43);
	fprintf(reel, "|%d\n", n);


	// test 1863
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#03X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1864
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#03X", 698334);
	fprintf(reel, "|%d\n", n);


	// test 1865
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#8.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1866
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#8.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1867
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#8.3X", 8375);
	fprintf(reel, "|%d\n", n);


	// test 1868
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#2.7X", 3267);
	fprintf(reel, "|%d\n", n);


	// test 1869
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#3.3X", 6983);
	fprintf(reel, "|%d\n", n);


	// test 1870
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-8.5X", 34);
	fprintf(reel, "|%d\n", n);


	// test 1871
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-8.5X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1872
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-8.3X", 8375);
	fprintf(reel, "%5.X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1873
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5.X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1874
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.0X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1875
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#.X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1876
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#5.0X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1877
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#5.X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1878
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-5.0X", 0);
	fprintf(reel, "|%d\n", n);


	// test 1879
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%#-5.X", 0);

	fprintf(reel, "|%d\n", n);


	// test 1880
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%p", NULL);
	fprintf(reel, "|%d\n", n);


	// test 1881
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%9.2p\n", 1234);
	fprintf(reel, "|%d\n", n);


	// test 1882
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%2.9p\n", 1234);
	fprintf(reel, "|%d\n", n);


	// test 1883
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.5p", 0);
	fprintf(reel, "|%d\n", n);


	// test 1884
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%.0p", 0);
	fprintf(reel, "|%d\n", n);


	// test 1885
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5p", 0);
	fprintf(reel, "|%d\n", n);


	// test 1886
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%p%p%p%p%p%p%p%p%p%p%p%p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	fprintf(reel, "|%d\n", n);


	// test 1887
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	fprintf(reel, "|%d\n", n);


	// test 1888
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	fprintf(reel, "|%d\n", n);


	// test 1889
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	fprintf(reel, "|%d\n", n);


	// test 1890
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	fprintf(reel, "|%d\n", n);


	// test 1891
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	fprintf(reel, "|%d\n", n);


	// test 1892
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	fprintf(reel, "|%d\n", n);


	// test 1893
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	fprintf(reel, "|%d\n", n);


	// test 1894
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	fprintf(reel, "|%d\n", n);


	// test 1895
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	fprintf(reel, "|%d\n", n);


	// test 1896
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	fprintf(reel, "|%d\n", n);


	// test 1897
	fprintf(reel, "test %d|", test++);
	n = fprintf(reel, "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',',
	'-','.','/','0','1','2','3','4','5','6','7','8','9',':',';', '<','=','>','?','@','A','B',
	'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y',
	
	'p','q','r','s','t','u','v','w','x','y','z','{','|','~');
	
		fprintf(reel, "|%d\n", n);
	

		// test 1898
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
				(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char) 9,
				(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,
				(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,
				(char)26,(char)27,(char)28,(char)29 ,(char)30,(char)31);
		fprintf(reel, "|%d\n", n);
	

		// test 1899
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
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
		fprintf(reel, "|%d\n", n);
	

		// test 1900
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c\
	%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
	%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c",
	';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','T','U',
	
	'q','r','s','t','u','v','w','x','y','z','{','|','~');
		fprintf(reel, "|%d\n", n);
	

		// test 1901
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",
				(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,
				(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,
				(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
		fprintf(reel, "|%d\n", n);
	

		// test 1902
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c\
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
		fprintf(reel, "|%d\n", n);
	

		// test 1903
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c",
	'=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y',
	
	'v','w','x','y','z','{','|','~');
		fprintf(reel, "|%d\n", n);
	

		// test 1904
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,
	(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,
	(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
		fprintf(reel, "|%d\n", n);
	

		// test 1905
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
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
		fprintf(reel, "|%d\n", n);
	

		// test 1906
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%c", '\0');
		fprintf(reel, "|%d\n", n);
	

		// test 1907
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%5c", '\0');
		fprintf(reel, "|%d\n", n);
	

		// test 1908
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%-5c", '\0');
        fprintf(reel, "|%d\n", n);
	

		// test 1909
		fprintf(reel, "test %d|", test++);
		n = fprintf(reel, "%#d", 42);;




	
fprintf(reel, "|%d\n", n);

// test 1910
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%++d", 42);
fprintf(reel, "|%d\n", n);

// test 1911
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%  d", 42);
fprintf(reel, "|%d\n", n);

// test 1912
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% + d", 42);
fprintf(reel, "|%d\n", n);

// test 1913
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%--5d", 42);
fprintf(reel, "|%d\n", n);

// test 1914
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-+-5d", 42);
fprintf(reel, "|%d\n", n);

// test 1915
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%d");
fprintf(reel, "|%d\n", n);

// test 1916
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%d", NULL);
fprintf(reel, "|%d\n", n);

// test 1917
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this %d number", 17);
fprintf(reel, "|%d\n", n);

// test 1918
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this %d number", -267);
fprintf(reel, "|%d\n", n);

// test 1919
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this %d number", 0);
fprintf(reel, "|%d\n", n);

// test 1920
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this % d number", 17);
fprintf(reel, "|%d\n", n);

// test 1921
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this % d number", -267);
fprintf(reel, "|%d\n", n);

// test 1922
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this % d number", 0);
fprintf(reel, "|%d\n", n);

// test 1923
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this %d number", 17);
fprintf(reel, "|%d\n", n);

// test 1924
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this %d number", -267);
fprintf(reel, "|%d\n", n);

// test 1925
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this %d number", 0);
fprintf(reel, "|%d\n", n);

// test 1926
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+d", 5);
fprintf(reel, "|%d\n", n);

// test 1927
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+d", -7);
fprintf(reel, "|%d\n", n);

// test 1928
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+d", 2147483647);
fprintf(reel, "|%d\n", n);

// test 1929
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+5d", 35);
fprintf(reel, "|%d\n", n);

// test 1930
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+7d", 0);
fprintf(reel, "|%d\n", n);

// test 1931
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+24d", 2147483647);
fprintf(reel, "|%d\n", n);

// test 1932
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+.7d", 234);
fprintf(reel, "|%d\n", n);

// test 1933
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+.7d", -446);
fprintf(reel, "|%d\n", n);

// test 1934
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+.3d", 3723);
fprintf(reel, "|%d\n", n);

// test 1935
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+05d", 432);
fprintf(reel, "|%d\n", n);

// test 1936
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+04d", 0);
fprintf(reel, "|%d\n", n);

// test 1937
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 1938
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 1939
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 1940
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 1941
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 1942
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 1943
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 1944
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 1945
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 1946
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+-8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 1947
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+-10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 1948
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+-8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 1949
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+-8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 1950
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+-8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 1951
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+-3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 1952
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+-3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 1953
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+-3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 1954
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+-3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 1955
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 1956
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 1957
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 1958
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 1959
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 1960
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 1961
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 1962
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 1963
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 1964
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+-8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 1965
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+-10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 1966
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+-8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 1967
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+-8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 1968
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+-8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 1969
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+-3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 1970
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+-3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 1971
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+-3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 1972
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0+-3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 1973
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this % d number", 17);
fprintf(reel, "|%d\n", n);

// test 1974
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this % d number", -267);
fprintf(reel, "|%d\n", n);

// test 1975
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this % d number", 0);
fprintf(reel, "|%d\n", n);

// test 1976
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% d", 3);
fprintf(reel, "|%d\n", n);

// test 1977
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% d", -1);
fprintf(reel, "|%d\n", n);

// test 1978
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% d", 0);
fprintf(reel, "|%d\n", n);

// test 1979
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this % d number", 17);
fprintf(reel, "|%d\n", n);

// test 1980
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this % d number", -267);
fprintf(reel, "|%d\n", n);

// test 1981
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "this % d number", 0);
fprintf(reel, "|%d\n", n);

// test 1982
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% d", 2147483647);
fprintf(reel, "|%d\n", n);

// test 1983
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% d", (int)(-2147483678));
fprintf(reel, "|%d\n", n);

// test 1984
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +d", 5);
fprintf(reel, "|%d\n", n);

// test 1985
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +d", -7);
fprintf(reel, "|%d\n", n);

// test 1986
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +d", 2147483647);
fprintf(reel, "|%d\n", n);

// test 1987
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 7d", 33);
fprintf(reel, "|%d\n", n);

// test 1988
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 7d", -14);
fprintf(reel, "|%d\n", n);

// test 1989
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 3d", 0);
fprintf(reel, "|%d\n", n);

// test 1990
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 5d", 52625);
fprintf(reel, "|%d\n", n);

// test 1991
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 5d", -2562);
fprintf(reel, "|%d\n", n);

// test 1992
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 4d", 94827);
fprintf(reel, "|%d\n", n);

// test 1993
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 4d", -2464);
fprintf(reel, "|%d\n", n);

// test 1994
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -7d", 33);
fprintf(reel, "|%d\n", n);

// test 1995
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -7d", -14);
fprintf(reel, "|%d\n", n);

// test 1996
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -3d", 0);
fprintf(reel, "|%d\n", n);

// test 1997
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -5d", 52625);
fprintf(reel, "|%d\n", n);

// test 1998
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -5d", -2562);
fprintf(reel, "|%d\n", n);

// test 1999
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -4d", 94827);
fprintf(reel, "|%d\n", n);

// test 2000
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -4d", -2464);
fprintf(reel, "|%d\n", n);

// test 2001
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +5d", 35);
fprintf(reel, "|%d\n", n);

// test 2002
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +7d", 0);
fprintf(reel, "|%d\n", n);

// test 2003
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +24d", 2147483647);
fprintf(reel, "|%d\n", n);

// test 2004
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% .5d", 2);
fprintf(reel, "|%d\n", n);

// test 2005
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% .6d", -3);
fprintf(reel, "|%d\n", n);

// test 2006
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% .3d", 0);
fprintf(reel, "|%d\n", n);

// test 2007
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% .4d", 5263);
fprintf(reel, "|%d\n", n);

// test 2008
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% .4d", -2372);
fprintf(reel, "|%d\n", n);

// test 2009
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% .3d", 13862);
fprintf(reel, "|%d\n", n);

// test 2010
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% .3d",-23646);
fprintf(reel, "|%d\n", n);

// test 2011
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +.7d", 234);
fprintf(reel, "|%d\n", n);

// test 2012
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +.7d", -446);
fprintf(reel, "|%d\n", n);

// test 2013
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +.3d", 3723);
fprintf(reel, "|%d\n", n);

// test 2014
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 05d", 43);
fprintf(reel, "|%d\n", n);

// test 2015
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 07d", -54);
fprintf(reel, "|%d\n", n);

// test 2016
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 03d", 0);
fprintf(reel, "|%d\n", n);

// test 2017
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 03d", 634);
fprintf(reel, "|%d\n", n);

// test 2018
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 04d", -532);
fprintf(reel, "|%d\n", n);

// test 2019
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 04d", -4825);
fprintf(reel, "|%d\n", n);

// test 2020
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +05d", 432);
fprintf(reel, "|%d\n", n);

// test 2021
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +04d", 0);
fprintf(reel, "|%d\n", n);

// test 2022
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2023
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2024
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2025
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2026
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2027
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2028
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2029
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2030
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2031
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2032
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2033
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2034
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2035
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2036
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2037
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2038
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2039
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% -3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2040
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2041
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2042
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2043
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2044
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2045
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2046
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2047
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2048
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2049
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +-8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2050
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +-10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2051
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +-8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2052
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +-8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2053
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +-8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2054
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +-3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2055
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +-3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2056
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +-3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2057
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% +-3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2058
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 08.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2059
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 010.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2060
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 08.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2061
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 08.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2062
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 08.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2063
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 03.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2064
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 03.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2065
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 03.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2066
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 03.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2067
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0-8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2068
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0-10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2069
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0-8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2070
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0-8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2071
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0-8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2072
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0-3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2073
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0-3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2074
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0-3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2075
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0-3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2076
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2077
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2078
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2079
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2080
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2081
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2082
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2083
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2084
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2085
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+-8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2086
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+-10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2087
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+-8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2088
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+-8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2089
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+-8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2090
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+-3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2091
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+-3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2092
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+-3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2093
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "% 0+-3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2094
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+.0d", 0);
fprintf(reel, "|%d\n", n);

// test 2095
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+.d", 0);
fprintf(reel, "|%d\n", n);

// test 2096
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+5.0d", 0);
fprintf(reel, "|%d\n", n);

// test 2097
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+5.d", 0);
fprintf(reel, "|%d\n", n);

// test 2098
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+-5.0d", 0);
fprintf(reel, "|%d\n", n);

// test 2099
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%+-5.d", 0);
fprintf(reel, "|%d\n", n);

// test 2100
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%d", 3);
fprintf(reel, "|%d\n", n);

// test 2101
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%d", -1);
fprintf(reel, "|%d\n", n);

// test 2102
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%d", 0);
fprintf(reel, "|%d\n", n);

// test 2103
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%d",  2147483647);
fprintf(reel, "|%d\n", n);

// test 2104
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%d", (int)(-2147483678));
fprintf(reel, "|%d\n", n);

// test 2105
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%7d", 33);
fprintf(reel, "|%d\n", n);

// test 2106
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%7d", -14);
fprintf(reel, "|%d\n", n);

// test 2107
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%3d", 0);
fprintf(reel, "|%d\n", n);

// test 2108
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%5d", 52625);
fprintf(reel, "|%d\n", n);

// test 2109
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%5d", -2562);
fprintf(reel, "|%d\n", n);

// test 2110
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%4d", 94827);
fprintf(reel, "|%d\n", n);

// test 2111
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%4d", -2464);
fprintf(reel, "|%d\n", n);

// test 2112
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-7d", 33);
fprintf(reel, "|%d\n", n);

// test 2113
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-7d", -14);
fprintf(reel, "|%d\n", n);

// test 2114
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-3d", 0);
fprintf(reel, "|%d\n", n);

// test 2115
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-5d", 52625);
fprintf(reel, "|%d\n", n);

// test 2116
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-5d", -2562);
fprintf(reel, "|%d\n", n);

// test 2117
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-4d", 94827);
fprintf(reel, "|%d\n", n);

// test 2118
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-4d", -2464);
fprintf(reel, "|%d\n", n);

// test 2119
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%.5d", 2);
fprintf(reel, "|%d\n", n);

// test 2120
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%.6d", -3);
fprintf(reel, "|%d\n", n);

// test 2121
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%.3d", 0);
fprintf(reel, "|%d\n", n);

// test 2122
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%.4d", 5263);
fprintf(reel, "|%d\n", n);

// test 2123
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%.4d", -2372);
fprintf(reel, "|%d\n", n);

// test 2124
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%.3d", 13862);
fprintf(reel, "|%d\n", n);

// test 2125
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%.3d",-23646);
fprintf(reel, "|%d\n", n);

// test 2126
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%05d", 43);
fprintf(reel, "|%d\n", n);

// test 2127
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%07d", -54);
fprintf(reel, "|%d\n", n);

// test 2128
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%03d", 0);
fprintf(reel, "|%d\n", n);

// test 2129
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%03d", 634);
fprintf(reel, "|%d\n", n);

// test 2130
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%04d", -532);
fprintf(reel, "|%d\n", n);

// test 2131
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%04d", -4825);
fprintf(reel, "|%d\n", n);

// test 2132
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2133
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2134
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2135
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2136
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2137
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2138
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2139
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2140
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2141
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2142
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2143
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2144
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2145
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2146
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2147
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2148
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2149
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2150
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%08.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2151
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%010.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2152
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%08.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2153
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%08.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2154
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%08.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2155
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%03.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2156
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%03.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2157
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%03.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2158
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%03.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2159
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0-8.5d", 34);
fprintf(reel, "|%d\n", n);

// test 2160
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0-10.5d", -216);
fprintf(reel, "|%d\n", n);

// test 2161
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0-8.5d", 0);
fprintf(reel, "|%d\n", n);

// test 2162
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0-8.3d", 8375);
fprintf(reel, "|%d\n", n);

// test 2163
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0-8.3d", -8473);
fprintf(reel, "|%d\n", n);

// test 2164
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0-3.7d", 3267);
fprintf(reel, "|%d\n", n);

// test 2165
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0-3.7d", -2375);
fprintf(reel, "|%d\n", n);

// test 2166
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0-3.3d", 6983);
fprintf(reel, "|%d\n", n);

// test 2167
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%0-3.3d", -8462);
fprintf(reel, "|%d\n", n);

// test 2168
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%.0d", 0);
fprintf(reel, "|%d\n", n);

// test 2169
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%.d", 0);
fprintf(reel, "|%d\n", n);

// test 2170
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%5.0d", 0);
fprintf(reel, "|%d\n", n);

// test 2171
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%5.d", 0);
fprintf(reel, "|%d\n", n);

// test 2172
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-5.0d", 0);
fprintf(reel, "|%d\n", n);

// test 2173
fprintf(reel, "test %d|", test++);
n = fprintf(reel, "%-5.d", 0);
fprintf(reel, "|%d\n", n);

test = 0;



		// test 0
        ft_printf("test %d|", test++);
		n = ft_printf("");


		ft_printf("|%d\n", n);
    

		// test 1
        ft_printf("test %d|", test++);
		n = ft_printf("\t\n\r\v\f\n");


		ft_printf("|%d\n", n);
    

		// test 2
        ft_printf("test %d|", test++);
		n = ft_printf("%%");


		ft_printf("|%d\n", n);
    

		// test 3
        ft_printf("test %d|", test++);
		n = ft_printf("%5%");


		ft_printf("|%d\n", n);
    

		// test 4
        ft_printf("test %d|", test++);
		n = ft_printf("%-5%");


		ft_printf("|%d\n", n);
    

		// test 5
        ft_printf("test %d|", test++);
		n = ft_printf("%05%");


		ft_printf("|%d\n", n);
    

		// test 6
        ft_printf("test %d|", test++);
		n = ft_printf("%-05%");


		ft_printf("|%d\n", n);
    

		// test 7
        ft_printf("test %d|", test++);
		n = ft_printf("%");


		ft_printf("|%d\n", n);
    

		// test 8
        ft_printf("test %d|", test++);
		n = ft_printf("%5");


		ft_printf("|%d\n", n);
    

		// test 9
        ft_printf("test %d|", test++);
		n = ft_printf("%05");


		ft_printf("|%d\n", n);
    

		// test 10
        ft_printf("test %d|", test++);
		n = ft_printf("%-05");


		ft_printf("|%d\n", n);
    

		// test 11
        ft_printf("test %d|", test++);
		n = ft_printf("%-5");


		ft_printf("|%d\n", n);
    

		// test 12
        ft_printf("test %d|", test++);
		n = ft_printf("%.4p", &ncm_p);


		ft_printf("|%d\n", n);
    

		// test 13
        ft_printf("test %d|", test++);
		n = ft_printf("%.p", &ncm_p);


		ft_printf("|%d\n", n);
    

		// test 14
        ft_printf("test %d|", test++);
		n = ft_printf("%05p", &ncm_p);


		ft_printf("|%d\n", n);
    

		// test 15
        ft_printf("test %d|", test++);
		n = ft_printf("%0p", &ncm_p);


		ft_printf("|%d\n", n);
    

		// test 16
        ft_printf("test %d|", test++);
		n = ft_printf("%-p", &ncm_p);


		ft_printf("|%d\n", n);
    

		// test 17
        ft_printf("test %d|", test++);
		n = ft_printf("%#p", &ncm_p);


		ft_printf("|%d\n", n);
    

		// test 18
        ft_printf("test %d|", test++);
		n = ft_printf("%+p", &ncm_p);


		ft_printf("|%d\n", n);
    

		// test 19
        ft_printf("test %d|", test++);
		n = ft_printf("%+p", &ncm_p);


		ft_printf("|%d\n", n);
    

		// test 20
        ft_printf("test %d|", test++);
		n = ft_printf("% p", &ncm_p);


		ft_printf("|%d\n", n);
    

		// test 21
        ft_printf("test %d|", test++);
		n = ft_printf("% p", &ncm_p);


		ft_printf("|%d\n", n);
    

		// test 22
        ft_printf("test %d|", test++);
		n = ft_printf("%-p", &ncm_p);


		ft_printf("|%d\n", n);
    

		// test 23
        ft_printf("test %d|", test++);
		n = ft_printf("%#d", 42);;


		ft_printf("|%d\n", n);
    

		// test 24
        ft_printf("test %d|", test++);
		n = ft_printf("%#i", 42);


		ft_printf("|%d\n", n);
    

		// test 25
        ft_printf("test %d|", test++);
		n = ft_printf("%-i", 42);


		ft_printf("|%d\n", n);
    

		// test 26
        ft_printf("test %d|", test++);
		n = ft_printf("%#u", 42);


		ft_printf("|%d\n", n);
    

		// test 27
        ft_printf("test %d|", test++);
		n = ft_printf("%+u", 42);


		ft_printf("|%d\n", n);
    

		// test 28
        ft_printf("test %d|", test++);
		n = ft_printf("% u", 42);


		ft_printf("|%d\n", n);
    

		// test 29
        ft_printf("test %d|", test++);
		n = ft_printf("%-u", 42);


		ft_printf("|%d\n", n);
    

		// test 30
        ft_printf("test %d|", test++);
		n = ft_printf("%+x", 42);


		ft_printf("|%d\n", n);
    

		// test 31
        ft_printf("test %d|", test++);
		n = ft_printf("% x", 42);


		ft_printf("|%d\n", n);
    

		// test 32
        ft_printf("test %d|", test++);
		n = ft_printf("%+X", 42);


		ft_printf("|%d\n", n);
    

		// test 33
        ft_printf("test %d|", test++);
		n = ft_printf("% X", 42);


		ft_printf("|%d\n", n);
    

		// test 34
        ft_printf("test %d|", test++);
		n = ft_printf("%+u", 5);


		ft_printf("|%d\n", n);
    

		// test 35
        ft_printf("test %d|", test++);
		n = ft_printf("%+u", 5);


		ft_printf("|%d\n", n);
    

		// test 36
        ft_printf("test %d|", test++);
		n = ft_printf("%+u", 4294967295);


		ft_printf("|%d\n", n);
    

		// test 37
        ft_printf("test %d|", test++);
		n = ft_printf("%+5u", 35);


		ft_printf("|%d\n", n);
    

		// test 38
        ft_printf("test %d|", test++);
		n = ft_printf("%+7u", 0);


		ft_printf("|%d\n", n);
    

		// test 39
        ft_printf("test %d|", test++);
		n = ft_printf("%+24u", 4294967295);


		ft_printf("|%d\n", n);
    

		// test 40
        ft_printf("test %d|", test++);
		n = ft_printf("%+.7u", 234);


		ft_printf("|%d\n", n);
    

		// test 41
        ft_printf("test %d|", test++);
		n = ft_printf("%+.3u", 3723);


		ft_printf("|%d\n", n);
    

		// test 42
        ft_printf("test %d|", test++);
		n = ft_printf("%+05u", 432);


		ft_printf("|%d\n", n);
    

		// test 43
        ft_printf("test %d|", test++);
		n = ft_printf("%+04u", 0);


		ft_printf("|%d\n", n);
    

		// test 44
        ft_printf("test %d|", test++);
		n = ft_printf("%+8.5u", 34);


		ft_printf("|%d\n", n);
    

		// test 45
        ft_printf("test %d|", test++);
		n = ft_printf("%+8.5u", 0);


		ft_printf("|%d\n", n);
    

		// test 46
        ft_printf("test %d|", test++);
		n = ft_printf("%+8.3u", 8375);


		ft_printf("|%d\n", n);
    

		// test 47
        ft_printf("test %d|", test++);
		n = ft_printf("%+3.7u", 3267);


		ft_printf("|%d\n", n);
    

		// test 48
        ft_printf("test %d|", test++);
		n = ft_printf("%+3.3u", 6983);


		ft_printf("|%d\n", n);
    

		// test 49
        ft_printf("test %d|", test++);
		n = ft_printf("%+-8.5u", 34);


		ft_printf("|%d\n", n);
    

		// test 50
        ft_printf("test %d|", test++);
		n = ft_printf("%+-8.5u", 0);


		ft_printf("|%d\n", n);
    

		// test 51
        ft_printf("test %d|", test++);
		n = ft_printf("%+-8.3u", 8375);


		ft_printf("|%d\n", n);
    

		// test 52
        ft_printf("test %d|", test++);
		n = ft_printf("%+-3.7u", 3267);


		ft_printf("|%d\n", n);
    

		// test 53
        ft_printf("test %d|", test++);
		n = ft_printf("%+-3.3u", 6983);


		ft_printf("|%d\n", n);
    

		// test 54
        ft_printf("test %d|", test++);
		n = ft_printf("%0+8.5u", 34);


		ft_printf("|%d\n", n);
    

		// test 55
        ft_printf("test %d|", test++);
		n = ft_printf("%0+8.5u", 0);


		ft_printf("|%d\n", n);
    

		// test 56
        ft_printf("test %d|", test++);
		n = ft_printf("%0+8.3u", 8375);


		ft_printf("|%d\n", n);
    

		// test 57
        ft_printf("test %d|", test++);
		n = ft_printf("%0+3.7u", 3267);


		ft_printf("|%d\n", n);
    

		// test 58
        ft_printf("test %d|", test++);
		n = ft_printf("%0+3.3u", 6983);


		ft_printf("|%d\n", n);
    

		// test 59
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.5u", 34);


		ft_printf("|%d\n", n);
    

		// test 60
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.5u", 0);


		ft_printf("|%d\n", n);
    

		// test 61
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.3u", 8375);


		ft_printf("|%d\n", n);
    

		// test 62
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.7u", 3267);


		ft_printf("|%d\n", n);
    

		// test 63
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.3u", 6983);


		ft_printf("|%d\n", n);
    

		// test 64
        ft_printf("test %d|", test++);
		n = ft_printf("%++d", 42);


		ft_printf("|%d\n", n);
    

		// test 65
        ft_printf("test %d|", test++);
		n = ft_printf("%  d", 42);


		ft_printf("|%d\n", n);
    

		// test 66
        ft_printf("test %d|", test++);
		n = ft_printf("% + d", 42);


		ft_printf("|%d\n", n);
    

		// test 67
        ft_printf("test %d|", test++);
		n = ft_printf("%--5d", 42);


		ft_printf("|%d\n", n);
    

		// test 68
        ft_printf("test %d|", test++);
		n = ft_printf("%-+-5d", 42);


		ft_printf("|%d\n", n);
    

		// test 69
        ft_printf("test %d|", test++);
		n = ft_printf("%##x", 42);


		ft_printf("|%d\n", n);
    

		// test 70
        ft_printf("test %d|", test++);
		n = ft_printf("%#++#-5x", 42);


		ft_printf("|%d\n", n);
    

		// test 71
        ft_printf("test %d|", test++);
		n = ft_printf("%.4c", 'a');


		ft_printf("|%d\n", n);
    

		// test 72
        ft_printf("test %d|", test++);
		n = ft_printf("%#c", 'a');


		ft_printf("|%d\n", n);
    

		// test 73
        ft_printf("test %d|", test++);
		n = ft_printf("%+c", 'a');


		ft_printf("|%d\n", n);
    

		// test 74
        ft_printf("test %d|", test++);
		n = ft_printf("%+c", -42);


		ft_printf("|%d\n", n);
    

		// test 75
        ft_printf("test %d|", test++);
		n = ft_printf("%#s", "hello");


		ft_printf("|%d\n", n);
    

		// test 76
        ft_printf("test %d|", test++);
		n = ft_printf("%+s", "hello");


		ft_printf("|%d\n", n);
    

		// test 77
        ft_printf("test %d|", test++);
		n = ft_printf("% s", "hello");


		ft_printf("|%d\n", n);
    

		// test 78
        ft_printf("test %d|", test++);
		n = ft_printf("% s", NULL);


		ft_printf("|%d\n", n);
    

		// test 79
        ft_printf("test %d|", test++);
		n = ft_printf("%#s", NULL);


		ft_printf("|%d\n", n);
    

		// test 80
        ft_printf("test %d|", test++);
		n = ft_printf("%+s", NULL);


		ft_printf("|%d\n", n);
    

		// test 81
        ft_printf("test %d|", test++);
		n = ft_printf("%-x", 42);


		ft_printf("|%d\n", n);
    

		// test 82
        ft_printf("test %d|", test++);
		n = ft_printf("%-021s", "abc");


		ft_printf("|%d\n", n);
    

		// test 83
        ft_printf("test %d|", test++);
		n = ft_printf("%-05s", "goes over");


		ft_printf("|%d\n", n);
    

		// test 84
        ft_printf("test %d|", test++);
		n = ft_printf("%021s", NULL);


		ft_printf("|%d\n", n);
    

		// test 85
        ft_printf("test %d|", test++);
		n = ft_printf("%02s", NULL);


		ft_printf("|%d\n", n);
    

		// test 86
        ft_printf("test %d|", test++);
		n = ft_printf("%-021s", NULL);


		ft_printf("|%d\n", n);
    

		// test 87
        ft_printf("test %d|", test++);
		n = ft_printf("%-03s", NULL);


		ft_printf("|%d\n", n);
    

		// test 88
        ft_printf("test %d|", test++);
		n = ft_printf("%05c", '\0');


		ft_printf("|%d\n", n);
    

		// test 89
        ft_printf("test %d|", test++);
		n = ft_printf("%-05c", '\0');


		ft_printf("|%d\n", n);
    

		// test 90
        ft_printf("test %d|", test++);
		n = ft_printf("%.c", 'a');


		ft_printf("|%d\n", n);
    

		// test 91
        ft_printf("test %d|", test++);
		n = ft_printf("%05c", 'a');


		ft_printf("|%d\n", n);
    

		// test 92
        ft_printf("test %d|", test++);
		n = ft_printf("%0c", 'a');


		ft_printf("|%d\n", n);
    

		// test 93
        ft_printf("test %d|", test++);
		n = ft_printf("% c", 'a');


		ft_printf("|%d\n", n);
    

		// test 94
        ft_printf("test %d|", test++);
		n = ft_printf("% c", -42);


		ft_printf("|%d\n", n);
    

		// test 95
        ft_printf("test %d|", test++);
		n = ft_printf("%-c", 'a');


		ft_printf("|%d\n", n);
    

		// test 96
        ft_printf("test %d|", test++);
		n = ft_printf("%05s", "hello");


		ft_printf("|%d\n", n);
    

		// test 97
        ft_printf("test %d|", test++);
		n = ft_printf("%0s", "hello");


		ft_printf("|%d\n", n);
    

		// test 98
        ft_printf("test %d|", test++);
		n = ft_printf("%-s", "hello");


		ft_printf("|%d\n", n);
    

		// test 99
        ft_printf("test %d|", test++);
		n = ft_printf("%0");


		ft_printf("|%d\n", n);
    

		// test 100
        ft_printf("test %d|", test++);
		n = ft_printf("%-");


		ft_printf("|%d\n", n);
    

		// test 101
        ft_printf("test %d|", test++);
		n = ft_printf("%23");


		ft_printf("|%d\n", n);
    

		// test 102
        ft_printf("test %d|", test++);
		n = ft_printf("%.");


		ft_printf("|%d\n", n);
    

		// test 103
        ft_printf("test %d|", test++);
		n = ft_printf("%p");


		ft_printf("|%d\n", n);
    

		// test 104
        ft_printf("test %d|", test++);
		n = ft_printf("%d");


		ft_printf("|%d\n", n);
    

		// test 105
        ft_printf("test %d|", test++);
		n = ft_printf("%u");


		ft_printf("|%d\n", n);
    

		// test 106
        ft_printf("test %d|", test++);
		n = ft_printf("%x");


		ft_printf("|%d\n", n);
    

		// test 107
        ft_printf("test %d|", test++);
		n = ft_printf("%X");


		ft_printf("|%d\n", n);
    

		// test 108
        ft_printf("test %d|", test++);
		n = ft_printf("%c");


		ft_printf("|%d\n", n);
    

		// test 109
        ft_printf("test %d|", test++);
		n = ft_printf("%0s", NULL);


		ft_printf("|%d\n", n);
    

		// test 110
        ft_printf("test %d|", test++);
		n = ft_printf("%-s", NULL);


		ft_printf("|%d\n", n);
    

		// test 111
        ft_printf("test %d|", test++);
		n = ft_printf("%23s", NULL);


		ft_printf("|%d\n", n);
    

		// test 112
        ft_printf("test %d|", test++);
		n = ft_printf("%.s", NULL);


		ft_printf("|%d\n", n);
    

		// test 113
        ft_printf("test %d|", test++);
		n = ft_printf("%p", NULL);


		ft_printf("|%d\n", n);
    

		// test 114
        ft_printf("test %d|", test++);
		n = ft_printf("%d", NULL);


		ft_printf("|%d\n", n);
    

		// test 115
        ft_printf("test %d|", test++);
		n = ft_printf("%u", NULL);


		ft_printf("|%d\n", n);
    

		// test 116
        ft_printf("test %d|", test++);
		n = ft_printf("%x", NULL);


		ft_printf("|%d\n", n);
    

		// test 117
        ft_printf("test %d|", test++);
		n = ft_printf("%X", NULL);


		ft_printf("|%d\n", n);
    

		// test 118
        ft_printf("test %d|", test++);
		n = ft_printf("%s", NULL);


		ft_printf("|%d\n", n);
    

		// test 119
        ft_printf("test %d|", test++);
		n = ft_printf("%c", NULL);


		ft_printf("|%d\n", n);
    

		// test 120
        ft_printf("test %d|", test++);
		n = ft_printf("hello, %s.", "gavin");


		ft_printf("|%d\n", n);
    

		// test 121
        ft_printf("test %d|", test++);
		n = ft_printf("%s", "testing testing");


		ft_printf("|%d\n", n);
    

		// test 122
        ft_printf("test %d|", test++);
		n = ft_printf("..%s stuff %s", "a", "b");


		ft_printf("|%d\n", n);
    

		// test 123
        ft_printf("test %d|", test++);
		n = ft_printf("this %s is empty", "");


		ft_printf("|%d\n", n);
    

		// test 124
        ft_printf("test %d|", test++);
		n = ft_printf("this %s is %s", "hello", "");


		ft_printf("|%d\n", n);
    

		// test 125
        ft_printf("test %d|", test++);
		n = ft_printf("this %s is %s", "", "hello");


		ft_printf("|%d\n", n);
    

		// test 126
        ft_printf("test %d|", test++);
		n = ft_printf("%s%s%s", "1", "2", "3's a charm");


		ft_printf("|%d\n", n);
    

		// test 127
        ft_printf("test %d|", test++);
		n = ft_printf("%32s", "abc");


		ft_printf("|%d\n", n);
    

		// test 128
        ft_printf("test %d|", test++);
		n = ft_printf("%16s", "nark nark");


		ft_printf("|%d\n", n);
    

		// test 129
        ft_printf("test %d|", test++);
		n = ft_printf("%5s", "goes over");


		ft_printf("|%d\n", n);
    

		// test 130
        ft_printf("test %d|", test++);
		n = ft_printf("%-32s", "abc");


		ft_printf("|%d\n", n);
    

		// test 131
        ft_printf("test %d|", test++);
		n = ft_printf("%-16s", "nark nark");


		ft_printf("|%d\n", n);
    

		// test 132
        ft_printf("test %d|", test++);
		n = ft_printf("%-5s", "goes over");


		ft_printf("|%d\n", n);
    

		// test 133
        ft_printf("test %d|", test++);
		n = ft_printf("%.7s", "hello");


		ft_printf("|%d\n", n);
    

		// test 134
        ft_printf("test %d|", test++);
		n = ft_printf("%.3s", "hello");


		ft_printf("|%d\n", n);
    

		// test 135
        ft_printf("test %d|", test++);
		n = ft_printf("%.s", "hello");


		ft_printf("|%d\n", n);
    

		// test 136
        ft_printf("test %d|", test++);
		n = ft_printf("%.0s", "hello");


		ft_printf("|%d\n", n);
    

		// test 137
        ft_printf("test %d|", test++);
		n = ft_printf("%.3s%.2s", "holla", "bitch");


		ft_printf("|%d\n", n);
    

		// test 138
        ft_printf("test %d|", test++);
		n = ft_printf("%.5s%7s", "yo", "boi");


		ft_printf("|%d\n", n);
    

		// test 139
        ft_printf("test %d|", test++);
		n = ft_printf("%7.5s", "yolo");


		ft_printf("|%d\n", n);
    

		// test 140
        ft_printf("test %d|", test++);
		n = ft_printf("%7.5s", "bombastic");


		ft_printf("|%d\n", n);
    

		// test 141
        ft_printf("test %d|", test++);
		n = ft_printf("%-7.5s", "yolo");


		ft_printf("|%d\n", n);
    

		// test 142
        ft_printf("test %d|", test++);
		n = ft_printf("%-7.5s", "tubular");


		ft_printf("|%d\n", n);
    

		// test 143
        ft_printf("test %d|", test++);
		n = ft_printf("hello, %s.", NULL);


		ft_printf("|%d\n", n);
    

		// test 144
        ft_printf("test %d|", test++);
		n = ft_printf("%s", NULL);


		ft_printf("|%d\n", n);
    

		// test 145
        ft_printf("test %d|", test++);
		n = ft_printf("%32s", NULL);


		ft_printf("|%d\n", n);
    

		// test 146
        ft_printf("test %d|", test++);
		n = ft_printf("%2s", NULL);


		ft_printf("|%d\n", n);
    

		// test 147
        ft_printf("test %d|", test++);
		n = ft_printf("%-32s", NULL);


		ft_printf("|%d\n", n);
    

		// test 148
        ft_printf("test %d|", test++);
		n = ft_printf("%-16s", NULL);


		ft_printf("|%d\n", n);
    

		// test 149
        ft_printf("test %d|", test++);
		n = ft_printf("%-3s", NULL);


		ft_printf("|%d\n", n);
    

		// test 150
        ft_printf("test %d|", test++);
		n = ft_printf("%.9s", "NULL");


		ft_printf("|%d\n", n);
    

		// test 151
        ft_printf("test %d|", test++);
		n = ft_printf("%.3s", "NULL");


		ft_printf("|%d\n", n);
    

		// test 152
        ft_printf("test %d|", test++);
		n = ft_printf("%.s", "NULL");


		ft_printf("|%d\n", n);
    

		// test 153
        ft_printf("test %d|", test++);
		n = ft_printf("%.0s", "NULL");


		ft_printf("|%d\n", n);
    

		// test 154
        ft_printf("test %d|", test++);
		n = ft_printf("%s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 155
        ft_printf("test %d|", test++);
		n = ft_printf("%3s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 156
        ft_printf("test %d|", test++);
		n = ft_printf("%9s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 157
        ft_printf("test %d|", test++);
		n = ft_printf("%.s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 158
        ft_printf("test %d|", test++);
		n = ft_printf("%.9s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 159
        ft_printf("test %d|", test++);
		n = ft_printf("%.03s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 160
        ft_printf("test %d|", test++);
		n = ft_printf("%.09s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 161
        ft_printf("test %d|", test++);
		n = ft_printf("%.03s", NULL);


		ft_printf("|%d\n", n);
    

		// test 162
        ft_printf("test %d|", test++);
		n = ft_printf("%.09s", NULL);


		ft_printf("|%d\n", n);
    

		// test 163
        ft_printf("test %d|", test++);
		n = ft_printf("%.00s", "\0");


		ft_printf("|%d\n", n);
    

		// test 164
        ft_printf("test %d|", test++);
		n = ft_printf("%.01s", "\0");


		ft_printf("|%d\n", n);
    

		// test 165
        ft_printf("test %d|", test++);
		n = ft_printf("%.03s", "\0");


		ft_printf("|%d\n", n);
    

		// test 166
        ft_printf("test %d|", test++);
		n = ft_printf("%.09s", "\0");


		ft_printf("|%d\n", n);
    

		// test 167
        ft_printf("test %d|", test++);
		n = ft_printf("%3.s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 168
        ft_printf("test %d|", test++);
		n = ft_printf("%10.s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 169
        ft_printf("test %d|", test++);
		n = ft_printf("%3.s", NULL);


		ft_printf("|%d\n", n);
    

		// test 170
        ft_printf("test %d|", test++);
		n = ft_printf("%10.s", NULL);


		ft_printf("|%d\n", n);
    

		// test 171
        ft_printf("test %d|", test++);
		n = ft_printf("%1.s", "\0");


		ft_printf("|%d\n", n);
    

		// test 172
        ft_printf("test %d|", test++);
		n = ft_printf("%2.s", "\0");


		ft_printf("|%d\n", n);
    

		// test 173
        ft_printf("test %d|", test++);
		n = ft_printf("%9.s", "\0");


		ft_printf("|%d\n", n);
    

		// test 174
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 175
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 176
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.s", NULL);


		ft_printf("|%d\n", n);
    

		// test 177
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.s", NULL);


		ft_printf("|%d\n", n);
    

		// test 178
        ft_printf("test %d|", test++);
		n = ft_printf("%-1.s", "\0");


		ft_printf("|%d\n", n);
    

		// test 179
        ft_printf("test %d|", test++);
		n = ft_printf("%-2.s", "\0");


		ft_printf("|%d\n", n);
    

		// test 180
        ft_printf("test %d|", test++);
		n = ft_printf("%-6.s", "\0");


		ft_printf("|%d\n", n);
    

		// test 181
        ft_printf("test %d|", test++);
		n = ft_printf("%3.1s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 182
        ft_printf("test %d|", test++);
		n = ft_printf("%10.1s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 183
        ft_printf("test %d|", test++);
		n = ft_printf("%3.1s", NULL);


		ft_printf("|%d\n", n);
    

		// test 184
        ft_printf("test %d|", test++);
		n = ft_printf("%9.1s", NULL);


		ft_printf("|%d\n", n);
    

		// test 185
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.1s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 186
        ft_printf("test %d|", test++);
		n = ft_printf("%-10.1s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 187
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.1s", NULL);


		ft_printf("|%d\n", n);
    

		// test 188
        ft_printf("test %d|", test++);
		n = ft_printf("%-9.1s", NULL);


		ft_printf("|%d\n", n);
    

		// test 189
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.1s", "\0");


		ft_printf("|%d\n", n);
    

		// test 190
        ft_printf("test %d|", test++);
		n = ft_printf("%-6.1s", "\0");


		ft_printf("|%d\n", n);
    

		// test 191
        ft_printf("test %d|", test++);
		n = ft_printf("%3.6s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 192
        ft_printf("test %d|", test++);
		n = ft_printf("%20.6s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 193
        ft_printf("test %d|", test++);
		n = ft_printf("%3.6s", NULL);


		ft_printf("|%d\n", n);
    

		// test 194
        ft_printf("test %d|", test++);
		n = ft_printf("%20.6s", NULL);


		ft_printf("|%d\n", n);
    

		// test 195
        ft_printf("test %d|", test++);
		n = ft_printf("%3.6s", "\0");


		ft_printf("|%d\n", n);
    

		// test 196
        ft_printf("test %d|", test++);
		n = ft_printf("%6.6s", "\0");


		ft_printf("|%d\n", n);
    

		// test 197
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.6s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 198
        ft_printf("test %d|", test++);
		n = ft_printf("%-20.6s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 199
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.8s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 200
        ft_printf("test %d|", test++);
		n = ft_printf("%-10.8s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 201
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.8s", NULL);


		ft_printf("|%d\n", n);
    

		// test 202
        ft_printf("test %d|", test++);
		n = ft_printf("%-10.8s", NULL);


		ft_printf("|%d\n", n);
    

		// test 203
        ft_printf("test %d|", test++);
		n = ft_printf("%-.00s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 204
        ft_printf("test %d|", test++);
		n = ft_printf("%-.09s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 205
        ft_printf("test %d|", test++);
		n = ft_printf("%+- 06.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 206
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-6.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 207
        ft_printf("test %d|", test++);
		n = ft_printf("%0 +-6.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 208
        ft_printf("test %d|", test++);
		n = ft_printf("%+-0 6.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 209
        ft_printf("test %d|", test++);
		n = ft_printf("%-+ 06.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 210
        ft_printf("test %d|", test++);
		n = ft_printf("% -+06.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 211
        ft_printf("test %d|", test++);
		n = ft_printf("%+- 07.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 212
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 213
        ft_printf("test %d|", test++);
		n = ft_printf("%0 +-9.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 214
        ft_printf("test %d|", test++);
		n = ft_printf("%+-0 10.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 215
        ft_printf("test %d|", test++);
		n = ft_printf("%-+ 011.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 216
        ft_printf("test %d|", test++);
		n = ft_printf("% -+012.06s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 217
        ft_printf("test %d|", test++);
		n = ft_printf("%+- 06.04s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 218
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-6.04s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 219
        ft_printf("test %d|", test++);
		n = ft_printf("%0 +-6.04s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 220
        ft_printf("test %d|", test++);
		n = ft_printf("%+-0 6.04s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 221
        ft_printf("test %d|", test++);
		n = ft_printf("%-+ 06.04s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 222
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-+6.04s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 223
        ft_printf("test %d|", test++);
		n = ft_printf("%+- 06.09s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 224
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-6.09s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 225
        ft_printf("test %d|", test++);
		n = ft_printf("%0 +-6.09s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 226
        ft_printf("test %d|", test++);
		n = ft_printf("%+-0 6.09s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 227
        ft_printf("test %d|", test++);
		n = ft_printf("%-+ 06.09s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 228
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-+6.09s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 229
        ft_printf("test %d|", test++);
		n = ft_printf("%+03s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 230
        ft_printf("test %d|", test++);
		n = ft_printf("%+09s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 231
        ft_printf("test %d|", test++);
		n = ft_printf("%+ 3s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 232
        ft_printf("test %d|", test++);
		n = ft_printf("%+ 6s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 233
        ft_printf("test %d|", test++);
		n = ft_printf("%00s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 234
        ft_printf("test %d|", test++);
		n = ft_printf("%000s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 235
        ft_printf("test %d|", test++);
		n = ft_printf("%0000s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 236
        ft_printf("test %d|", test++);
		n = ft_printf("%-00s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 237
        ft_printf("test %d|", test++);
		n = ft_printf("%0-0s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 238
        ft_printf("test %d|", test++);
		n = ft_printf("%00-s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 239
        ft_printf("test %d|", test++);
		n = ft_printf("%03s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 240
        ft_printf("test %d|", test++);
		n = ft_printf("%09s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 241
        ft_printf("test %d|", test++);
		n = ft_printf("%-03s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 242
        ft_printf("test %d|", test++);
		n = ft_printf("%-09s", s_hidden);


		ft_printf("|%d\n", n);
    

		// test 243
        ft_printf("test %d|", test++);
		n = ft_printf("this %i number", 17);


		ft_printf("|%d\n", n);
    

		// test 244
        ft_printf("test %d|", test++);
		n = ft_printf("this %i number", -267);


		ft_printf("|%d\n", n);
    

		// test 245
        ft_printf("test %d|", test++);
		n = ft_printf("this %i number", 0);


		ft_printf("|%d\n", n);
    

		// test 246
        ft_printf("test %d|", test++);
		n = ft_printf("%i", 3);


		ft_printf("|%d\n", n);
    

		// test 247
        ft_printf("test %d|", test++);
		n = ft_printf("%i", -1);


		ft_printf("|%d\n", n);
    

		// test 248
        ft_printf("test %d|", test++);
		n = ft_printf("%i", 0);


		ft_printf("|%d\n", n);
    

		// test 249
        ft_printf("test %d|", test++);
		n = ft_printf("this %d number", 17);


		ft_printf("|%d\n", n);
    

		// test 250
        ft_printf("test %d|", test++);
		n = ft_printf("this %d number", -267);


		ft_printf("|%d\n", n);
    

		// test 251
        ft_printf("test %d|", test++);
		n = ft_printf("this %d number", 0);


		ft_printf("|%d\n", n);
    

		// test 252
        ft_printf("test %d|", test++);
		n = ft_printf("%i",  2147483647);


		ft_printf("|%d\n", n);
    

		// test 253
        ft_printf("test %d|", test++);
		n = ft_printf("%i", (int)(-2147483678));


		ft_printf("|%d\n", n);
    

		// test 254
        ft_printf("test %d|", test++);
		n = ft_printf("%0+8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 255
        ft_printf("test %d|", test++);
		n = ft_printf("%0+10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 256
        ft_printf("test %d|", test++);
		n = ft_printf("%0+8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 257
        ft_printf("test %d|", test++);
		n = ft_printf("%0+8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 258
        ft_printf("test %d|", test++);
		n = ft_printf("%0+8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 259
        ft_printf("test %d|", test++);
		n = ft_printf("%0+3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 260
        ft_printf("test %d|", test++);
		n = ft_printf("%0+3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 261
        ft_printf("test %d|", test++);
		n = ft_printf("%0+3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 262
        ft_printf("test %d|", test++);
		n = ft_printf("%0+3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 263
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 264
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 265
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 266
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 267
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 268
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 269
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 270
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 271
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 272
        ft_printf("test %d|", test++);
		n = ft_printf("%+i", 5);


		ft_printf("|%d\n", n);
    

		// test 273
        ft_printf("test %d|", test++);
		n = ft_printf("%+i", -7);


		ft_printf("|%d\n", n);
    

		// test 274
        ft_printf("test %d|", test++);
		n = ft_printf("%+i", 2147483647);


		ft_printf("|%d\n", n);
    

		// test 275
        ft_printf("test %d|", test++);
		n = ft_printf("%+5i", 35);


		ft_printf("|%d\n", n);
    

		// test 276
        ft_printf("test %d|", test++);
		n = ft_printf("%+7i", 0);


		ft_printf("|%d\n", n);
    

		// test 277
        ft_printf("test %d|", test++);
		n = ft_printf("%+24i", 2147483647);


		ft_printf("|%d\n", n);
    

		// test 278
        ft_printf("test %d|", test++);
		n = ft_printf("%+.7i", 234);


		ft_printf("|%d\n", n);
    

		// test 279
        ft_printf("test %d|", test++);
		n = ft_printf("%+.7i", -446);


		ft_printf("|%d\n", n);
    

		// test 280
        ft_printf("test %d|", test++);
		n = ft_printf("%+.3i", 3723);


		ft_printf("|%d\n", n);
    

		// test 281
        ft_printf("test %d|", test++);
		n = ft_printf("%+05i", 432);


		ft_printf("|%d\n", n);
    

		// test 282
        ft_printf("test %d|", test++);
		n = ft_printf("%+04i", 0);


		ft_printf("|%d\n", n);
    

		// test 283
        ft_printf("test %d|", test++);
		n = ft_printf("%+8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 284
        ft_printf("test %d|", test++);
		n = ft_printf("%+10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 285
        ft_printf("test %d|", test++);
		n = ft_printf("%+8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 286
        ft_printf("test %d|", test++);
		n = ft_printf("%+8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 287
        ft_printf("test %d|", test++);
		n = ft_printf("%+8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 288
        ft_printf("test %d|", test++);
		n = ft_printf("%+3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 289
        ft_printf("test %d|", test++);
		n = ft_printf("%+3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 290
        ft_printf("test %d|", test++);
		n = ft_printf("%+3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 291
        ft_printf("test %d|", test++);
		n = ft_printf("%+3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 292
        ft_printf("test %d|", test++);
		n = ft_printf("%+-8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 293
        ft_printf("test %d|", test++);
		n = ft_printf("%+-10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 294
        ft_printf("test %d|", test++);
		n = ft_printf("%+-8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 295
        ft_printf("test %d|", test++);
		n = ft_printf("%+-8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 296
        ft_printf("test %d|", test++);
		n = ft_printf("%+-8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 297
        ft_printf("test %d|", test++);
		n = ft_printf("%+-3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 298
        ft_printf("test %d|", test++);
		n = ft_printf("%+-3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 299
        ft_printf("test %d|", test++);
		n = ft_printf("%+-3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 300
        ft_printf("test %d|", test++);
		n = ft_printf("%+-3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 301
        ft_printf("test %d|", test++);
		n = ft_printf("%037i", 22337203685477);


		ft_printf("|%d\n", n);
    

		// test 302
        ft_printf("test %d|", test++);
		n = ft_printf("%.37i", -22337203685477);


		ft_printf("|%d\n", n);
    

		// test 303
        ft_printf("test %d|", test++);
		n = ft_printf("%37i", 522337203685470);


		ft_printf("|%d\n", n);
    

		// test 304
        ft_printf("test %d|", test++);
		n = ft_printf("%-37i", -522337203685470);


		ft_printf("|%d\n", n);
    

		// test 305
        ft_printf("test %d|", test++);
		n = ft_printf("%+i", 22337203685477);




		ft_printf("|%d\n", n);
    

		// test 306
        ft_printf("test %d|", test++);
		n = ft_printf("this % i number", 17);


		ft_printf("|%d\n", n);
    

		// test 307
        ft_printf("test %d|", test++);
		n = ft_printf("this % i number", -267);


		ft_printf("|%d\n", n);
    

		// test 308
        ft_printf("test %d|", test++);
		n = ft_printf("this % i number", 0);


		ft_printf("|%d\n", n);
    

		// test 309
        ft_printf("test %d|", test++);
		n = ft_printf("% i", 3);


		ft_printf("|%d\n", n);
    

		// test 310
        ft_printf("test %d|", test++);
		n = ft_printf("% i", -1);


		ft_printf("|%d\n", n);
    

		// test 311
        ft_printf("test %d|", test++);
		n = ft_printf("% i", 0);


		ft_printf("|%d\n", n);
    

		// test 312
        ft_printf("test %d|", test++);
		n = ft_printf("this % d number", 17);


		ft_printf("|%d\n", n);
    

		// test 313
        ft_printf("test %d|", test++);
		n = ft_printf("this % d number", -267);


		ft_printf("|%d\n", n);
    

		// test 314
        ft_printf("test %d|", test++);
		n = ft_printf("this % d number", 0);


		ft_printf("|%d\n", n);
    

		// test 315
        ft_printf("test %d|", test++);
		n = ft_printf("% i", 2147483647);


		ft_printf("|%d\n", n);
    

		// test 316
        ft_printf("test %d|", test++);
		n = ft_printf("% i", (int)(-2147483678));


		ft_printf("|%d\n", n);
    

		// test 317
        ft_printf("test %d|", test++);
		n = ft_printf("% +i", 5);


		ft_printf("|%d\n", n);
    

		// test 318
        ft_printf("test %d|", test++);
		n = ft_printf("% +i", -7);


		ft_printf("|%d\n", n);
    

		// test 319
        ft_printf("test %d|", test++);
		n = ft_printf("% +i", 2147483647);


		ft_printf("|%d\n", n);
    

		// test 320
        ft_printf("test %d|", test++);
		n = ft_printf("% 7i", 33);


		ft_printf("|%d\n", n);
    

		// test 321
        ft_printf("test %d|", test++);
		n = ft_printf("% 7i", -14);


		ft_printf("|%d\n", n);
    

		// test 322
        ft_printf("test %d|", test++);
		n = ft_printf("% 3i", 0);


		ft_printf("|%d\n", n);
    

		// test 323
        ft_printf("test %d|", test++);
		n = ft_printf("% 5i", 52625);


		ft_printf("|%d\n", n);
    

		// test 324
        ft_printf("test %d|", test++);
		n = ft_printf("% 5i", -2562);


		ft_printf("|%d\n", n);
    

		// test 325
        ft_printf("test %d|", test++);
		n = ft_printf("% 4i", 94827);


		ft_printf("|%d\n", n);
    

		// test 326
        ft_printf("test %d|", test++);
		n = ft_printf("% 4i", -2464);


		ft_printf("|%d\n", n);
    

		// test 327
        ft_printf("test %d|", test++);
		n = ft_printf("% -7i", 33);


		ft_printf("|%d\n", n);
    

		// test 328
        ft_printf("test %d|", test++);
		n = ft_printf("% -7i", -14);


		ft_printf("|%d\n", n);
    

		// test 329
        ft_printf("test %d|", test++);
		n = ft_printf("% -3i", 0);


		ft_printf("|%d\n", n);
    

		// test 330
        ft_printf("test %d|", test++);
		n = ft_printf("% -5i", 52625);


		ft_printf("|%d\n", n);
    

		// test 331
        ft_printf("test %d|", test++);
		n = ft_printf("% -5i", -2562);


		ft_printf("|%d\n", n);
    

		// test 332
        ft_printf("test %d|", test++);
		n = ft_printf("% -4i", 94827);


		ft_printf("|%d\n", n);
    

		// test 333
        ft_printf("test %d|", test++);
		n = ft_printf("% -4i", -2464);


		ft_printf("|%d\n", n);
    

		// test 334
        ft_printf("test %d|", test++);
		n = ft_printf("% +5i", 35);


		ft_printf("|%d\n", n);
    

		// test 335
        ft_printf("test %d|", test++);
		n = ft_printf("% +7i", 0);


		ft_printf("|%d\n", n);
    

		// test 336
        ft_printf("test %d|", test++);
		n = ft_printf("% +24i", 2147483647);


		ft_printf("|%d\n", n);
    

		// test 337
        ft_printf("test %d|", test++);
		n = ft_printf("% .5i", 2);


		ft_printf("|%d\n", n);
    

		// test 338
        ft_printf("test %d|", test++);
		n = ft_printf("% .6i", -3);


		ft_printf("|%d\n", n);
    

		// test 339
        ft_printf("test %d|", test++);
		n = ft_printf("% .3i", 0);


		ft_printf("|%d\n", n);
    

		// test 340
        ft_printf("test %d|", test++);
		n = ft_printf("% .4i", 5263);


		ft_printf("|%d\n", n);
    

		// test 341
        ft_printf("test %d|", test++);
		n = ft_printf("% .4i", -2372);


		ft_printf("|%d\n", n);
    

		// test 342
        ft_printf("test %d|", test++);
		n = ft_printf("% .3i", 13862);


		ft_printf("|%d\n", n);
    

		// test 343
        ft_printf("test %d|", test++);
		n = ft_printf("% .3i",-23646);


		ft_printf("|%d\n", n);
    

		// test 344
        ft_printf("test %d|", test++);
		n = ft_printf("% +.7i", 234);


		ft_printf("|%d\n", n);
    

		// test 345
        ft_printf("test %d|", test++);
		n = ft_printf("% +.7i", -446);


		ft_printf("|%d\n", n);
    

		// test 346
        ft_printf("test %d|", test++);
		n = ft_printf("% +.3i", 3723);


		ft_printf("|%d\n", n);
    

		// test 347
        ft_printf("test %d|", test++);
		n = ft_printf("% 05i", 43);


		ft_printf("|%d\n", n);
    

		// test 348
        ft_printf("test %d|", test++);
		n = ft_printf("% 07i", -54);


		ft_printf("|%d\n", n);
    

		// test 349
        ft_printf("test %d|", test++);
		n = ft_printf("% 03i", 0);


		ft_printf("|%d\n", n);
    

		// test 350
        ft_printf("test %d|", test++);
		n = ft_printf("% 03i", 634);


		ft_printf("|%d\n", n);
    

		// test 351
        ft_printf("test %d|", test++);
		n = ft_printf("% 04i", -532);


		ft_printf("|%d\n", n);
    

		// test 352
        ft_printf("test %d|", test++);
		n = ft_printf("% 04i", -4825);


		ft_printf("|%d\n", n);
    

		// test 353
        ft_printf("test %d|", test++);
		n = ft_printf("% +05i", 432);


		ft_printf("|%d\n", n);
    

		// test 354
        ft_printf("test %d|", test++);
		n = ft_printf("% +04i", 0);


		ft_printf("|%d\n", n);
    

		// test 355
        ft_printf("test %d|", test++);
		n = ft_printf("% 8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 356
        ft_printf("test %d|", test++);
		n = ft_printf("% 10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 357
        ft_printf("test %d|", test++);
		n = ft_printf("% 8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 358
        ft_printf("test %d|", test++);
		n = ft_printf("% 8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 359
        ft_printf("test %d|", test++);
		n = ft_printf("% 8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 360
        ft_printf("test %d|", test++);
		n = ft_printf("% 3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 361
        ft_printf("test %d|", test++);
		n = ft_printf("% 3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 362
        ft_printf("test %d|", test++);
		n = ft_printf("% 3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 363
        ft_printf("test %d|", test++);
		n = ft_printf("% 3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 364
        ft_printf("test %d|", test++);
		n = ft_printf("% -8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 365
        ft_printf("test %d|", test++);
		n = ft_printf("% -10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 366
        ft_printf("test %d|", test++);
		n = ft_printf("% -8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 367
        ft_printf("test %d|", test++);
		n = ft_printf("% -8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 368
        ft_printf("test %d|", test++);
		n = ft_printf("% -8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 369
        ft_printf("test %d|", test++);
		n = ft_printf("% -3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 370
        ft_printf("test %d|", test++);
		n = ft_printf("% -3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 371
        ft_printf("test %d|", test++);
		n = ft_printf("% -3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 372
        ft_printf("test %d|", test++);
		n = ft_printf("% -3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 373
        ft_printf("test %d|", test++);
		n = ft_printf("% +8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 374
        ft_printf("test %d|", test++);
		n = ft_printf("% +10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 375
        ft_printf("test %d|", test++);
		n = ft_printf("% +8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 376
        ft_printf("test %d|", test++);
		n = ft_printf("% +8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 377
        ft_printf("test %d|", test++);
		n = ft_printf("% +8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 378
        ft_printf("test %d|", test++);
		n = ft_printf("% +3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 379
        ft_printf("test %d|", test++);
		n = ft_printf("% +3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 380
        ft_printf("test %d|", test++);
		n = ft_printf("% +3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 381
        ft_printf("test %d|", test++);
		n = ft_printf("% +3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 382
        ft_printf("test %d|", test++);
		n = ft_printf("% +-8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 383
        ft_printf("test %d|", test++);
		n = ft_printf("% +-10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 384
        ft_printf("test %d|", test++);
		n = ft_printf("% +-8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 385
        ft_printf("test %d|", test++);
		n = ft_printf("% +-8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 386
        ft_printf("test %d|", test++);
		n = ft_printf("% +-8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 387
        ft_printf("test %d|", test++);
		n = ft_printf("% +-3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 388
        ft_printf("test %d|", test++);
		n = ft_printf("% +-3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 389
        ft_printf("test %d|", test++);
		n = ft_printf("% +-3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 390
        ft_printf("test %d|", test++);
		n = ft_printf("% +-3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 391
        ft_printf("test %d|", test++);
		n = ft_printf("% 08.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 392
        ft_printf("test %d|", test++);
		n = ft_printf("% 010.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 393
        ft_printf("test %d|", test++);
		n = ft_printf("% 08.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 394
        ft_printf("test %d|", test++);
		n = ft_printf("% 08.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 395
        ft_printf("test %d|", test++);
		n = ft_printf("% 08.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 396
        ft_printf("test %d|", test++);
		n = ft_printf("% 03.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 397
        ft_printf("test %d|", test++);
		n = ft_printf("% 03.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 398
        ft_printf("test %d|", test++);
		n = ft_printf("% 03.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 399
        ft_printf("test %d|", test++);
		n = ft_printf("% 03.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 400
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 401
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 402
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 403
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 404
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 405
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 406
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 407
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 408
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 409
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 410
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 411
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 412
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 413
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 414
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 415
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 416
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 417
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 418
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 419
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 420
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 421
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 422
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 423
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 424
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 425
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 426
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 427
        ft_printf("test %d|", test++);
		n = ft_printf("% hhi", (char)45);


		ft_printf("|%d\n", n);
    

		// test 428
        ft_printf("test %d|", test++);
		n = ft_printf("% hhi", (char)-45);


		ft_printf("|%d\n", n);
    

		// test 429
        ft_printf("test %d|", test++);
		n = ft_printf("% hi", (short)385);


		ft_printf("|%d\n", n);
    

		// test 430
        ft_printf("test %d|", test++);
		n = ft_printf("% hi", (short)-385);


		ft_printf("|%d\n", n);
    

		// test 431
        ft_printf("test %d|", test++);
		n = ft_printf("% li", (long)32);


		ft_printf("|%d\n", n);
    

		// test 432
        ft_printf("test %d|", test++);
		n = ft_printf("% li", (long)-32);


		ft_printf("|%d\n", n);
    

		// test 433
        ft_printf("test %d|", test++);
		n = ft_printf("% lli", (long long)43);


		ft_printf("|%d\n", n);
    

		// test 434
        ft_printf("test %d|", test++);
		n = ft_printf("% lli", (long long)-43);


		ft_printf("|%d\n", n);
    

		// test 435
        ft_printf("test %d|", test++);
		n = ft_printf("% i", 22337203685477);


		ft_printf("|%d\n", n);
    

		// test 436
        ft_printf("test %d|", test++);
		n = ft_printf("% i", -22337203685477);


		ft_printf("|%d\n", n);
    

		// test 437
        ft_printf("test %d|", test++);
		n = ft_printf("% i", 522337203685470);


		ft_printf("|%d\n", n);
    

		// test 438
        ft_printf("test %d|", test++);
		n = ft_printf("% i", -522337203685470);


		ft_printf("|%d\n", n);
    

		// test 439
        ft_printf("test %d|", test++);
		n = ft_printf("% i", 9223372036854775807);


		ft_printf("|%d\n", n);
    

		// test 440
        ft_printf("test %d|", test++);
		n = ft_printf("% i", 9223372036854775807);


		ft_printf("|%d\n", n);
    

		// test 441
        ft_printf("test %d|", test++);
		n = ft_printf("% hi", (short)32767);


		ft_printf("|%d\n", n);
    

		// test 442
        ft_printf("test %d|", test++);
		n = ft_printf("% hi", (short)(-32768));


		ft_printf("|%d\n", n);
    

		// test 443
        ft_printf("test %d|", test++);
		n = ft_printf("% hhi", (char)(127));


		ft_printf("|%d\n", n);
    

		// test 444
        ft_printf("test %d|", test++);
		n = ft_printf("% hhi", (char)(-128));


		ft_printf("|%d\n", n);
    

		// test 445
        ft_printf("test %d|", test++);
		n = ft_printf("%+.0i", 0);


		ft_printf("|%d\n", n);
    

		// test 446
        ft_printf("test %d|", test++);
		n = ft_printf("%+.i", 0);


		ft_printf("|%d\n", n);
    

		// test 447
        ft_printf("test %d|", test++);
		n = ft_printf("%+5.0i", 0);


		ft_printf("|%d\n", n);
    

		// test 448
        ft_printf("test %d|", test++);
		n = ft_printf("%+5.i", 0);


		ft_printf("|%d\n", n);
    

		// test 449
        ft_printf("test %d|", test++);
		n = ft_printf("%+-5.0i", 0);


		ft_printf("|%d\n", n);
    

		// test 450
        ft_printf("test %d|", test++);
		n = ft_printf("%+-5.i", 0);


		ft_printf("|%d\n", n);
    

		// test 451
        ft_printf("test %d|", test++);
		n = ft_printf("%7i", 33);


		ft_printf("|%d\n", n);
    

		// test 452
        ft_printf("test %d|", test++);
		n = ft_printf("%7i", -14);


		ft_printf("|%d\n", n);
    

		// test 453
        ft_printf("test %d|", test++);
		n = ft_printf("%3i", 0);


		ft_printf("|%d\n", n);
    

		// test 454
        ft_printf("test %d|", test++);
		n = ft_printf("%5i", 52625);


		ft_printf("|%d\n", n);
    

		// test 455
        ft_printf("test %d|", test++);
		n = ft_printf("%5i", -2562);


		ft_printf("|%d\n", n);
    

		// test 456
        ft_printf("test %d|", test++);
		n = ft_printf("%4i", 94827);


		ft_printf("|%d\n", n);
    

		// test 457
        ft_printf("test %d|", test++);
		n = ft_printf("%4i", -2464);


		ft_printf("|%d\n", n);
    

		// test 458
        ft_printf("test %d|", test++);
		n = ft_printf("%-7i", 33);


		ft_printf("|%d\n", n);
    

		// test 459
        ft_printf("test %d|", test++);
		n = ft_printf("%-7i", -14);


		ft_printf("|%d\n", n);
    

		// test 460
        ft_printf("test %d|", test++);
		n = ft_printf("%-3i", 0);


		ft_printf("|%d\n", n);
    

		// test 461
        ft_printf("test %d|", test++);
		n = ft_printf("%-5i", 52625);


		ft_printf("|%d\n", n);
    

		// test 462
        ft_printf("test %d|", test++);
		n = ft_printf("%-5i", -2562);


		ft_printf("|%d\n", n);
    

		// test 463
        ft_printf("test %d|", test++);
		n = ft_printf("%-4i", 94827);


		ft_printf("|%d\n", n);
    

		// test 464
        ft_printf("test %d|", test++);
		n = ft_printf("%-4i", -2464);


		ft_printf("|%d\n", n);
    

		// test 465
        ft_printf("test %d|", test++);
		n = ft_printf("%.5i", 2);


		ft_printf("|%d\n", n);
    

		// test 466
        ft_printf("test %d|", test++);
		n = ft_printf("%.6i", -3);


		ft_printf("|%d\n", n);
    

		// test 467
        ft_printf("test %d|", test++);
		n = ft_printf("%.3i", 0);


		ft_printf("|%d\n", n);
    

		// test 468
        ft_printf("test %d|", test++);
		n = ft_printf("%.4i", 5263);


		ft_printf("|%d\n", n);
    

		// test 469
        ft_printf("test %d|", test++);
		n = ft_printf("%.4i", -2372);


		ft_printf("|%d\n", n);
    

		// test 470
        ft_printf("test %d|", test++);
		n = ft_printf("%.3i", 13862);


		ft_printf("|%d\n", n);
    

		// test 471
        ft_printf("test %d|", test++);
		n = ft_printf("%.3i",-23646);


		ft_printf("|%d\n", n);
    

		// test 472
        ft_printf("test %d|", test++);
		n = ft_printf("%05i", 43);


		ft_printf("|%d\n", n);
    

		// test 473
        ft_printf("test %d|", test++);
		n = ft_printf("%07i", -54);


		ft_printf("|%d\n", n);
    

		// test 474
        ft_printf("test %d|", test++);
		n = ft_printf("%03i", 0);


		ft_printf("|%d\n", n);
    

		// test 475
        ft_printf("test %d|", test++);
		n = ft_printf("%03i", 634);


		ft_printf("|%d\n", n);
    

		// test 476
        ft_printf("test %d|", test++);
		n = ft_printf("%04i", -532);


		ft_printf("|%d\n", n);
    

		// test 477
        ft_printf("test %d|", test++);
		n = ft_printf("%04i", -4825);


		ft_printf("|%d\n", n);
    

		// test 478
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 479
        ft_printf("test %d|", test++);
		n = ft_printf("%10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 480
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 481
        ft_printf("test %d|", test++);
		n = ft_printf("%8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 482
        ft_printf("test %d|", test++);
		n = ft_printf("%8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 483
        ft_printf("test %d|", test++);
		n = ft_printf("%3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 484
        ft_printf("test %d|", test++);
		n = ft_printf("%3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 485
        ft_printf("test %d|", test++);
		n = ft_printf("%3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 486
        ft_printf("test %d|", test++);
		n = ft_printf("%3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 487
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 488
        ft_printf("test %d|", test++);
		n = ft_printf("%-10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 489
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 490
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 491
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 492
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 493
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 494
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 495
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 496
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 497
        ft_printf("test %d|", test++);
		n = ft_printf("%010.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 498
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 499
        ft_printf("test %d|", test++);
		n = ft_printf("%08.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 500
        ft_printf("test %d|", test++);
		n = ft_printf("%08.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 501
        ft_printf("test %d|", test++);
		n = ft_printf("%03.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 502
        ft_printf("test %d|", test++);
		n = ft_printf("%03.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 503
        ft_printf("test %d|", test++);
		n = ft_printf("%03.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 504
        ft_printf("test %d|", test++);
		n = ft_printf("%03.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 505
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5i", 34);


		ft_printf("|%d\n", n);
    

		// test 506
        ft_printf("test %d|", test++);
		n = ft_printf("%0-10.5i", -216);


		ft_printf("|%d\n", n);
    

		// test 507
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5i", 0);


		ft_printf("|%d\n", n);
    

		// test 508
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.3i", 8375);


		ft_printf("|%d\n", n);
    

		// test 509
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.3i", -8473);


		ft_printf("|%d\n", n);
    

		// test 510
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.7i", 3267);


		ft_printf("|%d\n", n);
    

		// test 511
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.7i", -2375);


		ft_printf("|%d\n", n);
    

		// test 512
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.3i", 6983);


		ft_printf("|%d\n", n);
    

		// test 513
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.3i", -8462);


		ft_printf("|%d\n", n);
    

		// test 514
        ft_printf("test %d|", test++);
		n = ft_printf("%.0i", 0);


		ft_printf("|%d\n", n);
    

		// test 515
        ft_printf("test %d|", test++);
		n = ft_printf("%.i", 0);


		ft_printf("|%d\n", n);
    

		// test 516
        ft_printf("test %d|", test++);
		n = ft_printf("%5.0i", 0);


		ft_printf("|%d\n", n);
    

		// test 517
        ft_printf("test %d|", test++);
		n = ft_printf("%5.i", 0);


		ft_printf("|%d\n", n);
    

		// test 518
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.0i", 0);


		ft_printf("|%d\n", n);
    

		// test 519
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.i", 0);


		ft_printf("|%d\n", n);
    

		// test 520
        ft_printf("test %d|", test++);
		n = ft_printf("this %d number", 17);


		ft_printf("|%d\n", n);
    

		// test 521
        ft_printf("test %d|", test++);
		n = ft_printf("this %d number", -267);


		ft_printf("|%d\n", n);
    

		// test 522
        ft_printf("test %d|", test++);
		n = ft_printf("this %d number", 0);


		ft_printf("|%d\n", n);
    

		// test 523
        ft_printf("test %d|", test++);
		n = ft_printf("%+d", 5);


		ft_printf("|%d\n", n);
    

		// test 524
        ft_printf("test %d|", test++);
		n = ft_printf("%+d", -7);


		ft_printf("|%d\n", n);
    

		// test 525
        ft_printf("test %d|", test++);
		n = ft_printf("%+d", 2147483647);


		ft_printf("|%d\n", n);
    

		// test 526
        ft_printf("test %d|", test++);
		n = ft_printf("%+5d", 35);


		ft_printf("|%d\n", n);
    

		// test 527
        ft_printf("test %d|", test++);
		n = ft_printf("%+7d", 0);


		ft_printf("|%d\n", n);
    

		// test 528
        ft_printf("test %d|", test++);
		n = ft_printf("%+24d", 2147483647);


		ft_printf("|%d\n", n);
    

		// test 529
        ft_printf("test %d|", test++);
		n = ft_printf("%+.7d", 234);


		ft_printf("|%d\n", n);
    

		// test 530
        ft_printf("test %d|", test++);
		n = ft_printf("%+.7d", -446);


		ft_printf("|%d\n", n);
    

		// test 531
        ft_printf("test %d|", test++);
		n = ft_printf("%+.3d", 3723);


		ft_printf("|%d\n", n);
    

		// test 532
        ft_printf("test %d|", test++);
		n = ft_printf("%+05d", 432);


		ft_printf("|%d\n", n);
    

		// test 533
        ft_printf("test %d|", test++);
		n = ft_printf("%+04d", 0);


		ft_printf("|%d\n", n);
    

		// test 534
        ft_printf("test %d|", test++);
		n = ft_printf("%+8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 535
        ft_printf("test %d|", test++);
		n = ft_printf("%+10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 536
        ft_printf("test %d|", test++);
		n = ft_printf("%+8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 537
        ft_printf("test %d|", test++);
		n = ft_printf("%+8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 538
        ft_printf("test %d|", test++);
		n = ft_printf("%+8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 539
        ft_printf("test %d|", test++);
		n = ft_printf("%+3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 540
        ft_printf("test %d|", test++);
		n = ft_printf("%+3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 541
        ft_printf("test %d|", test++);
		n = ft_printf("%+3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 542
        ft_printf("test %d|", test++);
		n = ft_printf("%+3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 543
        ft_printf("test %d|", test++);
		n = ft_printf("%+-8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 544
        ft_printf("test %d|", test++);
		n = ft_printf("%+-10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 545
        ft_printf("test %d|", test++);
		n = ft_printf("%+-8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 546
        ft_printf("test %d|", test++);
		n = ft_printf("%+-8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 547
        ft_printf("test %d|", test++);
		n = ft_printf("%+-8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 548
        ft_printf("test %d|", test++);
		n = ft_printf("%+-3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 549
        ft_printf("test %d|", test++);
		n = ft_printf("%+-3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 550
        ft_printf("test %d|", test++);
		n = ft_printf("%+-3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 551
        ft_printf("test %d|", test++);
		n = ft_printf("%+-3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 552
        ft_printf("test %d|", test++);
		n = ft_printf("%0+8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 553
        ft_printf("test %d|", test++);
		n = ft_printf("%0+10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 554
        ft_printf("test %d|", test++);
		n = ft_printf("%0+8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 555
        ft_printf("test %d|", test++);
		n = ft_printf("%0+8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 556
        ft_printf("test %d|", test++);
		n = ft_printf("%0+8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 557
        ft_printf("test %d|", test++);
		n = ft_printf("%0+3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 558
        ft_printf("test %d|", test++);
		n = ft_printf("%0+3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 559
        ft_printf("test %d|", test++);
		n = ft_printf("%0+3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 560
        ft_printf("test %d|", test++);
		n = ft_printf("%0+3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 561
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 562
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 563
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 564
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 565
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 566
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 567
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 568
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 569
        ft_printf("test %d|", test++);
		n = ft_printf("%0+-3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 570
        ft_printf("test %d|", test++);
		n = ft_printf("this % d number", 17);


		ft_printf("|%d\n", n);
    

		// test 571
        ft_printf("test %d|", test++);
		n = ft_printf("this % d number", -267);


		ft_printf("|%d\n", n);
    

		// test 572
        ft_printf("test %d|", test++);
		n = ft_printf("this % d number", 0);


		ft_printf("|%d\n", n);
    

		// test 573
        ft_printf("test %d|", test++);
		n = ft_printf("% d", 3);


		ft_printf("|%d\n", n);
    

		// test 574
        ft_printf("test %d|", test++);
		n = ft_printf("% d", -1);


		ft_printf("|%d\n", n);
    

		// test 575
        ft_printf("test %d|", test++);
		n = ft_printf("% d", 0);


		ft_printf("|%d\n", n);
    

		// test 576
        ft_printf("test %d|", test++);
		n = ft_printf("this % d number", 17);


		ft_printf("|%d\n", n);
    

		// test 577
        ft_printf("test %d|", test++);
		n = ft_printf("this % d number", -267);


		ft_printf("|%d\n", n);
    

		// test 578
        ft_printf("test %d|", test++);
		n = ft_printf("this % d number", 0);


		ft_printf("|%d\n", n);
    

		// test 579
        ft_printf("test %d|", test++);
		n = ft_printf("% d", 2147483647);


		ft_printf("|%d\n", n);
    

		// test 580
        ft_printf("test %d|", test++);
		n = ft_printf("% d", (int)(-2147483678));


		ft_printf("|%d\n", n);
    

		// test 581
        ft_printf("test %d|", test++);
		n = ft_printf("% +d", 5);


		ft_printf("|%d\n", n);
    

		// test 582
        ft_printf("test %d|", test++);
		n = ft_printf("% +d", -7);


		ft_printf("|%d\n", n);
    

		// test 583
        ft_printf("test %d|", test++);
		n = ft_printf("% +d", 2147483647);


		ft_printf("|%d\n", n);
    

		// test 584
        ft_printf("test %d|", test++);
		n = ft_printf("% 7d", 33);


		ft_printf("|%d\n", n);
    

		// test 585
        ft_printf("test %d|", test++);
		n = ft_printf("% 7d", -14);


		ft_printf("|%d\n", n);
    

		// test 586
        ft_printf("test %d|", test++);
		n = ft_printf("% 3d", 0);


		ft_printf("|%d\n", n);
    

		// test 587
        ft_printf("test %d|", test++);
		n = ft_printf("% 5d", 52625);


		ft_printf("|%d\n", n);
    

		// test 588
        ft_printf("test %d|", test++);
		n = ft_printf("% 5d", -2562);


		ft_printf("|%d\n", n);
    

		// test 589
        ft_printf("test %d|", test++);
		n = ft_printf("% 4d", 94827);


		ft_printf("|%d\n", n);
    

		// test 590
        ft_printf("test %d|", test++);
		n = ft_printf("% 4d", -2464);


		ft_printf("|%d\n", n);
    

		// test 591
        ft_printf("test %d|", test++);
		n = ft_printf("% -7d", 33);


		ft_printf("|%d\n", n);
    

		// test 592
        ft_printf("test %d|", test++);
		n = ft_printf("% -7d", -14);


		ft_printf("|%d\n", n);
    

		// test 593
        ft_printf("test %d|", test++);
		n = ft_printf("% -3d", 0);


		ft_printf("|%d\n", n);
    

		// test 594
        ft_printf("test %d|", test++);
		n = ft_printf("% -5d", 52625);


		ft_printf("|%d\n", n);
    

		// test 595
        ft_printf("test %d|", test++);
		n = ft_printf("% -5d", -2562);


		ft_printf("|%d\n", n);
    

		// test 596
        ft_printf("test %d|", test++);
		n = ft_printf("% -4d", 94827);


		ft_printf("|%d\n", n);
    

		// test 597
        ft_printf("test %d|", test++);
		n = ft_printf("% -4d", -2464);


		ft_printf("|%d\n", n);
    

		// test 598
        ft_printf("test %d|", test++);
		n = ft_printf("% +5d", 35);


		ft_printf("|%d\n", n);
    

		// test 599
        ft_printf("test %d|", test++);
		n = ft_printf("% +7d", 0);


		ft_printf("|%d\n", n);
    

		// test 600
        ft_printf("test %d|", test++);
		n = ft_printf("% +24d", 2147483647);


		ft_printf("|%d\n", n);
    

		// test 601
        ft_printf("test %d|", test++);
		n = ft_printf("% .5d", 2);


		ft_printf("|%d\n", n);
    

		// test 602
        ft_printf("test %d|", test++);
		n = ft_printf("% .6d", -3);


		ft_printf("|%d\n", n);
    

		// test 603
        ft_printf("test %d|", test++);
		n = ft_printf("% .3d", 0);


		ft_printf("|%d\n", n);
    

		// test 604
        ft_printf("test %d|", test++);
		n = ft_printf("% .4d", 5263);


		ft_printf("|%d\n", n);
    

		// test 605
        ft_printf("test %d|", test++);
		n = ft_printf("% .4d", -2372);


		ft_printf("|%d\n", n);
    

		// test 606
        ft_printf("test %d|", test++);
		n = ft_printf("% .3d", 13862);


		ft_printf("|%d\n", n);
    

		// test 607
        ft_printf("test %d|", test++);
		n = ft_printf("% .3d",-23646);


		ft_printf("|%d\n", n);
    

		// test 608
        ft_printf("test %d|", test++);
		n = ft_printf("% +.7d", 234);


		ft_printf("|%d\n", n);
    

		// test 609
        ft_printf("test %d|", test++);
		n = ft_printf("% +.7d", -446);


		ft_printf("|%d\n", n);
    

		// test 610
        ft_printf("test %d|", test++);
		n = ft_printf("% +.3d", 3723);


		ft_printf("|%d\n", n);
    

		// test 611
        ft_printf("test %d|", test++);
		n = ft_printf("% 05d", 43);


		ft_printf("|%d\n", n);
    

		// test 612
        ft_printf("test %d|", test++);
		n = ft_printf("% 07d", -54);


		ft_printf("|%d\n", n);
    

		// test 613
        ft_printf("test %d|", test++);
		n = ft_printf("% 03d", 0);


		ft_printf("|%d\n", n);
    

		// test 614
        ft_printf("test %d|", test++);
		n = ft_printf("% 03d", 634);


		ft_printf("|%d\n", n);
    

		// test 615
        ft_printf("test %d|", test++);
		n = ft_printf("% 04d", -532);


		ft_printf("|%d\n", n);
    

		// test 616
        ft_printf("test %d|", test++);
		n = ft_printf("% 04d", -4825);


		ft_printf("|%d\n", n);
    

		// test 617
        ft_printf("test %d|", test++);
		n = ft_printf("% +05d", 432);


		ft_printf("|%d\n", n);
    

		// test 618
        ft_printf("test %d|", test++);
		n = ft_printf("% +04d", 0);


		ft_printf("|%d\n", n);
    

		// test 619
        ft_printf("test %d|", test++);
		n = ft_printf("% 8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 620
        ft_printf("test %d|", test++);
		n = ft_printf("% 10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 621
        ft_printf("test %d|", test++);
		n = ft_printf("% 8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 622
        ft_printf("test %d|", test++);
		n = ft_printf("% 8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 623
        ft_printf("test %d|", test++);
		n = ft_printf("% 8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 624
        ft_printf("test %d|", test++);
		n = ft_printf("% 3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 625
        ft_printf("test %d|", test++);
		n = ft_printf("% 3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 626
        ft_printf("test %d|", test++);
		n = ft_printf("% 3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 627
        ft_printf("test %d|", test++);
		n = ft_printf("% 3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 628
        ft_printf("test %d|", test++);
		n = ft_printf("% -8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 629
        ft_printf("test %d|", test++);
		n = ft_printf("% -10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 630
        ft_printf("test %d|", test++);
		n = ft_printf("% -8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 631
        ft_printf("test %d|", test++);
		n = ft_printf("% -8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 632
        ft_printf("test %d|", test++);
		n = ft_printf("% -8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 633
        ft_printf("test %d|", test++);
		n = ft_printf("% -3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 634
        ft_printf("test %d|", test++);
		n = ft_printf("% -3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 635
        ft_printf("test %d|", test++);
		n = ft_printf("% -3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 636
        ft_printf("test %d|", test++);
		n = ft_printf("% -3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 637
        ft_printf("test %d|", test++);
		n = ft_printf("% +8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 638
        ft_printf("test %d|", test++);
		n = ft_printf("% +10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 639
        ft_printf("test %d|", test++);
		n = ft_printf("% +8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 640
        ft_printf("test %d|", test++);
		n = ft_printf("% +8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 641
        ft_printf("test %d|", test++);
		n = ft_printf("% +8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 642
        ft_printf("test %d|", test++);
		n = ft_printf("% +3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 643
        ft_printf("test %d|", test++);
		n = ft_printf("% +3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 644
        ft_printf("test %d|", test++);
		n = ft_printf("% +3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 645
        ft_printf("test %d|", test++);
		n = ft_printf("% +3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 646
        ft_printf("test %d|", test++);
		n = ft_printf("% +-8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 647
        ft_printf("test %d|", test++);
		n = ft_printf("% +-10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 648
        ft_printf("test %d|", test++);
		n = ft_printf("% +-8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 649
        ft_printf("test %d|", test++);
		n = ft_printf("% +-8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 650
        ft_printf("test %d|", test++);
		n = ft_printf("% +-8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 651
        ft_printf("test %d|", test++);
		n = ft_printf("% +-3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 652
        ft_printf("test %d|", test++);
		n = ft_printf("% +-3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 653
        ft_printf("test %d|", test++);
		n = ft_printf("% +-3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 654
        ft_printf("test %d|", test++);
		n = ft_printf("% +-3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 655
        ft_printf("test %d|", test++);
		n = ft_printf("% 08.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 656
        ft_printf("test %d|", test++);
		n = ft_printf("% 010.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 657
        ft_printf("test %d|", test++);
		n = ft_printf("% 08.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 658
        ft_printf("test %d|", test++);
		n = ft_printf("% 08.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 659
        ft_printf("test %d|", test++);
		n = ft_printf("% 08.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 660
        ft_printf("test %d|", test++);
		n = ft_printf("% 03.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 661
        ft_printf("test %d|", test++);
		n = ft_printf("% 03.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 662
        ft_printf("test %d|", test++);
		n = ft_printf("% 03.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 663
        ft_printf("test %d|", test++);
		n = ft_printf("% 03.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 664
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 665
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 666
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 667
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 668
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 669
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 670
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 671
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 672
        ft_printf("test %d|", test++);
		n = ft_printf("% 0-3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 673
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 674
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 675
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 676
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 677
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 678
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 679
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 680
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 681
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 682
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 683
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 684
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 685
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 686
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 687
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 688
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 689
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 690
        ft_printf("test %d|", test++);
		n = ft_printf("% 0+-3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 691
        ft_printf("test %d|", test++);
		n = ft_printf("%+.0d", 0);


		ft_printf("|%d\n", n);
    

		// test 692
        ft_printf("test %d|", test++);
		n = ft_printf("%+.d", 0);


		ft_printf("|%d\n", n);
    

		// test 693
        ft_printf("test %d|", test++);
		n = ft_printf("%+5.0d", 0);


		ft_printf("|%d\n", n);
    

		// test 694
        ft_printf("test %d|", test++);
		n = ft_printf("%+5.d", 0);


		ft_printf("|%d\n", n);
    

		// test 695
        ft_printf("test %d|", test++);
		n = ft_printf("%+-5.0d", 0);


		ft_printf("|%d\n", n);
    

		// test 696
        ft_printf("test %d|", test++);
		n = ft_printf("%+-5.d", 0);


		ft_printf("|%d\n", n);
    

		// test 697
        ft_printf("test %d|", test++);
		n = ft_printf("%d", 3);


		ft_printf("|%d\n", n);
    

		// test 698
        ft_printf("test %d|", test++);
		n = ft_printf("%d", -1);


		ft_printf("|%d\n", n);
    

		// test 699
        ft_printf("test %d|", test++);
		n = ft_printf("%d", 0);


		ft_printf("|%d\n", n);
    

		// test 700
        ft_printf("test %d|", test++);
		n = ft_printf("%d",  2147483647);


		ft_printf("|%d\n", n);
    

		// test 701
        ft_printf("test %d|", test++);
		n = ft_printf("%d", (int)(-2147483678));


		ft_printf("|%d\n", n);
    

		// test 702
        ft_printf("test %d|", test++);
		n = ft_printf("%7d", 33);


		ft_printf("|%d\n", n);
    

		// test 703
        ft_printf("test %d|", test++);
		n = ft_printf("%7d", -14);


		ft_printf("|%d\n", n);
    

		// test 704
        ft_printf("test %d|", test++);
		n = ft_printf("%3d", 0);


		ft_printf("|%d\n", n);
    

		// test 705
        ft_printf("test %d|", test++);
		n = ft_printf("%5d", 52625);


		ft_printf("|%d\n", n);
    

		// test 706
        ft_printf("test %d|", test++);
		n = ft_printf("%5d", -2562);


		ft_printf("|%d\n", n);
    

		// test 707
        ft_printf("test %d|", test++);
		n = ft_printf("%4d", 94827);


		ft_printf("|%d\n", n);
    

		// test 708
        ft_printf("test %d|", test++);
		n = ft_printf("%4d", -2464);


		ft_printf("|%d\n", n);
    

		// test 709
        ft_printf("test %d|", test++);
		n = ft_printf("%-7d", 33);


		ft_printf("|%d\n", n);
    

		// test 710
        ft_printf("test %d|", test++);
		n = ft_printf("%-7d", -14);


		ft_printf("|%d\n", n);
    

		// test 711
        ft_printf("test %d|", test++);
		n = ft_printf("%-3d", 0);


		ft_printf("|%d\n", n);
    

		// test 712
        ft_printf("test %d|", test++);
		n = ft_printf("%-5d", 52625);


		ft_printf("|%d\n", n);
    

		// test 713
        ft_printf("test %d|", test++);
		n = ft_printf("%-5d", -2562);


		ft_printf("|%d\n", n);
    

		// test 714
        ft_printf("test %d|", test++);
		n = ft_printf("%-4d", 94827);


		ft_printf("|%d\n", n);
    

		// test 715
        ft_printf("test %d|", test++);
		n = ft_printf("%-4d", -2464);


		ft_printf("|%d\n", n);
    

		// test 716
        ft_printf("test %d|", test++);
		n = ft_printf("%.5d", 2);


		ft_printf("|%d\n", n);
    

		// test 717
        ft_printf("test %d|", test++);
		n = ft_printf("%.6d", -3);


		ft_printf("|%d\n", n);
    

		// test 718
        ft_printf("test %d|", test++);
		n = ft_printf("%.3d", 0);


		ft_printf("|%d\n", n);
    

		// test 719
        ft_printf("test %d|", test++);
		n = ft_printf("%.4d", 5263);


		ft_printf("|%d\n", n);
    

		// test 720
        ft_printf("test %d|", test++);
		n = ft_printf("%.4d", -2372);


		ft_printf("|%d\n", n);
    

		// test 721
        ft_printf("test %d|", test++);
		n = ft_printf("%.3d", 13862);


		ft_printf("|%d\n", n);
    

		// test 722
        ft_printf("test %d|", test++);
		n = ft_printf("%.3d",-23646);


		ft_printf("|%d\n", n);
    

		// test 723
        ft_printf("test %d|", test++);
		n = ft_printf("%05d", 43);


		ft_printf("|%d\n", n);
    

		// test 724
        ft_printf("test %d|", test++);
		n = ft_printf("%07d", -54);


		ft_printf("|%d\n", n);
    

		// test 725
        ft_printf("test %d|", test++);
		n = ft_printf("%03d", 0);


		ft_printf("|%d\n", n);
    

		// test 726
        ft_printf("test %d|", test++);
		n = ft_printf("%03d", 634);


		ft_printf("|%d\n", n);
    

		// test 727
        ft_printf("test %d|", test++);
		n = ft_printf("%04d", -532);


		ft_printf("|%d\n", n);
    

		// test 728
        ft_printf("test %d|", test++);
		n = ft_printf("%04d", -4825);


		ft_printf("|%d\n", n);
    

		// test 729
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 730
        ft_printf("test %d|", test++);
		n = ft_printf("%10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 731
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 732
        ft_printf("test %d|", test++);
		n = ft_printf("%8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 733
        ft_printf("test %d|", test++);
		n = ft_printf("%8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 734
        ft_printf("test %d|", test++);
		n = ft_printf("%3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 735
        ft_printf("test %d|", test++);
		n = ft_printf("%3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 736
        ft_printf("test %d|", test++);
		n = ft_printf("%3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 737
        ft_printf("test %d|", test++);
		n = ft_printf("%3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 738
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 739
        ft_printf("test %d|", test++);
		n = ft_printf("%-10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 740
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 741
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 742
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 743
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 744
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 745
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 746
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 747
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 748
        ft_printf("test %d|", test++);
		n = ft_printf("%010.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 749
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 750
        ft_printf("test %d|", test++);
		n = ft_printf("%08.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 751
        ft_printf("test %d|", test++);
		n = ft_printf("%08.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 752
        ft_printf("test %d|", test++);
		n = ft_printf("%03.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 753
        ft_printf("test %d|", test++);
		n = ft_printf("%03.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 754
        ft_printf("test %d|", test++);
		n = ft_printf("%03.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 755
        ft_printf("test %d|", test++);
		n = ft_printf("%03.3d", -8462);


		ft_printf("|%d\n", n);
    

		// test 756
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5d", 34);


		ft_printf("|%d\n", n);
    

		// test 757
        ft_printf("test %d|", test++);
		n = ft_printf("%0-10.5d", -216);


		ft_printf("|%d\n", n);
    

		// test 758
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5d", 0);


		ft_printf("|%d\n", n);
    

		// test 759
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.3d", 8375);


		ft_printf("|%d\n", n);
    

		// test 760
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.3d", -8473);


		ft_printf("|%d\n", n);
    

		// test 761
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.7d", 3267);


		ft_printf("|%d\n", n);
    

		// test 762
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.7d", -2375);


		ft_printf("|%d\n", n);
    

		// test 763
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.3d", 6983);


		ft_printf("|%d\n", n);
    

		// test 764
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.3d", -8462);




		ft_printf("|%d\n", n);
    

		// test 765
        ft_printf("test %d|", test++);
		n = ft_printf("%.0d", 0);


		ft_printf("|%d\n", n);
    

		// test 766
        ft_printf("test %d|", test++);
		n = ft_printf("%.d", 0);


		ft_printf("|%d\n", n);
    

		// test 767
        ft_printf("test %d|", test++);
		n = ft_printf("%5.0d", 0);


		ft_printf("|%d\n", n);
    

		// test 768
        ft_printf("test %d|", test++);
		n = ft_printf("%5.d", 0);


		ft_printf("|%d\n", n);
    

		// test 769
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.0d", 0);


		ft_printf("|%d\n", n);
    

		// test 770
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.d", 0);


		ft_printf("|%d\n", n);
    

		// test 771
        ft_printf("test %d|", test++);
		n = ft_printf("this %u number", 17);


		ft_printf("|%d\n", n);
    

		// test 772
        ft_printf("test %d|", test++);
		n = ft_printf("this %u number", 0);


		ft_printf("|%d\n", n);
    

		// test 773
        ft_printf("test %d|", test++);
		n = ft_printf("%u", 3);


		ft_printf("|%d\n", n);
    

		// test 774
        ft_printf("test %d|", test++);
		n = ft_printf("%u", 4294967295u);


		ft_printf("|%d\n", n);
    

		// test 775
        ft_printf("test %d|", test++);
		n = ft_printf("%7u", 33);


		ft_printf("|%d\n", n);
    

		// test 776
        ft_printf("test %d|", test++);
		n = ft_printf("%3u", 0);


		ft_printf("|%d\n", n);
    

		// test 777
        ft_printf("test %d|", test++);
		n = ft_printf("%5u", 52625);


		ft_printf("|%d\n", n);
    

		// test 778
        ft_printf("test %d|", test++);
		n = ft_printf("%4u", 94827);


		ft_printf("|%d\n", n);
    

		// test 779
        ft_printf("test %d|", test++);
		n = ft_printf("%-7u", 33);


		ft_printf("|%d\n", n);
    

		// test 780
        ft_printf("test %d|", test++);
		n = ft_printf("%-3u", 0);


		ft_printf("|%d\n", n);
    

		// test 781
        ft_printf("test %d|", test++);
		n = ft_printf("%-5u", 52625);


		ft_printf("|%d\n", n);
    

		// test 782
        ft_printf("test %d|", test++);
		n = ft_printf("%-4u", 94827);


		ft_printf("|%d\n", n);
    

		// test 783
        ft_printf("test %d|", test++);
		n = ft_printf("%.5u", 2);


		ft_printf("|%d\n", n);
    

		// test 784
        ft_printf("test %d|", test++);
		n = ft_printf("%.3u", 0);


		ft_printf("|%d\n", n);
    

		// test 785
        ft_printf("test %d|", test++);
		n = ft_printf("%.4u", 5263);


		ft_printf("|%d\n", n);
    

		// test 786
        ft_printf("test %d|", test++);
		n = ft_printf("%.3u", 13862);


		ft_printf("|%d\n", n);
    

		// test 787
        ft_printf("test %d|", test++);
		n = ft_printf("%05u", 43);


		ft_printf("|%d\n", n);
    

		// test 788
        ft_printf("test %d|", test++);
		n = ft_printf("%03u", 0);


		ft_printf("|%d\n", n);
    

		// test 789
        ft_printf("test %d|", test++);
		n = ft_printf("%03u", 634);


		ft_printf("|%d\n", n);
    

		// test 790
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5u", 34);


		ft_printf("|%d\n", n);
    

		// test 791
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5u", 0);


		ft_printf("|%d\n", n);
    

		// test 792
        ft_printf("test %d|", test++);
		n = ft_printf("%8.3u", 8375);


		ft_printf("|%d\n", n);
    

		// test 793
        ft_printf("test %d|", test++);
		n = ft_printf("%3.7u", 3267);


		ft_printf("|%d\n", n);
    

		// test 794
        ft_printf("test %d|", test++);
		n = ft_printf("%3.3u", 6983);


		ft_printf("|%d\n", n);
    

		// test 795
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5u", 34);


		ft_printf("|%d\n", n);
    

		// test 796
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5u", 0);


		ft_printf("|%d\n", n);
    

		// test 797
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.3u", 8375);


		ft_printf("|%d\n", n);
    

		// test 798
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.7u", 3267);


		ft_printf("|%d\n", n);
    

		// test 799
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.3u", 6983);


		ft_printf("|%d\n", n);
    

		// test 800
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5u", 34);


		ft_printf("|%d\n", n);
    

		// test 801
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5u", 0);


		ft_printf("|%d\n", n);
    

		// test 802
        ft_printf("test %d|", test++);
		n = ft_printf("%08.3u", 8375);


		ft_printf("|%d\n", n);
    

		// test 803
        ft_printf("test %d|", test++);
		n = ft_printf("%03.7u", 3267);


		ft_printf("|%d\n", n);
    

		// test 804
        ft_printf("test %d|", test++);
		n = ft_printf("%03.3u", 6983);


		ft_printf("|%d\n", n);
    

		// test 805
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5u", 34);


		ft_printf("|%d\n", n);
    

		// test 806
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5u", 0);


		ft_printf("|%d\n", n);
    

		// test 807
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.3u", 8375);


		ft_printf("|%d\n", n);
    

		// test 808
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.7u", 3267);


		ft_printf("|%d\n", n);
    

		// test 809
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.3u", 6983);


		ft_printf("|%d\n", n);
    

		// test 810
        ft_printf("test %d|", test++);
		n = ft_printf("%.0u", 0);


		ft_printf("|%d\n", n);
    

		// test 811
        ft_printf("test %d|", test++);
		n = ft_printf("%.u", 0);


		ft_printf("|%d\n", n);
    

		// test 812
        ft_printf("test %d|", test++);
		n = ft_printf("%5.0u", 0);


		ft_printf("|%d\n", n);
    

		// test 813
        ft_printf("test %d|", test++);
		n = ft_printf("%5.u", 0);


		ft_printf("|%d\n", n);
    

		// test 814
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.0u", 0);


		ft_printf("|%d\n", n);
    

		// test 815
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.u", 0);


		ft_printf("|%d\n", n);
    

		// test 816
        ft_printf("test %d|", test++);
		n = ft_printf("this %x number", 17);


		ft_printf("|%d\n", n);
    

		// test 817
        ft_printf("test %d|", test++);
		n = ft_printf("this %x number", 0);


		ft_printf("|%d\n", n);
    

		// test 818
        ft_printf("test %d|", test++);
		n = ft_printf("%x", 3);


		ft_printf("|%d\n", n);
    

		// test 819
        ft_printf("test %d|", test++);
		n = ft_printf("%x", 4294967295u);


		ft_printf("|%d\n", n);
    

		// test 820
        ft_printf("test %d|", test++);
		n = ft_printf("%7x", 33);


		ft_printf("|%d\n", n);
    

		// test 821
        ft_printf("test %d|", test++);
		n = ft_printf("%3x", 0);


		ft_printf("|%d\n", n);
    

		// test 822
        ft_printf("test %d|", test++);
		n = ft_printf("%5x", 52625);


		ft_printf("|%d\n", n);
    

		// test 823
        ft_printf("test %d|", test++);
		n = ft_printf("%2x", 94827);


		ft_printf("|%d\n", n);
    

		// test 824
        ft_printf("test %d|", test++);
		n = ft_printf("%-7x", 33);


		ft_printf("|%d\n", n);
    

		// test 825
        ft_printf("test %d|", test++);
		n = ft_printf("%-3x", 0);


		ft_printf("|%d\n", n);
    

		// test 826
        ft_printf("test %d|", test++);
		n = ft_printf("%-5x", 52625);


		ft_printf("|%d\n", n);
    

		// test 827
        ft_printf("test %d|", test++);
		n = ft_printf("%-4x", 9648627);


		ft_printf("|%d\n", n);
    

		// test 828
        ft_printf("test %d|", test++);
		n = ft_printf("%.5x", 21);


		ft_printf("|%d\n", n);
    

		// test 829
        ft_printf("test %d|", test++);
		n = ft_printf("%.3x", 0);


		ft_printf("|%d\n", n);
    

		// test 830
        ft_printf("test %d|", test++);
		n = ft_printf("%.4x", 5263);


		ft_printf("|%d\n", n);
    

		// test 831
        ft_printf("test %d|", test++);
		n = ft_printf("%.3x", 938862);


		ft_printf("|%d\n", n);
    

		// test 832
        ft_printf("test %d|", test++);
		n = ft_printf("%05x", 43);


		ft_printf("|%d\n", n);
    

		// test 833
        ft_printf("test %d|", test++);
		n = ft_printf("%03x", 0);


		ft_printf("|%d\n", n);
    

		// test 834
        ft_printf("test %d|", test++);
		n = ft_printf("%03x", 698334);


		ft_printf("|%d\n", n);
    

		// test 835
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5x", 34);


		ft_printf("|%d\n", n);
    

		// test 836
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5x", 0);


		ft_printf("|%d\n", n);
    

		// test 837
        ft_printf("test %d|", test++);
		n = ft_printf("%8.3x", 8375);


		ft_printf("|%d\n", n);
    

		// test 838
        ft_printf("test %d|", test++);
		n = ft_printf("%2.7x", 3267);


		ft_printf("|%d\n", n);
    

		// test 839
        ft_printf("test %d|", test++);
		n = ft_printf("%3.3x", 6983);


		ft_printf("|%d\n", n);
    

		// test 840
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5x", 34);


		ft_printf("|%d\n", n);
    

		// test 841
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5x", 0);


		ft_printf("|%d\n", n);
    

		// test 842
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.3x", 8375);


		ft_printf("|%d\n", n);
    

		// test 843
        ft_printf("test %d|", test++);
		n = ft_printf("%-2.7x", 3267);


		ft_printf("|%d\n", n);
    

		// test 844
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.3x", 6983);


		ft_printf("|%d\n", n);
    

		// test 845
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5x", 34);


		ft_printf("|%d\n", n);
    

		// test 846
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5x", 0);


		ft_printf("|%d\n", n);
    

		// test 847
        ft_printf("test %d|", test++);
		n = ft_printf("%08.3x", 8375);


		ft_printf("|%d\n", n);
    

		// test 848
        ft_printf("test %d|", test++);
		n = ft_printf("%02.7x", 3267);


		ft_printf("|%d\n", n);
    

		// test 849
        ft_printf("test %d|", test++);
		n = ft_printf("%03.3x", 6983);


		ft_printf("|%d\n", n);
    

		// test 850
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5x", 34);


		ft_printf("|%d\n", n);
    

		// test 851
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5x", 0);


		ft_printf("|%d\n", n);
    

		// test 852
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.3x", 8375);


		ft_printf("|%d\n", n);
    

		// test 853
        ft_printf("test %d|", test++);
		n = ft_printf("%0-2.7x", 3267);


		ft_printf("|%d\n", n);
    

		// test 854
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.3x", 6983);


		ft_printf("|%d\n", n);
    

		// test 855
        ft_printf("test %d|", test++);
		n = ft_printf("%.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 856
        ft_printf("test %d|", test++);
		n = ft_printf("%.x", 0);


		ft_printf("|%d\n", n);
    

		// test 857
        ft_printf("test %d|", test++);
		n = ft_printf("%5.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 858
        ft_printf("test %d|", test++);
		n = ft_printf("%5.x", 0);


		ft_printf("|%d\n", n);
    

		// test 859
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 860
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.x", 0);


		ft_printf("|%d\n", n);
    

		// test 861
        ft_printf("test %d|", test++);
		n = ft_printf("this %x number", 17);


		ft_printf("|%d\n", n);
    

		// test 862
        ft_printf("test %d|", test++);
		n = ft_printf("this %x number", 0);


		ft_printf("|%d\n", n);
    

		// test 863
        ft_printf("test %d|", test++);
		n = ft_printf("%x", 3);


		ft_printf("|%d\n", n);
    

		// test 864
        ft_printf("test %d|", test++);
		n = ft_printf("%x", 4294967295u);


		ft_printf("|%d\n", n);
    

		// test 865
        ft_printf("test %d|", test++);
		n = ft_printf("%7x", 33);


		ft_printf("|%d\n", n);
    

		// test 866
        ft_printf("test %d|", test++);
		n = ft_printf("%3x", 0);


		ft_printf("|%d\n", n);
    

		// test 867
        ft_printf("test %d|", test++);
		n = ft_printf("%5x", 52625);


		ft_printf("|%d\n", n);
    

		// test 868
        ft_printf("test %d|", test++);
		n = ft_printf("%2x", 94827);


		ft_printf("|%d\n", n);
    

		// test 869
        ft_printf("test %d|", test++);
		n = ft_printf("%-7x", 33);


		ft_printf("|%d\n", n);
    

		// test 870
        ft_printf("test %d|", test++);
		n = ft_printf("%-3x", 0);


		ft_printf("|%d\n", n);
    

		// test 871
        ft_printf("test %d|", test++);
		n = ft_printf("%-5x", 52625);


		ft_printf("|%d\n", n);
    

		// test 872
        ft_printf("test %d|", test++);
		n = ft_printf("%-4x", 9648627);


		ft_printf("|%d\n", n);
    

		// test 873
        ft_printf("test %d|", test++);
		n = ft_printf("%.5x", 21);


		ft_printf("|%d\n", n);
    

		// test 874
        ft_printf("test %d|", test++);
		n = ft_printf("%.3x", 0);


		ft_printf("|%d\n", n);
    

		// test 875
        ft_printf("test %d|", test++);
		n = ft_printf("%.4x", 5263);


		ft_printf("|%d\n", n);
    

		// test 876
        ft_printf("test %d|", test++);
		n = ft_printf("%.3x", 938862);


		ft_printf("|%d\n", n);
    

		// test 877
        ft_printf("test %d|", test++);
		n = ft_printf("%05x", 43);


		ft_printf("|%d\n", n);
    

		// test 878
        ft_printf("test %d|", test++);
		n = ft_printf("%03x", 0);


		ft_printf("|%d\n", n);
    

		// test 879
        ft_printf("test %d|", test++);
		n = ft_printf("%03x", 698334);


		ft_printf("|%d\n", n);
    

		// test 880
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5x", 34);


		ft_printf("|%d\n", n);
    

		// test 881
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5x", 0);


		ft_printf("|%d\n", n);
    

		// test 882
        ft_printf("test %d|", test++);
		n = ft_printf("%8.3x", 8375);


		ft_printf("|%d\n", n);
    

		// test 883
        ft_printf("test %d|", test++);
		n = ft_printf("%2.7x", 3267);


		ft_printf("|%d\n", n);
    

		// test 884
        ft_printf("test %d|", test++);
		n = ft_printf("%3.3x", 6983);


		ft_printf("|%d\n", n);
    

		// test 885
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5x", 34);


		ft_printf("|%d\n", n);
    

		// test 886
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5x", 0);


		ft_printf("|%d\n", n);
    

		// test 887
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.3x", 8375);


		ft_printf("|%d\n", n);
    

		// test 888
        ft_printf("test %d|", test++);
		n = ft_printf("%-2.7x", 3267);


		ft_printf("|%d\n", n);
    

		// test 889
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.3x", 6983);


		ft_printf("|%d\n", n);
    

		// test 890
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5x", 34);


		ft_printf("|%d\n", n);
    

		// test 891
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5x", 0);


		ft_printf("|%d\n", n);
    

		// test 892
        ft_printf("test %d|", test++);
		n = ft_printf("%08.3x", 8375);


		ft_printf("|%d\n", n);
    

		// test 893
        ft_printf("test %d|", test++);
		n = ft_printf("%02.7x", 3267);


		ft_printf("|%d\n", n);
    

		// test 894
        ft_printf("test %d|", test++);
		n = ft_printf("%03.3x", 6983);


		ft_printf("|%d\n", n);
    

		// test 895
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5x", 34);


		ft_printf("|%d\n", n);
    

		// test 896
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5x", 0);


		ft_printf("|%d\n", n);
    

		// test 897
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.3x", 8375);


		ft_printf("|%d\n", n);
    

		// test 898
        ft_printf("test %d|", test++);
		n = ft_printf("%0-2.7x", 3267);


		ft_printf("|%d\n", n);
    

		// test 899
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.3x", 6983);


		ft_printf("|%d\n", n);
    

		// test 900
        ft_printf("test %d|", test++);
		n = ft_printf("%.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 901
        ft_printf("test %d|", test++);
		n = ft_printf("%.x", 0);


		ft_printf("|%d\n", n);
    

		// test 902
        ft_printf("test %d|", test++);
		n = ft_printf("%5.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 903
        ft_printf("test %d|", test++);
		n = ft_printf("%5.x", 0);


		ft_printf("|%d\n", n);
    

		// test 904
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 905
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.x", 0);


		ft_printf("|%d\n", n);
    

		// test 906
        ft_printf("test %d|", test++);
		n = ft_printf("%#.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 907
        ft_printf("test %d|", test++);
		n = ft_printf("%#.x", 0);


		ft_printf("|%d\n", n);
    

		// test 908
        ft_printf("test %d|", test++);
		n = ft_printf("%#5.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 909
        ft_printf("test %d|", test++);
		n = ft_printf("%#5.x", 0);


		ft_printf("|%d\n", n);
    

		// test 910
        ft_printf("test %d|", test++);
		n = ft_printf("%#-5.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 911
        ft_printf("test %d|", test++);
		n = ft_printf("%#-5.x", 0);


		ft_printf("|%d\n", n);
    

		// test 912
        ft_printf("test %d|", test++);
		n = ft_printf("%#x", 4294967295u);


		ft_printf("|%d\n", n);
    

		// test 913
        ft_printf("test %d|", test++);
		n = ft_printf("%#7x", 33);


		ft_printf("|%d\n", n);
    

		// test 914
        ft_printf("test %d|", test++);
		n = ft_printf("%#3x", 0);


		ft_printf("|%d\n", n);
    

		// test 915
        ft_printf("test %d|", test++);
		n = ft_printf("%#5x", 52625);


		ft_printf("|%d\n", n);
    

		// test 916
        ft_printf("test %d|", test++);
		n = ft_printf("%#2x", 94827);


		ft_printf("|%d\n", n);
    

		// test 917
        ft_printf("test %d|", test++);
		n = ft_printf("%#-7x", 33);


		ft_printf("|%d\n", n);
    

		// test 918
        ft_printf("test %d|", test++);
		n = ft_printf("%#-3x", 0);


		ft_printf("|%d\n", n);
    

		// test 919
        ft_printf("test %d|", test++);
		n = ft_printf("%#-5x", 52625);


		ft_printf("|%d\n", n);
    

		// test 920
        ft_printf("test %d|", test++);
		n = ft_printf("%#-4x", 9648627);


		ft_printf("|%d\n", n);
    

		// test 921
        ft_printf("test %d|", test++);
		n = ft_printf("%#.5x", 21);


		ft_printf("|%d\n", n);
    

		// test 922
        ft_printf("test %d|", test++);
		n = ft_printf("%#.3x", 0);


		ft_printf("|%d\n", n);
    

		// test 923
        ft_printf("test %d|", test++);
		n = ft_printf("%#.4x", 5263);


		ft_printf("|%d\n", n);
    

		// test 924
        ft_printf("test %d|", test++);
		n = ft_printf("%#.3x", 938862);


		ft_printf("|%d\n", n);
    

		// test 925
        ft_printf("test %d|", test++);
		n = ft_printf("%#05x", 43);


		ft_printf("|%d\n", n);
    

		// test 926
        ft_printf("test %d|", test++);
		n = ft_printf("%#03x", 0);


		ft_printf("|%d\n", n);
    

		// test 927
        ft_printf("test %d|", test++);
		n = ft_printf("%#03x", 698334);


		ft_printf("|%d\n", n);
    

		// test 928
        ft_printf("test %d|", test++);
		n = ft_printf("%#8.5x", 34);


		ft_printf("|%d\n", n);
    

		// test 929
        ft_printf("test %d|", test++);
		n = ft_printf("%#8.5x", 0);


		ft_printf("|%d\n", n);
    

		// test 930
        ft_printf("test %d|", test++);
		n = ft_printf("%#x", 4294967295u);


		ft_printf("|%d\n", n);
    

		// test 931
        ft_printf("test %d|", test++);
		n = ft_printf("%#7x", 33);


		ft_printf("|%d\n", n);
    

		// test 932
        ft_printf("test %d|", test++);
		n = ft_printf("%#3x", 0);


		ft_printf("|%d\n", n);
    

		// test 933
        ft_printf("test %d|", test++);
		n = ft_printf("%#5x", 52625);


		ft_printf("|%d\n", n);
    

		// test 934
        ft_printf("test %d|", test++);
		n = ft_printf("%#2x", 94827);


		ft_printf("|%d\n", n);
    

		// test 935
        ft_printf("test %d|", test++);
		n = ft_printf("%#-7x", 33);


		ft_printf("|%d\n", n);
    

		// test 936
        ft_printf("test %d|", test++);
		n = ft_printf("%#-3x", 0);


		ft_printf("|%d\n", n);
    

		// test 937
        ft_printf("test %d|", test++);
		n = ft_printf("%#-5x", 52625);


		ft_printf("|%d\n", n);
    

		// test 938
        ft_printf("test %d|", test++);
		n = ft_printf("%#-4x", 9648627);


		ft_printf("|%d\n", n);
    

		// test 939
        ft_printf("test %d|", test++);
		n = ft_printf("%#.5x", 21);


		ft_printf("|%d\n", n);
    

		// test 940
        ft_printf("test %d|", test++);
		n = ft_printf("%#.3x", 0);


		ft_printf("|%d\n", n);
    

		// test 941
        ft_printf("test %d|", test++);
		n = ft_printf("%#.4x", 5263);


		ft_printf("|%d\n", n);
    

		// test 942
        ft_printf("test %d|", test++);
		n = ft_printf("%#.3x", 938862);


		ft_printf("|%d\n", n);
    

		// test 943
        ft_printf("test %d|", test++);
		n = ft_printf("%#05x", 43);


		ft_printf("|%d\n", n);
    

		// test 944
        ft_printf("test %d|", test++);
		n = ft_printf("%#03x", 0);


		ft_printf("|%d\n", n);
    

		// test 945
        ft_printf("test %d|", test++);
		n = ft_printf("%#03x", 698334);


		ft_printf("|%d\n", n);
    

		// test 946
        ft_printf("test %d|", test++);
		n = ft_printf("%#8.5x", 34);


		ft_printf("|%d\n", n);
    

		// test 947
        ft_printf("test %d|", test++);
		n = ft_printf("%#8.5x", 0);


		ft_printf("|%d\n", n);
    

		// test 948
        ft_printf("test %d|", test++);
		n = ft_printf("%#.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 949
        ft_printf("test %d|", test++);
		n = ft_printf("%#.x", 0);


		ft_printf("|%d\n", n);
    

		// test 950
        ft_printf("test %d|", test++);
		n = ft_printf("%#5.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 951
        ft_printf("test %d|", test++);
		n = ft_printf("%#5.x", 0);


		ft_printf("|%d\n", n);
    

		// test 952
        ft_printf("test %d|", test++);
		n = ft_printf("%#-5.0x", 0);


		ft_printf("|%d\n", n);
    

		// test 953
        ft_printf("test %d|", test++);
		n = ft_printf("%#-5.x", 0);


		ft_printf("|%d\n", n);
    

		// test 954
        ft_printf("test %d|", test++);
		n = ft_printf("this %X number", 17);


		ft_printf("|%d\n", n);
    

		// test 955
        ft_printf("test %d|", test++);
		n = ft_printf("this %X number", 0);


		ft_printf("|%d\n", n);
    

		// test 956
        ft_printf("test %d|", test++);
		n = ft_printf("%X", 3);


		ft_printf("|%d\n", n);
    

		// test 957
        ft_printf("test %d|", test++);
		n = ft_printf("%X", 4294967295u);


		ft_printf("|%d\n", n);
    

		// test 958
        ft_printf("test %d|", test++);
		n = ft_printf("%7X", 33);


		ft_printf("|%d\n", n);
    

		// test 959
        ft_printf("test %d|", test++);
		n = ft_printf("%3X", 0);


		ft_printf("|%d\n", n);
    

		// test 960
        ft_printf("test %d|", test++);
		n = ft_printf("%5X", 52625);


		ft_printf("|%d\n", n);
    

		// test 961
        ft_printf("test %d|", test++);
		n = ft_printf("%2X", 94827);


		ft_printf("|%d\n", n);
    

		// test 962
        ft_printf("test %d|", test++);
		n = ft_printf("%-7X", 33);


		ft_printf("|%d\n", n);
    

		// test 963
        ft_printf("test %d|", test++);
		n = ft_printf("%-3X", 0);


		ft_printf("|%d\n", n);
    

		// test 964
        ft_printf("test %d|", test++);
		n = ft_printf("%-5X", 52625);


		ft_printf("|%d\n", n);
    

		// test 965
        ft_printf("test %d|", test++);
		n = ft_printf("%-4X", 9648627);


		ft_printf("|%d\n", n);
    

		// test 966
        ft_printf("test %d|", test++);
		n = ft_printf("%.5X", 21);


		ft_printf("|%d\n", n);
    

		// test 967
        ft_printf("test %d|", test++);
		n = ft_printf("%.3X", 0);


		ft_printf("|%d\n", n);
    

		// test 968
        ft_printf("test %d|", test++);
		n = ft_printf("%.4X", 5263);


		ft_printf("|%d\n", n);
    

		// test 969
        ft_printf("test %d|", test++);
		n = ft_printf("%.3X", 938862);


		ft_printf("|%d\n", n);
    

		// test 970
        ft_printf("test %d|", test++);
		n = ft_printf("%05X", 43);


		ft_printf("|%d\n", n);
    

		// test 971
        ft_printf("test %d|", test++);
		n = ft_printf("%03X", 0);


		ft_printf("|%d\n", n);
    

		// test 972
        ft_printf("test %d|", test++);
		n = ft_printf("%03X", 698334);


		ft_printf("|%d\n", n);
    

		// test 973
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 974
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 975
        ft_printf("test %d|", test++);
		n = ft_printf("%8.3X", 8375);


		ft_printf("|%d\n", n);
    

		// test 976
        ft_printf("test %d|", test++);
		n = ft_printf("%2.7X", 3267);


		ft_printf("|%d\n", n);
    

		// test 977
        ft_printf("test %d|", test++);
		n = ft_printf("%3.3X", 6983);


		ft_printf("|%d\n", n);
    

		// test 978
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 979
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 980
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.3X", 8375);


		ft_printf("|%d\n", n);
    

		// test 981
        ft_printf("test %d|", test++);
		n = ft_printf("%-2.7X", 3267);


		ft_printf("|%d\n", n);
    

		// test 982
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.3X", 6983);


		ft_printf("|%d\n", n);
    

		// test 983
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 984
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 985
        ft_printf("test %d|", test++);
		n = ft_printf("%08.3X", 8375);


		ft_printf("|%d\n", n);
    

		// test 986
        ft_printf("test %d|", test++);
		n = ft_printf("%02.7X", 3267);


		ft_printf("|%d\n", n);
    

		// test 987
        ft_printf("test %d|", test++);
		n = ft_printf("%03.3X", 6983);


		ft_printf("|%d\n", n);
    

		// test 988
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 989
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 990
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.3X", 8375);


		ft_printf("|%d\n", n);
    

		// test 991
        ft_printf("test %d|", test++);
		n = ft_printf("%0-2.7X", 3267);


		ft_printf("|%d\n", n);
    

		// test 992
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.3X", 6983);


		ft_printf("|%d\n", n);
    

		// test 993
        ft_printf("test %d|", test++);
		n = ft_printf("this %#X number", 17);


		ft_printf("|%d\n", n);
    

		// test 994
        ft_printf("test %d|", test++);
		n = ft_printf("this %#X number", 0);


		ft_printf("|%d\n", n);
    

		// test 995
        ft_printf("test %d|", test++);
		n = ft_printf("%#X", 3);


		ft_printf("|%d\n", n);
    

		// test 996
        ft_printf("test %d|", test++);
		n = ft_printf("%#X", 4294967295u);


		ft_printf("|%d\n", n);
    

		// test 997
        ft_printf("test %d|", test++);
		n = ft_printf("%#7X", 33);


		ft_printf("|%d\n", n);
    

		// test 998
        ft_printf("test %d|", test++);
		n = ft_printf("%#3X", 0);


		ft_printf("|%d\n", n);
    

		// test 999
        ft_printf("test %d|", test++);
		n = ft_printf("%#7X", 52625);


		ft_printf("|%d\n", n);
    

		// test 1000
        ft_printf("test %d|", test++);
		n = ft_printf("%#2X", 94827);


		ft_printf("|%d\n", n);
    

		// test 1001
        ft_printf("test %d|", test++);
		n = ft_printf("%#-7X", 33);


		ft_printf("|%d\n", n);
    

		// test 1002
        ft_printf("test %d|", test++);
		n = ft_printf("%#-3X", 0);


		ft_printf("|%d\n", n);
    

		// test 1003
        ft_printf("test %d|", test++);
		n = ft_printf("%#-7X", 52625);


		ft_printf("|%d\n", n);
    

		// test 1004
        ft_printf("test %d|", test++);
		n = ft_printf("%#-4X", 9648627);


		ft_printf("|%d\n", n);
    

		// test 1005
        ft_printf("test %d|", test++);
		n = ft_printf("%#.5X", 21);


		ft_printf("|%d\n", n);
    

		// test 1006
        ft_printf("test %d|", test++);
		n = ft_printf("%#.3X", 0);


		ft_printf("|%d\n", n);
    

		// test 1007
        ft_printf("test %d|", test++);
		n = ft_printf("%#.4X", 5263);


		ft_printf("|%d\n", n);
    

		// test 1008
        ft_printf("test %d|", test++);
		n = ft_printf("%#.3X", 938862);


		ft_printf("|%d\n", n);
    

		// test 1009
        ft_printf("test %d|", test++);
		n = ft_printf("%#05X", 43);


		ft_printf("|%d\n", n);
    

		// test 1010
        ft_printf("test %d|", test++);
		n = ft_printf("%#03X", 0);


		ft_printf("|%d\n", n);
    

		// test 1011
        ft_printf("test %d|", test++);
		n = ft_printf("%#03X", 698334);


		ft_printf("|%d\n", n);
    

		// test 1012
        ft_printf("test %d|", test++);
		n = ft_printf("%#8.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 1013
        ft_printf("test %d|", test++);
		n = ft_printf("%#8.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 1014
        ft_printf("test %d|", test++);
		n = ft_printf("%#8.3X", 8375);


		ft_printf("|%d\n", n);
    

		// test 1015
        ft_printf("test %d|", test++);
		n = ft_printf("%#2.7X", 3267);


		ft_printf("|%d\n", n);
    

		// test 1016
        ft_printf("test %d|", test++);
		n = ft_printf("%#3.3X", 6983);


		ft_printf("|%d\n", n);
    

		// test 1017
        ft_printf("test %d|", test++);
		n = ft_printf("%#-8.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 1018
        ft_printf("test %d|", test++);
		n = ft_printf("%#-8.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 1019
        ft_printf("test %d|", test++);
		n = ft_printf("%#-8.3X", 8375);

	
		ft_printf("%5.X", 0);


		ft_printf("|%d\n", n);
    

		// test 1020
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.X", 0);


		ft_printf("|%d\n", n);
    

		// test 1021
        ft_printf("test %d|", test++);
		n = ft_printf("%#.0X", 0);


		ft_printf("|%d\n", n);
    

		// test 1022
        ft_printf("test %d|", test++);
		n = ft_printf("%#.X", 0);


		ft_printf("|%d\n", n);
    

		// test 1023
        ft_printf("test %d|", test++);
		n = ft_printf("%#5.0X", 0);


		ft_printf("|%d\n", n);
    

		// test 1024
        ft_printf("test %d|", test++);
		n = ft_printf("%#5.X", 0);


		ft_printf("|%d\n", n);
    

		// test 1025
        ft_printf("test %d|", test++);
		n = ft_printf("%#-5.0X", 0);


		ft_printf("|%d\n", n);
    

		// test 1026
        ft_printf("test %d|", test++);
		n = ft_printf("%#-5.X", 0);


		ft_printf("|%d\n", n);
    

		// test 1027
        ft_printf("test %d|", test++);
		n = ft_printf("this %X number", 17);


		ft_printf("|%d\n", n);
    

		// test 1028
        ft_printf("test %d|", test++);
		n = ft_printf("this %X number", 0);


		ft_printf("|%d\n", n);
    

		// test 1029
        ft_printf("test %d|", test++);
		n = ft_printf("%X", 3);


		ft_printf("|%d\n", n);
    

		// test 1030
        ft_printf("test %d|", test++);
		n = ft_printf("%X", 4294967295u);


		ft_printf("|%d\n", n);
    

		// test 1031
        ft_printf("test %d|", test++);
		n = ft_printf("%7X", 33);


		ft_printf("|%d\n", n);
    

		// test 1032
        ft_printf("test %d|", test++);
		n = ft_printf("%3X", 0);


		ft_printf("|%d\n", n);
    

		// test 1033
        ft_printf("test %d|", test++);
		n = ft_printf("%5X", 52625);


		ft_printf("|%d\n", n);
    

		// test 1034
        ft_printf("test %d|", test++);
		n = ft_printf("%2X", 94827);


		ft_printf("|%d\n", n);
    

		// test 1035
        ft_printf("test %d|", test++);
		n = ft_printf("%-7X", 33);


		ft_printf("|%d\n", n);
    

		// test 1036
        ft_printf("test %d|", test++);
		n = ft_printf("%-3X", 0);


		ft_printf("|%d\n", n);
    

		// test 1037
        ft_printf("test %d|", test++);
		n = ft_printf("%-5X", 52625);


		ft_printf("|%d\n", n);
    

		// test 1038
        ft_printf("test %d|", test++);
		n = ft_printf("%-4X", 9648627);


		ft_printf("|%d\n", n);
    

		// test 1039
        ft_printf("test %d|", test++);
		n = ft_printf("%.5X", 21);


		ft_printf("|%d\n", n);
    

		// test 1040
        ft_printf("test %d|", test++);
		n = ft_printf("%.3X", 0);


		ft_printf("|%d\n", n);
    

		// test 1041
        ft_printf("test %d|", test++);
		n = ft_printf("%.4X", 5263);


		ft_printf("|%d\n", n);
    

		// test 1042
        ft_printf("test %d|", test++);
		n = ft_printf("%.3X", 938862);


		ft_printf("|%d\n", n);
    

		// test 1043
        ft_printf("test %d|", test++);
		n = ft_printf("%05X", 43);


		ft_printf("|%d\n", n);
    

		// test 1044
        ft_printf("test %d|", test++);
		n = ft_printf("%03X", 0);


		ft_printf("|%d\n", n);
    

		// test 1045
        ft_printf("test %d|", test++);
		n = ft_printf("%03X", 698334);


		ft_printf("|%d\n", n);
    

		// test 1046
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 1047
        ft_printf("test %d|", test++);
		n = ft_printf("%8.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 1048
        ft_printf("test %d|", test++);
		n = ft_printf("%8.3X", 8375);


		ft_printf("|%d\n", n);
    

		// test 1049
        ft_printf("test %d|", test++);
		n = ft_printf("%2.7X", 3267);


		ft_printf("|%d\n", n);
    

		// test 1050
        ft_printf("test %d|", test++);
		n = ft_printf("%3.3X", 6983);


		ft_printf("|%d\n", n);
    

		// test 1051
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 1052
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 1053
        ft_printf("test %d|", test++);
		n = ft_printf("%-8.3X", 8375);


		ft_printf("|%d\n", n);
    

		// test 1054
        ft_printf("test %d|", test++);
		n = ft_printf("%-2.7X", 3267);


		ft_printf("|%d\n", n);
    

		// test 1055
        ft_printf("test %d|", test++);
		n = ft_printf("%-3.3X", 6983);


		ft_printf("|%d\n", n);
    

		// test 1056
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 1057
        ft_printf("test %d|", test++);
		n = ft_printf("%08.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 1058
        ft_printf("test %d|", test++);
		n = ft_printf("%08.3X", 8375);


		ft_printf("|%d\n", n);
    

		// test 1059
        ft_printf("test %d|", test++);
		n = ft_printf("%02.7X", 3267);


		ft_printf("|%d\n", n);
    

		// test 1060
        ft_printf("test %d|", test++);
		n = ft_printf("%03.3X", 6983);


		ft_printf("|%d\n", n);
    

		// test 1061
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 1062
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 1063
        ft_printf("test %d|", test++);
		n = ft_printf("%0-8.3X", 8375);


		ft_printf("|%d\n", n);
    

		// test 1064
        ft_printf("test %d|", test++);
		n = ft_printf("%0-2.7X", 3267);


		ft_printf("|%d\n", n);
    

		// test 1065
        ft_printf("test %d|", test++);
		n = ft_printf("%0-3.3X", 6983);


		ft_printf("|%d\n", n);
    

		// test 1066
        ft_printf("test %d|", test++);
		n = ft_printf("this %#X number", 17);


		ft_printf("|%d\n", n);
    

		// test 1067
        ft_printf("test %d|", test++);
		n = ft_printf("this %#X number", 0);


		ft_printf("|%d\n", n);
    

		// test 1068
        ft_printf("test %d|", test++);
		n = ft_printf("%#X", 3);


		ft_printf("|%d\n", n);
    

		// test 1069
        ft_printf("test %d|", test++);
		n = ft_printf("%#X", 4294967295u);


		ft_printf("|%d\n", n);
    

		// test 1070
        ft_printf("test %d|", test++);
		n = ft_printf("%#7X", 33);


		ft_printf("|%d\n", n);
    

		// test 1071
        ft_printf("test %d|", test++);
		n = ft_printf("%#3X", 0);


		ft_printf("|%d\n", n);
    

		// test 1072
        ft_printf("test %d|", test++);
		n = ft_printf("%#7X", 52625);


		ft_printf("|%d\n", n);
    

		// test 1073
        ft_printf("test %d|", test++);
		n = ft_printf("%#2X", 94827);


		ft_printf("|%d\n", n);
    

		// test 1074
        ft_printf("test %d|", test++);
		n = ft_printf("%#-7X", 33);


		ft_printf("|%d\n", n);
    

		// test 1075
        ft_printf("test %d|", test++);
		n = ft_printf("%#-3X", 0);


		ft_printf("|%d\n", n);
    

		// test 1076
        ft_printf("test %d|", test++);
		n = ft_printf("%#-7X", 52625);


		ft_printf("|%d\n", n);
    

		// test 1077
        ft_printf("test %d|", test++);
		n = ft_printf("%#-4X", 9648627);


		ft_printf("|%d\n", n);
    

		// test 1078
        ft_printf("test %d|", test++);
		n = ft_printf("%#.5X", 21);


		ft_printf("|%d\n", n);
    

		// test 1079
        ft_printf("test %d|", test++);
		n = ft_printf("%#.3X", 0);


		ft_printf("|%d\n", n);
    

		// test 1080
        ft_printf("test %d|", test++);
		n = ft_printf("%#.4X", 5263);


		ft_printf("|%d\n", n);
    

		// test 1081
        ft_printf("test %d|", test++);
		n = ft_printf("%#.3X", 938862);


		ft_printf("|%d\n", n);
    

		// test 1082
        ft_printf("test %d|", test++);
		n = ft_printf("%#05X", 43);


		ft_printf("|%d\n", n);
    

		// test 1083
        ft_printf("test %d|", test++);
		n = ft_printf("%#03X", 0);


		ft_printf("|%d\n", n);
    

		// test 1084
        ft_printf("test %d|", test++);
		n = ft_printf("%#03X", 698334);


		ft_printf("|%d\n", n);
    

		// test 1085
        ft_printf("test %d|", test++);
		n = ft_printf("%#8.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 1086
        ft_printf("test %d|", test++);
		n = ft_printf("%#8.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 1087
        ft_printf("test %d|", test++);
		n = ft_printf("%#8.3X", 8375);


		ft_printf("|%d\n", n);
    

		// test 1088
        ft_printf("test %d|", test++);
		n = ft_printf("%#2.7X", 3267);


		ft_printf("|%d\n", n);
    

		// test 1089
        ft_printf("test %d|", test++);
		n = ft_printf("%#3.3X", 6983);


		ft_printf("|%d\n", n);
    

		// test 1090
        ft_printf("test %d|", test++);
		n = ft_printf("%#-8.5X", 34);


		ft_printf("|%d\n", n);
    

		// test 1091
        ft_printf("test %d|", test++);
		n = ft_printf("%#-8.5X", 0);


		ft_printf("|%d\n", n);
    

		// test 1092
        ft_printf("test %d|", test++);
		n = ft_printf("%#-8.3X", 8375);	ft_printf("%5.X", 0);


		ft_printf("|%d\n", n);
    

		// test 1093
        ft_printf("test %d|", test++);
		n = ft_printf("%-5.X", 0);


		ft_printf("|%d\n", n);
    

		// test 1094
        ft_printf("test %d|", test++);
		n = ft_printf("%#.0X", 0);


		ft_printf("|%d\n", n);
    

		// test 1095
        ft_printf("test %d|", test++);
		n = ft_printf("%#.X", 0);


		ft_printf("|%d\n", n);
    

		// test 1096
        ft_printf("test %d|", test++);
		n = ft_printf("%#5.0X", 0);


		ft_printf("|%d\n", n);
    

		// test 1097
        ft_printf("test %d|", test++);
		n = ft_printf("%#5.X", 0);


		ft_printf("|%d\n", n);
    

		// test 1098
        ft_printf("test %d|", test++);
		n = ft_printf("%#-5.0X", 0);


		ft_printf("|%d\n", n);
    

		// test 1099
        ft_printf("test %d|", test++);
		n = ft_printf("%#-5.X", 0);



		ft_printf("|%d\n", n);
    

		// test 1100
        ft_printf("test %d|", test++);
		n = ft_printf("%p", NULL);


		ft_printf("|%d\n", n);
    

		// test 1101
        ft_printf("test %d|", test++);
		n = ft_printf("%9.2p\n", 1234);


		ft_printf("|%d\n", n);
    

		// test 1102
        ft_printf("test %d|", test++);
		n = ft_printf("%2.9p\n", 1234);


		ft_printf("|%d\n", n);
    

		// test 1103
        ft_printf("test %d|", test++);
		n = ft_printf("%.5p", 0);


		ft_printf("|%d\n", n);
    

		// test 1104
        ft_printf("test %d|", test++);
		n = ft_printf("%.0p", 0);


		ft_printf("|%d\n", n);
    

		// test 1105
        ft_printf("test %d|", test++);
		n = ft_printf("%5p", 0);


		ft_printf("|%d\n", n);
    

		// test 1106
        ft_printf("test %d|", test++);
		n = ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		ft_printf("|%d\n", n);
    

		// test 1107
        ft_printf("test %d|", test++);
		n = ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		ft_printf("|%d\n", n);
    

		// test 1108
        ft_printf("test %d|", test++);
		n = ft_printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		ft_printf("|%d\n", n);
    

		// test 1109
        ft_printf("test %d|", test++);
		n = ft_printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		ft_printf("|%d\n", n);
    

		// test 1110
        ft_printf("test %d|", test++);
		n = ft_printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		ft_printf("|%d\n", n);
    

		// test 1111
        ft_printf("test %d|", test++);
		n = ft_printf("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		ft_printf("|%d\n", n);
    

		// test 1112
        ft_printf("test %d|", test++);
		n = ft_printf("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		ft_printf("|%d\n", n);
    

		// test 1113
        ft_printf("test %d|", test++);
		n = ft_printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		ft_printf("|%d\n", n);
    

		// test 1114
        ft_printf("test %d|", test++);
		n = ft_printf("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		ft_printf("|%d\n", n);
    

		// test 1115
        ft_printf("test %d|", test++);
		n = ft_printf("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


		ft_printf("|%d\n", n);
    

		// test 1116
        ft_printf("test %d|", test++);
		n = ft_printf("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);


	ft_printf("|%d\n", n);


	// test 1117
    ft_printf("test %d|", test++);
	n = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
				  ' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',',
				  '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B',
				  'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
				  'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
				  'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '~');
	ft_printf("|%d\n", n);


	// test 1118
	ft_printf("test %d|", test++);
	n = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
				  (char)1, (char)2, (char)3, (char)4, (char)5, (char)6, (char)7, (char)8, (char)9,
				  (char)10, (char)11, (char)12, (char)13, (char)14, (char)15, (char)16, (char)17,
				  (char)18, (char)19, (char)20, (char)21, (char)22, (char)23, (char)24, (char)25,
				  (char)26, (char)27, (char)28, (char)29, (char)30, (char)31);

	ft_printf("|%d\n", n);


	// test 1119
	ft_printf("test %d|", test++);
	n = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
				  (char)128, (char)129, (char)130, (char)131, (char)132, (char)133, (char)134, (char)135, (char)136,
				  (char)137, (char)138, (char)139, (char)140, (char)141, (char)142, (char)143, (char)144, (char)145,
				  (char)146, (char)147, (char)148, (char)149, (char)150, (char)151, (char)152, (char)153, (char)154,
				  (char)155, (char)156, (char)157, (char)158, (char)159, (char)160, (char)161, (char)162, (char)163,
				  (char)164, (char)165, (char)166, (char)167, (char)168, (char)169, (char)170, (char)171, (char)172,
				  (char)173, (char)174, (char)175, (char)176, (char)177, (char)178, (char)179, (char)180, (char)181,
				  (char)182, (char)183, (char)184, (char)185, (char)186, (char)187, (char)188, (char)189, (char)190,
				  (char)191, (char)192, (char)193, (char)194, (char)195, (char)196, (char)197, (char)198, (char)199,
				  (char)200, (char)201, (char)202, (char)203, (char)204, (char)205, (char)206, (char)207, (char)208,
				  (char)209, (char)210, (char)211, (char)212, (char)213, (char)214, (char)215, (char)216, (char)217,
				  (char)218, (char)219, (char)220, (char)221, (char)222, (char)223, (char)224, (char)225, (char)226,
				  (char)227, (char)228, (char)229, (char)230, (char)231, (char)232, (char)233, (char)234, (char)235,
				  (char)236, (char)237, (char)238, (char)239, (char)240, (char)241, (char)242, (char)243, (char)244,
				  (char)245, (char)246, (char)247, (char)248, (char)249, (char)250, (char)251, (char)252, (char)253, (char)254, (char)255);

	ft_printf("|%d\n", n);


	// test 1120
	ft_printf("test %d|", test++);
	n = ft_printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c\
	%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
	%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c",
				  ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
				  'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
				  'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '~');

	ft_printf("|%d\n", n);


	// test 1121
	ft_printf("test %d|", test++);
	n = ft_printf("%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",

				  (char)1, (char)2, (char)3, (char)4, (char)5, (char)6, (char)7, (char)8, (char)9, (char)10, (char)11, (char)12,
				  (char)13, (char)14, (char)15, (char)16, (char)17, (char)18, (char)19, (char)20, (char)21, (char)22, (char)23, (char)24,
				  (char)25, (char)26, (char)27, (char)28, (char)29, (char)30, (char)31);
	ft_printf("|%d\n", n);


	// test 1122
	ft_printf("test %d|", test++);
	n = ft_printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c\
	%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
	%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
	%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",
				  (char)128, (char)129, (char)130, (char)131, (char)132, (char)133, (char)134, (char)135, (char)136, (char)137, (char)138,
				  (char)139, (char)140, (char)141, (char)142, (char)143, (char)144, (char)145, (char)146, (char)147, (char)148, (char)149,
				  (char)150, (char)151, (char)152, (char)153, (char)154, (char)155, (char)156, (char)157, (char)158, (char)159, (char)160,
				  (char)161, (char)162, (char)163, (char)164, (char)165, (char)166, (char)167, (char)168, (char)169, (char)170, (char)171,
				  (char)172, (char)173, (char)174, (char)175, (char)176, (char)177, (char)178, (char)179, (char)180, (char)181, (char)182,
				  (char)183, (char)184, (char)185, (char)186, (char)187, (char)188, (char)189, (char)190, (char)191, (char)192, (char)193,
				  (char)194, (char)195, (char)196, (char)197, (char)198, (char)199, (char)200, (char)201, (char)202, (char)203, (char)204,
				  (char)205, (char)206, (char)207, (char)208, (char)209, (char)210, (char)211, (char)212, (char)213, (char)214, (char)215,
				  (char)216, (char)217, (char)218, (char)219, (char)220, (char)221, (char)222, (char)223, (char)224, (char)225, (char)226,
				  (char)227, (char)228, (char)229, (char)230, (char)231, (char)232, (char)233, (char)234, (char)235, (char)236, (char)237,
				  (char)238, (char)239, (char)240, (char)241, (char)242, (char)243, (char)244, (char)245, (char)246, (char)247, (char)248,
				  (char)249, (char)250, (char)251, (char)252, (char)253, (char)254, (char)255);

	ft_printf("|%d\n", n);


	// test 1123
	ft_printf("test %d|", test++);
	n = ft_printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c",
				  '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
				  'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
				  'v', 'w', 'x', 'y', 'z', '{', '|', '~');

	ft_printf("|%d\n", n);


	// test 1124
	ft_printf("test %d|", test++);
	n = ft_printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c",
				  (char)1, (char)2, (char)3, (char)4, (char)5, (char)6, (char)7, (char)8, (char)9, (char)10, (char)11,
				  (char)12, (char)13, (char)14, (char)15, (char)16, (char)17, (char)18, (char)19, (char)20, (char)21, (char)22, (char)23, (char)24,
				  (char)25, (char)26, (char)27, (char)28, (char)29, (char)30, (char)31);

	ft_printf("|%d\n", n);


	// test 1125
	ft_printf("test %d|", test++);
	n = ft_printf("%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
	%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
	%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
	%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
	%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",
				  (char)128, (char)129, (char)130,
				  (char)131, (char)132, (char)133, (char)134, (char)135, (char)136, (char)137, (char)138, (char)139, (char)140, (char)141,
				  (char)142, (char)143, (char)144, (char)145, (char)146, (char)147, (char)148, (char)149, (char)150, (char)151, (char)152,
				  (char)153, (char)154, (char)155, (char)156, (char)157, (char)158, (char)159, (char)160, (char)161, (char)162, (char)163,
				  (char)164, (char)165, (char)166, (char)167, (char)168, (char)169, (char)170, (char)171, (char)172, (char)173, (char)174,
				  (char)175, (char)176, (char)177, (char)178, (char)179, (char)180, (char)181, (char)182, (char)183, (char)184, (char)185,
				  (char)186, (char)187, (char)188, (char)189, (char)190, (char)191, (char)192, (char)193, (char)194, (char)195, (char)196,
				  (char)197, (char)198, (char)199, (char)200, (char)201, (char)202, (char)203, (char)204, (char)205, (char)206, (char)207,
				  (char)208, (char)209, (char)210, (char)211, (char)212, (char)213, (char)214, (char)215, (char)216, (char)217, (char)218,
				  (char)219, (char)220, (char)221, (char)222, (char)223, (char)224, (char)225, (char)226, (char)227, (char)228, (char)229,
				  (char)230, (char)231, (char)232, (char)233, (char)234, (char)235, (char)236, (char)237, (char)238, (char)239, (char)240,
				  (char)241, (char)242, (char)243, (char)244, (char)245, (char)246, (char)247, (char)248, (char)249, (char)250, (char)251,
				  (char)252, (char)253, (char)254, (char)255);

	ft_printf("|%d\n", n);


	// test 1126
	ft_printf("test %d|", test++);
	n = ft_printf("%c", '\0');

	ft_printf("|%d\n", n);


	// test 1127
	ft_printf("test %d|", test++);
	n = ft_printf("%5c", '\0');

	ft_printf("|%d\n", n);


	// test 1128
	ft_printf("test %d|", test++);
	n = ft_printf("%-5c", '\0');

	ft_printf("|%d\n", n);


	// test 1129
	ft_printf("test %d|", test++);
	n = ft_printf("");
	ft_printf("|%d\n", n);


	// test 1130
	ft_printf("test %d|", test++);
	n = ft_printf("\t\n\r\v\f\n");
	ft_printf("|%d\n", n);


	// test 1131
	ft_printf("test %d|", test++);
	n = ft_printf("%%");
	ft_printf("|%d\n", n);


	// test 1132
	ft_printf("test %d|", test++);
	n = ft_printf("%5%");
	ft_printf("|%d\n", n);


	// test 1133
	ft_printf("test %d|", test++);
	n = ft_printf("%-5%");
	ft_printf("|%d\n", n);


	// test 1134
	ft_printf("test %d|", test++);
	n = ft_printf("%05%");
	ft_printf("|%d\n", n);


	// test 1135
	ft_printf("test %d|", test++);
	n = ft_printf("%-05%");
	ft_printf("|%d\n", n);


	// test 1136
	ft_printf("test %d|", test++);
	n = ft_printf("%");
	ft_printf("|%d\n", n);


	// test 1137
	ft_printf("test %d|", test++);
	n = ft_printf("%5");
	ft_printf("|%d\n", n);


	// test 1138
	ft_printf("test %d|", test++);
	n = ft_printf("%05");
	ft_printf("|%d\n", n);


	// test 1139
	ft_printf("test %d|", test++);
	n = ft_printf("%-05");
	ft_printf("|%d\n", n);


	// test 1140
	ft_printf("test %d|", test++);
	n = ft_printf("%-5");
	ft_printf("|%d\n", n);


	// test 1141
	ft_printf("test %d|", test++);
	n = ft_printf("%.4p", &ncm_p);
	ft_printf("|%d\n", n);


	// test 1142
	ft_printf("test %d|", test++);
	n = ft_printf("%.p", &ncm_p);
	ft_printf("|%d\n", n);


	// test 1143
	ft_printf("test %d|", test++);
	n = ft_printf("%05p", &ncm_p);
	ft_printf("|%d\n", n);


	// test 1144
	ft_printf("test %d|", test++);
	n = ft_printf("%0p", &ncm_p);
	ft_printf("|%d\n", n);


	// test 1145
	ft_printf("test %d|", test++);
	n = ft_printf("%-p", &ncm_p);
	ft_printf("|%d\n", n);


	// test 1146
	ft_printf("test %d|", test++);
	n = ft_printf("%#p", &ncm_p);
	ft_printf("|%d\n", n);


	// test 1147
	ft_printf("test %d|", test++);
	n = ft_printf("%+p", &ncm_p);
	ft_printf("|%d\n", n);


	// test 1148
	ft_printf("test %d|", test++);
	n = ft_printf("%+p", &ncm_p);
	ft_printf("|%d\n", n);


	// test 1149
	ft_printf("test %d|", test++);
	n = ft_printf("% p", &ncm_p);
	ft_printf("|%d\n", n);


	// test 1150
	ft_printf("test %d|", test++);
	n = ft_printf("% p", &ncm_p);
	ft_printf("|%d\n", n);


	// test 1151
	ft_printf("test %d|", test++);
	n = ft_printf("%-p", &ncm_p);
	ft_printf("|%d\n", n);


	// test 1152
	ft_printf("test %d|", test++);
	n = ft_printf("%#i", 42);
	ft_printf("|%d\n", n);


	// test 1153
	ft_printf("test %d|", test++);
	n = ft_printf("%-i", 42);
	ft_printf("|%d\n", n);


	// test 1154
	ft_printf("test %d|", test++);
	n = ft_printf("%#u", 42);
	ft_printf("|%d\n", n);


	// test 1155
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 42);
	ft_printf("|%d\n", n);


	// test 1156
	ft_printf("test %d|", test++);
	n = ft_printf("% u", 42);
	ft_printf("|%d\n", n);


	// test 1157
	ft_printf("test %d|", test++);
	n = ft_printf("%-u", 42);
	ft_printf("|%d\n", n);


	// test 1158
	ft_printf("test %d|", test++);
	n = ft_printf("%+x", 42);
	ft_printf("|%d\n", n);


	// test 1159
	ft_printf("test %d|", test++);
	n = ft_printf("% x", 42);
	ft_printf("|%d\n", n);


	// test 1160
	ft_printf("test %d|", test++);
	n = ft_printf("%+X", 42);
	ft_printf("|%d\n", n);
	

	// test 1161
	ft_printf("test %d|", test++);
	n = ft_printf("% X", 42);
	ft_printf("|%d\n", n);
	

	// test 1162
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 5);
	ft_printf("|%d\n", n);
	

	// test 1163
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 5);
	ft_printf("|%d\n", n);
	

	// test 1164
	ft_printf("test %d|", test++);
	n = ft_printf("%+u", 4294967295);
	ft_printf("|%d\n", n);
	

	// test 1165
	ft_printf("test %d|", test++);
	n = ft_printf("%+5u", 35);
	ft_printf("|%d\n", n);
	

	// test 1166
	ft_printf("test %d|", test++);
	n = ft_printf("%+7u", 0);
	ft_printf("|%d\n", n);
	

	// test 1167
	ft_printf("test %d|", test++);
	n = ft_printf("%+24u", 4294967295);
	ft_printf("|%d\n", n);
	

	// test 1168
	ft_printf("test %d|", test++);
	n = ft_printf("%+.7u", 234);
	ft_printf("|%d\n", n);
	

	// test 1169
	ft_printf("test %d|", test++);
	n = ft_printf("%+.3u", 3723);
	ft_printf("|%d\n", n);
	

	// test 1170
	ft_printf("test %d|", test++);
	n = ft_printf("%+05u", 432);
	ft_printf("|%d\n", n);
	

	// test 1171
	ft_printf("test %d|", test++);
	n = ft_printf("%+04u", 0);
	ft_printf("|%d\n", n);
	

	// test 1172
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5u", 34);
	ft_printf("|%d\n", n);
	

	// test 1173
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5u", 0);
	ft_printf("|%d\n", n);
	

	// test 1174
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.3u", 8375);
	ft_printf("|%d\n", n);
	

	// test 1175
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.7u", 3267);
	ft_printf("|%d\n", n);
	

	// test 1176
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.3u", 6983);
	ft_printf("|%d\n", n);
	

	// test 1177
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5u", 34);
	ft_printf("|%d\n", n);
	

	// test 1178
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5u", 0);
	ft_printf("|%d\n", n);
	

	// test 1179
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.3u", 8375);
	ft_printf("|%d\n", n);
	

	// test 1180
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.7u", 3267);
	ft_printf("|%d\n", n);
	

	// test 1181
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.3u", 6983);
	ft_printf("|%d\n", n);
	

	// test 1182
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5u", 34);
	ft_printf("|%d\n", n);
	

	// test 1183
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5u", 0);
	ft_printf("|%d\n", n);
	

	// test 1184
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.3u", 8375);
	ft_printf("|%d\n", n);
	

	// test 1185
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.7u", 3267);
	ft_printf("|%d\n", n);
	

	// test 1186
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.3u", 6983);
	ft_printf("|%d\n", n);
	

	// test 1187
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5u", 34);
	ft_printf("|%d\n", n);
	

	// test 1188
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5u", 0);
	ft_printf("|%d\n", n);
	

	// test 1189
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.3u", 8375);
	ft_printf("|%d\n", n);
	

	// test 1190
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.7u", 3267);
	ft_printf("|%d\n", n);
	

	// test 1191
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.3u", 6983);
	ft_printf("|%d\n", n);
	

	// test 1192
	ft_printf("test %d|", test++);
	n = ft_printf("%##x", 42);
	ft_printf("|%d\n", n);
	

	// test 1193
	ft_printf("test %d|", test++);
	n = ft_printf("%#++#-5x", 42);
	ft_printf("|%d\n", n);
	

	// test 1194
	ft_printf("test %d|", test++);
	n = ft_printf("%.4c", 'a');
	ft_printf("|%d\n", n);
	

	// test 1195
	ft_printf("test %d|", test++);
	n = ft_printf("%#c", 'a');
	ft_printf("|%d\n", n);
	

	// test 1196
	ft_printf("test %d|", test++);
	n = ft_printf("%+c", 'a');
	ft_printf("|%d\n", n);
	

	// test 1197
	ft_printf("test %d|", test++);
	n = ft_printf("%+c", -42);
	ft_printf("|%d\n", n);
	

	// test 1198
	ft_printf("test %d|", test++);
	n = ft_printf("%#s", "hello");
	ft_printf("|%d\n", n);
	

	// test 1199
	ft_printf("test %d|", test++);
	n = ft_printf("%+s", "hello");
	ft_printf("|%d\n", n);
	

	// test 1200
	ft_printf("test %d|", test++);
	n = ft_printf("% s", "hello");
	ft_printf("|%d\n", n);
	

	// test 1201
	ft_printf("test %d|", test++);
	n = ft_printf("% s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1202
	ft_printf("test %d|", test++);
	n = ft_printf("%#s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1203
	ft_printf("test %d|", test++);
	n = ft_printf("%+s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1204
	ft_printf("test %d|", test++);
	n = ft_printf("%-x", 42);
	ft_printf("|%d\n", n);
	

	// test 1205
	ft_printf("test %d|", test++);
	n = ft_printf("%-021s", "abc");
	ft_printf("|%d\n", n);
	

	// test 1206
	ft_printf("test %d|", test++);
	n = ft_printf("%-05s", "goes over");
	ft_printf("|%d\n", n);
	

	// test 1207
	ft_printf("test %d|", test++);
	n = ft_printf("%021s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1208
	ft_printf("test %d|", test++);
	n = ft_printf("%02s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1209
	ft_printf("test %d|", test++);
	n = ft_printf("%-021s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1210
	ft_printf("test %d|", test++);
	n = ft_printf("%-03s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1211
	ft_printf("test %d|", test++);
	n = ft_printf("%05c", '\0');
	ft_printf("|%d\n", n);
	

	// test 1212
	ft_printf("test %d|", test++);
	n = ft_printf("%-05c", '\0');
	ft_printf("|%d\n", n);
	

	// test 1213
	ft_printf("test %d|", test++);
	n = ft_printf("%.c", 'a');
	ft_printf("|%d\n", n);
	

	// test 1214
	ft_printf("test %d|", test++);
	n = ft_printf("%05c", 'a');
	ft_printf("|%d\n", n);
	

	// test 1215
	ft_printf("test %d|", test++);
	n = ft_printf("%0c", 'a');
	ft_printf("|%d\n", n);
	

	// test 1216
	ft_printf("test %d|", test++);
	n = ft_printf("% c", 'a');
	ft_printf("|%d\n", n);
	

	// test 1217
	ft_printf("test %d|", test++);
	n = ft_printf("% c", -42);
	ft_printf("|%d\n", n);
	

	// test 1218
	ft_printf("test %d|", test++);
	n = ft_printf("%-c", 'a');
	ft_printf("|%d\n", n);
	

	// test 1219
	ft_printf("test %d|", test++);
	n = ft_printf("%05s", "hello");
	ft_printf("|%d\n", n);
	

	// test 1220
	ft_printf("test %d|", test++);
	n = ft_printf("%0s", "hello");
	ft_printf("|%d\n", n);
	

	// test 1221
	ft_printf("test %d|", test++);
	n = ft_printf("%-s", "hello");
	ft_printf("|%d\n", n);
	

	// test 1222
	ft_printf("test %d|", test++);
	n = ft_printf("%0");
	ft_printf("|%d\n", n);
	

	// test 1223
	ft_printf("test %d|", test++);
	n = ft_printf("%-");
	ft_printf("|%d\n", n);
	

	// test 1224
	ft_printf("test %d|", test++);
	n = ft_printf("%23");
	ft_printf("|%d\n", n);
	

	// test 1225
	ft_printf("test %d|", test++);
	n = ft_printf("%.");
	ft_printf("|%d\n", n);
	

	// test 1226
	ft_printf("test %d|", test++);
	n = ft_printf("%p");

	ft_printf("|%d\n", n);
	

	// test 1227
	ft_printf("test %d|", test++);
	n = ft_printf("%u");
	ft_printf("|%d\n", n);
	

	// test 1228
	ft_printf("test %d|", test++);
	n = ft_printf("%x");
	ft_printf("|%d\n", n);
	

	// test 1229
	ft_printf("test %d|", test++);
	n = ft_printf("%X");
	ft_printf("|%d\n", n);
	

	// test 1230
	ft_printf("test %d|", test++);
	n = ft_printf("%c");
	ft_printf("|%d\n", n);
	

	// test 1231
	ft_printf("test %d|", test++);
	n = ft_printf("%0s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1232
	ft_printf("test %d|", test++);
	n = ft_printf("%-s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1233
	ft_printf("test %d|", test++);
	n = ft_printf("%23s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1234
	ft_printf("test %d|", test++);
	n = ft_printf("%.s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1235
	ft_printf("test %d|", test++);
	n = ft_printf("%p", NULL);

	ft_printf("|%d\n", n);
	

	// test 1236
	ft_printf("test %d|", test++);
	n = ft_printf("%u", NULL);
	ft_printf("|%d\n", n);
	

	// test 1237
	ft_printf("test %d|", test++);
	n = ft_printf("%x", NULL);
	ft_printf("|%d\n", n);
	

	// test 1238
	ft_printf("test %d|", test++);
	n = ft_printf("%X", NULL);
	ft_printf("|%d\n", n);
	

	// test 1239
	ft_printf("test %d|", test++);
	n = ft_printf("%s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1240
	ft_printf("test %d|", test++);
	n = ft_printf("%c", NULL);
	ft_printf("|%d\n", n);
	

	// test 1241
	ft_printf("test %d|", test++);
	n = ft_printf("hello, %s.", "gavin");
	ft_printf("|%d\n", n);
	

	// test 1242
	ft_printf("test %d|", test++);
	n = ft_printf("%s", "testing testing");
	ft_printf("|%d\n", n);
	

	// test 1243
	ft_printf("test %d|", test++);
	n = ft_printf("..%s stuff %s", "a", "b");
	ft_printf("|%d\n", n);
	

	// test 1244
	ft_printf("test %d|", test++);
	n = ft_printf("this %s is empty", "");
	ft_printf("|%d\n", n);
	

	// test 1245
	ft_printf("test %d|", test++);
	n = ft_printf("this %s is %s", "hello", "");
	ft_printf("|%d\n", n);
	

	// test 1246
	ft_printf("test %d|", test++);
	n = ft_printf("this %s is %s", "", "hello");
	ft_printf("|%d\n", n);
	

	// test 1247
	ft_printf("test %d|", test++);
	n = ft_printf("%s%s%s", "1", "2", "3's a charm");
	ft_printf("|%d\n", n);
	

	// test 1248
	ft_printf("test %d|", test++);
	n = ft_printf("%32s", "abc");
	ft_printf("|%d\n", n);
	

	// test 1249
	ft_printf("test %d|", test++);
	n = ft_printf("%16s", "nark nark");
	ft_printf("|%d\n", n);
	

	// test 1250
	ft_printf("test %d|", test++);
	n = ft_printf("%5s", "goes over");
	ft_printf("|%d\n", n);
	

	// test 1251
	ft_printf("test %d|", test++);
	n = ft_printf("%-32s", "abc");
	ft_printf("|%d\n", n);
	

	// test 1252
	ft_printf("test %d|", test++);
	n = ft_printf("%-16s", "nark nark");
	ft_printf("|%d\n", n);
	

	// test 1253
	ft_printf("test %d|", test++);
	n = ft_printf("%-5s", "goes over");
	ft_printf("|%d\n", n);
	

	// test 1254
	ft_printf("test %d|", test++);
	n = ft_printf("%.7s", "hello");
	ft_printf("|%d\n", n);
	

	// test 1255
	ft_printf("test %d|", test++);
	n = ft_printf("%.3s", "hello");
	ft_printf("|%d\n", n);
	

	// test 1256
	ft_printf("test %d|", test++);
	n = ft_printf("%.s", "hello");
	ft_printf("|%d\n", n);
	

	// test 1257
	ft_printf("test %d|", test++);
	n = ft_printf("%.0s", "hello");
	ft_printf("|%d\n", n);
	

	// test 1258
	ft_printf("test %d|", test++);
	n = ft_printf("%.3s%.2s", "holla", "bitch");
	ft_printf("|%d\n", n);
	

	// test 1259
	ft_printf("test %d|", test++);
	n = ft_printf("%.5s%7s", "yo", "boi");
	ft_printf("|%d\n", n);
	

	// test 1260
	ft_printf("test %d|", test++);
	n = ft_printf("%7.5s", "yolo");
	ft_printf("|%d\n", n);
	

	// test 1261
	ft_printf("test %d|", test++);
	n = ft_printf("%7.5s", "bombastic");
	ft_printf("|%d\n", n);
	

	// test 1262
	ft_printf("test %d|", test++);
	n = ft_printf("%-7.5s", "yolo");
	ft_printf("|%d\n", n);
	

	// test 1263
	ft_printf("test %d|", test++);
	n = ft_printf("%-7.5s", "tubular");
	ft_printf("|%d\n", n);
	

	// test 1264
	ft_printf("test %d|", test++);
	n = ft_printf("hello, %s.", NULL);
	ft_printf("|%d\n", n);
	

	// test 1265
	ft_printf("test %d|", test++);
	n = ft_printf("%s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1266
	ft_printf("test %d|", test++);
	n = ft_printf("%32s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1267
	ft_printf("test %d|", test++);
	n = ft_printf("%2s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1268
	ft_printf("test %d|", test++);
	n = ft_printf("%-32s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1269
	ft_printf("test %d|", test++);
	n = ft_printf("%-16s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1270
	ft_printf("test %d|", test++);
	n = ft_printf("%-3s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1271
	ft_printf("test %d|", test++);
	n = ft_printf("%.9s", "NULL");
	ft_printf("|%d\n", n);
	

	// test 1272
	ft_printf("test %d|", test++);
	n = ft_printf("%.3s", "NULL");
	ft_printf("|%d\n", n);
	

	// test 1273
	ft_printf("test %d|", test++);
	n = ft_printf("%.s", "NULL");
	ft_printf("|%d\n", n);
	

	// test 1274
	ft_printf("test %d|", test++);
	n = ft_printf("%.0s", "NULL");
	ft_printf("|%d\n", n);
	

	// test 1275
	ft_printf("test %d|", test++);
	n = ft_printf("%.03s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1276
	ft_printf("test %d|", test++);
	n = ft_printf("%.09s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1277
	ft_printf("test %d|", test++);
	n = ft_printf("%.00s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1278
	ft_printf("test %d|", test++);
	n = ft_printf("%.01s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1279
	ft_printf("test %d|", test++);
	n = ft_printf("%.03s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1280
	ft_printf("test %d|", test++);
	n = ft_printf("%.09s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1281
	ft_printf("test %d|", test++);
	n = ft_printf("%3.s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1282
	ft_printf("test %d|", test++);
	n = ft_printf("%10.s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1283
	ft_printf("test %d|", test++);
	n = ft_printf("%1.s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1284
	ft_printf("test %d|", test++);
	n = ft_printf("%2.s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1285
	ft_printf("test %d|", test++);
	n = ft_printf("%9.s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1286
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1287
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1288
	ft_printf("test %d|", test++);
	n = ft_printf("%-1.s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1289
	ft_printf("test %d|", test++);
	n = ft_printf("%-2.s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1290
	ft_printf("test %d|", test++);
	n = ft_printf("%-6.s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1291
	ft_printf("test %d|", test++);
	n = ft_printf("%3.1s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1292
	ft_printf("test %d|", test++);
	n = ft_printf("%9.1s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1293
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.1s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1294
	ft_printf("test %d|", test++);
	n = ft_printf("%-9.1s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1295
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.1s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1296
	ft_printf("test %d|", test++);
	n = ft_printf("%-6.1s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1297
	ft_printf("test %d|", test++);
	n = ft_printf("%3.6s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1298
	ft_printf("test %d|", test++);
	n = ft_printf("%20.6s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1299
	ft_printf("test %d|", test++);
	n = ft_printf("%3.6s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1300
	ft_printf("test %d|", test++);
	n = ft_printf("%6.6s", "\0");
	ft_printf("|%d\n", n);
	

	// test 1301
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.8s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1302
	ft_printf("test %d|", test++);
	n = ft_printf("%-10.8s", NULL);
	ft_printf("|%d\n", n);
	

	// test 1303
	ft_printf("test %d|", test++);
	n = ft_printf("this %i number", 17);
	ft_printf("|%d\n", n);
	

	// test 1304
	ft_printf("test %d|", test++);
	n = ft_printf("this %i number", -267);
	ft_printf("|%d\n", n);
	

	// test 1305
	ft_printf("test %d|", test++);
	n = ft_printf("this %i number", 0);
	ft_printf("|%d\n", n);
	

	// test 1306
	ft_printf("test %d|", test++);
	n = ft_printf("%i", 3);
	ft_printf("|%d\n", n);
	

	// test 1307
	ft_printf("test %d|", test++);
	n = ft_printf("%i", -1);
	ft_printf("|%d\n", n);
	

	// test 1308
	ft_printf("test %d|", test++);
	n = ft_printf("%i", 0);
	ft_printf("|%d\n", n);
	

	// test 1309
	ft_printf("test %d|", test++);
	n = ft_printf("%i", 2147483647);
	ft_printf("|%d\n", n);
	

	// test 1310
	ft_printf("test %d|", test++);
	n = ft_printf("%i", (int)(-2147483678));
	ft_printf("|%d\n", n);
	

	// test 1311
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1312
	ft_printf("test %d|", test++);
	n = ft_printf("%0+10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1313
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1314
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1315
	ft_printf("test %d|", test++);
	n = ft_printf("%0+8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1316
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1317
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1318
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1319
	ft_printf("test %d|", test++);
	n = ft_printf("%0+3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1320
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1321
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1322
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1323
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1324
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1325
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1326
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1327
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1328
	ft_printf("test %d|", test++);
	n = ft_printf("%0+-3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1329
	ft_printf("test %d|", test++);
	n = ft_printf("%+i", 5);
	ft_printf("|%d\n", n);
	

	// test 1330
	ft_printf("test %d|", test++);
	n = ft_printf("%+i", -7);
	ft_printf("|%d\n", n);
	

	// test 1331
	ft_printf("test %d|", test++);
	n = ft_printf("%+i", 2147483647);
	ft_printf("|%d\n", n);
	

	// test 1332
	ft_printf("test %d|", test++);
	n = ft_printf("%+5i", 35);
	ft_printf("|%d\n", n);
	

	// test 1333
	ft_printf("test %d|", test++);
	n = ft_printf("%+7i", 0);
	ft_printf("|%d\n", n);
	

	// test 1334
	ft_printf("test %d|", test++);
	n = ft_printf("%+24i", 2147483647);
	ft_printf("|%d\n", n);
	

	// test 1335
	ft_printf("test %d|", test++);
	n = ft_printf("%+.7i", 234);
	ft_printf("|%d\n", n);
	

	// test 1336
	ft_printf("test %d|", test++);
	n = ft_printf("%+.7i", -446);
	ft_printf("|%d\n", n);
	

	// test 1337
	ft_printf("test %d|", test++);
	n = ft_printf("%+.3i", 3723);
	ft_printf("|%d\n", n);
	

	// test 1338
	ft_printf("test %d|", test++);
	n = ft_printf("%+05i", 432);
	ft_printf("|%d\n", n);
	

	// test 1339
	ft_printf("test %d|", test++);
	n = ft_printf("%+04i", 0);
	ft_printf("|%d\n", n);
	

	// test 1340
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1341
	ft_printf("test %d|", test++);
	n = ft_printf("%+10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1342
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1343
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1344
	ft_printf("test %d|", test++);
	n = ft_printf("%+8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1345
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1346
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1347
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1348
	ft_printf("test %d|", test++);
	n = ft_printf("%+3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1349
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1350
	ft_printf("test %d|", test++);
	n = ft_printf("%+-10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1351
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1352
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1353
	ft_printf("test %d|", test++);
	n = ft_printf("%+-8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1354
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1355
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1356
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1357
	ft_printf("test %d|", test++);
	n = ft_printf("%+-3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1358
	ft_printf("test %d|", test++);
	n = ft_printf("this % i number", 17);
	ft_printf("|%d\n", n);
	

	// test 1359
	ft_printf("test %d|", test++);
	n = ft_printf("this % i number", -267);
	ft_printf("|%d\n", n);
	

	// test 1360
	ft_printf("test %d|", test++);
	n = ft_printf("this % i number", 0);
	ft_printf("|%d\n", n);
	

	// test 1361
	ft_printf("test %d|", test++);
	n = ft_printf("% i", 3);
	ft_printf("|%d\n", n);
	

	// test 1362
	ft_printf("test %d|", test++);
	n = ft_printf("% i", -1);
	ft_printf("|%d\n", n);
	

	// test 1363
	ft_printf("test %d|", test++);
	n = ft_printf("% i", 0);
	ft_printf("|%d\n", n);
	

	// test 1364
	ft_printf("test %d|", test++);
	n = ft_printf("% i", 2147483647);
	ft_printf("|%d\n", n);
	

	// test 1365
	ft_printf("test %d|", test++);
	n = ft_printf("% i", (int)(-2147483678));
	ft_printf("|%d\n", n);
	

	// test 1366
	ft_printf("test %d|", test++);
	n = ft_printf("% +i", 5);
	ft_printf("|%d\n", n);
	

	// test 1367
	ft_printf("test %d|", test++);
	n = ft_printf("% +i", -7);
	ft_printf("|%d\n", n);
	

	// test 1368
	ft_printf("test %d|", test++);
	n = ft_printf("% +i", 2147483647);
	ft_printf("|%d\n", n);
	

	// test 1369
	ft_printf("test %d|", test++);
	n = ft_printf("% 7i", 33);
	ft_printf("|%d\n", n);
	

	// test 1370
	ft_printf("test %d|", test++);
	n = ft_printf("% 7i", -14);
	ft_printf("|%d\n", n);
	

	// test 1371
	ft_printf("test %d|", test++);
	n = ft_printf("% 3i", 0);
	ft_printf("|%d\n", n);
	

	// test 1372
	ft_printf("test %d|", test++);
	n = ft_printf("% 5i", 52625);
	ft_printf("|%d\n", n);
	

	// test 1373
	ft_printf("test %d|", test++);
	n = ft_printf("% 5i", -2562);
	ft_printf("|%d\n", n);
	

	// test 1374
	ft_printf("test %d|", test++);
	n = ft_printf("% 4i", 94827);
	ft_printf("|%d\n", n);
	

	// test 1375
	ft_printf("test %d|", test++);
	n = ft_printf("% 4i", -2464);
	ft_printf("|%d\n", n);
	

	// test 1376
	ft_printf("test %d|", test++);
	n = ft_printf("% -7i", 33);
	ft_printf("|%d\n", n);
	

	// test 1377
	ft_printf("test %d|", test++);
	n = ft_printf("% -7i", -14);
	ft_printf("|%d\n", n);
	

	// test 1378
	ft_printf("test %d|", test++);
	n = ft_printf("% -3i", 0);
	ft_printf("|%d\n", n);
	

	// test 1379
	ft_printf("test %d|", test++);
	n = ft_printf("% -5i", 52625);
	ft_printf("|%d\n", n);
	

	// test 1380
	ft_printf("test %d|", test++);
	n = ft_printf("% -5i", -2562);
	ft_printf("|%d\n", n);
	

	// test 1381
	ft_printf("test %d|", test++);
	n = ft_printf("% -4i", 94827);
	ft_printf("|%d\n", n);
	

	// test 1382
	ft_printf("test %d|", test++);
	n = ft_printf("% -4i", -2464);
	ft_printf("|%d\n", n);
	

	// test 1383
	ft_printf("test %d|", test++);
	n = ft_printf("% +5i", 35);
	ft_printf("|%d\n", n);
	

	// test 1384
	ft_printf("test %d|", test++);
	n = ft_printf("% +7i", 0);
	ft_printf("|%d\n", n);
	

	// test 1385
	ft_printf("test %d|", test++);
	n = ft_printf("% +24i", 2147483647);
	ft_printf("|%d\n", n);
	

	// test 1386
	ft_printf("test %d|", test++);
	n = ft_printf("% .5i", 2);
	ft_printf("|%d\n", n);
	

	// test 1387
	ft_printf("test %d|", test++);
	n = ft_printf("% .6i", -3);
	ft_printf("|%d\n", n);
	

	// test 1388
	ft_printf("test %d|", test++);
	n = ft_printf("% .3i", 0);
	ft_printf("|%d\n", n);
	

	// test 1389
	ft_printf("test %d|", test++);
	n = ft_printf("% .4i", 5263);
	ft_printf("|%d\n", n);
	

	// test 1390
	ft_printf("test %d|", test++);
	n = ft_printf("% .4i", -2372);
	ft_printf("|%d\n", n);
	

	// test 1391
	ft_printf("test %d|", test++);
	n = ft_printf("% .3i", 13862);
	ft_printf("|%d\n", n);
	

	// test 1392
	ft_printf("test %d|", test++);
	n = ft_printf("% .3i", -23646);
	ft_printf("|%d\n", n);
	

	// test 1393
	ft_printf("test %d|", test++);
	n = ft_printf("% +.7i", 234);
	ft_printf("|%d\n", n);
	

	// test 1394
	ft_printf("test %d|", test++);
	n = ft_printf("% +.7i", -446);
	ft_printf("|%d\n", n);
	

	// test 1395
	ft_printf("test %d|", test++);
	n = ft_printf("% +.3i", 3723);
	ft_printf("|%d\n", n);
	

	// test 1396
	ft_printf("test %d|", test++);
	n = ft_printf("% 05i", 43);
	ft_printf("|%d\n", n);
	

	// test 1397
	ft_printf("test %d|", test++);
	n = ft_printf("% 07i", -54);
	ft_printf("|%d\n", n);
	

	// test 1398
	ft_printf("test %d|", test++);
	n = ft_printf("% 03i", 0);
	ft_printf("|%d\n", n);
	

	// test 1399
	ft_printf("test %d|", test++);
	n = ft_printf("% 03i", 634);
	ft_printf("|%d\n", n);
	

	// test 1400
	ft_printf("test %d|", test++);
	n = ft_printf("% 04i", -532);
	ft_printf("|%d\n", n);
	

	// test 1401
	ft_printf("test %d|", test++);
	n = ft_printf("% 04i", -4825);
	ft_printf("|%d\n", n);
	

	// test 1402
	ft_printf("test %d|", test++);
	n = ft_printf("% +05i", 432);
	ft_printf("|%d\n", n);
	

	// test 1403
	ft_printf("test %d|", test++);
	n = ft_printf("% +04i", 0);
	ft_printf("|%d\n", n);
	

	// test 1404
	ft_printf("test %d|", test++);
	n = ft_printf("% 8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1405
	ft_printf("test %d|", test++);
	n = ft_printf("% 10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1406
	ft_printf("test %d|", test++);
	n = ft_printf("% 8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1407
	ft_printf("test %d|", test++);
	n = ft_printf("% 8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1408
	ft_printf("test %d|", test++);
	n = ft_printf("% 8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1409
	ft_printf("test %d|", test++);
	n = ft_printf("% 3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1410
	ft_printf("test %d|", test++);
	n = ft_printf("% 3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1411
	ft_printf("test %d|", test++);
	n = ft_printf("% 3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1412
	ft_printf("test %d|", test++);
	n = ft_printf("% 3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1413
	ft_printf("test %d|", test++);
	n = ft_printf("% -8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1414
	ft_printf("test %d|", test++);
	n = ft_printf("% -10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1415
	ft_printf("test %d|", test++);
	n = ft_printf("% -8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1416
	ft_printf("test %d|", test++);
	n = ft_printf("% -8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1417
	ft_printf("test %d|", test++);
	n = ft_printf("% -8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1418
	ft_printf("test %d|", test++);
	n = ft_printf("% -3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1419
	ft_printf("test %d|", test++);
	n = ft_printf("% -3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1420
	ft_printf("test %d|", test++);
	n = ft_printf("% -3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1421
	ft_printf("test %d|", test++);
	n = ft_printf("% -3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1422
	ft_printf("test %d|", test++);
	n = ft_printf("% +8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1423
	ft_printf("test %d|", test++);
	n = ft_printf("% +10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1424
	ft_printf("test %d|", test++);
	n = ft_printf("% +8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1425
	ft_printf("test %d|", test++);
	n = ft_printf("% +8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1426
	ft_printf("test %d|", test++);
	n = ft_printf("% +8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1427
	ft_printf("test %d|", test++);
	n = ft_printf("% +3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1428
	ft_printf("test %d|", test++);
	n = ft_printf("% +3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1429
	ft_printf("test %d|", test++);
	n = ft_printf("% +3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1430
	ft_printf("test %d|", test++);
	n = ft_printf("% +3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1431
	ft_printf("test %d|", test++);
	n = ft_printf("% +-8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1432
	ft_printf("test %d|", test++);
	n = ft_printf("% +-10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1433
	ft_printf("test %d|", test++);
	n = ft_printf("% +-8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1434
	ft_printf("test %d|", test++);
	n = ft_printf("% +-8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1435
	ft_printf("test %d|", test++);
	n = ft_printf("% +-8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1436
	ft_printf("test %d|", test++);
	n = ft_printf("% +-3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1437
	ft_printf("test %d|", test++);
	n = ft_printf("% +-3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1438
	ft_printf("test %d|", test++);
	n = ft_printf("% +-3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1439
	ft_printf("test %d|", test++);
	n = ft_printf("% +-3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1440
	ft_printf("test %d|", test++);
	n = ft_printf("% 08.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1441
	ft_printf("test %d|", test++);
	n = ft_printf("% 010.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1442
	ft_printf("test %d|", test++);
	n = ft_printf("% 08.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1443
	ft_printf("test %d|", test++);
	n = ft_printf("% 08.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1444
	ft_printf("test %d|", test++);
	n = ft_printf("% 08.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1445
	ft_printf("test %d|", test++);
	n = ft_printf("% 03.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1446
	ft_printf("test %d|", test++);
	n = ft_printf("% 03.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1447
	ft_printf("test %d|", test++);
	n = ft_printf("% 03.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1448
	ft_printf("test %d|", test++);
	n = ft_printf("% 03.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1449
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1450
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1451
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1452
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1453
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1454
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1455
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1456
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1457
	ft_printf("test %d|", test++);
	n = ft_printf("% 0-3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1458
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1459
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1460
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1461
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1462
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1463
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1464
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1465
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1466
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1467
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1468
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1469
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1470
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1471
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1472
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1473
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1474
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1475
	ft_printf("test %d|", test++);
	n = ft_printf("% 0+-3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1476
	ft_printf("test %d|", test++);
	n = ft_printf("%+.0i", 0);
	ft_printf("|%d\n", n);
	

	// test 1477
	ft_printf("test %d|", test++);
	n = ft_printf("%+.i", 0);
	ft_printf("|%d\n", n);
	

	// test 1478
	ft_printf("test %d|", test++);
	n = ft_printf("%+5.0i", 0);
	ft_printf("|%d\n", n);
	

	// test 1479
	ft_printf("test %d|", test++);
	n = ft_printf("%+5.i", 0);
	ft_printf("|%d\n", n);
	

	// test 1480
	ft_printf("test %d|", test++);
	n = ft_printf("%+-5.0i", 0);
	ft_printf("|%d\n", n);
	

	// test 1481
	ft_printf("test %d|", test++);
	n = ft_printf("%+-5.i", 0);
	ft_printf("|%d\n", n);
	

	// test 1482
	ft_printf("test %d|", test++);
	n = ft_printf("%7i", 33);
	ft_printf("|%d\n", n);
	

	// test 1483
	ft_printf("test %d|", test++);
	n = ft_printf("%7i", -14);
	ft_printf("|%d\n", n);
	

	// test 1484
	ft_printf("test %d|", test++);
	n = ft_printf("%3i", 0);
	ft_printf("|%d\n", n);
	

	// test 1485
	ft_printf("test %d|", test++);
	n = ft_printf("%5i", 52625);
	ft_printf("|%d\n", n);
	

	// test 1486
	ft_printf("test %d|", test++);
	n = ft_printf("%5i", -2562);
	ft_printf("|%d\n", n);
	

	// test 1487
	ft_printf("test %d|", test++);
	n = ft_printf("%4i", 94827);
	ft_printf("|%d\n", n);
	

	// test 1488
	ft_printf("test %d|", test++);
	n = ft_printf("%4i", -2464);
	ft_printf("|%d\n", n);
	

	// test 1489
	ft_printf("test %d|", test++);
	n = ft_printf("%-7i", 33);
	ft_printf("|%d\n", n);
	

	// test 1490
	ft_printf("test %d|", test++);
	n = ft_printf("%-7i", -14);
	ft_printf("|%d\n", n);
	

	// test 1491
	ft_printf("test %d|", test++);
	n = ft_printf("%-3i", 0);
	ft_printf("|%d\n", n);
	

	// test 1492
	ft_printf("test %d|", test++);
	n = ft_printf("%-5i", 52625);
	ft_printf("|%d\n", n);
	

	// test 1493
	ft_printf("test %d|", test++);
	n = ft_printf("%-5i", -2562);
	ft_printf("|%d\n", n);
	

	// test 1494
	ft_printf("test %d|", test++);
	n = ft_printf("%-4i", 94827);
	ft_printf("|%d\n", n);
	

	// test 1495
	ft_printf("test %d|", test++);
	n = ft_printf("%-4i", -2464);
	ft_printf("|%d\n", n);
	

	// test 1496
	ft_printf("test %d|", test++);
	n = ft_printf("%.5i", 2);
	ft_printf("|%d\n", n);
	

	// test 1497
	ft_printf("test %d|", test++);
	n = ft_printf("%.6i", -3);
	ft_printf("|%d\n", n);
	

	// test 1498
	ft_printf("test %d|", test++);
	n = ft_printf("%.3i", 0);
	ft_printf("|%d\n", n);
	

	// test 1499
	ft_printf("test %d|", test++);
	n = ft_printf("%.4i", 5263);
	ft_printf("|%d\n", n);
	

	// test 1500
	ft_printf("test %d|", test++);
	n = ft_printf("%.4i", -2372);
	ft_printf("|%d\n", n);
	

	// test 1501
	ft_printf("test %d|", test++);
	n = ft_printf("%.3i", 13862);
	ft_printf("|%d\n", n);
	

	// test 1502
	ft_printf("test %d|", test++);
	n = ft_printf("%.3i", -23646);
	ft_printf("|%d\n", n);
	

	// test 1503
	ft_printf("test %d|", test++);
	n = ft_printf("%05i", 43);
	ft_printf("|%d\n", n);
	

	// test 1504
	ft_printf("test %d|", test++);
	n = ft_printf("%07i", -54);
	ft_printf("|%d\n", n);
	

	// test 1505
	ft_printf("test %d|", test++);
	n = ft_printf("%03i", 0);
	ft_printf("|%d\n", n);
	

	// test 1506
	ft_printf("test %d|", test++);
	n = ft_printf("%03i", 634);
	ft_printf("|%d\n", n);
	

	// test 1507
	ft_printf("test %d|", test++);
	n = ft_printf("%04i", -532);
	ft_printf("|%d\n", n);
	

	// test 1508
	ft_printf("test %d|", test++);
	n = ft_printf("%04i", -4825);
	ft_printf("|%d\n", n);
	

	// test 1509
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1510
	ft_printf("test %d|", test++);
	n = ft_printf("%10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1511
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1512
	ft_printf("test %d|", test++);
	n = ft_printf("%8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1513
	ft_printf("test %d|", test++);
	n = ft_printf("%8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1514
	ft_printf("test %d|", test++);
	n = ft_printf("%3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1515
	ft_printf("test %d|", test++);
	n = ft_printf("%3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1516
	ft_printf("test %d|", test++);
	n = ft_printf("%3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1517
	ft_printf("test %d|", test++);
	n = ft_printf("%3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1518
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1519
	ft_printf("test %d|", test++);
	n = ft_printf("%-10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1520
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1521
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1522
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1523
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1524
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1525
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1526
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1527
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1528
	ft_printf("test %d|", test++);
	n = ft_printf("%010.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1529
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1530
	ft_printf("test %d|", test++);
	n = ft_printf("%08.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1531
	ft_printf("test %d|", test++);
	n = ft_printf("%08.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1532
	ft_printf("test %d|", test++);
	n = ft_printf("%03.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1533
	ft_printf("test %d|", test++);
	n = ft_printf("%03.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1534
	ft_printf("test %d|", test++);
	n = ft_printf("%03.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1535
	ft_printf("test %d|", test++);
	n = ft_printf("%03.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1536
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5i", 34);
	ft_printf("|%d\n", n);
	

	// test 1537
	ft_printf("test %d|", test++);
	n = ft_printf("%0-10.5i", -216);
	ft_printf("|%d\n", n);
	

	// test 1538
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5i", 0);
	ft_printf("|%d\n", n);
	

	// test 1539
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.3i", 8375);
	ft_printf("|%d\n", n);
	

	// test 1540
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.3i", -8473);
	ft_printf("|%d\n", n);
	

	// test 1541
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.7i", 3267);
	ft_printf("|%d\n", n);
	

	// test 1542
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.7i", -2375);
	ft_printf("|%d\n", n);
	

	// test 1543
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.3i", 6983);
	ft_printf("|%d\n", n);
	

	// test 1544
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.3i", -8462);
	ft_printf("|%d\n", n);
	

	// test 1545
	ft_printf("test %d|", test++);
	n = ft_printf("%.0i", 0);
	ft_printf("|%d\n", n);
	

	// test 1546
	ft_printf("test %d|", test++);
	n = ft_printf("%.i", 0);
	ft_printf("|%d\n", n);
	

	// test 1547
	ft_printf("test %d|", test++);
	n = ft_printf("%5.0i", 0);
	ft_printf("|%d\n", n);
	

	// test 1548
	ft_printf("test %d|", test++);
	n = ft_printf("%5.i", 0);
	ft_printf("|%d\n", n);
	

	// test 1549
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.0i", 0);
	ft_printf("|%d\n", n);
	

	// test 1550
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.i", 0);
	ft_printf("|%d\n", n);
	

	// test 1551
	ft_printf("test %d|", test++);
	n = ft_printf("this %u number", 17);
	ft_printf("|%d\n", n);
	

	// test 1552
	ft_printf("test %d|", test++);
	n = ft_printf("this %u number", 0);
	ft_printf("|%d\n", n);
	

	// test 1553
	ft_printf("test %d|", test++);
	n = ft_printf("%u", 3);
	ft_printf("|%d\n", n);
	

	// test 1554
	ft_printf("test %d|", test++);
	n = ft_printf("%u", 4294967295u);
	ft_printf("|%d\n", n);
	

	// test 1555
	ft_printf("test %d|", test++);
	n = ft_printf("%7u", 33);
	ft_printf("|%d\n", n);
	

	// test 1556
	ft_printf("test %d|", test++);
	n = ft_printf("%3u", 0);
	ft_printf("|%d\n", n);
	

	// test 1557
	ft_printf("test %d|", test++);
	n = ft_printf("%5u", 52625);
	ft_printf("|%d\n", n);
	

	// test 1558
	ft_printf("test %d|", test++);
	n = ft_printf("%4u", 94827);
	ft_printf("|%d\n", n);
	

	// test 1559
	ft_printf("test %d|", test++);
	n = ft_printf("%-7u", 33);
	ft_printf("|%d\n", n);
	

	// test 1560
	ft_printf("test %d|", test++);
	n = ft_printf("%-3u", 0);
	ft_printf("|%d\n", n);
	

	// test 1561
	ft_printf("test %d|", test++);
	n = ft_printf("%-5u", 52625);
	ft_printf("|%d\n", n);
	

	// test 1562
	ft_printf("test %d|", test++);
	n = ft_printf("%-4u", 94827);
	ft_printf("|%d\n", n);
	

	// test 1563
	ft_printf("test %d|", test++);
	n = ft_printf("%.5u", 2);
	ft_printf("|%d\n", n);
	

	// test 1564
	ft_printf("test %d|", test++);
	n = ft_printf("%.3u", 0);
	ft_printf("|%d\n", n);
	

	// test 1565
	ft_printf("test %d|", test++);
	n = ft_printf("%.4u", 5263);
	ft_printf("|%d\n", n);
	

	// test 1566
	ft_printf("test %d|", test++);
	n = ft_printf("%.3u", 13862);
	ft_printf("|%d\n", n);
	

	// test 1567
	ft_printf("test %d|", test++);
	n = ft_printf("%05u", 43);
	ft_printf("|%d\n", n);
	

	// test 1568
	ft_printf("test %d|", test++);
	n = ft_printf("%03u", 0);
	ft_printf("|%d\n", n);
	

	// test 1569
	ft_printf("test %d|", test++);
	n = ft_printf("%03u", 634);
	ft_printf("|%d\n", n);
	

	// test 1570
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5u", 34);
	ft_printf("|%d\n", n);
	

	// test 1571
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5u", 0);
	ft_printf("|%d\n", n);
	

	// test 1572
	ft_printf("test %d|", test++);
	n = ft_printf("%8.3u", 8375);
	ft_printf("|%d\n", n);
	

	// test 1573
	ft_printf("test %d|", test++);
	n = ft_printf("%3.7u", 3267);
	ft_printf("|%d\n", n);
	

	// test 1574
	ft_printf("test %d|", test++);
	n = ft_printf("%3.3u", 6983);
	ft_printf("|%d\n", n);
	

	// test 1575
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5u", 34);
	ft_printf("|%d\n", n);
	

	// test 1576
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5u", 0);
	ft_printf("|%d\n", n);
	

	// test 1577
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.3u", 8375);
	ft_printf("|%d\n", n);
	

	// test 1578
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.7u", 3267);
	ft_printf("|%d\n", n);
	

	// test 1579
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3u", 6983);
	ft_printf("|%d\n", n);
	

	// test 1580
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5u", 34);
	ft_printf("|%d\n", n);
	

	// test 1581
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5u", 0);
	ft_printf("|%d\n", n);
	

	// test 1582
	ft_printf("test %d|", test++);
	n = ft_printf("%08.3u", 8375);
	ft_printf("|%d\n", n);
	

	// test 1583
	ft_printf("test %d|", test++);
	n = ft_printf("%03.7u", 3267);
	ft_printf("|%d\n", n);
	

	// test 1584
	ft_printf("test %d|", test++);
	n = ft_printf("%03.3u", 6983);
	ft_printf("|%d\n", n);
	

	// test 1585
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5u", 34);
	ft_printf("|%d\n", n);
	

	// test 1586
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5u", 0);
	ft_printf("|%d\n", n);
	

	// test 1587
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.3u", 8375);
	ft_printf("|%d\n", n);
	

	// test 1588
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.7u", 3267);
	ft_printf("|%d\n", n);
	

	// test 1589
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.3u", 6983);
	ft_printf("|%d\n", n);
	

	// test 1590
	ft_printf("test %d|", test++);
	n = ft_printf("%.0u", 0);
	ft_printf("|%d\n", n);
	

	// test 1591
	ft_printf("test %d|", test++);
	n = ft_printf("%.u", 0);
	ft_printf("|%d\n", n);
	

	// test 1592
	ft_printf("test %d|", test++);
	n = ft_printf("%5.0u", 0);
	ft_printf("|%d\n", n);
	

	// test 1593
	ft_printf("test %d|", test++);
	n = ft_printf("%5.u", 0);
	ft_printf("|%d\n", n);
	

	// test 1594
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.0u", 0);
	ft_printf("|%d\n", n);
	

	// test 1595
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.u", 0);
	ft_printf("|%d\n", n);
	

	// test 1596
	ft_printf("test %d|", test++);
	n = ft_printf("this %x number", 17);
	ft_printf("|%d\n", n);
	

	// test 1597
	ft_printf("test %d|", test++);
	n = ft_printf("this %x number", 0);
	ft_printf("|%d\n", n);
	

	// test 1598
	ft_printf("test %d|", test++);
	n = ft_printf("%x", 3);
	ft_printf("|%d\n", n);
	

	// test 1599
	ft_printf("test %d|", test++);
	n = ft_printf("%x", 4294967295u);
	ft_printf("|%d\n", n);
	

	// test 1600
	ft_printf("test %d|", test++);
	n = ft_printf("%7x", 33);
	ft_printf("|%d\n", n);
	

	// test 1601
	ft_printf("test %d|", test++);
	n = ft_printf("%3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1602
	ft_printf("test %d|", test++);
	n = ft_printf("%5x", 52625);
	ft_printf("|%d\n", n);
	

	// test 1603
	ft_printf("test %d|", test++);
	n = ft_printf("%2x", 94827);
	ft_printf("|%d\n", n);
	

	// test 1604
	ft_printf("test %d|", test++);
	n = ft_printf("%-7x", 33);
	ft_printf("|%d\n", n);
	

	// test 1605
	ft_printf("test %d|", test++);
	n = ft_printf("%-3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1606
	ft_printf("test %d|", test++);
	n = ft_printf("%-5x", 52625);
	ft_printf("|%d\n", n);
	

	// test 1607
	ft_printf("test %d|", test++);
	n = ft_printf("%-4x", 9648627);
	ft_printf("|%d\n", n);
	

	// test 1608
	ft_printf("test %d|", test++);
	n = ft_printf("%.5x", 21);
	ft_printf("|%d\n", n);
	

	// test 1609
	ft_printf("test %d|", test++);
	n = ft_printf("%.3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1610
	ft_printf("test %d|", test++);
	n = ft_printf("%.4x", 5263);
	ft_printf("|%d\n", n);
	

	// test 1611
	ft_printf("test %d|", test++);
	n = ft_printf("%.3x", 938862);
	ft_printf("|%d\n", n);
	

	// test 1612
	ft_printf("test %d|", test++);
	n = ft_printf("%05x", 43);
	ft_printf("|%d\n", n);
	

	// test 1613
	ft_printf("test %d|", test++);
	n = ft_printf("%03x", 0);
	ft_printf("|%d\n", n);
	

	// test 1614
	ft_printf("test %d|", test++);
	n = ft_printf("%03x", 698334);
	ft_printf("|%d\n", n);
	

	// test 1615
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5x", 34);
	ft_printf("|%d\n", n);
	

	// test 1616
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5x", 0);
	ft_printf("|%d\n", n);
	

	// test 1617
	ft_printf("test %d|", test++);
	n = ft_printf("%8.3x", 8375);
	ft_printf("|%d\n", n);
	

	// test 1618
	ft_printf("test %d|", test++);
	n = ft_printf("%2.7x", 3267);
	ft_printf("|%d\n", n);
	

	// test 1619
	ft_printf("test %d|", test++);
	n = ft_printf("%3.3x", 6983);
	ft_printf("|%d\n", n);
	

	// test 1620
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5x", 34);
	ft_printf("|%d\n", n);
	

	// test 1621
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5x", 0);
	ft_printf("|%d\n", n);
	

	// test 1622
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.3x", 8375);
	ft_printf("|%d\n", n);
	

	// test 1623
	ft_printf("test %d|", test++);
	n = ft_printf("%-2.7x", 3267);
	ft_printf("|%d\n", n);
	

	// test 1624
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3x", 6983);
	ft_printf("|%d\n", n);
	

	// test 1625
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5x", 34);
	ft_printf("|%d\n", n);
	

	// test 1626
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5x", 0);
	ft_printf("|%d\n", n);
	

	// test 1627
	ft_printf("test %d|", test++);
	n = ft_printf("%08.3x", 8375);
	ft_printf("|%d\n", n);
	

	// test 1628
	ft_printf("test %d|", test++);
	n = ft_printf("%02.7x", 3267);
	ft_printf("|%d\n", n);
	

	// test 1629
	ft_printf("test %d|", test++);
	n = ft_printf("%03.3x", 6983);
	ft_printf("|%d\n", n);
	

	// test 1630
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5x", 34);
	ft_printf("|%d\n", n);
	

	// test 1631
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5x", 0);
	ft_printf("|%d\n", n);
	

	// test 1632
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.3x", 8375);
	ft_printf("|%d\n", n);
	

	// test 1633
	ft_printf("test %d|", test++);
	n = ft_printf("%0-2.7x", 3267);
	ft_printf("|%d\n", n);
	

	// test 1634
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.3x", 6983);
	ft_printf("|%d\n", n);
	

	// test 1635
	ft_printf("test %d|", test++);
	n = ft_printf("%.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1636
	ft_printf("test %d|", test++);
	n = ft_printf("%.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1637
	ft_printf("test %d|", test++);
	n = ft_printf("%5.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1638
	ft_printf("test %d|", test++);
	n = ft_printf("%5.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1639
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1640
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1641
	ft_printf("test %d|", test++);
	n = ft_printf("this %x number", 17);
	ft_printf("|%d\n", n);
	

	// test 1642
	ft_printf("test %d|", test++);
	n = ft_printf("this %x number", 0);
	ft_printf("|%d\n", n);
	

	// test 1643
	ft_printf("test %d|", test++);
	n = ft_printf("%x", 3);
	ft_printf("|%d\n", n);
	

	// test 1644
	ft_printf("test %d|", test++);
	n = ft_printf("%x", 4294967295u);
	ft_printf("|%d\n", n);
	

	// test 1645
	ft_printf("test %d|", test++);
	n = ft_printf("%7x", 33);
	ft_printf("|%d\n", n);
	

	// test 1646
	ft_printf("test %d|", test++);
	n = ft_printf("%3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1647
	ft_printf("test %d|", test++);
	n = ft_printf("%5x", 52625);
	ft_printf("|%d\n", n);
	

	// test 1648
	ft_printf("test %d|", test++);
	n = ft_printf("%2x", 94827);
	ft_printf("|%d\n", n);
	

	// test 1649
	ft_printf("test %d|", test++);
	n = ft_printf("%-7x", 33);
	ft_printf("|%d\n", n);
	

	// test 1650
	ft_printf("test %d|", test++);
	n = ft_printf("%-3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1651
	ft_printf("test %d|", test++);
	n = ft_printf("%-5x", 52625);
	ft_printf("|%d\n", n);
	

	// test 1652
	ft_printf("test %d|", test++);
	n = ft_printf("%-4x", 9648627);
	ft_printf("|%d\n", n);
	

	// test 1653
	ft_printf("test %d|", test++);
	n = ft_printf("%.5x", 21);
	ft_printf("|%d\n", n);
	

	// test 1654
	ft_printf("test %d|", test++);
	n = ft_printf("%.3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1655
	ft_printf("test %d|", test++);
	n = ft_printf("%.4x", 5263);
	ft_printf("|%d\n", n);
	

	// test 1656
	ft_printf("test %d|", test++);
	n = ft_printf("%.3x", 938862);
	ft_printf("|%d\n", n);
	

	// test 1657
	ft_printf("test %d|", test++);
	n = ft_printf("%05x", 43);
	ft_printf("|%d\n", n);
	

	// test 1658
	ft_printf("test %d|", test++);
	n = ft_printf("%03x", 0);
	ft_printf("|%d\n", n);
	

	// test 1659
	ft_printf("test %d|", test++);
	n = ft_printf("%03x", 698334);
	ft_printf("|%d\n", n);
	

	// test 1660
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5x", 34);
	ft_printf("|%d\n", n);
	

	// test 1661
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5x", 0);
	ft_printf("|%d\n", n);
	

	// test 1662
	ft_printf("test %d|", test++);
	n = ft_printf("%8.3x", 8375);
	ft_printf("|%d\n", n);
	

	// test 1663
	ft_printf("test %d|", test++);
	n = ft_printf("%2.7x", 3267);
	ft_printf("|%d\n", n);
	

	// test 1664
	ft_printf("test %d|", test++);
	n = ft_printf("%3.3x", 6983);
	ft_printf("|%d\n", n);
	

	// test 1665
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5x", 34);
	ft_printf("|%d\n", n);
	

	// test 1666
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5x", 0);
	ft_printf("|%d\n", n);
	

	// test 1667
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.3x", 8375);
	ft_printf("|%d\n", n);
	

	// test 1668
	ft_printf("test %d|", test++);
	n = ft_printf("%-2.7x", 3267);
	ft_printf("|%d\n", n);
	

	// test 1669
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3x", 6983);
	ft_printf("|%d\n", n);
	

	// test 1670
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5x", 34);
	ft_printf("|%d\n", n);
	

	// test 1671
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5x", 0);
	ft_printf("|%d\n", n);
	

	// test 1672
	ft_printf("test %d|", test++);
	n = ft_printf("%08.3x", 8375);
	ft_printf("|%d\n", n);
	

	// test 1673
	ft_printf("test %d|", test++);
	n = ft_printf("%02.7x", 3267);
	ft_printf("|%d\n", n);
	

	// test 1674
	ft_printf("test %d|", test++);
	n = ft_printf("%03.3x", 6983);
	ft_printf("|%d\n", n);
	

	// test 1675
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5x", 34);
	ft_printf("|%d\n", n);
	

	// test 1676
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5x", 0);
	ft_printf("|%d\n", n);
	

	// test 1677
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.3x", 8375);
	ft_printf("|%d\n", n);
	

	// test 1678
	ft_printf("test %d|", test++);
	n = ft_printf("%0-2.7x", 3267);
	ft_printf("|%d\n", n);
	

	// test 1679
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.3x", 6983);
	ft_printf("|%d\n", n);
	

	// test 1680
	ft_printf("test %d|", test++);
	n = ft_printf("%.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1681
	ft_printf("test %d|", test++);
	n = ft_printf("%.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1682
	ft_printf("test %d|", test++);
	n = ft_printf("%5.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1683
	ft_printf("test %d|", test++);
	n = ft_printf("%5.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1684
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1685
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1686
	ft_printf("test %d|", test++);
	n = ft_printf("%#.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1687
	ft_printf("test %d|", test++);
	n = ft_printf("%#.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1688
	ft_printf("test %d|", test++);
	n = ft_printf("%#5.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1689
	ft_printf("test %d|", test++);
	n = ft_printf("%#5.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1690
	ft_printf("test %d|", test++);
	n = ft_printf("%#-5.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1691
	ft_printf("test %d|", test++);
	n = ft_printf("%#-5.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1692
	ft_printf("test %d|", test++);
	n = ft_printf("%#x", 4294967295u);
	ft_printf("|%d\n", n);
	

	// test 1693
	ft_printf("test %d|", test++);
	n = ft_printf("%#7x", 33);
	ft_printf("|%d\n", n);
	

	// test 1694
	ft_printf("test %d|", test++);
	n = ft_printf("%#3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1695
	ft_printf("test %d|", test++);
	n = ft_printf("%#5x", 52625);
	ft_printf("|%d\n", n);
	

	// test 1696
	ft_printf("test %d|", test++);
	n = ft_printf("%#2x", 94827);
	ft_printf("|%d\n", n);
	

	// test 1697
	ft_printf("test %d|", test++);
	n = ft_printf("%#-7x", 33);
	ft_printf("|%d\n", n);
	

	// test 1698
	ft_printf("test %d|", test++);
	n = ft_printf("%#-3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1699
	ft_printf("test %d|", test++);
	n = ft_printf("%#-5x", 52625);
	ft_printf("|%d\n", n);
	

	// test 1700
	ft_printf("test %d|", test++);
	n = ft_printf("%#-4x", 9648627);
	ft_printf("|%d\n", n);
	

	// test 1701
	ft_printf("test %d|", test++);
	n = ft_printf("%#.5x", 21);
	ft_printf("|%d\n", n);
	

	// test 1702
	ft_printf("test %d|", test++);
	n = ft_printf("%#.3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1703
	ft_printf("test %d|", test++);
	n = ft_printf("%#.4x", 5263);
	ft_printf("|%d\n", n);
	

	// test 1704
	ft_printf("test %d|", test++);
	n = ft_printf("%#.3x", 938862);
	ft_printf("|%d\n", n);
	

	// test 1705
	ft_printf("test %d|", test++);
	n = ft_printf("%#05x", 43);
	ft_printf("|%d\n", n);
	

	// test 1706
	ft_printf("test %d|", test++);
	n = ft_printf("%#03x", 0);
	ft_printf("|%d\n", n);
	

	// test 1707
	ft_printf("test %d|", test++);
	n = ft_printf("%#03x", 698334);
	ft_printf("|%d\n", n);
	

	// test 1708
	ft_printf("test %d|", test++);
	n = ft_printf("%#8.5x", 34);
	ft_printf("|%d\n", n);
	

	// test 1709
	ft_printf("test %d|", test++);
	n = ft_printf("%#8.5x", 0);
	ft_printf("|%d\n", n);
	

	// test 1710
	ft_printf("test %d|", test++);
	n = ft_printf("%#x", 4294967295u);
	ft_printf("|%d\n", n);
	

	// test 1711
	ft_printf("test %d|", test++);
	n = ft_printf("%#7x", 33);
	ft_printf("|%d\n", n);
	

	// test 1712
	ft_printf("test %d|", test++);
	n = ft_printf("%#3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1713
	ft_printf("test %d|", test++);
	n = ft_printf("%#5x", 52625);
	ft_printf("|%d\n", n);
	

	// test 1714
	ft_printf("test %d|", test++);
	n = ft_printf("%#2x", 94827);
	ft_printf("|%d\n", n);
	

	// test 1715
	ft_printf("test %d|", test++);
	n = ft_printf("%#-7x", 33);
	ft_printf("|%d\n", n);
	

	// test 1716
	ft_printf("test %d|", test++);
	n = ft_printf("%#-3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1717
	ft_printf("test %d|", test++);
	n = ft_printf("%#-5x", 52625);
	ft_printf("|%d\n", n);
	

	// test 1718
	ft_printf("test %d|", test++);
	n = ft_printf("%#-4x", 9648627);
	ft_printf("|%d\n", n);
	

	// test 1719
	ft_printf("test %d|", test++);
	n = ft_printf("%#.5x", 21);
	ft_printf("|%d\n", n);
	

	// test 1720
	ft_printf("test %d|", test++);
	n = ft_printf("%#.3x", 0);
	ft_printf("|%d\n", n);
	

	// test 1721
	ft_printf("test %d|", test++);
	n = ft_printf("%#.4x", 5263);
	ft_printf("|%d\n", n);
	

	// test 1722
	ft_printf("test %d|", test++);
	n = ft_printf("%#.3x", 938862);
	ft_printf("|%d\n", n);
	

	// test 1723
	ft_printf("test %d|", test++);
	n = ft_printf("%#05x", 43);
	ft_printf("|%d\n", n);
	

	// test 1724
	ft_printf("test %d|", test++);
	n = ft_printf("%#03x", 0);
	ft_printf("|%d\n", n);
	

	// test 1725
	ft_printf("test %d|", test++);
	n = ft_printf("%#03x", 698334);
	ft_printf("|%d\n", n);
	

	// test 1726
	ft_printf("test %d|", test++);
	n = ft_printf("%#8.5x", 34);
	ft_printf("|%d\n", n);
	

	// test 1727
	ft_printf("test %d|", test++);
	n = ft_printf("%#8.5x", 0);
	ft_printf("|%d\n", n);
	

	// test 1728
	ft_printf("test %d|", test++);
	n = ft_printf("%#.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1729
	ft_printf("test %d|", test++);
	n = ft_printf("%#.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1730
	ft_printf("test %d|", test++);
	n = ft_printf("%#5.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1731
	ft_printf("test %d|", test++);
	n = ft_printf("%#5.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1732
	ft_printf("test %d|", test++);
	n = ft_printf("%#-5.0x", 0);
	ft_printf("|%d\n", n);
	

	// test 1733
	ft_printf("test %d|", test++);
	n = ft_printf("%#-5.x", 0);
	ft_printf("|%d\n", n);
	

	// test 1734
	ft_printf("test %d|", test++);
	n = ft_printf("this %X number", 17);
	ft_printf("|%d\n", n);
	

	// test 1735
	ft_printf("test %d|", test++);
	n = ft_printf("this %X number", 0);
	ft_printf("|%d\n", n);
	

	// test 1736
	ft_printf("test %d|", test++);
	n = ft_printf("%X", 3);
	ft_printf("|%d\n", n);
	

	// test 1737
	ft_printf("test %d|", test++);
	n = ft_printf("%X", 4294967295u);
	ft_printf("|%d\n", n);
	

	// test 1738
	ft_printf("test %d|", test++);
	n = ft_printf("%7X", 33);
	ft_printf("|%d\n", n);
	

	// test 1739
	ft_printf("test %d|", test++);
	n = ft_printf("%3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1740
	ft_printf("test %d|", test++);
	n = ft_printf("%5X", 52625);
	ft_printf("|%d\n", n);
	

	// test 1741
	ft_printf("test %d|", test++);
	n = ft_printf("%2X", 94827);
	ft_printf("|%d\n", n);
	

	// test 1742
	ft_printf("test %d|", test++);
	n = ft_printf("%-7X", 33);
	ft_printf("|%d\n", n);
	

	// test 1743
	ft_printf("test %d|", test++);
	n = ft_printf("%-3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1744
	ft_printf("test %d|", test++);
	n = ft_printf("%-5X", 52625);
	ft_printf("|%d\n", n);
	

	// test 1745
	ft_printf("test %d|", test++);
	n = ft_printf("%-4X", 9648627);
	ft_printf("|%d\n", n);
	

	// test 1746
	ft_printf("test %d|", test++);
	n = ft_printf("%.5X", 21);
	ft_printf("|%d\n", n);
	

	// test 1747
	ft_printf("test %d|", test++);
	n = ft_printf("%.3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1748
	ft_printf("test %d|", test++);
	n = ft_printf("%.4X", 5263);
	ft_printf("|%d\n", n);
	

	// test 1749
	ft_printf("test %d|", test++);
	n = ft_printf("%.3X", 938862);
	ft_printf("|%d\n", n);
	

	// test 1750
	ft_printf("test %d|", test++);
	n = ft_printf("%05X", 43);
	ft_printf("|%d\n", n);
	

	// test 1751
	ft_printf("test %d|", test++);
	n = ft_printf("%03X", 0);
	ft_printf("|%d\n", n);
	

	// test 1752
	ft_printf("test %d|", test++);
	n = ft_printf("%03X", 698334);
	ft_printf("|%d\n", n);
	

	// test 1753
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1754
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1755
	ft_printf("test %d|", test++);
	n = ft_printf("%8.3X", 8375);
	ft_printf("|%d\n", n);
	

	// test 1756
	ft_printf("test %d|", test++);
	n = ft_printf("%2.7X", 3267);
	ft_printf("|%d\n", n);
	

	// test 1757
	ft_printf("test %d|", test++);
	n = ft_printf("%3.3X", 6983);
	ft_printf("|%d\n", n);
	

	// test 1758
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1759
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1760
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.3X", 8375);
	ft_printf("|%d\n", n);
	

	// test 1761
	ft_printf("test %d|", test++);
	n = ft_printf("%-2.7X", 3267);
	ft_printf("|%d\n", n);
	

	// test 1762
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3X", 6983);
	ft_printf("|%d\n", n);
	

	// test 1763
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1764
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1765
	ft_printf("test %d|", test++);
	n = ft_printf("%08.3X", 8375);
	ft_printf("|%d\n", n);
	

	// test 1766
	ft_printf("test %d|", test++);
	n = ft_printf("%02.7X", 3267);
	ft_printf("|%d\n", n);
	

	// test 1767
	ft_printf("test %d|", test++);
	n = ft_printf("%03.3X", 6983);
	ft_printf("|%d\n", n);
	

	// test 1768
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1769
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1770
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.3X", 8375);
	ft_printf("|%d\n", n);
	

	// test 1771
	ft_printf("test %d|", test++);
	n = ft_printf("%0-2.7X", 3267);
	ft_printf("|%d\n", n);
	

	// test 1772
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.3X", 6983);
	ft_printf("|%d\n", n);
	

	// test 1773
	ft_printf("test %d|", test++);
	n = ft_printf("this %#X number", 17);
	ft_printf("|%d\n", n);
	

	// test 1774
	ft_printf("test %d|", test++);
	n = ft_printf("this %#X number", 0);
	ft_printf("|%d\n", n);
	

	// test 1775
	ft_printf("test %d|", test++);
	n = ft_printf("%#X", 3);
	ft_printf("|%d\n", n);
	

	// test 1776
	ft_printf("test %d|", test++);
	n = ft_printf("%#X", 4294967295u);
	ft_printf("|%d\n", n);
	

	// test 1777
	ft_printf("test %d|", test++);
	n = ft_printf("%#7X", 33);
	ft_printf("|%d\n", n);
	

	// test 1778
	ft_printf("test %d|", test++);
	n = ft_printf("%#3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1779
	ft_printf("test %d|", test++);
	n = ft_printf("%#7X", 52625);
	ft_printf("|%d\n", n);
	

	// test 1780
	ft_printf("test %d|", test++);
	n = ft_printf("%#2X", 94827);
	ft_printf("|%d\n", n);
	

	// test 1781
	ft_printf("test %d|", test++);
	n = ft_printf("%#-7X", 33);
	ft_printf("|%d\n", n);
	

	// test 1782
	ft_printf("test %d|", test++);
	n = ft_printf("%#-3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1783
	ft_printf("test %d|", test++);
	n = ft_printf("%#-7X", 52625);
	ft_printf("|%d\n", n);
	

	// test 1784
	ft_printf("test %d|", test++);
	n = ft_printf("%#-4X", 9648627);
	ft_printf("|%d\n", n);
	

	// test 1785
	ft_printf("test %d|", test++);
	n = ft_printf("%#.5X", 21);
	ft_printf("|%d\n", n);
	

	// test 1786
	ft_printf("test %d|", test++);
	n = ft_printf("%#.3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1787
	ft_printf("test %d|", test++);
	n = ft_printf("%#.4X", 5263);
	ft_printf("|%d\n", n);
	

	// test 1788
	ft_printf("test %d|", test++);
	n = ft_printf("%#.3X", 938862);
	ft_printf("|%d\n", n);
	

	// test 1789
	ft_printf("test %d|", test++);
	n = ft_printf("%#05X", 43);
	ft_printf("|%d\n", n);
	

	// test 1790
	ft_printf("test %d|", test++);
	n = ft_printf("%#03X", 0);
	ft_printf("|%d\n", n);
	

	// test 1791
	ft_printf("test %d|", test++);
	n = ft_printf("%#03X", 698334);
	ft_printf("|%d\n", n);
	

	// test 1792
	ft_printf("test %d|", test++);
	n = ft_printf("%#8.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1793
	ft_printf("test %d|", test++);
	n = ft_printf("%#8.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1794
	ft_printf("test %d|", test++);
	n = ft_printf("%#8.3X", 8375);
	ft_printf("|%d\n", n);
	

	// test 1795
	ft_printf("test %d|", test++);
	n = ft_printf("%#2.7X", 3267);
	ft_printf("|%d\n", n);
	

	// test 1796
	ft_printf("test %d|", test++);
	n = ft_printf("%#3.3X", 6983);
	ft_printf("|%d\n", n);
	

	// test 1797
	ft_printf("test %d|", test++);
	n = ft_printf("%#-8.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1798
	ft_printf("test %d|", test++);
	n = ft_printf("%#-8.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1799
	ft_printf("test %d|", test++);
	n = ft_printf("%#-8.3X", 8375);
	ft_printf("%5.X", 0);
	ft_printf("|%d\n", n);
	

	// test 1800
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.X", 0);
	ft_printf("|%d\n", n);
	

	// test 1801
	ft_printf("test %d|", test++);
	n = ft_printf("%#.0X", 0);
	ft_printf("|%d\n", n);
	

	// test 1802
	ft_printf("test %d|", test++);
	n = ft_printf("%#.X", 0);
	ft_printf("|%d\n", n);
	

	// test 1803
	ft_printf("test %d|", test++);
	n = ft_printf("%#5.0X", 0);
	ft_printf("|%d\n", n);
	

	// test 1804
	ft_printf("test %d|", test++);
	n = ft_printf("%#5.X", 0);
	ft_printf("|%d\n", n);
	

	// test 1805
	ft_printf("test %d|", test++);
	n = ft_printf("%#-5.0X", 0);
	ft_printf("|%d\n", n);
	

	// test 1806
	ft_printf("test %d|", test++);
	n = ft_printf("%#-5.X", 0);
	ft_printf("|%d\n", n);
	

	// test 1807
	ft_printf("test %d|", test++);
	n = ft_printf("this %X number", 17);
	ft_printf("|%d\n", n);
	

	// test 1808
	ft_printf("test %d|", test++);
	n = ft_printf("this %X number", 0);
	ft_printf("|%d\n", n);
	

	// test 1809
	ft_printf("test %d|", test++);
	n = ft_printf("%X", 3);
	ft_printf("|%d\n", n);
	

	// test 1810
	ft_printf("test %d|", test++);
	n = ft_printf("%X", 4294967295u);
	ft_printf("|%d\n", n);
	

	// test 1811
	ft_printf("test %d|", test++);
	n = ft_printf("%7X", 33);
	ft_printf("|%d\n", n);
	

	// test 1812
	ft_printf("test %d|", test++);
	n = ft_printf("%3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1813
	ft_printf("test %d|", test++);
	n = ft_printf("%5X", 52625);
	ft_printf("|%d\n", n);
	

	// test 1814
	ft_printf("test %d|", test++);
	n = ft_printf("%2X", 94827);
	ft_printf("|%d\n", n);
	

	// test 1815
	ft_printf("test %d|", test++);
	n = ft_printf("%-7X", 33);
	ft_printf("|%d\n", n);
	

	// test 1816
	ft_printf("test %d|", test++);
	n = ft_printf("%-3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1817
	ft_printf("test %d|", test++);
	n = ft_printf("%-5X", 52625);
	ft_printf("|%d\n", n);
	

	// test 1818
	ft_printf("test %d|", test++);
	n = ft_printf("%-4X", 9648627);
	ft_printf("|%d\n", n);
	

	// test 1819
	ft_printf("test %d|", test++);
	n = ft_printf("%.5X", 21);
	ft_printf("|%d\n", n);
	

	// test 1820
	ft_printf("test %d|", test++);
	n = ft_printf("%.3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1821
	ft_printf("test %d|", test++);
	n = ft_printf("%.4X", 5263);
	ft_printf("|%d\n", n);
	

	// test 1822
	ft_printf("test %d|", test++);
	n = ft_printf("%.3X", 938862);
	ft_printf("|%d\n", n);
	

	// test 1823
	ft_printf("test %d|", test++);
	n = ft_printf("%05X", 43);
	ft_printf("|%d\n", n);
	

	// test 1824
	ft_printf("test %d|", test++);
	n = ft_printf("%03X", 0);
	ft_printf("|%d\n", n);
	

	// test 1825
	ft_printf("test %d|", test++);
	n = ft_printf("%03X", 698334);
	ft_printf("|%d\n", n);
	

	// test 1826
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1827
	ft_printf("test %d|", test++);
	n = ft_printf("%8.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1828
	ft_printf("test %d|", test++);
	n = ft_printf("%8.3X", 8375);
	ft_printf("|%d\n", n);
	

	// test 1829
	ft_printf("test %d|", test++);
	n = ft_printf("%2.7X", 3267);
	ft_printf("|%d\n", n);
	

	// test 1830
	ft_printf("test %d|", test++);
	n = ft_printf("%3.3X", 6983);
	ft_printf("|%d\n", n);
	

	// test 1831
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1832
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1833
	ft_printf("test %d|", test++);
	n = ft_printf("%-8.3X", 8375);
	ft_printf("|%d\n", n);
	

	// test 1834
	ft_printf("test %d|", test++);
	n = ft_printf("%-2.7X", 3267);
	ft_printf("|%d\n", n);
	

	// test 1835
	ft_printf("test %d|", test++);
	n = ft_printf("%-3.3X", 6983);
	ft_printf("|%d\n", n);
	

	// test 1836
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1837
	ft_printf("test %d|", test++);
	n = ft_printf("%08.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1838
	ft_printf("test %d|", test++);
	n = ft_printf("%08.3X", 8375);
	ft_printf("|%d\n", n);
	

	// test 1839
	ft_printf("test %d|", test++);
	n = ft_printf("%02.7X", 3267);
	ft_printf("|%d\n", n);
	

	// test 1840
	ft_printf("test %d|", test++);
	n = ft_printf("%03.3X", 6983);
	ft_printf("|%d\n", n);
	

	// test 1841
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1842
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1843
	ft_printf("test %d|", test++);
	n = ft_printf("%0-8.3X", 8375);
	ft_printf("|%d\n", n);
	

	// test 1844
	ft_printf("test %d|", test++);
	n = ft_printf("%0-2.7X", 3267);
	ft_printf("|%d\n", n);
	

	// test 1845
	ft_printf("test %d|", test++);
	n = ft_printf("%0-3.3X", 6983);
	ft_printf("|%d\n", n);
	

	// test 1846
	ft_printf("test %d|", test++);
	n = ft_printf("this %#X number", 17);
	ft_printf("|%d\n", n);
	

	// test 1847
	ft_printf("test %d|", test++);
	n = ft_printf("this %#X number", 0);
	ft_printf("|%d\n", n);
	

	// test 1848
	ft_printf("test %d|", test++);
	n = ft_printf("%#X", 3);
	ft_printf("|%d\n", n);
	

	// test 1849
	ft_printf("test %d|", test++);
	n = ft_printf("%#X", 4294967295u);
	ft_printf("|%d\n", n);
	

	// test 1850
	ft_printf("test %d|", test++);
	n = ft_printf("%#7X", 33);
	ft_printf("|%d\n", n);
	

	// test 1851
	ft_printf("test %d|", test++);
	n = ft_printf("%#3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1852
	ft_printf("test %d|", test++);
	n = ft_printf("%#7X", 52625);
	ft_printf("|%d\n", n);
	

	// test 1853
	ft_printf("test %d|", test++);
	n = ft_printf("%#2X", 94827);
	ft_printf("|%d\n", n);
	

	// test 1854
	ft_printf("test %d|", test++);
	n = ft_printf("%#-7X", 33);
	ft_printf("|%d\n", n);
	

	// test 1855
	ft_printf("test %d|", test++);
	n = ft_printf("%#-3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1856
	ft_printf("test %d|", test++);
	n = ft_printf("%#-7X", 52625);
	ft_printf("|%d\n", n);
	

	// test 1857
	ft_printf("test %d|", test++);
	n = ft_printf("%#-4X", 9648627);
	ft_printf("|%d\n", n);
	

	// test 1858
	ft_printf("test %d|", test++);
	n = ft_printf("%#.5X", 21);
	ft_printf("|%d\n", n);
	

	// test 1859
	ft_printf("test %d|", test++);
	n = ft_printf("%#.3X", 0);
	ft_printf("|%d\n", n);
	

	// test 1860
	ft_printf("test %d|", test++);
	n = ft_printf("%#.4X", 5263);
	ft_printf("|%d\n", n);
	

	// test 1861
	ft_printf("test %d|", test++);
	n = ft_printf("%#.3X", 938862);
	ft_printf("|%d\n", n);
	

	// test 1862
	ft_printf("test %d|", test++);
	n = ft_printf("%#05X", 43);
	ft_printf("|%d\n", n);
	

	// test 1863
	ft_printf("test %d|", test++);
	n = ft_printf("%#03X", 0);
	ft_printf("|%d\n", n);
	

	// test 1864
	ft_printf("test %d|", test++);
	n = ft_printf("%#03X", 698334);
	ft_printf("|%d\n", n);
	

	// test 1865
	ft_printf("test %d|", test++);
	n = ft_printf("%#8.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1866
	ft_printf("test %d|", test++);
	n = ft_printf("%#8.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1867
	ft_printf("test %d|", test++);
	n = ft_printf("%#8.3X", 8375);
	ft_printf("|%d\n", n);
	

	// test 1868
	ft_printf("test %d|", test++);
	n = ft_printf("%#2.7X", 3267);
	ft_printf("|%d\n", n);
	

	// test 1869
	ft_printf("test %d|", test++);
	n = ft_printf("%#3.3X", 6983);
	ft_printf("|%d\n", n);
	

	// test 1870
	ft_printf("test %d|", test++);
	n = ft_printf("%#-8.5X", 34);
	ft_printf("|%d\n", n);
	

	// test 1871
	ft_printf("test %d|", test++);
	n = ft_printf("%#-8.5X", 0);
	ft_printf("|%d\n", n);
	

	// test 1872
	ft_printf("test %d|", test++);
	n = ft_printf("%#-8.3X", 8375);
	ft_printf("%5.X", 0);
	ft_printf("|%d\n", n);
	

	// test 1873
	ft_printf("test %d|", test++);
	n = ft_printf("%-5.X", 0);
	ft_printf("|%d\n", n);
	

	// test 1874
	ft_printf("test %d|", test++);
	n = ft_printf("%#.0X", 0);
	ft_printf("|%d\n", n);
	

	// test 1875
	ft_printf("test %d|", test++);
	n = ft_printf("%#.X", 0);
	ft_printf("|%d\n", n);
	

	// test 1876
	ft_printf("test %d|", test++);
	n = ft_printf("%#5.0X", 0);
	ft_printf("|%d\n", n);
	

	// test 1877
	ft_printf("test %d|", test++);
	n = ft_printf("%#5.X", 0);
	ft_printf("|%d\n", n);
	

	// test 1878
	ft_printf("test %d|", test++);
	n = ft_printf("%#-5.0X", 0);
	ft_printf("|%d\n", n);
	

	// test 1879
	ft_printf("test %d|", test++);
	n = ft_printf("%#-5.X", 0);

	ft_printf("|%d\n", n);
	

	// test 1880
	ft_printf("test %d|", test++);
	n = ft_printf("%p", NULL);
	ft_printf("|%d\n", n);
	

	// test 1881
	ft_printf("test %d|", test++);
	n = ft_printf("%9.2p\n", 1234);
	ft_printf("|%d\n", n);
	

	// test 1882
	ft_printf("test %d|", test++);
	n = ft_printf("%2.9p\n", 1234);
	ft_printf("|%d\n", n);
	

	// test 1883
	ft_printf("test %d|", test++);
	n = ft_printf("%.5p", 0);
	ft_printf("|%d\n", n);
	

	// test 1884
	ft_printf("test %d|", test++);
	n = ft_printf("%.0p", 0);
	ft_printf("|%d\n", n);
	

	// test 1885
	ft_printf("test %d|", test++);
	n = ft_printf("%5p", 0);
	ft_printf("|%d\n", n);
	

	// test 1886
	ft_printf("test %d|", test++);
	n = ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	ft_printf("|%d\n", n);
	

	// test 1887
	ft_printf("test %d|", test++);
	n = ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	ft_printf("|%d\n", n);
	

	// test 1888
	ft_printf("test %d|", test++);
	n = ft_printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	ft_printf("|%d\n", n);
	

	// test 1889
	ft_printf("test %d|", test++);
	n = ft_printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	ft_printf("|%d\n", n);
	

	// test 1890
	ft_printf("test %d|", test++);
	n = ft_printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	ft_printf("|%d\n", n);
	

	// test 1891
	ft_printf("test %d|", test++);
	n = ft_printf("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	ft_printf("|%d\n", n);
	

	// test 1892
	ft_printf("test %d|", test++);
	n = ft_printf("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	ft_printf("|%d\n", n);
	

	// test 1893
	ft_printf("test %d|", test++);
	n = ft_printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	ft_printf("|%d\n", n);
	

	// test 1894
	ft_printf("test %d|", test++);
	n = ft_printf("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	ft_printf("|%d\n", n);
	

	// test 1895
	ft_printf("test %d|", test++);
	n = ft_printf("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	ft_printf("|%d\n", n);
	

	// test 1896
	ft_printf("test %d|", test++);
	n = ft_printf("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p", &a01, &a02, &a03, &a04, &a05, &a06, &a07, &a08, &a09, &a10, &a11, &a12);
	ft_printf("|%d\n", n);
    

	// test 1897
    ft_printf("test %d|", test++);
	n = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',',
	'-','.','/','0','1','2','3','4','5','6','7','8','9',':',';', '<','=','>','?','@','A','B',
	'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y',
	
	'p','q','r','s','t','u','v','w','x','y','z','{','|','~');
	
		ft_printf("|%d\n", n);
        

		// test 1898
        ft_printf("test %d|", test++);
		n = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
				(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char) 9,
				(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,
				(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,
				(char)26,(char)27,(char)28,(char)29 ,(char)30,(char)31);
		ft_printf("|%d\n", n);
        

		// test 1899
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
        

		// test 1900
        ft_printf("test %d|", test++);
		n = ft_printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c\
	%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
	%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c",
	';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','T','U',
	
	'q','r','s','t','u','v','w','x','y','z','{','|','~');
		ft_printf("|%d\n", n);
        

		// test 1901
        ft_printf("test %d|", test++);
		n = ft_printf("%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",
				(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,
				(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,
				(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
		ft_printf("|%d\n", n);
        

		// test 1902
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
        

		// test 1903
        ft_printf("test %d|", test++);
		n = ft_printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c",
	'=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y',
	
	'v','w','x','y','z','{','|','~');
		ft_printf("|%d\n", n);
        

		// test 1904
        ft_printf("test %d|", test++);
		n = ft_printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
	%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,
	(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,
	(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
		ft_printf("|%d\n", n);
        

		// test 1905
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
        

		// test 1906
        ft_printf("test %d|", test++);
		n = ft_printf("%c", '\0');
		ft_printf("|%d\n", n);
        

		// test 1907
        ft_printf("test %d|", test++);
		n = ft_printf("%5c", '\0');
		ft_printf("|%d\n", n);
        

		// test 1908
        ft_printf("test %d|", test++);
		n = ft_printf("%-5c", '\0');
        ft_printf("|%d\n", n);
        

		// test 1909
        ft_printf("test %d|", test++);
		n = ft_printf("%#d", 42);;




	
ft_printf("|%d\n", n);


// test 1910
ft_printf("test %d|", test++);
n = ft_printf("%++d", 42);
ft_printf("|%d\n", n);


// test 1911
ft_printf("test %d|", test++);
n = ft_printf("%  d", 42);
ft_printf("|%d\n", n);


// test 1912
ft_printf("test %d|", test++);
n = ft_printf("% + d", 42);
ft_printf("|%d\n", n);


// test 1913
ft_printf("test %d|", test++);
n = ft_printf("%--5d", 42);
ft_printf("|%d\n", n);


// test 1914
ft_printf("test %d|", test++);
n = ft_printf("%-+-5d", 42);
ft_printf("|%d\n", n);


// test 1915
ft_printf("test %d|", test++);
n = ft_printf("%d");
ft_printf("|%d\n", n);


// test 1916
ft_printf("test %d|", test++);
n = ft_printf("%d", NULL);
ft_printf("|%d\n", n);


// test 1917
ft_printf("test %d|", test++);
n = ft_printf("this %d number", 17);
ft_printf("|%d\n", n);


// test 1918
ft_printf("test %d|", test++);
n = ft_printf("this %d number", -267);
ft_printf("|%d\n", n);


// test 1919
ft_printf("test %d|", test++);
n = ft_printf("this %d number", 0);
ft_printf("|%d\n", n);


// test 1920
ft_printf("test %d|", test++);
n = ft_printf("this % d number", 17);
ft_printf("|%d\n", n);


// test 1921
ft_printf("test %d|", test++);
n = ft_printf("this % d number", -267);
ft_printf("|%d\n", n);


// test 1922
ft_printf("test %d|", test++);
n = ft_printf("this % d number", 0);
ft_printf("|%d\n", n);


// test 1923
ft_printf("test %d|", test++);
n = ft_printf("this %d number", 17);
ft_printf("|%d\n", n);


// test 1924
ft_printf("test %d|", test++);
n = ft_printf("this %d number", -267);
ft_printf("|%d\n", n);


// test 1925
ft_printf("test %d|", test++);
n = ft_printf("this %d number", 0);
ft_printf("|%d\n", n);


// test 1926
ft_printf("test %d|", test++);
n = ft_printf("%+d", 5);
ft_printf("|%d\n", n);


// test 1927
ft_printf("test %d|", test++);
n = ft_printf("%+d", -7);
ft_printf("|%d\n", n);


// test 1928
ft_printf("test %d|", test++);
n = ft_printf("%+d", 2147483647);
ft_printf("|%d\n", n);


// test 1929
ft_printf("test %d|", test++);
n = ft_printf("%+5d", 35);
ft_printf("|%d\n", n);


// test 1930
ft_printf("test %d|", test++);
n = ft_printf("%+7d", 0);
ft_printf("|%d\n", n);


// test 1931
ft_printf("test %d|", test++);
n = ft_printf("%+24d", 2147483647);
ft_printf("|%d\n", n);


// test 1932
ft_printf("test %d|", test++);
n = ft_printf("%+.7d", 234);
ft_printf("|%d\n", n);


// test 1933
ft_printf("test %d|", test++);
n = ft_printf("%+.7d", -446);
ft_printf("|%d\n", n);


// test 1934
ft_printf("test %d|", test++);
n = ft_printf("%+.3d", 3723);
ft_printf("|%d\n", n);


// test 1935
ft_printf("test %d|", test++);
n = ft_printf("%+05d", 432);
ft_printf("|%d\n", n);


// test 1936
ft_printf("test %d|", test++);
n = ft_printf("%+04d", 0);
ft_printf("|%d\n", n);


// test 1937
ft_printf("test %d|", test++);
n = ft_printf("%+8.5d", 34);
ft_printf("|%d\n", n);


// test 1938
ft_printf("test %d|", test++);
n = ft_printf("%+10.5d", -216);
ft_printf("|%d\n", n);


// test 1939
ft_printf("test %d|", test++);
n = ft_printf("%+8.5d", 0);
ft_printf("|%d\n", n);


// test 1940
ft_printf("test %d|", test++);
n = ft_printf("%+8.3d", 8375);
ft_printf("|%d\n", n);


// test 1941
ft_printf("test %d|", test++);
n = ft_printf("%+8.3d", -8473);
ft_printf("|%d\n", n);


// test 1942
ft_printf("test %d|", test++);
n = ft_printf("%+3.7d", 3267);
ft_printf("|%d\n", n);


// test 1943
ft_printf("test %d|", test++);
n = ft_printf("%+3.7d", -2375);
ft_printf("|%d\n", n);


// test 1944
ft_printf("test %d|", test++);
n = ft_printf("%+3.3d", 6983);
ft_printf("|%d\n", n);


// test 1945
ft_printf("test %d|", test++);
n = ft_printf("%+3.3d", -8462);
ft_printf("|%d\n", n);


// test 1946
ft_printf("test %d|", test++);
n = ft_printf("%+-8.5d", 34);
ft_printf("|%d\n", n);


// test 1947
ft_printf("test %d|", test++);
n = ft_printf("%+-10.5d", -216);
ft_printf("|%d\n", n);


// test 1948
ft_printf("test %d|", test++);
n = ft_printf("%+-8.5d", 0);
ft_printf("|%d\n", n);


// test 1949
ft_printf("test %d|", test++);
n = ft_printf("%+-8.3d", 8375);
ft_printf("|%d\n", n);


// test 1950
ft_printf("test %d|", test++);
n = ft_printf("%+-8.3d", -8473);
ft_printf("|%d\n", n);


// test 1951
ft_printf("test %d|", test++);
n = ft_printf("%+-3.7d", 3267);
ft_printf("|%d\n", n);


// test 1952
ft_printf("test %d|", test++);
n = ft_printf("%+-3.7d", -2375);
ft_printf("|%d\n", n);


// test 1953
ft_printf("test %d|", test++);
n = ft_printf("%+-3.3d", 6983);
ft_printf("|%d\n", n);


// test 1954
ft_printf("test %d|", test++);
n = ft_printf("%+-3.3d", -8462);
ft_printf("|%d\n", n);


// test 1955
ft_printf("test %d|", test++);
n = ft_printf("%0+8.5d", 34);
ft_printf("|%d\n", n);


// test 1956
ft_printf("test %d|", test++);
n = ft_printf("%0+10.5d", -216);
ft_printf("|%d\n", n);


// test 1957
ft_printf("test %d|", test++);
n = ft_printf("%0+8.5d", 0);
ft_printf("|%d\n", n);


// test 1958
ft_printf("test %d|", test++);
n = ft_printf("%0+8.3d", 8375);
ft_printf("|%d\n", n);


// test 1959
ft_printf("test %d|", test++);
n = ft_printf("%0+8.3d", -8473);
ft_printf("|%d\n", n);


// test 1960
ft_printf("test %d|", test++);
n = ft_printf("%0+3.7d", 3267);
ft_printf("|%d\n", n);


// test 1961
ft_printf("test %d|", test++);
n = ft_printf("%0+3.7d", -2375);
ft_printf("|%d\n", n);


// test 1962
ft_printf("test %d|", test++);
n = ft_printf("%0+3.3d", 6983);
ft_printf("|%d\n", n);


// test 1963
ft_printf("test %d|", test++);
n = ft_printf("%0+3.3d", -8462);
ft_printf("|%d\n", n);


// test 1964
ft_printf("test %d|", test++);
n = ft_printf("%0+-8.5d", 34);
ft_printf("|%d\n", n);


// test 1965
ft_printf("test %d|", test++);
n = ft_printf("%0+-10.5d", -216);
ft_printf("|%d\n", n);


// test 1966
ft_printf("test %d|", test++);
n = ft_printf("%0+-8.5d", 0);
ft_printf("|%d\n", n);


// test 1967
ft_printf("test %d|", test++);
n = ft_printf("%0+-8.3d", 8375);
ft_printf("|%d\n", n);


// test 1968
ft_printf("test %d|", test++);
n = ft_printf("%0+-8.3d", -8473);
ft_printf("|%d\n", n);


// test 1969
ft_printf("test %d|", test++);
n = ft_printf("%0+-3.7d", 3267);
ft_printf("|%d\n", n);


// test 1970
ft_printf("test %d|", test++);
n = ft_printf("%0+-3.7d", -2375);
ft_printf("|%d\n", n);


// test 1971
ft_printf("test %d|", test++);
n = ft_printf("%0+-3.3d", 6983);
ft_printf("|%d\n", n);


// test 1972
ft_printf("test %d|", test++);
n = ft_printf("%0+-3.3d", -8462);
ft_printf("|%d\n", n);


// test 1973
ft_printf("test %d|", test++);
n = ft_printf("this % d number", 17);
ft_printf("|%d\n", n);


// test 1974
ft_printf("test %d|", test++);
n = ft_printf("this % d number", -267);
ft_printf("|%d\n", n);


// test 1975
ft_printf("test %d|", test++);
n = ft_printf("this % d number", 0);
ft_printf("|%d\n", n);


// test 1976
ft_printf("test %d|", test++);
n = ft_printf("% d", 3);
ft_printf("|%d\n", n);


// test 1977
ft_printf("test %d|", test++);
n = ft_printf("% d", -1);
ft_printf("|%d\n", n);


// test 1978
ft_printf("test %d|", test++);
n = ft_printf("% d", 0);
ft_printf("|%d\n", n);


// test 1979
ft_printf("test %d|", test++);
n = ft_printf("this % d number", 17);
ft_printf("|%d\n", n);


// test 1980
ft_printf("test %d|", test++);
n = ft_printf("this % d number", -267);
ft_printf("|%d\n", n);


// test 1981
ft_printf("test %d|", test++);
n = ft_printf("this % d number", 0);
ft_printf("|%d\n", n);


// test 1982
ft_printf("test %d|", test++);
n = ft_printf("% d", 2147483647);
ft_printf("|%d\n", n);


// test 1983
ft_printf("test %d|", test++);
n = ft_printf("% d", (int)(-2147483678));
ft_printf("|%d\n", n);


// test 1984
ft_printf("test %d|", test++);
n = ft_printf("% +d", 5);
ft_printf("|%d\n", n);


// test 1985
ft_printf("test %d|", test++);
n = ft_printf("% +d", -7);
ft_printf("|%d\n", n);


// test 1986
ft_printf("test %d|", test++);
n = ft_printf("% +d", 2147483647);
ft_printf("|%d\n", n);


// test 1987
ft_printf("test %d|", test++);
n = ft_printf("% 7d", 33);
ft_printf("|%d\n", n);


// test 1988
ft_printf("test %d|", test++);
n = ft_printf("% 7d", -14);
ft_printf("|%d\n", n);


// test 1989
ft_printf("test %d|", test++);
n = ft_printf("% 3d", 0);
ft_printf("|%d\n", n);


// test 1990
ft_printf("test %d|", test++);
n = ft_printf("% 5d", 52625);
ft_printf("|%d\n", n);


// test 1991
ft_printf("test %d|", test++);
n = ft_printf("% 5d", -2562);
ft_printf("|%d\n", n);


// test 1992
ft_printf("test %d|", test++);
n = ft_printf("% 4d", 94827);
ft_printf("|%d\n", n);


// test 1993
ft_printf("test %d|", test++);
n = ft_printf("% 4d", -2464);
ft_printf("|%d\n", n);


// test 1994
ft_printf("test %d|", test++);
n = ft_printf("% -7d", 33);
ft_printf("|%d\n", n);


// test 1995
ft_printf("test %d|", test++);
n = ft_printf("% -7d", -14);
ft_printf("|%d\n", n);


// test 1996
ft_printf("test %d|", test++);
n = ft_printf("% -3d", 0);
ft_printf("|%d\n", n);


// test 1997
ft_printf("test %d|", test++);
n = ft_printf("% -5d", 52625);
ft_printf("|%d\n", n);


// test 1998
ft_printf("test %d|", test++);
n = ft_printf("% -5d", -2562);
ft_printf("|%d\n", n);


// test 1999
ft_printf("test %d|", test++);
n = ft_printf("% -4d", 94827);
ft_printf("|%d\n", n);


// test 2000
ft_printf("test %d|", test++);
n = ft_printf("% -4d", -2464);
ft_printf("|%d\n", n);


// test 2001
ft_printf("test %d|", test++);
n = ft_printf("% +5d", 35);
ft_printf("|%d\n", n);


// test 2002
ft_printf("test %d|", test++);
n = ft_printf("% +7d", 0);
ft_printf("|%d\n", n);


// test 2003
ft_printf("test %d|", test++);
n = ft_printf("% +24d", 2147483647);
ft_printf("|%d\n", n);


// test 2004
ft_printf("test %d|", test++);
n = ft_printf("% .5d", 2);
ft_printf("|%d\n", n);


// test 2005
ft_printf("test %d|", test++);
n = ft_printf("% .6d", -3);
ft_printf("|%d\n", n);


// test 2006
ft_printf("test %d|", test++);
n = ft_printf("% .3d", 0);
ft_printf("|%d\n", n);


// test 2007
ft_printf("test %d|", test++);
n = ft_printf("% .4d", 5263);
ft_printf("|%d\n", n);


// test 2008
ft_printf("test %d|", test++);
n = ft_printf("% .4d", -2372);
ft_printf("|%d\n", n);


// test 2009
ft_printf("test %d|", test++);
n = ft_printf("% .3d", 13862);
ft_printf("|%d\n", n);


// test 2010
ft_printf("test %d|", test++);
n = ft_printf("% .3d",-23646);
ft_printf("|%d\n", n);


// test 2011
ft_printf("test %d|", test++);
n = ft_printf("% +.7d", 234);
ft_printf("|%d\n", n);


// test 2012
ft_printf("test %d|", test++);
n = ft_printf("% +.7d", -446);
ft_printf("|%d\n", n);


// test 2013
ft_printf("test %d|", test++);
n = ft_printf("% +.3d", 3723);
ft_printf("|%d\n", n);


// test 2014
ft_printf("test %d|", test++);
n = ft_printf("% 05d", 43);
ft_printf("|%d\n", n);


// test 2015
ft_printf("test %d|", test++);
n = ft_printf("% 07d", -54);
ft_printf("|%d\n", n);


// test 2016
ft_printf("test %d|", test++);
n = ft_printf("% 03d", 0);
ft_printf("|%d\n", n);


// test 2017
ft_printf("test %d|", test++);
n = ft_printf("% 03d", 634);
ft_printf("|%d\n", n);


// test 2018
ft_printf("test %d|", test++);
n = ft_printf("% 04d", -532);
ft_printf("|%d\n", n);


// test 2019
ft_printf("test %d|", test++);
n = ft_printf("% 04d", -4825);
ft_printf("|%d\n", n);


// test 2020
ft_printf("test %d|", test++);
n = ft_printf("% +05d", 432);
ft_printf("|%d\n", n);


// test 2021
ft_printf("test %d|", test++);
n = ft_printf("% +04d", 0);
ft_printf("|%d\n", n);


// test 2022
ft_printf("test %d|", test++);
n = ft_printf("% 8.5d", 34);
ft_printf("|%d\n", n);


// test 2023
ft_printf("test %d|", test++);
n = ft_printf("% 10.5d", -216);
ft_printf("|%d\n", n);


// test 2024
ft_printf("test %d|", test++);
n = ft_printf("% 8.5d", 0);
ft_printf("|%d\n", n);


// test 2025
ft_printf("test %d|", test++);
n = ft_printf("% 8.3d", 8375);
ft_printf("|%d\n", n);


// test 2026
ft_printf("test %d|", test++);
n = ft_printf("% 8.3d", -8473);
ft_printf("|%d\n", n);


// test 2027
ft_printf("test %d|", test++);
n = ft_printf("% 3.7d", 3267);
ft_printf("|%d\n", n);


// test 2028
ft_printf("test %d|", test++);
n = ft_printf("% 3.7d", -2375);
ft_printf("|%d\n", n);


// test 2029
ft_printf("test %d|", test++);
n = ft_printf("% 3.3d", 6983);
ft_printf("|%d\n", n);


// test 2030
ft_printf("test %d|", test++);
n = ft_printf("% 3.3d", -8462);
ft_printf("|%d\n", n);


// test 2031
ft_printf("test %d|", test++);
n = ft_printf("% -8.5d", 34);
ft_printf("|%d\n", n);


// test 2032
ft_printf("test %d|", test++);
n = ft_printf("% -10.5d", -216);
ft_printf("|%d\n", n);


// test 2033
ft_printf("test %d|", test++);
n = ft_printf("% -8.5d", 0);
ft_printf("|%d\n", n);


// test 2034
ft_printf("test %d|", test++);
n = ft_printf("% -8.3d", 8375);
ft_printf("|%d\n", n);


// test 2035
ft_printf("test %d|", test++);
n = ft_printf("% -8.3d", -8473);
ft_printf("|%d\n", n);


// test 2036
ft_printf("test %d|", test++);
n = ft_printf("% -3.7d", 3267);
ft_printf("|%d\n", n);


// test 2037
ft_printf("test %d|", test++);
n = ft_printf("% -3.7d", -2375);
ft_printf("|%d\n", n);


// test 2038
ft_printf("test %d|", test++);
n = ft_printf("% -3.3d", 6983);
ft_printf("|%d\n", n);


// test 2039
ft_printf("test %d|", test++);
n = ft_printf("% -3.3d", -8462);
ft_printf("|%d\n", n);


// test 2040
ft_printf("test %d|", test++);
n = ft_printf("% +8.5d", 34);
ft_printf("|%d\n", n);


// test 2041
ft_printf("test %d|", test++);
n = ft_printf("% +10.5d", -216);
ft_printf("|%d\n", n);


// test 2042
ft_printf("test %d|", test++);
n = ft_printf("% +8.5d", 0);
ft_printf("|%d\n", n);


// test 2043
ft_printf("test %d|", test++);
n = ft_printf("% +8.3d", 8375);
ft_printf("|%d\n", n);


// test 2044
ft_printf("test %d|", test++);
n = ft_printf("% +8.3d", -8473);
ft_printf("|%d\n", n);


// test 2045
ft_printf("test %d|", test++);
n = ft_printf("% +3.7d", 3267);
ft_printf("|%d\n", n);


// test 2046
ft_printf("test %d|", test++);
n = ft_printf("% +3.7d", -2375);
ft_printf("|%d\n", n);


// test 2047
ft_printf("test %d|", test++);
n = ft_printf("% +3.3d", 6983);
ft_printf("|%d\n", n);


// test 2048
ft_printf("test %d|", test++);
n = ft_printf("% +3.3d", -8462);
ft_printf("|%d\n", n);


// test 2049
ft_printf("test %d|", test++);
n = ft_printf("% +-8.5d", 34);
ft_printf("|%d\n", n);


// test 2050
ft_printf("test %d|", test++);
n = ft_printf("% +-10.5d", -216);
ft_printf("|%d\n", n);


// test 2051
ft_printf("test %d|", test++);
n = ft_printf("% +-8.5d", 0);
ft_printf("|%d\n", n);


// test 2052
ft_printf("test %d|", test++);
n = ft_printf("% +-8.3d", 8375);
ft_printf("|%d\n", n);


// test 2053
ft_printf("test %d|", test++);
n = ft_printf("% +-8.3d", -8473);
ft_printf("|%d\n", n);


// test 2054
ft_printf("test %d|", test++);
n = ft_printf("% +-3.7d", 3267);
ft_printf("|%d\n", n);


// test 2055
ft_printf("test %d|", test++);
n = ft_printf("% +-3.7d", -2375);
ft_printf("|%d\n", n);


// test 2056
ft_printf("test %d|", test++);
n = ft_printf("% +-3.3d", 6983);
ft_printf("|%d\n", n);


// test 2057
ft_printf("test %d|", test++);
n = ft_printf("% +-3.3d", -8462);
ft_printf("|%d\n", n);


// test 2058
ft_printf("test %d|", test++);
n = ft_printf("% 08.5d", 34);
ft_printf("|%d\n", n);


// test 2059
ft_printf("test %d|", test++);
n = ft_printf("% 010.5d", -216);
ft_printf("|%d\n", n);


// test 2060
ft_printf("test %d|", test++);
n = ft_printf("% 08.5d", 0);
ft_printf("|%d\n", n);


// test 2061
ft_printf("test %d|", test++);
n = ft_printf("% 08.3d", 8375);
ft_printf("|%d\n", n);


// test 2062
ft_printf("test %d|", test++);
n = ft_printf("% 08.3d", -8473);
ft_printf("|%d\n", n);


// test 2063
ft_printf("test %d|", test++);
n = ft_printf("% 03.7d", 3267);
ft_printf("|%d\n", n);


// test 2064
ft_printf("test %d|", test++);
n = ft_printf("% 03.7d", -2375);
ft_printf("|%d\n", n);


// test 2065
ft_printf("test %d|", test++);
n = ft_printf("% 03.3d", 6983);
ft_printf("|%d\n", n);


// test 2066
ft_printf("test %d|", test++);
n = ft_printf("% 03.3d", -8462);
ft_printf("|%d\n", n);


// test 2067
ft_printf("test %d|", test++);
n = ft_printf("% 0-8.5d", 34);
ft_printf("|%d\n", n);


// test 2068
ft_printf("test %d|", test++);
n = ft_printf("% 0-10.5d", -216);
ft_printf("|%d\n", n);


// test 2069
ft_printf("test %d|", test++);
n = ft_printf("% 0-8.5d", 0);
ft_printf("|%d\n", n);


// test 2070
ft_printf("test %d|", test++);
n = ft_printf("% 0-8.3d", 8375);
ft_printf("|%d\n", n);


// test 2071
ft_printf("test %d|", test++);
n = ft_printf("% 0-8.3d", -8473);
ft_printf("|%d\n", n);


// test 2072
ft_printf("test %d|", test++);
n = ft_printf("% 0-3.7d", 3267);
ft_printf("|%d\n", n);


// test 2073
ft_printf("test %d|", test++);
n = ft_printf("% 0-3.7d", -2375);
ft_printf("|%d\n", n);


// test 2074
ft_printf("test %d|", test++);
n = ft_printf("% 0-3.3d", 6983);
ft_printf("|%d\n", n);


// test 2075
ft_printf("test %d|", test++);
n = ft_printf("% 0-3.3d", -8462);
ft_printf("|%d\n", n);


// test 2076
ft_printf("test %d|", test++);
n = ft_printf("% 0+8.5d", 34);
ft_printf("|%d\n", n);


// test 2077
ft_printf("test %d|", test++);
n = ft_printf("% 0+10.5d", -216);
ft_printf("|%d\n", n);


// test 2078
ft_printf("test %d|", test++);
n = ft_printf("% 0+8.5d", 0);
ft_printf("|%d\n", n);


// test 2079
ft_printf("test %d|", test++);
n = ft_printf("% 0+8.3d", 8375);
ft_printf("|%d\n", n);


// test 2080
ft_printf("test %d|", test++);
n = ft_printf("% 0+8.3d", -8473);
ft_printf("|%d\n", n);


// test 2081
ft_printf("test %d|", test++);
n = ft_printf("% 0+3.7d", 3267);
ft_printf("|%d\n", n);


// test 2082
ft_printf("test %d|", test++);
n = ft_printf("% 0+3.7d", -2375);
ft_printf("|%d\n", n);


// test 2083
ft_printf("test %d|", test++);
n = ft_printf("% 0+3.3d", 6983);
ft_printf("|%d\n", n);


// test 2084
ft_printf("test %d|", test++);
n = ft_printf("% 0+3.3d", -8462);
ft_printf("|%d\n", n);


// test 2085
ft_printf("test %d|", test++);
n = ft_printf("% 0+-8.5d", 34);
ft_printf("|%d\n", n);


// test 2086
ft_printf("test %d|", test++);
n = ft_printf("% 0+-10.5d", -216);
ft_printf("|%d\n", n);


// test 2087
ft_printf("test %d|", test++);
n = ft_printf("% 0+-8.5d", 0);
ft_printf("|%d\n", n);


// test 2088
ft_printf("test %d|", test++);
n = ft_printf("% 0+-8.3d", 8375);
ft_printf("|%d\n", n);


// test 2089
ft_printf("test %d|", test++);
n = ft_printf("% 0+-8.3d", -8473);
ft_printf("|%d\n", n);


// test 2090
ft_printf("test %d|", test++);
n = ft_printf("% 0+-3.7d", 3267);
ft_printf("|%d\n", n);


// test 2091
ft_printf("test %d|", test++);
n = ft_printf("% 0+-3.7d", -2375);
ft_printf("|%d\n", n);


// test 2092
ft_printf("test %d|", test++);
n = ft_printf("% 0+-3.3d", 6983);
ft_printf("|%d\n", n);


// test 2093
ft_printf("test %d|", test++);
n = ft_printf("% 0+-3.3d", -8462);
ft_printf("|%d\n", n);


// test 2094
ft_printf("test %d|", test++);
n = ft_printf("%+.0d", 0);
ft_printf("|%d\n", n);


// test 2095
ft_printf("test %d|", test++);
n = ft_printf("%+.d", 0);
ft_printf("|%d\n", n);


// test 2096
ft_printf("test %d|", test++);
n = ft_printf("%+5.0d", 0);
ft_printf("|%d\n", n);


// test 2097
ft_printf("test %d|", test++);
n = ft_printf("%+5.d", 0);
ft_printf("|%d\n", n);


// test 2098
ft_printf("test %d|", test++);
n = ft_printf("%+-5.0d", 0);
ft_printf("|%d\n", n);


// test 2099
ft_printf("test %d|", test++);
n = ft_printf("%+-5.d", 0);
ft_printf("|%d\n", n);


// test 2100
ft_printf("test %d|", test++);
n = ft_printf("%d", 3);
ft_printf("|%d\n", n);


// test 2101
ft_printf("test %d|", test++);
n = ft_printf("%d", -1);
ft_printf("|%d\n", n);


// test 2102
ft_printf("test %d|", test++);
n = ft_printf("%d", 0);
ft_printf("|%d\n", n);


// test 2103
ft_printf("test %d|", test++);
n = ft_printf("%d",  2147483647);
ft_printf("|%d\n", n);


// test 2104
ft_printf("test %d|", test++);
n = ft_printf("%d", (int)(-2147483678));
ft_printf("|%d\n", n);


// test 2105
ft_printf("test %d|", test++);
n = ft_printf("%7d", 33);
ft_printf("|%d\n", n);


// test 2106
ft_printf("test %d|", test++);
n = ft_printf("%7d", -14);
ft_printf("|%d\n", n);


// test 2107
ft_printf("test %d|", test++);
n = ft_printf("%3d", 0);
ft_printf("|%d\n", n);


// test 2108
ft_printf("test %d|", test++);
n = ft_printf("%5d", 52625);
ft_printf("|%d\n", n);


// test 2109
ft_printf("test %d|", test++);
n = ft_printf("%5d", -2562);
ft_printf("|%d\n", n);


// test 2110
ft_printf("test %d|", test++);
n = ft_printf("%4d", 94827);
ft_printf("|%d\n", n);


// test 2111
ft_printf("test %d|", test++);
n = ft_printf("%4d", -2464);
ft_printf("|%d\n", n);


// test 2112
ft_printf("test %d|", test++);
n = ft_printf("%-7d", 33);
ft_printf("|%d\n", n);


// test 2113
ft_printf("test %d|", test++);
n = ft_printf("%-7d", -14);
ft_printf("|%d\n", n);


// test 2114
ft_printf("test %d|", test++);
n = ft_printf("%-3d", 0);
ft_printf("|%d\n", n);


// test 2115
ft_printf("test %d|", test++);
n = ft_printf("%-5d", 52625);
ft_printf("|%d\n", n);


// test 2116
ft_printf("test %d|", test++);
n = ft_printf("%-5d", -2562);
ft_printf("|%d\n", n);


// test 2117
ft_printf("test %d|", test++);
n = ft_printf("%-4d", 94827);
ft_printf("|%d\n", n);


// test 2118
ft_printf("test %d|", test++);
n = ft_printf("%-4d", -2464);
ft_printf("|%d\n", n);


// test 2119
ft_printf("test %d|", test++);
n = ft_printf("%.5d", 2);
ft_printf("|%d\n", n);


// test 2120
ft_printf("test %d|", test++);
n = ft_printf("%.6d", -3);
ft_printf("|%d\n", n);


// test 2121
ft_printf("test %d|", test++);
n = ft_printf("%.3d", 0);
ft_printf("|%d\n", n);


// test 2122
ft_printf("test %d|", test++);
n = ft_printf("%.4d", 5263);
ft_printf("|%d\n", n);


// test 2123
ft_printf("test %d|", test++);
n = ft_printf("%.4d", -2372);
ft_printf("|%d\n", n);


// test 2124
ft_printf("test %d|", test++);
n = ft_printf("%.3d", 13862);
ft_printf("|%d\n", n);


// test 2125
ft_printf("test %d|", test++);
n = ft_printf("%.3d",-23646);
ft_printf("|%d\n", n);


// test 2126
ft_printf("test %d|", test++);
n = ft_printf("%05d", 43);
ft_printf("|%d\n", n);


// test 2127
ft_printf("test %d|", test++);
n = ft_printf("%07d", -54);
ft_printf("|%d\n", n);


// test 2128
ft_printf("test %d|", test++);
n = ft_printf("%03d", 0);
ft_printf("|%d\n", n);


// test 2129
ft_printf("test %d|", test++);
n = ft_printf("%03d", 634);
ft_printf("|%d\n", n);


// test 2130
ft_printf("test %d|", test++);
n = ft_printf("%04d", -532);
ft_printf("|%d\n", n);


// test 2131
ft_printf("test %d|", test++);
n = ft_printf("%04d", -4825);
ft_printf("|%d\n", n);


// test 2132
ft_printf("test %d|", test++);
n = ft_printf("%8.5d", 34);
ft_printf("|%d\n", n);


// test 2133
ft_printf("test %d|", test++);
n = ft_printf("%10.5d", -216);
ft_printf("|%d\n", n);


// test 2134
ft_printf("test %d|", test++);
n = ft_printf("%8.5d", 0);
ft_printf("|%d\n", n);


// test 2135
ft_printf("test %d|", test++);
n = ft_printf("%8.3d", 8375);
ft_printf("|%d\n", n);


// test 2136
ft_printf("test %d|", test++);
n = ft_printf("%8.3d", -8473);
ft_printf("|%d\n", n);


// test 2137
ft_printf("test %d|", test++);
n = ft_printf("%3.7d", 3267);
ft_printf("|%d\n", n);


// test 2138
ft_printf("test %d|", test++);
n = ft_printf("%3.7d", -2375);
ft_printf("|%d\n", n);


// test 2139
ft_printf("test %d|", test++);
n = ft_printf("%3.3d", 6983);
ft_printf("|%d\n", n);


// test 2140
ft_printf("test %d|", test++);
n = ft_printf("%3.3d", -8462);
ft_printf("|%d\n", n);


// test 2141
ft_printf("test %d|", test++);
n = ft_printf("%-8.5d", 34);
ft_printf("|%d\n", n);


// test 2142
ft_printf("test %d|", test++);
n = ft_printf("%-10.5d", -216);
ft_printf("|%d\n", n);


// test 2143
ft_printf("test %d|", test++);
n = ft_printf("%-8.5d", 0);
ft_printf("|%d\n", n);


// test 2144
ft_printf("test %d|", test++);
n = ft_printf("%-8.3d", 8375);
ft_printf("|%d\n", n);


// test 2145
ft_printf("test %d|", test++);
n = ft_printf("%-8.3d", -8473);
ft_printf("|%d\n", n);


// test 2146
ft_printf("test %d|", test++);
n = ft_printf("%-3.7d", 3267);
ft_printf("|%d\n", n);


// test 2147
ft_printf("test %d|", test++);
n = ft_printf("%-3.7d", -2375);
ft_printf("|%d\n", n);


// test 2148
ft_printf("test %d|", test++);
n = ft_printf("%-3.3d", 6983);
ft_printf("|%d\n", n);


// test 2149
ft_printf("test %d|", test++);
n = ft_printf("%-3.3d", -8462);
ft_printf("|%d\n", n);


// test 2150
ft_printf("test %d|", test++);
n = ft_printf("%08.5d", 34);
ft_printf("|%d\n", n);


// test 2151
ft_printf("test %d|", test++);
n = ft_printf("%010.5d", -216);
ft_printf("|%d\n", n);


// test 2152
ft_printf("test %d|", test++);
n = ft_printf("%08.5d", 0);
ft_printf("|%d\n", n);


// test 2153
ft_printf("test %d|", test++);
n = ft_printf("%08.3d", 8375);
ft_printf("|%d\n", n);


// test 2154
ft_printf("test %d|", test++);
n = ft_printf("%08.3d", -8473);
ft_printf("|%d\n", n);


// test 2155
ft_printf("test %d|", test++);
n = ft_printf("%03.7d", 3267);
ft_printf("|%d\n", n);


// test 2156
ft_printf("test %d|", test++);
n = ft_printf("%03.7d", -2375);
ft_printf("|%d\n", n);


// test 2157
ft_printf("test %d|", test++);
n = ft_printf("%03.3d", 6983);
ft_printf("|%d\n", n);


// test 2158
ft_printf("test %d|", test++);
n = ft_printf("%03.3d", -8462);
ft_printf("|%d\n", n);


// test 2159
ft_printf("test %d|", test++);
n = ft_printf("%0-8.5d", 34);
ft_printf("|%d\n", n);


// test 2160
ft_printf("test %d|", test++);
n = ft_printf("%0-10.5d", -216);
ft_printf("|%d\n", n);


// test 2161
ft_printf("test %d|", test++);
n = ft_printf("%0-8.5d", 0);
ft_printf("|%d\n", n);


// test 2162
ft_printf("test %d|", test++);
n = ft_printf("%0-8.3d", 8375);
ft_printf("|%d\n", n);


// test 2163
ft_printf("test %d|", test++);
n = ft_printf("%0-8.3d", -8473);
ft_printf("|%d\n", n);


// test 2164
ft_printf("test %d|", test++);
n = ft_printf("%0-3.7d", 3267);
ft_printf("|%d\n", n);


// test 2165
ft_printf("test %d|", test++);
n = ft_printf("%0-3.7d", -2375);
ft_printf("|%d\n", n);


// test 2166
ft_printf("test %d|", test++);
n = ft_printf("%0-3.3d", 6983);
ft_printf("|%d\n", n);


// test 2167
ft_printf("test %d|", test++);
n = ft_printf("%0-3.3d", -8462);
ft_printf("|%d\n", n);


// test 2168
ft_printf("test %d|", test++);
n = ft_printf("%.0d", 0);
ft_printf("|%d\n", n);


// test 2169
ft_printf("test %d|", test++);
n = ft_printf("%.d", 0);
ft_printf("|%d\n", n);


// test 2170
ft_printf("test %d|", test++);
n = ft_printf("%5.0d", 0);
ft_printf("|%d\n", n);


// test 2171
ft_printf("test %d|", test++);
n = ft_printf("%5.d", 0);
ft_printf("|%d\n", n);


// test 2172
ft_printf("test %d|", test++);
n = ft_printf("%-5.0d", 0);
ft_printf("|%d\n", n);


// test 2173
ft_printf("test %d|", test++);
n = ft_printf("%-5.d", 0);
ft_printf("|%d\n", n);

return (0);
}
