#include <stdio.h>
#include <ctype.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void waled (char* iamb) {
// écrivez le corps de cette fonction
    int i = 0;
    for (i = 0 ; iamb[i] != '\0' ; i++){
            iamb[i] = toupper(iamb[i]);
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char clink[] = "precious MOUSE";
    waled(clink);
    printf("%s\n", clink);
}
