#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉCLARATION
void poser (char* blurb) {
    // écrivez le corps de cette fonction
    int i=0;
    while(blurb[i] != '\0') {
        if (blurb[i] >= 97 && blurb[i] <= 122)
            blurb[i] = blurb[i] - 32;
            i++;
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main() {
    char here[] = "old-fashioned TORTOISE";
    poser(here);
    printf("%s\n",here);
}
