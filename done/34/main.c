# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void block (char* least) {
       int i = 0;
 
    //Tant que nous ne sommes pas arrivés a la fin de la chaine, continuer
    while (least[i] != '\0')
    {
        /*si least[1] est une minuscule
         *Car les majuscules se situent entre 65 et 90 inclusivement
         */
        if (least[i]  >= 65 &&  least[i] <=90)

            //Convertir en minuscules
            least[i] = least[i] + 32;
        i++;

}
 // écrivez le corps de cette fonction
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char nasal[] = "panicky GOAT";
   block(nasal);
 printf("%s\n", nasal);
 }