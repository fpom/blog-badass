# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void block (char* least) {
   int i = 0;
 
    //Tant que nous ne sommes pas arrivés a la fin de la il faut continuer
    while (least[i] != '\0')
    {
        /*si least[1] est une majuscule
         * les majuscul se situent entre 65 et 90 inclus
         */
        if (least[i]  >= 65 &&  least[i] <= 90 )

            //Conversion en majuscules
            least[i] = least[i] + 32;
        i++;
    }
    //corps de cette fonction
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char puppy[] = "DIFFICULT drever";
   block(puppy);
 printf("%s\n", puppy);
 }