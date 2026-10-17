#include <stdio.h>

int yigindi(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + yigindi(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int natija = yigindi(n);

    printf("Yigindi: %d\n", natija);

    return 0;
}