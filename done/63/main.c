#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE DÉCLARATION
void salvo (char* eddy) {
    // écrivez le corps de cette fonction
    int changerMajuscule = 32;
    int i=0;
    for(i=0 ; i<20 ; i++)
        {
            if (eddy[i] > 'A'&&eddy[i] <= 'z')
                {
                  if(eddy[i]!='A'||eddy[i]!='E'||eddy[i]!='I'||eddy[i]!='O'||eddy[i]!='U'||eddy[i]!='Y'||eddy[i]!='a'||eddy[i]!='e'||eddy[i]!='i'||eddy[i]!='o'||eddy[i]!='u'||eddy[i]!='y')
                    {
                        eddy[i]=eddy[i]-changerMajuscule;
                    }
                }




        }



}


// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

int main() {
    char noun[] = "FIERCE dormousse";
    printf("%s\n", salvo(noun));
}
