// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
# include <stdio.h>

 // NE CHANGEZ PAS CETTE DÉLARATION
 void heard (char* cheer) {
   int i = 0;
   while (cheer[i] != '\0'){
       if (cheer[i]>= 97 && cheer[i] <= 122)
            cheer[i]=cheer[i]-32;
        i++;
   }
   return cheer;

// écrivez le corps de cette fonction
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
 int main () {
char meted[] = "confused AFFENPINSCHER";
 heard(meted);
printf("%s\n", meted);
 }
