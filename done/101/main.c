# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉLARATION
 void swat (char* thing) {
    char str[256];
    int i = 0;
    str[i]='t';
    str[i]=str[i] -32;
    str[i]='h';
    str[i]=str[i] -32;
    str[i]='i';
    str[i]=str[i] -32;
    str[i]='n';
    str[i]=str[i] -32;
    str[i]='g';
    str[i]=str[i] -32;
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
  char parch[] = "NUTTY stoat";
 printf("%s\n", swat(parch));
}
