#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x;
        scanf("%d", &x);
        int angka[x + 5] = {};
        for (int j = 0; j < x; j++)
        {
            scanf("%d", &x[j]);
        }
        for (int j = x - 1; j >= 0; j--)
        {
            printf("%d ", x[j]);
        }
    }

    return 0;
}