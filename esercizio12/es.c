#include<stdio.h>
#include<string.h>
#define DIM 8
int main(int argc, char*argv[])
{
    int gg, mm, aa, data;
    char numero[DIM];
    for(int i = 0; i < DIM; i++)
    {
        numero[i] = argv[1][i];
    }
    data = atoi(numero);
    gg = data/1000000;//trovo il numero del giorno 31122020
    mm = (data/10000)-(gg*100);
    aa = data - ((data/10000)*10000);//31122020-(3112)*10000= 31122020 - 31120000 = 2020
    if (gg <= 31)
    {
        if(mm <= 12)
        {
            if(aa <= 2022)
            {
                printf("%d/%d/%d \n",gg,mm,aa);
            }
        }
    }
    else
    {
    	printf("Ha inserito una data non corretta\n");
    }
    return 0;
}
