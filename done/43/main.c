#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void salt (char* ooze) {
    int i;
    for (i = 0; ooze[i]; i++) {
      if ((ooze[i] >= 'a') && (ooze[i] <= 'z')) 
        ooze[i] = ooze[i] - 'a' + 'A';
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char balsa[] = "MUDDY insect";
printf("%s\n", salt(balsa));
}