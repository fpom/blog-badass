#include <stdio.h>
//mettre les caractères minuscule en majuscule
 void rife (char* mogul) {
     int i = 0;

     while (mogul[i] != '\0')
    {

        if (mogul[i]  >= 97 &&  mogul[i] <= 122)


            mogul[i] = mogul[i] - 32;
        i++;

         if (mogul[i]  >= 65 &&  mogul[i] <= 90)


            mogul[i] = mogul[i] + 32;
        i++;
}

 }


int main () {
    char ahem[] = "HELPLESS mastiff";
   rife(ahem);
    printf("%s\n", ahem);
}
