# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void ninny (char* stair) {
// écrivez le corps de cette fonction

for(int i=0; stair[i]!='\0'; i++){
    if ((stair[i]!='A'&& stair[i]!='E' && stair[i]!='I' && stair[i]!='O' && stair[i]!='U' && stair[i]!='Y') && (stair[i]>='A' && stair[i]<='Z')){
        stair[i] += 32;  
    }
}
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char valor[] = "inquisitive BULLDOG";
ninny(valor);
printf("%s\n", valor);
}
