#include"ft_printf.h"

int main(void)
{
	int test = 0;
	int n;

	ft_printf("test %d|", test++);
	n = ft_printf("%.2d", -1);
	ft_printf("|%d\n", n);
	
	ft_printf("test %d|", test++);
	n = ft_printf("%.3d", -11);
	ft_printf("|%d\n", n);
	
	ft_printf("test %d|", test++);
	n = ft_printf("%.3d", -99);
	ft_printf("|%d\n", n);
	
	ft_printf("test %d|", test++);
	n = ft_printf("%.4d", -101);
	ft_printf("|%d\n", n);
	
	ft_printf("test %d|", test++);
	n = ft_printf("%.2i", -1);
	ft_printf("|%d\n", n);
	
	ft_printf("test %d|", test++);
	n = ft_printf("%.3i", -11);
	ft_printf("|%d\n", n);
	
	ft_printf("test %d|", test++);
	n = ft_printf("%.3i", -99);
	ft_printf("|%d\n", n);
	
	ft_printf("test %d|", test++);
	n = ft_printf("%.4i", -101);
	ft_printf("|%d\n", n);

    return (0);
}