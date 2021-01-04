#include <stdio.h>
#include <stdlib.h>
  int faktoriyel(int sayi);
int main()
{
int a=faktoriyel(3);
printf("%d",a);
}
int faktoriyel(int sayi){
if(sayi==1){
    return 1;
}

return sayi*faktoriyel(sayi-1);
}
