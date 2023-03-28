    setlocale(LC_ALL, "tr_TR.UTF-8");
    char K1[50], K2[50];

    printf("Bir karakter dizisi giriniz :");
    fgets(K1, sizeof(K1), stdin);

    printf("Bir karakter dizisi daha giriniz :");
    fgets(K2, sizeof(K2), stdin);

    printf("Birinci Karakter Dizesi:%s", K1);
    printf("İkinci Karakter Dizesi:%s", K2);

    printf("Birinci Karakter Boyutu: %d\n", strlen(K1) - 1);
    printf("Birinci Karakter Boyutu: %d\n", strlen(K2) - 1);

    if (!strcmp(K1, K2))
        printf("Karakter dizileri bir birine eşittir\n");
    else
        printf("Karakter dizileri bir birine eşit değildir\n");

    strncpy(K1, K2, 4);
    printf("Birinci Karakter Dizesi: %s\n", K1);
    printf("İkinci Karakter Dizesi: %s\n", K2);

    strcat(K1, K2);
    printf("Birinci Karakter Dizesi: %s\n", K1);
    printf("Birinci Karakter Dizesi: %s\n", K2);

    strcpy(K1, K2);
    printf("İkinci Karakter Dizesi: %s\n", K1);
    printf("İkinci Karakter Dizesi: %s\n", K2);

    K1[4] = '\0';

    printf("Birinci Karakter Dizesi: %s\n", K1);
