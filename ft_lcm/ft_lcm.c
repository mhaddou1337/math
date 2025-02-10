int eucl_algo(int a , int b)
{
    while(b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return(a);
}

int ft_lcm(int x , int y)
{
    return(x*y/eucl_algo(x,y));
}
/*
#include <stdio.h>
int main(void)
{
    printf("val %d ", ft_lcm(24,18));
    return(0);
}
*/