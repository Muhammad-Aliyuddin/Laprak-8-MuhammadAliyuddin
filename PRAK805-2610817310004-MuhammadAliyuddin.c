#include <stdio.h>

struct Dompet
{
    char name[100];
    int balance;
};

void topUp(struct Dompet *data, int amount)
{
    data->balance = data->balance + amount;

    printf("Top up %d berhasil, saldo = %d\n", amount, data->balance);
}

void payment(struct Dompet *data, int amount)
{
    if (data->balance >= amount)
    {
        data->balance = data->balance - amount;

        printf("Bayar %d berhasil, saldo = %d\n", amount, data->balance);
    }
    else
    {
        printf("Bayar %d gagal, saldo tidak cukup\n", amount);
    }
}

int main()
{
    struct Dompet data;
    int n, amount;
    char type;

    scanf("%s %d", data.name, &data.balance);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %c %d", &type, &amount);

        if (type == 'T')
        {
            topUp(&data, amount);
        }
        else if (type == 'B')
        {
            payment(&data, amount);
        }
    }

    printf("Saldo akhir %s = %d\n", data.name, data.balance);

    return 0;
}
