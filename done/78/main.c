# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE D�LARATION
#include <string.h>
void trite (char* fray) {
 // �crivez le corps de cette fonction
 for ( int i = 0; fray[i]!='\0'; i++) {
     // si les caract�res sont en minuscules, convertissez-les en majuscules
     // en soustrayant 32 de leur valeur ASCII.
      if(fray[i]== 'a'){
         fray[i] = fray[i] -32;
      }
      else if (fray[i] = 'e'){
         fray[i] = fray[i] -32;
      }
      else if (fray[i] == 'i'){
        fray[i] = fray[i] -32;
      }
      else if (fray[i] == 'o'){
         fray[i] = fray[i] -32;
      }
       else if (fray[i] == 'u'){
         fray[i] = fray[i] -32;
      }
       else if (fray[i] == 'o'){
         fray[i] = fray[i] -32;
      }
       else if (fray[i] == 'y'){
         fray[i] = fray[i] -32;
      }

}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char album[] = "VAST tiffany";
 trite(album);
 printf("%s\n", trite(album));
}


