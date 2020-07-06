	#include <stdio.h>
	// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
	// NE CHANGEZ PAS CETTE DÉLARATION

	// écrivez le corps de cette fonction
	void woe (char* amaze) {
    int i = 0;
 
    //Tant que nous ne sommes pas arrivés a la fin de la chaine, continuer
    while (amaze[i] != '\0')
    {
        /*si chaine[1] est une minuscule
         *Car les minuscules se situent entre 97 et 122 inclusivement
         */
        if (amaze[i]  >= 97 &&  amaze[i] <= 122)
             
            //Convertir en majuscules
            amaze[i] = amaze[i] - 32;
        else 
            //Convertir en minuscules
            amaze[i] = amaze[i] + 32;
            
        i++;
        
    } }
	

	// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char sum[] = "itchy RATTLESNAKE";
woe(sum);
printf("%s\n",sum);}