# include <stdio.h>

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

 // NE CHANGEZ PAS CETTE DÉLARATION
 void ani (char* below) {
int i = 0;
for (i = 0; below[i] != '\0'; i ++)
{
    if (below[i] == 'a' || below[i] == 'y' || below[i]=='i'|| below[i]=='o'|| below[i]=='u'|| below[i]=='e');
           below[i] == below[i] - 32; 
           
    else (below[i] == 'A' || below[i] == 'Y' || below[i]=='I'|| below[i]=='O'|| below[i]=='U'|| below[i]=='E');
           below[i] == below[i] + 32;
}

 }
    

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char salve[] = "average WOLVERINE";
ani(salve);
  printf("%s\n",(salve);
}