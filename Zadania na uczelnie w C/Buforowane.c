#include <stdio.h>

int main(int argc,char *argv[])
{

    int znak;
    FILE *plikKtoryCzytamy;
    FILE *plikDoKtoregoZapisuje;
    plikKtoryCzytamy = fopen ("Tekst.txt", "r");
    plikDoKtoregoZapisuje = fopen ("Result-Buforowane.txt", "a");

znak = fgetc(plikKtoryCzytamy);

        for (int x=1 ;(znak != EOF);x++)
       {

      if(x%3==0)
      {
        fputc ((char)znak, plikDoKtoregoZapisuje);

      }
      znak = fgetc(plikKtoryCzytamy);
       }
   int  closeall (void);
    return 0;
}

