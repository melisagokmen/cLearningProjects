#include <stdio.h>
#include <stdlib.h>
struct calisan{
char isim[20];
char soyisim[20];
int yas;
char email[40];
char adres[100];
int maas;
};
int main()
{
int pay;
int fazlapara;
int kisisayisi=0;
char ch;
int d=0;
int sayi;
int sayi2;
int i;
struct calisan dizi[5];
int c=0;
FILE *fp=fopen("dosya.txt","r");
while(!feof(fp)){
    ch=getc(fp);
    if(ch=='\n'){
        d++;
    }

}
kisisayisi=d+1;

printf("Bilgileri gormek icin 0 a yeni calisan bilgisi eklemek icin 1 e prim guncellemek icin 2 ye cikis icin 3 e basiniz ");
scanf("%d",&sayi);

char isim[50] ,soyisim[50],email[50],adres[50];
int yas,maas;

if(sayi==0){
FILE *fp=fopen("dosya.txt","r");
while(fscanf(fp,"%s %s %d %s %s %d ",dizi[c].isim,dizi[c].soyisim,&dizi[c].yas,dizi[c].email,dizi[c].adres,&dizi[c].maas)!=EOF){
    printf("%s %s \n",dizi[c].isim,dizi[c].soyisim,dizi[c].yas,dizi[c].email,dizi[c].adres,dizi[c].maas);

}
fclose(fp);

}


else if(sayi==1){
 printf("eklemek istediginiz calisan sayisini giriniz");
 scanf("%d",&sayi2);
 printf("calisanlarin isim soyisim yas email adres ve yas bilgisini giriniz");

 for(i=0;i<sayi2;i++){
 scanf("%s %s %d %s %s %d",&isim,&soyisim,&yas,&email,&adres,&yas);
 FILE *fp=fopen("dosya.txt","a");
 fprintf(fp,"\n%s %s %d %s %s %d ",isim,soyisim,yas,email,adres,yas);
 fclose(fp);


 }
}
if(sayi==2){
fazlapara=5000;
FILE *fp=fopen("dosya.txt","r");
while(fscanf(fp,"%s %s %d %s %s %d ",dizi[c].isim,dizi[c].soyisim,&dizi[c].yas,dizi[c].email,dizi[c].adres,&dizi[c].maas)!=EOF){
   //printf("%d\n",dizi[c].maas);}
pay=fazlapara/kisisayisi;
dizi[c].maas=dizi[c].maas+pay;
printf("%s %d\n",dizi[c].isim,dizi[c].maas);
}

//printf("%d",pay);

}
}



