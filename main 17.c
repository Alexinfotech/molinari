/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch ;
    char ch2;
    int n ;
    char temp;//invio preso come carattere
    char ritorna;
    
    printf("TABELLA ASCII con riferimento 'A' 'z'\n");
    printf("-----------\n");

    for (int i = 65; i <= 90; i++) 
    {
        printf(" %c\t%d\n", i, i);
        
    }
    printf("\n");
    for (int i = 97; i <= 122; i++) 
    {
        printf(" %c\t%d\n", i, i);
    }
    
   
    printf("inserisci un numero tra 1 e 25: ");
    scanf("%d", &n );
    scanf("%c", &temp );//prima di leggere il carattre %c,salta gli eventuali witespace
    //annullare l'invio come carattere(spazi, newline)
   while(n<1 || n>25)  //controllo sei inserito numero tra 1 e 25
   {
       printf("Valore errato, deve essere tra 1 e 25; ");
       scanf("%d", &n);
       scanf("%c", &temp );//se inserito valore sbagliato elina la new line
   }
    printf("\ninserisci una lettera alfabetica: ");
    scanf("%c", &ch );
    
  /*  while(ch<'a' || ch>'Z')
    {
    printf("Non hai inserito una lettere: ");
    scanf("%c", &ch );
    scanf("%c", &temp );
    }*/
    printf("Hai inserito in numero %d ed il carattere <%c>",
            n,ch);
            printf(" codice ascii: <%d>\n",ch);
            
if(n>=1 && n<=25)  
{    
     if(( ch>='a' && ch<='z' || ch>='A' && ch<='Z'))//controllo per stabilire che il valore inserito sia una lettera      
     {                                             
        if(ch>='a' && ch<='z' ) 
        {
             ch = ch -'a' + 'A' ;
        }  //ch una lettera miuscola
        
        ch2 = ch +n;
        
        if(ch2>'Z')//se svfora oltre la zeta torna ad 'A'
        {
            ch2 = 'A' + ( ch2-'Z'-1 );
        }
        printf("La roto-lettera è: <%c>",ch2);
        printf(" codice ascii: <%d>\n",ch2);
    }
    else
    {
        printf("ERRORE:  non è una lettera!\n");
    }
}
else
{ 
    printf("il numero deve essere tra 1 e 25");
    
}

    return 0;
}



