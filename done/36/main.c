# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void dare (char* tipi) {
   int i = 0;
        for(i=0;tipi[i]!='\0';i++){
        tipi[i]=tolower(tipi[i]);}
    }

 // écrivez le corps de cette fonction


// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char musk[] = "muddy OLM";
 dare(musk);
 printf("%s\n",musk);
 }
