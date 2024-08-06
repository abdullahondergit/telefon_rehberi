#include <stdio.h>
#include <stdlib.h>
#include "basliklar.h"
#include "ekle.h"
#include "listele.h"
#include "ara.h"
#include "menu.h"

int main()
{   int secim;
    char aranacak[15];
    int fonksonuc=0;
    menu();
    do{
        printf("secim yapiniz:");
        scanf("%d",&secim);
        switch(secim){
    case 1:
        if(ekle()==0)
            printf("basariyla eklendi\n");
        else
            printf(" bir sorun olustu!\n");
            break;

    case 2:
        if(listele()==0)
            printf("basariyla listelendi\n");
        else
            printf(" bir sorun olustu!\n");
            break;
    case 3:
            printf("aranacak ismi giriniz:\n");
            scanf("%s",&aranacak);
            fonksonuc=ara(aranacak);
            if(fonksonuc=0)
                printf("kisi bulunamadi!\n");
            else
                printf("%d adet sonuc bulundu.\n",fonksonuc+1);
            break;

    case 4:
        printf("cikis yapiliyor..");
        break;
        }

    }
    while(secim!=4);
    return 0;
}
