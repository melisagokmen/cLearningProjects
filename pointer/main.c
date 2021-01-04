#include <stdio.h>
#include <stdlib.h>
int doldur(int *dizi);
int main()
{
int dizi[5][5]={0};
doldur(&dizi[0][0]);
}
int doldur(int *dizi){
int i;
int k,m;
int j;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        *dizi=i*j;
        ++dizi;

    }
}
for(k=0;k<5;k++){
    for(m=0;m<5;m++){
      printf("%d ",*dizi);
    }
    printf("\n");
}


}
