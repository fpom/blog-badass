# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

#include <stdlib.h>
#include <string.h>


 // NE CHANGEZ PAS CETTE DÉLARATION
 void cider (char* scald) {
 // écrivez le corps de cette fonction

int i=0;
for(i=0; scald[i];i++){
    if((scald[i]>='A') && scald[i]<='Z'))
    scald[i] -= 'A'+ 'a';
    else if ((scald[i]>='e') && scald[i]<='z'))
    scald[i]-= 'e'+ 'A';
   /* else if 
    else if 
    else if 
    else if */
    
    else scald[i]=scald[i]
}
return 0;
 }

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
 int main () {
 char greed[] = "COMFORTABLE leopard";
 printf("%s\n", cider(greed));
 }
