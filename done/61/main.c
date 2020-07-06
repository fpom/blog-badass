#include <stdio.h>

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN AU DESSUS
// NE CHANGEZ PAS CETTE DC      LARATION

void
yolk (char *iffy)
{
// C)crivez le corps de cette fonction

  char chaine[3];
  int i = 0;

    chaine[0]='b';
    chaine[1]='d';
    chaine[2]='r';
  while (chaine[i] != '/0')
    {

      if (chaine[0] == 'b')
	chaine[0] = 'B';

      if (chaine[2] == 'r')
	chaine[2] = 'R';
      if (chaine[1] == 'd')
	chaine[1] = 'D';
    }



}

// NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS
int
main ()
{
  char bosun[] = "bored QUOLL";

  yolk (bosun);
  printf ("%s\n", bosun);
}
