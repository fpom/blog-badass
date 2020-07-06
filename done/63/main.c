 # include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
 // NE CHANGEZ PAS CETTE DÉLARATION
 void tizzy (char* dined) {
 // écrivez le corps de cette fonction
   for(int i=0;i<13;i++){
      if(dined[i]>64 && dined[i]<91){
          dined[i]+=32;
      }
  }
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char taut[] = "naughty LLAMA";
 printf("%s\n", tizzy(taut));
 }