
#include <stdio.h>

int number(int x)
{
    if (x < 0)
    {
        return x*x + 2*x + 1;
    }
    else if (x >= 0 && x < 10)
    {
        return 3*x + 2;
    }
    else if (x >= 10)
    {
        return 5*x - 7;
    }

    return 0;
}

int main()
{
    int x;

    scanf("%d", &x);

    printf("%d", number(x));

    return 0;
}
