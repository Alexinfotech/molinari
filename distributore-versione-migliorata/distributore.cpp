 #include "distributore.h"
 distributore::distributore(){
 
}
void distributore::presentazione(){
    cout<<" \n\t\t    QUESTO DISTRIBUTORE EROGA--CAFFE'--THE--LATTE\n";
    cout<<" \n\t\t°°°°@@@IL COSTO DI OGNE PRODOTTO E' UNA MONETA@@@°°°°\n";
    cout<<"\n\t  INSERISCI IL NUMERO PER INDICARE QUANTE MONETE STAI INSERENDO:  ";
    cout<<"\n\t  OPPURE DIGITA 0 PER USUFRUIRE DEL CREDITO TICKET \n\t  SUCCESSIVAMENTE SELEZIONARE (RISCATTA TICKET) NEL MENU SCELTA BEVANDA";
    cout<<"\n\t  ORA DIGITA:   ";
    cout<<"\n\t  1 riscatto  ticket   ";
    cout<<"\n\t  2 per inserire le monete   ";
   
}
void distributore::menu(){
    cout<<"\n\n\t-----SCELTA BEVANDA'---------\n"<<endl;
    cout<<"\tCAFFE: cod 1 --> PREZZZO 1 MONETA"<<endl;
    cout<<"\tTHE:   cod 2 --> PREZZZO 1 MONETA"<<endl;
    cout<<"\tLATTE: cod 3 --> PREZZZO 1 MONETA"<<endl;
    cout<<"\tRIPROGRAMMA CREDITO O STAMPA TICKET: cod 5"<<endl;
    cout<<"\tINSERIRE CODECE BEVANDA\n";
    cout<<"\tCOD -> ";
}
void distributore::errore1_2(){
     printf("\n\t\tIl numero selezionato è errato  ");
    printf("\n\t\tINSERIRE NUMERO RICHIESTO 1 0 2  --->   ");
}
void distributore::moneta(){
    printf("\n\t\t  1/9 MONETE CONSENTITE");
    printf("\n\t\t  ORA DIGITA -->   ");
}
void distributore::errore_mon(){
    printf("\t\tIl numero di monete consentito e tra 1 e 9  ");
    printf("\n\t\tINSERIRE QUANTITà RICHIESTA --->   ");
}
void distributore::cambio_idea(){
    cout<<"\n\t\t\tDIGITA 1 + INVIO PER CONFERMA ->  ";
    cout<<"\n\t\t\tDIGITA 2 + INVIO SE HAI CAMBIATO IDEA ->  ";
}
void distributore::ins_errore(){
    cout<<"\tHai fatto un inserimento sbagliato."<<endl;
}
void distributore::ins_errore_2(){
    cout<<"\tHai fatto un inserimento sbagliato\n";             
    cout<<"\t INSERISCI SCELTA --->   "; 
}
void distributore::stampa_ticket(){
    cout<<"\n\t\t\tRITIRA IL TICKET BUONO ACQUISTI ";
    cout<<"\n\t\t\t  ARRIVADERCI  ";
}
void distributore::ins_Dim(int dim) {
    this->dim=dim;
    for(i=0;i<dim;i++)
    {
            stack[i]=dim;
    };
       
        this->mon=dim;
        this->spc=2;
        this->spt=2;
        this->spl=2;
    
}
void distributore::push(int coin){
    mon++;
}
void distributore::pop_monet() {
    if(mon > -1) 
    {
    }
    else
    {   cout<<"!!NON HAI PIU' CREDITO!!";
        cout<<"\nVuoi inserira un atra moneta  \n\t6 -> SI  ";
        printf("\n\tIN ALTERNATIVA digita -> <5> per uscire  \n");
        cout<<"\tCOD ->  ";
    }
}

void distributore::pop_caffe(){
       
        if(spc > 0) 
       this->spc--;
}   

void distributore::pop_the(){
    
        if(spt >0) 
       this->spt--;
} 

