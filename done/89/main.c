# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void aced (char* mossy) {
 // écrivez le corps de cette fonction
   int i; 
 for (i = 0; mossy[i]; i++){
 if(mossy[i] >= 'A' && mossy[i] <= 'Z') {
         mossy[i] = mossy[i] + 32;
      }
 }

 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
 int main () {
 char very[] = "shy GORILLA";
 aced(very);
 printf("%s\n", very);
 }
