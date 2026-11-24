#include <stdio.h>

struct Peserta
{
    char name[100];
    int age;
    int score;
};

int main()
{
    struct Peserta data;

    printf("Nama : ");
    fgets(data.name, sizeof(data.name), stdin);

    printf("Umur : ");
    scanf("%d", &data.age);
    printf("Skor : ");
    scanf("%d", &data.score);

    printf("Data Peserta:\n");
    printf("Nama : %s", data.name);
    printf("Umur : %d tahun\n", data.age);
    printf("Skor : %d\n", data.score);

    return 0;
}