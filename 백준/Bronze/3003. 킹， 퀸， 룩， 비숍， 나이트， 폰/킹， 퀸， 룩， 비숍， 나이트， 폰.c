#include <stdio.h>

int main() {

    int king, queen, look, vishop, knight, pone;
    int a, b, c, d, e, f;
    king = 1;
    queen = 1;
    look = 2;
    vishop = 2;
    knight = 2;
    pone = 8;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    printf("%d %d %d %d %d %d", king - a, queen - b, look - c, vishop - d, knight - e, pone - f);

    return 0;

}