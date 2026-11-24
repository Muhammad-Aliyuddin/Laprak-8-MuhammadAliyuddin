#include <stdio.h>

void change(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int andi, budi;

    scanf("%d %d", &andi, &budi);

    printf("Sebelum ditukar: Andi = %d, Budi = %d\n", andi, budi);

    change(&andi, &budi);

    printf("Sesudah ditukar: Andi = %d, Budi = %d\n", andi, budi);

    return 0;
}