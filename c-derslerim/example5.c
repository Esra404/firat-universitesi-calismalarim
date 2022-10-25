#include <stdio.h>
int main(){
    //kişinin oy kullanıp kullnamayacağını ekrana basan program
    printf("lütfen yaşınızı giirniz");
    int yas;
    scanf("%d",&yas);
    // hey
    if(yas>=18){
        printf("erişkinsiniz oy kullanabilirsiniz");
 
    }
    else{

        printf("malesef yaşınız 18 den küçüktür oy kullnamazsınız.");
    }
}