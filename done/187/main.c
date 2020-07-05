 # include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void sadly (char* loft) {

  int i;
  for (i = 0; loft[i]; i++)
    {
      if ((loft[i] >= ’a’) && (loft[i] <= ’z’))
        loft[i] += (’A’ - ’a’);
    }

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char lay[] = "POISED molly";
 printf("%s\n", sadly(lay));
}
