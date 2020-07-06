#include <stdio.h>
#include<stdlib.h>
#include<string.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 
// NE CHANGEZ PAS CETTE DÉLARATION

char* erupt (char* poach) {
    int t=strlen(poach);
    for(int i=0;i<t;i++){
        if((poach[i]!='A' || poach[i]=='E' ||poach[i]=='I'||poach[i]=='O'||poach[i]=='U'||poach[i]=='Y')&&(poach[i]>=65&&poach[i]<=90)){
           poach[i]=poach[i]+32; 
        }
         
    }
    return poach;
}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
 int main () {
   char awol[] = "scary DOG";
   printf("%s\n", erupt(awol));
}



