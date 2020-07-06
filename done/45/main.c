#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 

// NE CHANGEZ PAS CETTE DÉLARATION 
void preen (char* grist) {
    
    
    //char grist[10];
    grist[5] = 'm'-'a'+'A';
    grist[6] = 'a'-'a'+'A';
    grist[7] = 'g'-'a'+'A';
    grist[8] = 'p'-'a'+'A';
    grist[9] = 'i'-'a'+'A';
    grist[10] = 'e'-'a'+'A';
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS 

 int main () { 
     char grist[] = "LONG magpie";
     preen(grist);
     printf("%s\n", grist); 
    }