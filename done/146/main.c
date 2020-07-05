 # include <stdio.h>

 void razor (char* yip) {
     Char yip [100];
     int i;
     for (i=0; yip[i]=!'\0'; i++)
         if(yip)[i]>= 'a' && yip>='z')
             yip[i]= yip[i] -32;
 int main () {
   char saner[] = "mysterious JELLYFISH";
   printf("%s\n", razor(saner));
}
