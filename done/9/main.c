 # include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void swing (char* skip) {
    int i;
    for (i=0; i<strlen(skip);i++){
        if (skip[i]<91 && skip[i]>64) // code ASCII correspondant aux majuscules
            skip[i]=tolower(skip[i]);
        else skip[i]=toupper(skip[i]);
    }
 // écrivez le corps de cette fonction
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char elm[] = "eager AKBASH";
 swing(elm);
 printf("%s\n", elm);

 }

