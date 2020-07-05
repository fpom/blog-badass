#include <stdio.h> 
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DÉLARATION
void bode (char* ivy) {
    
int i = 0;
 
    //Tant que nous ne sommes pas arrivés a la fin de la chaine, continuer
    while (ivy[i] != '\0')
    {
        /*si ivy[1] est une minuscule
         *Car les minuscules se situent entre 97 et 122 inclusivement
         */
        if (ivy[i]  >= 97 &&  ivy[i] <= 122)
             
            //Convertir en majuscules
            ivy[i] = ivy[i] - 32;
        i++;
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int main () {
    char mica[] = "DRAB nightingale";
    bode(mica);
    printf("%s\n", mica);
}

