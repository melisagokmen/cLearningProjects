#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j;
int temp;
int dizi[6]={1,9,8,6,7,5};
for(i=0;i<6;i++){
    for(j=i+1;j<6;j++){
        if(dizi[i]>dizi[j]){
            temp=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=temp;
        }
    }
    printf("%d ",dizi[i]);
}
}
