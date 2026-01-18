#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sayi, i, j, k;

    printf("n sayisini giriniz");
    scanf("%d", &n);

    int pozitif[n];
    int negatif[n];
    int pindex = 0;
    int nindex = 0;

    for (i = 0; i < n; i++)
    {
        printf("%d. sayyiy girin", i + 1);
        scanf("%d", &sayi);

        if (sayi > 0)
        {
            pozitif[pindex] = sayi;
            pindex++;
        }
        if (sayi < 0)
        {
            negatif[nindex] = sayi;
            nindex++;
        }
    }
    printf("\n pozitif sayilar: ");
    for (j = 0; j < pindex; j++)
    {
        printf("%d, ", pozitif[j]);
    }
    printf("\n negatif sayilar: ");
    for (k = 0; k < nindex; k++)
    {
        printf("%d, ", negatif[k]);
    }

    return 0;
}
