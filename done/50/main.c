# include <stdio.h>

#include <string.h>


 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 4

 // NE CHANGEZ PAS CETTE DÉLARATION

 void craft (char* sox) {

        int i;

     char str[100];

     gets(str);

   for (i = 0; str[i]!='\0'; i++) {

       if(str[i] = 'a' && str[i] = 'e' && str[i] = 'i' && str[i] = 'o'&& str[i] = 'u'&& str[i] = 'y') {

         str[i] = str[i] -32;

       }

   }

   printf("\n ELATED coyote = %s", str);

   return 0;


}


 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {

   char breed[] = "ELATED coyote";

   printf("%s\n", craft(breed));

}
