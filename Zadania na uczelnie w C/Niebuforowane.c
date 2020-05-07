#include <stdio.h>
#include <fcntl.h>

int main (int argc,char *argv[])
{
    char znak;
    int x=0;
    int plikKtoryCzytamy = open("Tekst.txt",O_RDWR);
    int plikDoKtoregoZapisuje = open("result-NIEbuforowane.txt",O_CREAT | O_RDWR);

    do
    {
      read(plikKtoryCzytamy,&znak,1);
      x++;
      if(x%3==0)
      {
          write(plikDoKtoregoZapisuje,&znak,!eof(plikKtoryCzytamy));
      }
    }while (!eof(plikKtoryCzytamy));

    close(plikKtoryCzytamy);
    close(plikDoKtoregoZapisuje);
    return 0;
}
