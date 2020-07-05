#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AUDESSUS

// NE CHANGEZ PAS CETTE DECLARATION
void onto (char* puree) {


for (int i = 0; puree[i] != '\0';i++){
     if (puree[i] >= 'A' && puree[i] <= 'Z'){

      puree[i] +=32;


     }
}


}
// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AUDESSUS

int main () {

char staid[] = "fair BARB";
onto(staid);
printf("%s\n",staid);

}
