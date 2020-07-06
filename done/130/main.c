#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void dent (char* frier) {

    for(int i = 0; frier[i] != '\0'; i++){

        if(frier[i] >= 'A' && frier[i] <='Z'){

            frier[i] += 32;
        }
    }
}


// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
 char faxed[] = "arrogant PEKINGESE";
 dent(faxed);
 printf("%s\n", faxed);
}
