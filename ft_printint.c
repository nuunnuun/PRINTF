#include "ft_printf.h"

int ft_printint(int nb)
{
    int length; 
    long n;
    char result;

    length = 0;
    n = (long) nb;

    if (n < 0)
    {
        length += write(1, "-", 1);
        n = -n;
    }
    if (n < 10)
    {
        result = n + '0';
        length += write(1, &result,1);
    }
    if (n >= 10)
    {
        length += ft_printint (n / 10);
        length += ft_printint (n % 10);
    }
    return(length);
}

/*
int main() {
    unsigned int a = 42;
    unsigned int b = 0;
    unsigned int c = 4294967295U; // ค่าสูงสุดของ unsigned int 32-bit

    printf("--- ทดสอบ ft_print_unsigned ---\n");
    
    // ทดสอบ A
    printf("พิมพ์ 42: ");
    int len_a = ft_print_unsigned(a); 
    printf(" | (ความยาวที่คืนค่า: %d)\n", len_a);

    // ทดสอบ B
    printf("พิมพ์ 0: ");
    int len_b = ft_print_unsigned(b); 
    printf(" | (ความยาวที่คืนค่า: %d)\n", len_b);

    // ทดสอบ C (ค่าสูงสุด)
    printf("พิมพ์ 4294967295: ");
    int len_c = ft_print_unsigned(c); 
    printf(" | (ความยาวที่คืนค่า: %d)\n", len_c);
    
    return 0;
}
*/
