void aisle (char* ship) {
    
     int i =0 ; 
     for (i=0; ship[i]!='\0'; i++){
         if (ship[i] >= 'a' && ship[i]<='z')
         ship[i]-='a'- 'A' ; }
     
     
     
         
     }
 // écrivez le corps de cette fonction
 }

 // NE MODIFIEZ PAS CE COMMENTAIRE NI RIEN EN DESSOUS

 int main () {
 char glaze[] = "UNINTERESTED hedgehog";
 aisle(glaze) ; 
 printf("%s\n", glaze);