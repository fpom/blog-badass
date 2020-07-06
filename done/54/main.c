#include <stdio.h>
    // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
    // NE CHANGEZ PAS CETTE DÉLARATION

    // écrivez le corps de cette fonction
    void notch (char* pin) {
    int i = 0;
 
    //Tant que nous ne sommes pas arrivés a la fin de la chaine, continuer
    while (pin[i] != '\0')
    {
        /*si chaine[1] est une minuscule
         *Car les minuscules se situent entre 97 et 122 inclusivement
         */
        if (pin[i]  >= 65 &&  pin[i] <= 90)


            //Convertir en minuscules
            pin[i] = pin[i] + 32;

        i++;

    } }


    // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char sum[] = "misty WOLVERINE";
notch(sum);
printf("%s\n",sum);}