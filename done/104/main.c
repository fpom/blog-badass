# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void lent (char* graft) {
// écrivez le corps de cette fonction
int i=0;
char val=0;
for (i=0; i<graft.length; i++) {
    val = graft[i];
    if (val <= 'z'){
        val = val - 'a' + 'A';
    }
    graft[i] = val;
}
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char darn[] = "mysterious BIRD";
printf("%s\n", lent(darn));          
}
