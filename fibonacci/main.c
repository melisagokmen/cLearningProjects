#include <stdio.h>
#include <stdlib.h>
int fibonacci(int sayi);
int main()
{

int a= fibonacci(6);
printf("%d",a);

}
int fibonacci(int sayi){
if(sayi==0){
    return 1;
}
else if(sayi==1){
    return 1;
}
return fibonacci(sayi-1)+fibonacci(sayi-2);
}
