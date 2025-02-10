#include <unistd.h>
#include <stdio.h>
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
int main(void)
{
    printf("%d", eucl_algo(72,48));
    return(0);
}