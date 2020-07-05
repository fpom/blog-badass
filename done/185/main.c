#include <stdio.h>

//NE MODIFIER PAS CE COMMENTAIRE NI RIEN AU DESSUS

//NE CHANGEZ PS CETTE DECLARATION
void maria (char* gummy) {
    //écrivez le corps de cette fonction
   int nbre;
   for (nbre = 0; gummy[nbre]!='\0'; nbre++) {
      if(gummy[nbre] >= 'a' && gummy[nbre] <= 'z') {
         gummy[nbre] = gummy[nbre] - 'a' + 'A';
      }
   }
   return 0;
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main (){
    char coy [] = "ANXIOUS crocodile";
    maria(coy);
    printf("%s\n", coy);
}
