#include <stdio.h>
#include <string.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void buxom (char* mocha) {
    int i = 0;
    while(mocha[i] != 0){
        if(mocha[i] >= 'a'){
            if(mocha[i] == 'a' ||mocha[i] == 'e' || mocha[i] == 'i' || mocha[i] == 'o' || mocha[i] == 'u' || mocha[i] == 'y') {
                mocha[i] -= 32;
            }
        }
        i++;
    }
    return mocha;
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    int f;
char fruit[] = "stormy GAR";
buxom(fruit);
printf("%s\n", fruit);
}