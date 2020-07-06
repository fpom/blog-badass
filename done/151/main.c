# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 4

// NE CHANGEZ PAS CETTE DÉLARATION
void gone (char* lad) {
    // la fonction est void, mais le programme principal 
    // main() interprete son appel comme %s, ce qui genère une erreur
    int i=0;
    for(i=0; i < sizeof(lad) ; i++){
        if(lad[i] != 'a' && lad[i] != 'e' &&
            lad[i] != 'i' && lad[i] != 'o' && 
            lad[i] != 'u' && lad[i] != 'y' && 
            lad[i] >= 'a' && lad[i] <= 'z'){
            lad[i] = lad[i] - 'a' + 'A';
        }
    }
}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
   char flunk[] = "ALIVE dolphin";
   gone(flunk);
   printf("%s\n", (flunk));
}

