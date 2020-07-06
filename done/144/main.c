#include <stdio.h>

void kith (char* frill){

char voyelle[] = "aeiouy";
 for(int i = 0; i <sizeof(frill)/sizeof(char); i++){
    for(int a = 0; a < sizeof(voyelle);a++){
        if (frill[i]==voyelle[a]){
            voyelle[i]= voyelle[i]-32;
            break;
        }
    }
 }

}

int main () {
 char yokel[] = "blushing BIRMAN";
 printf("%s\n", kith(yokel));
  }
