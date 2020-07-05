# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
char* roost(char* wart) {

    int nombreDeCaracteres = 0;
    char caractereActuel = 0;

    do
    {
        caractereActuel = wart[nombreDeCaracteres];
        nombreDeCaracteres++;
    }
    while(caractereActuel != '\0');

    for(int i=0;i<nombreDeCaracteres;i++){

        if(wart[i]=='a' || wart[i]=='e' || wart[i]=='i' || wart[i]=='o' || wart[i]=='u' || wart[i]=='y'){
                wart[i]=wart[i]-'b'+'B';
        }
    }
    return wart;
 }

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char tower[] = "amused NIGHTINGALE";
 printf("%s\n", roost(tower));
}

