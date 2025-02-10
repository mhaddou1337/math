#include <unistd.h>
#include <stdio.h>

int v_abs(int nb)
{
    if(nb < 0)
        nb = -nb;
    return (nb);
}
int main(void)
{
    printf("%d\n", v_abs(-72));
    printf("%d\n", v_abs(+72));
    printf("%d\n", v_abs(72));
    return(0);
}