void distributore::pop_latte(){
    
        if(spl > 0) 
       this->spl--;
} 

void distributore::stampa_caffe(char crea){
    
    if(mon > 0)
    {
    if(this->spc > 0)
    {
         mon--;   
    FILE *crea = fopen("SCONTRINO.txt", "a");
    fprintf(crea,"\nAcquisto caffe 1 -- GRAZIE PER L'ACQUISTO");
    fclose(crea); 
    printf("\tEROGAZIONE IN CORSO\n");
    sleep(1);
        printf("          #\n");
    sleep(1);
        printf("           #\n");     
    sleep(1);
        printf("            #\n");
    sleep(1);
         printf("             #\n");
    sleep(1);
         printf("              #\n");
    sleep(1);
        printf("                *  *  *\n");
    sleep(1);
        printf("               *  *  *\n");
    sleep(1);
        printf("                *  *  *\n");
    sleep(1);
        printf("             ");
    for(int i=0;i<16;i++)
        {
        printf("*");
        }
        printf("\n              *   CAFFE    *");
        printf("\n               *          *");
        printf("\n                 *       *");
        printf("\n                 *°°°°°°°*");
        printf(" \n                  *°°°°°*\n");
    sleep(1);
        printf("                   "); 
    for(int i=0; i<5;i++)
        {
        printf("*");
        };
        printf("\t\n\nIL CAFFE è PRONTO\n\n");
        cout<<"\tCAFFE: cod 1"<<endl;
        cout<<"\tTHE:   cod 2"<<endl;
        cout<<"\tLATTE: cod 3"<<endl;
        cout<<"\tEXIT : cod 5"<<endl;
        
        cout<<"\tINSERIRE CODEICE DESIDERATO\n";
        cout<<"\tCOD ->   ";

    }
    else 
    {
             
        printf("\n######-Bevanda CAFFE esaurita-######\n\n");
        cout<<"\tTHE:   cod 2"<<endl;
        cout<<"\tLATTE: cod 3"<<endl;
        printf("\n\tAltrimenti digita -> <5>  PER RITIRARE LO SCONTRINO  ");
    }

    }
    else 
    { 
    cout<<"\n\tHai finito il tuo credito.";
    sleep(1);
    cout<<"\n\tINSERT COIN\n\tDIGITA 1 + INVIO PER 1 CREDITO -> ";
    cin>>coin;
    push(coin);
    sleep(1);
    cout<<"\n\tDIGITA 1 + INVIO PER CONFERMA -> ";
    }
}

void distributore::stampa_the(char crea){
    if(mon > 0)
    {
    if(this->spt >0)
    {
        mon--;
    FILE *crea = fopen("SCONTRINO.txt", "a");
    fprintf(crea,"\nAcquisto the   1 -- GRAZIE PER L'ACQUISTO");
    fclose(crea); 
    printf("EROGAZIONE IN CORSO\n");
    sleep(1);
        printf("          #\n");
    sleep(1);
        printf("           #\n");     
    sleep(1);
        printf("            #\n");
    sleep(1);
         printf("             #\n");
    sleep(1);
         printf("              #\n");
    sleep(1);
        printf("                *  *  *  *\n");
    sleep(1);
        printf("               *  *  *  *\n");
    sleep(1);
        printf("                *  *  *  *\n");
    sleep(1);
        printf("             ");
    for(int i=0;i<15;i++){
        printf("*");
    }
        printf("\n              *    THE    *");
        printf("\n               *°°°°°°°°°*");
        printf("\n                *°°°°°°°*");
        printf("\n                *°°°°°°°*");
        printf(" \n                 *°°°°°*\n");
    sleep(1);
        printf("                  "); 
    for(int i=0; i<5;i++){
        printf("*");
        };
         printf("\t\n\nIL THE è PRONTO\n\n");
        cout<<"\tCAFFE: cod 1"<<endl;
        cout<<"\tTHE:   cod 2"<<endl;
        cout<<"\tLATTE: cod 3"<<endl;
        cout<<"\tEXIT : cod 5"<<endl;
        cout<<"\tINSERIRE CODEICE DESIDERATO\n";
        cout<<"\tCOD ->   ";
    sleep(1);
    }
    else 
    {
               printf("\n######-Bevanda THE esaurita-######\n\n");
               
            cout<<"\tCAFFE: cod 1"<<endl;
            cout<<"\tLATTE: cod 3"<<endl;
            printf("\n\tAltrimenti digita -> <5>  PER RITIRARE LO SCONTRINO  ");
            }
    }
    else
    { 
    cout<<"\n\tHai finito il tuo credito.";
    sleep(1);
    cout<<"\n\tINSERT COIN\n\tDIGITA 1 + INVIO PER 1 CREDITO -> ";
    cin>>coin;
    push(coin);
    sleep(1);
    cout<<"\n\tDIGITA 1 + INVIO PER CONFERMA -> ";
    }
    
}

