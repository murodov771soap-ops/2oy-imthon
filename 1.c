#include <stdio.h>

int main()
{
    int arr[5];
    int yigindi = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        yigindi += arr[i];
    }

    printf("Yigindi: %d\n", yigindi);

}