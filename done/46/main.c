# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void dare (char* dart) {
    for(int i=0; i<12; i++){
        if(dart[i] - 'a' <= 26){
            dart[i] = dart[i] - 'a' + 'A';
        } else if (dart [i] - 'A' <= 26){
            dart[i] = dart[i] - 'A' +'a';
        } else {
            dart [i] = dart[i];
        }
    }
     
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char dash[] = "smiling INDRI";
 dare(dash);
 printf("%s\n", dash);  
 }
