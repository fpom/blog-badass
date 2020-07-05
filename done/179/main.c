#include <stdio.h>
#include <string.h>
#include <ctype.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DECLARATION
void bosun (char* wined) {
    // écrivez le corps de cette fonctionint i;
  scanf("%s",wined);
    int i;
        //for (i=0; i<strlen(wined); i++) {
        for (i=0; wined[i] != '\n'; i++)
        {
          if (( wined[i] >= 'a') && (wined[i] <= 'z' ))
             wined[i] += ('A' - 'a');
           // wined[i] = toupper (wined[i]);
        }
}

// NE MODIFEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int main () {
    char later [] = "ANNOYING abyssinian";
    //bosun(later);
}
