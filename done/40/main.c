 # include <stdio.h>

#include <string.h>
 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 4
 // NE CHANGEZ PAS CETTE DÉLARATION
 void slew (char* feint) {
     char* resultat;
     int i ;
     for(i = 0; i< strlen(feint);i++){
         resultat[i] = feint[i];
         if (resultat[i]>='A' && resultat[i]<='Z')
             resultat[i] = resultat[i] + 32;
     }
     
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
 int main () {

 char veto[] = "lucky ANTEATER";
   printf("%s\n", slew(veto));
 }
