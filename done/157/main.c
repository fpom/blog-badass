# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION

void fruit (char* era)
{
// écrivez le corps de cette fonction
char hied[] = "FANTASTIC siberian";
scanf("%s",hied);
int voyellemin; int voyellemaj;
int *Voyellemin; int *Voyellemaj;
*Voyellemin = NULL;
voyellemin = strchr(hied, 'a', 'e', 'i', 'o', 'u', 'y');
if (voyellemin != NULL)
{
    voyellemin = voyellemin - 32;
}
*Voyellemaj = NULL;
voyellemaj = strchr(hied, 'A', 'E', 'I', 'O', 'U', 'Y');
if (voyellemaj != NULL)
{
    voyellemaj = voyellemaj + 32;
}
 return(voyellemin,voyellemaj);
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char hied[] = "FANTASTIC siberian";
printf("%s\n", fruit(hied));
}

