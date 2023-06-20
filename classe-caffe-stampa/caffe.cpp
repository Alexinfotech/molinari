 #include "caffe.h"
 
caffe::caffe(){
      spc = 0;
      spt = 0;
      spl = 0;
      mon = 0;
      
    for(i=0;i<N;i++){
       stack[i]=0;}
     
      
}

void caffe::push_monet(int num) {
    if(mon < N) {
        stack[mon] = num;
        mon++;
    }
}
void caffe::pop_monet() {
    if(mon > 0) {
        mon--;
    }
     else
     {
         cout<<"\nvuoi inserira un latra moneta?   \n\t6 -> SI  ";
         
         
     }
}

void caffe::pop_caffe(){
        if(spc < N) 
       spc++;
}   

void caffe::pop_the(){
        if(spt < N) 
       spt++;
} 

void caffe::pop_latte(){
        if(spl < N) 
       spl++;
} 



void caffe::stampa_caffe(){
    
    if(mon > 0){
      if(spc < N){
                
           
       printf("EROGAZIONE IN CORSO\n");
    sleep(1);
        printf("#\n");
    sleep(1);
        printf(" #\n");     
    sleep(1);
        printf("  #\n");
    sleep(1);
         printf("   #\n");
    sleep(1);
         printf("    #\n");
    sleep(1);
        printf("      *  *  *\n");
    sleep(1);
        printf("     *  *  *\n");
    sleep(1);
        printf("      *  *  *\n");
    sleep(1);
        printf("   ");
    for(int i=0;i<15;i++){
        printf("*");
    }
        printf("\n    *   CAFFE   *");
        printf("\n     *         *");
        printf("\n      *       *");
        printf("\n      *°°°°°°°*");
        printf(" \n       *°°°°°*\n");
    sleep(1);
        printf("        "); 
    
    for(int i=0; i<5;i++){
        printf("*");
        };
        printf("\t\n\nIL CAFFE è PRONTO\n\t Digita 1 e premi invio per fare un uletiore scelta \n\t altrimenti digita 5 ");
   sleep(1);
 }
            else {
               ( printf("\n######-Bevanda CAFFE esaurita-######"));
            }
    }else
{ 
    cout<<"\n hai finito il tuo credito.";
}
}

void caffe::stampa_the(){
        if(mon > 0){
     if(spt < N){
        printf("EROGAZIONE IN CORSO\n");
    sleep(1);
        printf("#\n");
    sleep(1);
        printf(" #\n");     
    sleep(1);
        printf("  #\n");
    sleep(1);
         printf("   #\n");
    sleep(1);
         printf("    #\n");
    sleep(1);
        printf("      *  *  *  *\n");
    sleep(1);
        printf("     *  *  *  *\n");
    sleep(1);
        printf("      *  *  *  *\n");
    sleep(1);
        printf("   ");
    for(int i=0;i<15;i++){
        printf("*");
    }
        printf("\n    *    THE    *");
        printf("\n     *°°°°°°°°°*");
        printf("\n      *°°°°°°°*");
        printf("\n      *°°°°°°°*");
        printf(" \n       *°°°°°*\n");
    sleep(1);
        printf("        "); 
    
    for(int i=0; i<5;i++){
        printf("*");
        };
        printf("\t\n\nIL THE è PRONTO\n\t Digita 1 e premi invio per fare un uletiore scelta \n\t altrimenti digita 5 ");
    sleep(1);
 }
            else {
               ( printf("\n#####-Bevanda THE esaurita-#####"));
            }
    }else
{ 
    cout<<"\n hai finito il tuo credito.";
}
    
}

void caffe::stampa_latte(){
        if(mon > 0){
     if(spl < N){
            printf("EROGAZIONE IN CORSO\n");
    sleep(1);
        printf("#                   #\n");
    sleep(1);
        printf(" #                 #\n");     
    sleep(1);
        printf("  #               #\n");
    sleep(1);
        printf("   #             #\n");
    sleep(1);
        printf("    #           #\n");
    sleep(1);
        printf("      *  *  *  *\n");
    sleep(1);
        printf("     *  *  *  *\n");
    sleep(1);
        printf("      *  *  *  *\n");
    sleep(1);
        printf("   ");
    for(int i=0;i<15;i++){
        printf("*");
    }
        printf("\n    *   LATTE   *");
        printf("\n     *°°°°°°°°°*");
        printf("\n      *°°°°°°°*");
        printf("\n      *°°°°°°°*");
        printf(" \n       *°°°°°*\n");
    sleep(1);
        printf("        "); 
    
    for(int i=0; i<5;i++){
        printf("*");
        };
        printf("\t\n\nIL LATTE è PRONTO\n\t Digita 1 e premi invio per fare un uletiore scelta \n\t altrimenti digita 5 ");
   sleep(1);
 }
            else {
               ( printf("\n#####-Bevanda LATTE esaurita-#####"));
            }
}else
{ 
    cout<<"\n hai finito il tuo credito.";
}
}