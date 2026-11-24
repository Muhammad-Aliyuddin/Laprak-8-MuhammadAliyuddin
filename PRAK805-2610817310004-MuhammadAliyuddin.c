#include <stdio.h>

struct Dompet
{
    char name[100];
    int balance;
};

void topUp(struct Dompet *data, int amount)
{
    data->balance = data->balance + amount;
}

void payment(struct Dompet *data, int amount, char result[])
{
    if (data->balance >= amount)
    {
        data->balance = data->balance - amount;
        sprintf(result, "Bayar %d berhasil, saldo = %d", amount, data->balance);
    }
    else
    {
        sprintf(result, "Bayar %d gagal, saldo tidak cukup", amount);
    }
}

int main()
{
    struct Dompet data;
    int n, amount;
    char type;
    char result[100][100];

    scanf("%s %d", data.name, &data.balance);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %c %d", &type, &amount);

        if (type == 'T')
        {
            topUp(&data, amount);
            sprintf(result[i], "Top up %d berhasil, saldo = %d", amount, data.balance);
        }
        else if (type == 'B')
        {
            payment(&data, amount, result[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", result[i]);
    }

    printf("Saldo akhir %s = %d\n", data.name, data.balance);

    return 0;
}