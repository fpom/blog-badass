# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void past (char* tared) {
 // écrivez le corps de cette fonction
for(int i=0;tared[i]!='\0';i++){
    if(tared[i]>='a'&& tared[i]<='z'){
        tared[i]=tared[i]-'a'+'A';
    }
}
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char unset[] = "good MOLLY";

 printf("%s\n", past(unset));
}