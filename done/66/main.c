#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void hut (char* had){
    // écrivez le corps de cette fonction
    int i;
    char* s;
    scanf("%s", s);
    gets(s);
    for (i=0; s[i]; i++){

        if ((s[i]>='A')&&(s[i]<='z')){
            s[i]=s[i]-'A'+'a';
        }
        else if((s[i]>='a')&&(s[i]<='z')){
            s[i]-'a'+'A';
        }

    }
return 0;
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main() {
    char lit[] = "STRANGE hippopotamus";
    hut(lit);
    printf("%s\n", lit);
}
