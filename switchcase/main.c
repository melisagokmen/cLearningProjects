#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int kenar;
int kisakenar;
int uzunkenar;
int cevre;
int alan;
int dikkenar1;
int dikkenar2;
int sayi;
int sayi1;
printf("dikdortgen icin 0,kare icin 1 ve ucgen icin 2 giriniz\n");
scanf("%d",&sayi1);

switch(sayi1){

case 0:
    printf("dikdortgen cevresi icin 3 alan icin 4 giriniz\n");
    scanf("%d",&sayi);
    switch(sayi){
    case 3:
      printf("kisa kenar uzunlugu giriniz\n");
      scanf("%d",&kisakenar);
      printf("uzun kenar uzunlugu giriniz\n");
      scanf("%d",&uzunkenar);
      cevre=(2*uzunkenar)+(2*kisakenar);
      printf("%d",cevre);
      break;
    case 4:
      printf("kisa kenar uzunlugu giriniz\n");
      scanf("%d",&kisakenar);
      printf("uzun kenar uzunlugu giriniz\n");
      scanf("%d",&uzunkenar);
      alan=uzunkenar*kisakenar;
      printf("%d",alan);
      break;
    }

break;
case 1:
    printf("kare cevresi icin 5 alan icin 6 giriniz\n");
    scanf("%d",&sayi);
    switch(sayi){
    case 5:
      printf("kenar uzunlugu giriniz\n");
      scanf("%d",&kenar);
      cevre=4*kenar;
      printf("%d",cevre);
      break;
    case 6:
      printf("kenar uzunlugu giriniz\n");
      scanf("%d",&kenar);
      alan=kenar*kenar;
      printf("%d",alan);

      break;
    }
break;
case 2:
    printf("ucgenin cevresi icin 7 alan icin 8 giriniz");
    scanf("%d",&sayi);
    switch(sayi){
        case 7:
         printf("birinci dik kenar uzunlugunu giriniz");
         scanf("%d",&dikkenar1);
         printf("ikinci dik kenar uzunlugunu giriniz");
         scanf("%d",&dikkenar2);
         cevre=dikkenar1+dikkenar2+(sqrt(pow(dikkenar1,2)+pow(dikkenar2,2)));
         printf("%d",cevre);
         break;
        case 8:
         printf("birinci dik kenar uzunlugunu giriniz");
         scanf("%d",&dikkenar1);
         printf("ikinci dik kenar uzunlugunu giriniz");
         scanf("%d",&dikkenar2);
         alan=(dikkenar1*dikkenar2)/2;
         printf("%d",alan);
         break;
    }
break;
}
}
