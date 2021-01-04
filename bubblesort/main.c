#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j;
int temp;
int dizi[6]={7,2,6,9,5,4};
for(i=0;i<6;i++){

        for(j=6;j>i;j--){

    if(dizi[i]>dizi[j]){
        temp=dizi[i];
        dizi[i]=dizi[j];
        dizi[j]=temp;

    }


}
printf("%d ", dizi[i]);

}


}
