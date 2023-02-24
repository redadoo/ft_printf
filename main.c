#include "ft_printf.h"

int main(void)
{
        int i;

        i = ft_printf("hex %#x", 1643);
        ft_printf("%c",'\n');
        ft_printf("%d",i);
        ft_printf("%c",'\n');
        printf("hex %#x", 1643);
}