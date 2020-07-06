#include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 
 
 // NE CHANGEZ PAS CETTE DÉLARATION
 
 void chomp (char* pin) {
     int const pin_len = my_pinlen(pin);
     char *new_pin = malloc( (pin_len + 1 ) * sizeof(char));

    if (!pin || !new_pin)
        return NULL;
    for (int i = 0; pin[i]; i++) {
        if (pin[i] < 'z' && pin[i] > 'a')
            new_pin[i] = pin[i] - 32;
        else
            new_pin[i] = pin[i];
    }

     // écrivez le corps de cette fonction
 }
 
 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int main () {
    char bunt[] = "MOTIONLESS chameleon";
    printf("%s\n", chomp(bunt));
}