#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DÉLARATION
void wan (char* yet) {
    yet = 100;
       for (int i = 0; yet<yet.length; i++) {

      if(yet[i] == 'a'|| 'e' || 'i'|| 'o'|| 'u'|| 'y') {
         yet[i] = yet[i] -32;}
         if(yet[i] == 'A'|| 'E' || 'I'|| 'O'|| 'U'|| 'y'){
            yet[i] = yet[i] +32;
         }
       }
}
 int main () {
char drank[] = "CALM chicken";
 printf("%s\n", wan(drank));
 }



