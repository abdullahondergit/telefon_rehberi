int ara(char *kisi){
        kayit c;
        int i=0;
        FILE* fptr=fopen("C:\\Users\\V�ctus\\Desktop\\C DOSYALAR\\metin.txt","r");
        if(fptr==NULL){
            printf("dosya a�ilimnda bir hata olustu.");
            return -1;
        }
        while(!feof(fptr)){
                fscanf(fptr,"%s%s%s",c.ad,c.soyad,c.telefon);
        if(!strcmp(kisi,c.ad)){
            ++i;
            printf("%s\t\t\t%s\t\t\t%s\n",c.ad,c.soyad,c.telefon);

        }
        }
        fclose(fptr);
        return i;
}
