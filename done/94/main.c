 #include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS 4
 // NE CHANGEZ PAS CETTE DÉLARATION
void ride (char* soggy) {
int i;
    for (i=0; i<soggy[i];i)
    {
        if (soggy[i]  >= 97 &&  soggy[i] <= 122)
            soggy[i] = soggy[i] - 32;
        i++;
    }
}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
 int main () {
   char fray[] = "bright BOOBY";
  ride(fray);
  printf("%s\n", fray);
}
