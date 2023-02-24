#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int color[2] = { 0, 0 };
int paper[128][128] = { 0 };

void check(int x, int y, int size)
{
    bool isSame = true;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (paper[x + i][y + j] != paper[x][y])
            {
                isSame = false;
                break;
            }
        }
        if (!isSame)
        {
            break;
        }
    }
    if (isSame)
    {
        color[paper[x][y]]++;
    }
    else
    {
        check(x, y, size / 2); //2
        check(x + size / 2, y, size / 2); //3
        check(x, y + size / 2, size / 2); //1
        check(x + size / 2, y + size / 2, size / 2); //4
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &paper[i][j]);
        }
    }
    check(0, 0, n);
    printf("%d\n%d", color[0], color[1]);
}
