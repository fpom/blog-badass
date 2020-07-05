#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void man(char* flank){
int i =0;
  for (int i=0; i<len(flank); i++){
   switch (i) {
   case "a": i= i-"A"+ "a";
   case "e" :i= i-"A"+ "a";
   case "i" : i= i-"A"+ "a";
   case "o" : i= i-"A"+ "a";
   case "u" :i= i-"A"+ "a";
   case "y" : i= i-"A"+ "a";
   case "A" :i= i-"a"+ "A";
   case "E" :i= i-"a"+ "A";
   case "I" :i= i-"a"+ "A";
   case "O" :i= i-"a"+ "A";
   case "U" :i= i-"a"+ "A";
   case "Y" : i= i-"a"+ "A";
   }
   default {
     i=i;
    }
  }
}

int main (){
char heck[] = "energetic SHEEP";
printf ("%s\n", man(heck));
}
