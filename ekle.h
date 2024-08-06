int ekle(){
        kayit a;
        FILE* fptr=fopen("C:\\Users\\Výctus\\Desktop\\C DOSYALAR\\metin.txt","a");
        if(fptr==NULL){
            printf("dosya açilimnda bir hata olustu.");
            return -1;
        }
        printf("\nisim giriniz:\n");
        scanf("%s",&a.ad);
        printf("\nsoyisim giriniz:\n");
        scanf("%s",&a.soyad);
        printf("\ntelefon no giriniz:\n");
        scanf("%s",&a.telefon);

        fprintf(fptr,"\n%s %s %s",a.ad,a.soyad,a.telefon);
        fclose(fptr);
        return 0;




}
