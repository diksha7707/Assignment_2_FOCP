
#include <stdio.h>

void totalseconds(int seconds)
{
    int a = seconds / 3600;
    int b = (seconds % 3600) / 60;
    int c = seconds % 60;

    printf("%d %d %d", a, b, c);
}

int main()
{
    int seconds;

    scanf("%d", &seconds);

    totalseconds(seconds);

    return 0;
}
