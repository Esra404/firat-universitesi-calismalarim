#include <stdio.h>
int main(){

int x;
int y;
printf("lütfen il sayıyı giriniz=");
scanf("%d",&x);
printf("lütfen ikiinci sayıyı giriniz=");
scanf("%d",&y);
if(x>y){
    printf("birinci sayı ikinci sayıdan büyüktür");
}
else if(x==y){
    printf("iki sayı birine eşittir.");
}
else{
    printf("ikinci sayi ilk sayıdan büyüktür");
}




    return 0;
}