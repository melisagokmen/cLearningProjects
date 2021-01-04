#include <stdio.h>
#include <stdlib.h>

int main()
{
int dizi[6]={1,10,9,3,2,6};
int i,j;
int temp;
int min;
for(i=0;i<6;i++){
        min=i;
  for(j=i+1;j<6;j++){
  if(dizi[min]>dizi[j]){
        min=j;

        }}
temp=dizi[i];
dizi[i]=dizi[min];
dizi[min]=temp;

  printf("%d ",dizi[i]);
}
}
