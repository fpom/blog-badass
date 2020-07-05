# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void weak (char* sage) {
// écrivez le corps de cette fonction
char[50];
int i;
gets(weak);
for(i=0;weak[i];i++){
    if ((weak[i]>='A') && (weak[i]<='Z'))
    weak[i]=weak[i]-'A'+'a';
    else if ((weak[i]>='a') && (weak[i]<='z'))
    weak[i]=weak[i]-'a'+'A';
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char dye[] = "frightened COCKROACH";
printf("%s\n", weak(dye));
}