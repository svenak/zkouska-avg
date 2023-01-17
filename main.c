#include <stdio.h>
#include <windows.h>

#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  int i,x, s=0;
    setlocale(LC_ALL,"");      //čeština
    float avg;
    srand(time(0));
    system("color e1");        //barvičky
    printf("Průměr z 20 čísel: \n");
   for(i=0;i<20;i++)
    {
        x = rand()%101-50;    //vybírá čísla od -50 do 50              
        printf(" %4d",x);
        s+=x;                             
    }
    avg=(float)s/20;         //přetypování - nebo/20.0             
  printf("\n součet je: %d\n",s);
  printf("Prumer je: %8.2f\n",avg);
  system("PAUSE");	
  return 0;
}
