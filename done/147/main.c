#include <stdio.h>
#include<stdlib.h>
#include<string.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 
// NE CHANGEZ PAS CETTE DÉLARATION

char* are (char* vote) {
    int taille=strlen(vote);
    for(int i=0;i<taille;i++){
        if((vote[i])=='A' || vote[i]=='E' ||vote[i]=='I'||vote[i]=='O'||vote[i]=='U'||vote[i]=='Y'){
           vote[i]=vote[i]+32; 
        }
         
    }
    return vote;
}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
 int main () {
   char sac[] = "CHARMING sheep";
   printf("%s\n", are(sac));
}




