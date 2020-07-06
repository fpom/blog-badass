#include<stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 
#include<stdlib.h>
#include<string.h>
// NE CHANGEZ PAS CETTE DÉLARATION

char* dicey (char* handy) {

    for(int i=0;i<strlen(handy);i++){
        if((handy[i])>=65 && handy[i]<=90){
           handy[i]=handy[i]+32; 
        }
         if((handy[i])>=97 && handy[i]<=122){
           handy[i]=handy[i]-32; 
        }

    }
    return handy;
}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
 int main () {
   char gazed[] = "ASHAMED zebra";
   printf("%s\n", dicey(gazed));
}