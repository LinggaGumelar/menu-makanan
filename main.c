#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilih,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0,total,jumlah_pesanan;

    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\n");
    printf("\xdc                 MENU                 \xdc\n");
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\n");
    printf("\xdc                MAKANAN               \xdc\n");
    printf("\xdc  1. ayam goreng             Rp. 8000 \xdc\n");
    printf("\xdc  2. ayam bakar              Rp.10000 \xdc\n");
    printf("\xdc  3. kari ayam               Rp. 9000 \xdc\n");
    printf("\xdc  4. nasi putih              Rp. 3000 \xdc\n");
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\n");
    printf("\xdc                MINUMAN               \xdc\n");
    printf("\xdc  5. es teh                  Rp. 3000 \xdc\n");
    printf("\xdc  6. teh hangat              Rp. 2500 \xdc\n");
    printf("\xdc  7. es jeruk                Rp. 4000 \xdc\n");
    printf("\xdc  8. jeruk hangat            Rp. 3500 \xdc\n");
    printf("\xdc  9. susu                    Rp. 5000 \xdc\n");
    printf("\xdc 10. milo                    Rp. 6000 \xdc\n");
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\n");
    printf("\xdc                                      \xdc\n");
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\n");
    do
    {
        printf("pilih : ");
        scanf("%i",&pilih);

        if (pilih==1)
        {
            printf("ayam goreng Rp.8000\n");
            printf("masukkan jumlah pesanan: ");
            scanf("%d", &jumlah_pesanan);
            sum1 = jumlah_pesanan * 8000;

        }
        else if (pilih==2)
        {
            printf("ayam bakar Rp.10000\n");
            printf("masukkan jumlah pesanan: ");
            scanf("%d", &jumlah_pesanan);
            sum2 = jumlah_pesanan * 10000;
        }
        else if (pilih==3)
        {
            printf("kari ayam Rp.9000\n");
            printf("masukkan jumlah pesanan: ");
            scanf("%d", &jumlah_pesanan);
            sum3 = jumlah_pesanan * 9000;
        }
        else if (pilih==4)
        {
            printf("nasi putih Rp.3000\n");
            printf("masukkan jumlah pesanan: ");
            scanf("%d", &jumlah_pesanan);
            sum4 = jumlah_pesanan * 3000;
        }
        else if (pilih==5)
        {
            printf("es teh Rp.3000\n");
            printf("masukkan jumlah pesanan: ");
            scanf("%d", &jumlah_pesanan);
            sum5 = jumlah_pesanan * 3000;
        }
        else if (pilih==6)
        {
            printf("teh hangat Rp.2500\n");
            printf("masukkan jumlah pesanan: ");
            scanf("%d", &jumlah_pesanan);
            sum6 = jumlah_pesanan * 2500;
        }
         else if (pilih==7)
        {
            printf("es jeruk Rp.4000\n");
            printf("masukkan jumlah pesanan: ");
            scanf("%d", &jumlah_pesanan);
            sum7 = jumlah_pesanan * 4000;
        }
         else if (pilih==8)
        {
            printf("jeruk hangat Rp.3500\n");
            printf("masukkan jumlah pesanan: ");
            scanf("%d", &jumlah_pesanan);
            sum8 = jumlah_pesanan * 3500;
        }
         else if (pilih==9)
        {
            printf("susu Rp.5000\n");
            printf("masukkan jumlah pesanan: ");
            scanf("%d", &jumlah_pesanan);
            sum9 = jumlah_pesanan * 5000;
        }
         else if (pilih==10)
        {
            printf("milo Rp.6000\n");
            printf("masukkan jumlah pesanan: ");
            scanf("%d", &jumlah_pesanan);
            sum10 = jumlah_pesanan * 6000;
        }
         else if (pilih==0)
        {
            continue;
        }

    }
    while (pilih!=0);
    printf("Selesai\n");
    total = sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10;
    printf("Total Pembelian %d ", total);

return 0;
}
