 # include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void pewee (char* lean) {

 for(int i=0;lean[i]!=0;i++)
 {

     if ((lean[i]>= 'a')&&  (lean[i]<='z')){
        lean[i]=(lean[i]-'a'+'A');
     }
     else if ((lean[i]>= 'A')&&  (lean[i]<='Z'))
     {
         lean[i]=(lean[i]-'A'+'a');
     }

 }
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
 char coke[] = "WRONG otter";
 pewee(coke);
 printf("%s\n",coke );
 }
