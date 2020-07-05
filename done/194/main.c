# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void tout (char* civet) {
// écrivez le corps de cette fonction
    int i=0;
    while (civet[i] != '\0'){
        if (civet[i] == 'a'||civet[i] == 'e'
        || civet[i] == 'i'
        || civet[i] == 'o'
        || civet[i] == 'u'){
            civet[i] = civet[i]-32;
        }
        i++;
    }
}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
    char paler[] = "PERFECT uguisu";
    printf("%s\n", tout(paler));

}