void distributore::stampa_latte(char crea){
    if(mon > 0)
    {
    if(this->spl > 0)
    {
         mon--;
    FILE *crea = fopen("SCONTRINO.txt", "a");
    fprintf(crea,"\nAcquisto latte 1 -- GRAZIE PER L'ACQUISTO");
    fclose(crea); 
    printf("EROGAZIONE IN CORSO\n");
    sleep(1);
        printf("          #                   #\n");
    sleep(1);
        printf("           #                 #\n");     
    sleep(1);
        printf("            #               #\n");
    sleep(1);
        printf("             #             #\n");
    sleep(1);
        printf("              #           #\n");
    sleep(1);
        printf("                *  *  *  *\n");
    sleep(1);
        printf("               *  *  *  *\n");
    sleep(1);
        printf("                 *  *  *  *\n");
    sleep(1);
        printf("             ");
    for(int i=0;i<15;i++)
    {
        printf("*");
    }
        printf("\n              *   LATTE   *");
        printf("\n               *°°°°°°°°°*");
        printf("\n                *°°°°°°°*");
        printf("\n                *°°°°°°°*");
        printf(" \n                 *°°°°°*\n");
    sleep(1);
        printf("                  "); 
    for(int i=0; i<5;i++)
    {
        printf("*");
    };
printf("\t\n\nIL LATTE è PRONTO\n\n");
        cout<<"\tCAFFE: cod 1"<<endl;
        cout<<"\tTHE:   cod 2"<<endl;
        cout<<"\tLATTE: cod 3"<<endl;
        cout<<"\tEXIT : cod 5"<<endl;
        cout<<"\tINSERIRE CODEICE DESIDERATO\n";
        cout<<"\tCOD ->   ";  
        sleep(1);
    }
    else 
    {
   printf("\n######-Bevanda LATTE esaurita-######\n\n");
        cout<<"\tCAFFE: cod 1"<<endl;
        cout<<"\tTHE:   cod 2"<<endl;
    printf("\n\tAltrimenti digita -> <5>  PER RITIRARE LO SCONTRINO  ");   
              
    }
    }
    else
    { 
    cout<<"\n\tHai finito il tuo credito.";
    sleep(1);
    cout<<"\n\tINSERT COIN\n\tDIGITA 1 + INVIO PER 1 CREDITO -> ";
    cin>>coin;
    push(coin);
    sleep(1);
    cout<<"\n\tDIGITA 1 + INVIO PER CONFERMA -> ";
    }
}

void distributore::stampa(char crea){
    if(mon>0)
    {
    FILE *crea = fopen("TICKET.txt", "w");
    fprintf(crea, "%d", mon);
    fprintf(crea,"\nRESTO");
    fprintf(crea,"\nARRIVEDERCI E GRAZIE\n");
    fclose(crea); 
    }
}
void distributore::ticket(){
}


