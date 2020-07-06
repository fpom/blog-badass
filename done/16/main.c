# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void twerp (char* cozen) {
int i = 0;
    for (i = 0; cozen[i] != '\0'; i ++)
    {
        if (cozen[i]  >= 'B' &&  cozen[i] <= 'D' || cozen[i]  >= 'F' &&  cozen[i] <= 'H' || cozen[i]  >= 'J' &&  cozen[i] <= 'N'|| cozen[i]  >= 'P' &&  cozen[i] <= 'T' || cozen[i]  >= 'V' &&  cozen[i] <= 'Z' )
         cozen[i] -=  'B' - 'b';
    }
    i++;

}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
 char deuce[] = "clever WALLABY";
  twerp(cozen);
  printf("%s\n", cozen);
 }
