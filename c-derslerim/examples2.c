//kullanıcıdan ıkı sayı alınız ve baş hafını alınız
//bunları ekrana bastırınız
#include <stdio.h>
int main(){
    int sayi1;
    printf("lütfen ilk sayıyı giriniz.");
    scanf("%d",&sayi1);
    float sayi2;
    printf("lütfen ıkıncı sayıyı giriniz=");
    scanf("%f",&sayi2);
    char basharf;
    printf("lütfen adınızın ılk harfını gırınız=\n");
    scanf(" %c",&basharf);
    printf("ilk sayımız=%d  \n ikinci sayımız=%f\nbaşharfınız=%c",sayi1,sayi2,basharf);



}