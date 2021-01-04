#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int uzunluk=0;
int a=0;
int i;
int sayi;
char dizi[]="melisagokmen";
uzunluk=strlen(dizi);
// printf("%d",uzunluk);
scanf("%d",&sayi);
for(i=0;i<sayi;i++){
    printf("%c",dizi[i]);
}
printf("\n");
for(i=sayi;i<uzunluk;i++){
    printf("%c",dizi[i]);
}

}

