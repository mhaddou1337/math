int ft_fabs(float nb)
{
    if(nb < 0)
        nb = -nb;
    return (nb);
}
/*
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    printf("%f\n", v_abs(-72.9484));
    printf("%f\n", v_abs(+72.9484));
    printf("%f\n", v_abs(72.9484));
    return(0);
}
*/
