# include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS

// NE CHANGEZ PAS CETTE D�LARATION
 void soon (char* amen) {
     int i;

    for (i=0;amen[i]!='\o';i++)
    {
        if(i>='A'&&amen[i]<='Z')
{
            amen[i] +=32;
        }


        }

// �crivez le corps de cette fonction
}

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
 int main () {
 char cubic[] = "GENTLE bandicoot";
printf("%s\n", soon(cubic));
 }
