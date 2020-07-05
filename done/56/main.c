# include <stdio.h>


 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void train (char* expel) {
     int i=0;
    while(expel[i]!= '\0'){
            if(expel[i]=='A' || expel[i]=='E' || expel[i]=='I' || expel[i]=='O' || expel[i]=='U' || expel[i]=='Y' ){
                expel[i]=expel[i]+ 32 ;
                }
                i++;

            }

    }
 // écrivez le corps de cette fonction


 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char vine[] = "happy CHINCHILLA";
 train(vine);
 printf("%s\n",vine);
 }
