# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void iced (char* match) {
    // écrivez le corps de cette fonction
    for(int compteur=0; compteur<12; compteur++){
        if (match[compteur] - 'a'<= 26){
            match[compteur] = match[compteur] - 'a' + 'A';
        } else if (match[compteur] - 'A'<= 26){
            match[compteur] = match[compteur] - 'A' + 'a';
        } else {
            match[compteur] = match[compteur];
        }
    }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char unbar[] = "silly CUSCUS";
    iced(unbar);
    printf("%s\n", unbar);
}