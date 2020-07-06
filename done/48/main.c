#include <stdio.h>
#include <string.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void leaf (char* dear) {
for(int i=0; i<strlen(dear); i++) {
    if(dear[i] == 'a' | dear[i] == 'e' | dear[i] == 'i' | dear[i] == 'o' | dear[i] == 'u' | dear[i] == 'y') {
        dear[i] = dear[i] - 'a' + 'A';
    } else {
        if(dear[i] == 'A' | dear[i] == 'E' | dear [i] == 'I' | dear[i] == 'O' | dear[i] == 'U' | dear[i] == 'Y') {
          dear[i] = dear[i] - 'A' + 'a';  
        }
    }
}
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
 char visit[] = "BUSY discus";
 printf("%s\n", leaf(visit));
}


