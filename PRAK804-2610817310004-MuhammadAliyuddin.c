#include <stdio.h>

struct Peserta
{
    char name[100];
    int age;
    int score;
};

int main()
{
    int n;
    struct Peserta data[10];
    int highest = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d", data[i].name, &data[i].age, &data[i].score);

        if (data[i].score > data[highest].score || i == 0)
        {
            highest = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n",
           data[highest].name, data[highest].score);

    return 0;
}
