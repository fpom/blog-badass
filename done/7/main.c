#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DECLARATION

void snipe(char* mined){
int l = 0;
for(l = 0; curst[l] != '\0';l++){
    if (curst[l] >= 'a' && curst[l] <= 'z')
        curst[l] -= 'a' - 'A';

}
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main (){
char curst[] = "fancy CHAMALEON";
printf("%s\n',snipe(curst));
}
