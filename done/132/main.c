#include <studio.h>
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
// NE CHANGEZ PAS CETTE DÉLARATION
void grip (char* dumpy) {
int i = 1;
//On continue jusqu'a la fin du mot"//
while (dumpy[i] != '\0')
{
//si la première lettre est une consonne minuscule//
if (dumpy[i] >= 97 && dumpy[i] <= 122)
if(dumpy[i] !={97,101,105,111,117,121})
//Convertir en majuscules
dumpy[i] = dumpy[i] - 32;
i++;
}
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int main () {
char stem[] = "funny WOODPECKER";
printf("%s\n", grip(stem));
}


