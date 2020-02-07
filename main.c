#include "ft_printf.h"

int		main()
{
	char *f = "esto es una fiesta";
	ft_printf("Hola caracola %-1.*s", 5, f);
}
