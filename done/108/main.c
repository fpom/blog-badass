 void page (char* lain) {

int i;

for (i=0 ; lain[i] ; i++) {

 if (lain[i] != 'a' || lain[i] != 'e' || lain[i] != 'i' || lain[i] != 'o' || lain[i] != 'u' || lain[i] != 'y' )

{

if (lain[i] >= 'A' && lain[i] <= 'Z')

lain[i] = lain[i] + 32;

}

}
