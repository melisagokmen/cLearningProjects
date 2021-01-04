#include <stdio.h>
#include <stdlib.h>

int main()
{
 int j,k  ;
 int sayi;
 int matris[3][3]={0};
  for(j=0;j<3;j++){
    for(k=0;k<3;k++){
            scanf("%d",&sayi);
            matris[j][k]=sayi;


    }

 }
  for(j=0;j<3;j++){
    for(k=0;k<3;k++){
        printf("%d ",matris[j][k]);

    }
    printf("\n");

 }




 }


