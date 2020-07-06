#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
void sash (char* john) {
  // écrivez le corps de cette fonction
  int i = 0;
  for(i = 0; john[i] != '\0'; i++){
    if(john[i] != 'A' && john[i] != 'E' && john[i] != 'I' && john[i] != 'O' && john[i] != 'U' && john[i] != 'Y' && john[i] != ' ' && john[i] != 'c' && john[i] != 'u' && john[i] != 's'){
      john[i]= john[i]+='a'-'A';
    }
  }
}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main(void) {
  char gab[] = "UNINTERESTED cuscus";
  sash(gab);
  printf("%s\n", gab);
}
