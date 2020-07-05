#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
    void apple (char* snore) {
// écrivez le corps de cette fonction
   int i = 0;
 
    //Tant que nous ne sommes pas arrivés a la fin de la chaine, continuer
    while (snore[i] != '\0')
    {
        /*si chaine[1] est une minuscule
         *Car les minuscules se situent entre 97 et 122 inclusivement
         */
        if (snore[i]  !=  97 ||  snore[i] ||  !==   105|| snore[i]  !=  117 || snore [i]  != 121   || snore[i]  != 101 ||  snore[i]  != 111 )
        //Convertir en majuscules
            snore[i] = snore[i] - 32;{

        i++;

    }
}



// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char cram[] = "FAIR ostrich";
printf("%s\n", apple(cram));
    }
