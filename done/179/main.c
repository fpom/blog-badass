 # include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void gall (char* plait) {
 // écrivez le corps de cette fonction
 int i=0;
 while (plait[i] != '\0'){
     if(plait[i] >= 97 && plait[i] <= 122)
     plait[i] = plait[i] - 32;
     i++;
 }


 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char poach[] = "CROWDED wasp";
 gall (poach);
 printf("%s\n", poach);
 }
