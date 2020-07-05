# include <stdio.h>
# include <ctype.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION

void leave (char* head) {
   int i=0;

     for(i=0;head[i]!='\0';i++)
     {
          head[i]=toupper(head[i]);
     }

// écrivez le corps de cette fonction
}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char shtik[] = "OUTRAGEOUS caracal";
leave(shtik);
printf("%s\n", shtik);
}
