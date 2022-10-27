//exercicio 4

int bitsUm (unsigned int n){
    int r=0;
    while (n>2){
        if(n%2!=0)
        r++;
    n=n/2;
    }
    r++;
    return r;
}

//*******************************************

//exercicio 5

int trailingZ (unsigned int n) {
   int r=0;
    while (n>2){
        if(n%2==0)
        r++;
        else break;
    n=n/2;
    }
    return r;
}

//***********************************************

//exercicio 6

int qDig (int n) {
    int r = 0;
    while (n>0){
        n=n/10;
        r++;
    }
    return r;
}

//**********************************************

//exercicio 7

int i, j;

    for (i = 0; s1[i] != '\0'; ++i);
    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    
    return s1;

//***********************************************************

//exercicio 8

  int i;
   for (i = 0; s2[i] != '\0'; ++i) 
      s1[i] = s2[i];
   s1[i] = '\0';

//*************************************************************

//exercicio 9

 int i;
   for (i = 0; s1[i] == s2[i]; ++i)
      if (s1[i] == '\0') return 0;
   unsigned char s1i = s1[i], s2i = s2[i];
   return s1i - s2i;

//****************************************************************

//exercicio 10 (incompleta)

int i,j,c,p;
    if(strlen(s1)<=strlen(s2)){
        return NULL;
    }else{
        for(i=0;i<strlen(s1);i++){
            if(s2[0]==s1[i]){
                p=i;
                for(j=0;j<strlen(s2)-1;j++){
                    if(s2[j]==s1[i++])
                        c++;
                }
            }
            if(c==strlen(s2)){
                break;
        }
    }
    if(c==strlen(s2))
        return p;
    else
        return NULL;

//**********************************************************************













