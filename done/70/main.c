# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DÉLARATION


 void tome (char* bred) {
    int i = 0;
    while (bred[i] != '\0')
    {
        if ((bred[i] != 'A'&& bred[i] !='E'&& bred[i] != 'I'&& bred[i] !='O'&&bred[i] != 'U'&& bred[i] != 'Y') && (bred[i] >= 'A' && bred[i] <= 'Z' )){
            
        bred[i] += 32;
         }
         else if ((bred[i] != 'a'&& bred[i] !='e'&& bred[i] != 'i'&& bred[i] !='o'&&bred[i] != 'u'&& bred[i] != 'y') && (bred[i] >= 'a' && bred[i] <= 'z' )){
            
        bred[i] -= 32;
         }
        
        i++;
    }
}
     


 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main () {
char rouse[] = "PRICKLY vulture";
tome(rouse);
printf("%s\n",rouse);
 }