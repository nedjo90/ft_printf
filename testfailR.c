#include"ft_printf.h"

int main(void)
{
int test = 0;
int n;

printf("test %d|", test++);
n = printf("%.2d", -1);
printf("|%d\n", n);

printf("test %d|", test++);
n = printf("%.3d", -11);
printf("|%d\n", n);

printf("test %d|", test++);
n = printf("%.3d", -99);
printf("|%d\n", n);

printf("test %d|", test++);
n = printf("%.4d", -101);
printf("|%d\n", n);

printf("test %d|", test++);
n = printf("%.2i", -1);
printf("|%d\n", n);

printf("test %d|", test++);
n = printf("%.3i", -11);
printf("|%d\n", n);

printf("test %d|", test++);
n = printf("%.3i", -99);
printf("|%d\n", n);

printf("test %d|", test++);
n = printf("%.4i", -101);
printf("|%d\n", n);

return (0);
}