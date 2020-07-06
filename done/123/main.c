# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION

void fiery (char* bale) {
  int i = 0;
// écrivez le corps de cette fonction
 while (bale[i] != '\0')
    {
      // verifier si la lettre est une voyelle
        if (bale[i]  == 97 || bale[i] == 101 || bale[i] == 105 || bale[i] == 111|| bale[i] == 117 || bale[i] == 121)

            //Convertir en majuscules
            bale[i] = bale[i] - 32;
        i++;

      }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char slaw[] = "witty LEMUR";
fiery(slaw);
  printf("%s\n", slaw);
}