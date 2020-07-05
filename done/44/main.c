# include <stdio.h>
# include <ctype.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION


void puffy (char* any) {
    char caractere = 'a';
    caractere = toupper(caractere);
    char caractere = 'e';
    caractere = toupper(caractere);
    char caractere = 'i';
    caractere = tolower(caractere);
    
// écrivez le corps de cette fonction
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char reply[] = "SMILING salamander";
    printf("%s\n", puffy(reply));
}