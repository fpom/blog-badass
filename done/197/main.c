#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

#include <string.h>

// NE CHANGEZ PAS CETTE DECLARATION
void slat (char* hefty) {
    int x;
    for(int i=0; i<strlen(hefty); i++){
        x=hefty[i];
        if ((x<91)&&(x>64)&&(x!='A')&&(x!='E')&&(x!='I')&&(x!='O')&&(x!='U')&&(x!='Y')){
            x=x+32;
            hefty[i]=x;
        }
    }
}


// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char limn[] = "filthy OCELOT";
    slat(limn);
    printf("%s\n", limn);
}
