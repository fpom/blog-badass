#include <stdio.h>
#include <stdlib.h>

# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void marsh (char* fall) {
     int i;
  for (i = 0; fall[i]!='\0'; i++) {
      if(fall[i] >= 'a' && fall[i] <= 'z') {  //Si le caractère est compris dans les lettres minuscules..

         fall[i] = fall[i] -32;  //On soustrait 32 pour tomber sur la valeur ASCII de la majuscule.
      }
   }

 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char kazoo[] = "RELIEVED bird";
 marsh(kazoo);
 printf("%s\n",kazoo);
 }
