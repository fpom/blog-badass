
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DÉLARATION

char* motor (char* arena) {
    int taille=strlen(arena);
    for(int i=0;i<taille;i++){
        if((arena[i])=='A' || arena[i]=='E' ||arena[i]=='I'||arena[i]=='O'||arena[i]=='U'||arena[i]=='Y'){
           arena[i]=arena[i]+32;
        }

    }
    return arena;
}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
 int main () {
   char bang[] = "DISTURBED antelope";
   printf("%s\n", motor(bang));
}
