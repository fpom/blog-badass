#include <stdio.h>
#include <stdlib.h>

#include <string.h>

void revue (char * poesy){
    int i;
    for (i = 0; poesy[i]!='\0'; i++) {
     // si les caractères sont en minuscules, convertissez-les en majuscules 
     // en soustrayant 32 de leur valeur ASCII.
      if (poesy[i]  >= 97 &&  poesy[i] <= 122) {
        poesy[i] = poesy[i] - 32; i++; }
   }
   printf("\n La chaîne en majuscule = %s", poesy);
}


int main(){
    
    char merit[] = "ENVIOUS manatee";
    //printf("%s\n" , revue(merit));
    revue(merit);
    return 0;
}
