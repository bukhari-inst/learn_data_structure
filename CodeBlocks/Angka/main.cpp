#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

main()
{
    int n,i,a,c;
    printf("\t\tProgram mengecek bilangan prima");
    printf("\n\n\nMasukan Jumlah bilangan pertama : ");
    scanf("%d",&n);
    printf("\n\nSYang termasuk bilangan prima adalah :\n\n");
    c=0;                                     //pengisian nilai awal variabel c
    for(i=2; i<=n; i++)            //bilangan 1 sampai jumlah bilangan pertama
    {
        a=2;                    //pengisian nilai awal variabel a
        while (a<=i-1)
        {
            if(i%a==0)
            {
                c=c+1;
            }
            a++;                        //perubahan nilai a sehingga terjadi pengulangan yang akan memenuhi syarat tertentu.
        }
        if(c==0)   //pengecekan yang termasuk bilangan prima
        {
            printf("%d",i);  //mencetak yang merupakan bilangan prima
            printf(" ");         //untuk memisahkan antara bilangan
        }
        c=0;        //berfungsi untuk mengembalikan nilai c menjadi 0 agar nilai c setiap bilangan menjadi satu kesatuan.
    }
    return 0;
}
