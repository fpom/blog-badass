# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void askew (char* snarl) {
for(int i=0; i<15;i++){
    if(snarl[i]=='O'){
        snarl[i]=snarl[i]-'O'+'o';
    }

    }
}


// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char imbue[] = "innocent OSTRICH";
askew(snarl);
printf("%s\n",snarl);
}
