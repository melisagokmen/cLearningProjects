#include <stdio.h>
#include <stdlib.h>
int asalsayibul();
int main()
{

asalsayibul();
}
int asalsayibul()
{
    int sayi;
int i;
int j;
for(sayi=2;sayi<100;sayi++){
        j=1;
    for(i=2;i<sayi;i++){
        if(sayi%i==0){
            j=0;
        }
    }
    if(j==1){
    printf("%d ",sayi);
    }
}

}
