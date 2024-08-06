int listele(){
        kayit b;
        FILE* fptr=fopen("C:\\Users\\Výctus\\Desktop\\C DOSYALAR\\metin.txt","r");
        if(fptr==NULL){
            printf("dosya açilimnda bir hata olustu.");
            return -1;
        }
        printf("AD\t\t\tSOYAD\t\t\tTELEFON\n--\t\t\t-----\t\t\t-------\n");
        while(!feof(fptr)){
            fscanf(fptr,"%s%s%s",&b.ad,&b.soyad,&b.telefon);

            printf("%s\t\t\t%s\t\t\t%s\n",b.ad,b.soyad,b.telefon);
        }
        fclose(fptr);
        return 0;
}
