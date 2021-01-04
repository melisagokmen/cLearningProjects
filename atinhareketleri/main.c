#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b;
    int gidilebilecekyerler(int atinkonumu[5][5]);
    int atinyeri[5][5];
    int sayi;
    int i,j;
    int x,y;
    int dizi[8][8]= {0};

    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            printf("x ");
        }
        printf("\n");
    }

    printf("Atin yerini random belirlemek icin 0 a, kendiniz belirlemek icin 1 e basiniz  ");
    scanf("%d",&sayi);

    if(sayi==0)
    {
        a=rand()%7;
        b=rand()%7;
        printf("%d\n",a);
        printf("%d\n",b);
        for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                if(i==a && j==b)
                {
                    printf("o ");
                    atinyeri[i][j]=dizi[a][b];
                }
                else if(abs(i-a)==2)
                {
                    if(abs(j-b)==1)
                    {
                        printf("a ");
                    }
                    else printf("x ");
                }
                else if(abs(j-b)==2)
                {
                    if(abs(i-a)==1)
                    {
                        printf("a ");
                    }
                    else printf("x ");
                }
                else printf("x ");
            }
            printf("\n");
        }
    }

    if(sayi==1)
    {
        printf("atin yeri icin koordinatlari giriniz\n");
        scanf("%d %d",&x,&y);
        for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                if(i==x&& j==y)
                {
                    printf("o ");
                    atinyeri[i][j]=dizi[x][y];

                }
                else if(abs(i-x)==2)
                {
                    if(abs(j-y)==1)
                    {
                        printf("a ");
                    }
                    else printf("x ");
                }
                else if(abs(j-y)==2)
                {
                    if(abs(i-x)==1)
                    {
                        printf("a ");
                    }
                    else printf("x ");
                }
                else printf("x ");

            }
            printf("\n");
        }
    }

}





