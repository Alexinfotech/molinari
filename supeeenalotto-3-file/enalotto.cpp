#include "enalotto.h"


enalotto::enalotto(){
  v = NULL;
  sp = 0;
  v=new int[5];
 
   
 
}
void enalotto::giocata(){
 printf("Su quale ruota vuoi giocare i numeri?\n\n");   
}

void enalotto::sistema(){
FILE *fp;
fp=fopen("RICEVUTA_SISTEMA","a"); 

scanf("%s", &R[255]);
//printf("%s",&R[255]);//test video
fprintf(fp,"\nSulla ruota di %s\nIl sistema è\n",&R[255]);
 v = new int[6];
for(int i = 0; i < 6; i++){*(v + i) = rand()%98;}
for(int i=0;i < 6;i++){fprintf(fp," %d ",*(v+i));}
//fp=fopen("RICEVUTA","a");
fprintf(fp,"\nNUMERO JOLLY  ");
for(int i = 0; i < 1; i++){*(v + i) = rand()%98;}
for(int i=0;i < 1;i++){fprintf(fp," %d ",*(v+i));}
    fprintf(fp,"\nNUMERO SUPER STAR");
for(int i = 0; i < 1; i++){*(v + i) = rand()%98;}
for(int i=0;i < 1;i++){fprintf(fp," %d ",*(v+i));}
fprintf(fp,"\n\n\tBUONA FORTUNA");
fclose(fp);
}
void enalotto::giocata_2(){

FILE *fp;
fp=fopen("RICEVUTA_NUMERI_FORTUNATI","a"); 
scanf("%s", &R[255]);
fprintf(fp,"\nSulla ruota di %s\nIl sistema è\n",&R[255]);
fclose(fp);
}

void enalotto::numeri(int num){
    
FILE *fp;
fp=fopen("RICEVUTA_NUMERI_FORTUNATI","a"); 
printf("Inserisci i tuoi 6 numeri giocata :\n");

if(sp < 6) 
    { 
       for(int i=0;i < 6;i++)
        scanf("%d", &v[i]);
       
    }

for(int i=0;i < 6;i++){fprintf(fp," %d ",*(v+i));} 
fprintf(fp,"\nNUMERO JOLLY  ");
for(int i = 0; i < 1; i++){*(v + i) = rand()%98;}
for(int i=0;i < 1;i++){fprintf(fp," %d ",*(v+i));}
fprintf(fp,"\nNUMERO SUPER STAR");
for(int i = 0; i < 1; i++){*(v + i) = rand()%98;}
for(int i=0;i < 1;i++){fprintf(fp," %d ",*(v+i));}
fprintf(fp,"\n\n\tBUONA FORTUNA");
fclose(fp); 
  
  
  cout<<"Hai inserito i tuoi mumeri fortunati\nORA RITIRA LA RICEVUTTA\nBUONA FORTUNA";
  exit;

}
void enalotto::controllo(){
    /*int N,n;
    int a=15;
    int b=88;
    int c=37;
    int d=5;
    int e=29;
    int f=59;
    int jolly=24;
    int super=72;*/
      cout<<"\nISERISCI I NUMERI DEL SISTEMA ENALOTTO IN ORDINE DI USCITA\n";
    cout<<"\n\tPRIMO NUMERO -->  ";
	cin>>n;
	if(n==a) 
	{
    cout<<"PRIMO NUMERO OK\n";
    cout<<"\n\tSECONDO NUMERO -->  ";
        cin>>n;
		    if( n==b )
		    {
		    cout<<"SECONDO NUEMRO OK\n"; 
		    cout<<"\n\tTERZO NUMERO -->  ";
		        cin>>n;
		            if(n==c)
		            {
		            cout<<"TERZO NUMERO OK\n";
		            cout<<"\n\tQUARTO NUMERO -->  ";
		                cin>>n;
		                    if(n==d)
		                    {
		                    cout<<"QUARTO NUEMRO OK\n";
		                    cout<<"\n\tQUINTO NUMERO -->  ";
		                        cin>>n;
		                            if(n==e)
		                            {
		                            cout<<"QUINTO NUMERO OK\n"; 
		                            cout<<"\n\tSESTO NUMERO -->  ";
		                                cin>>n;
		                                    if(n==f)
		                                    {
		                                    cout<<"SESTO NUEMRO OK\n\n";
		                                    
		                                    cout<<"\t     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		                                    cout<<"\t  @@@ @@@@@@@ @@@@@@@ @@@@@@@@ @@@@@@@ @@@@@@@ @@@@@@@ @@@@@@@ \n";
		                                    cout<<"\t@@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @\n";
		                                    cout<<"\t@@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @\n";
		                                    cout<<"\t@ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ #@\n";
		                                    cout<<"\t@  #  @  #  @  #  @  #  @  #  @  #  @  #  @  #  @  #  @  #  @  #\n";
		                                    cout<<"\t#  #  #                                                  #  #  #\n";
		                                    cout<<"\t                 COMPLIMENTI SEI MILIARDARIO!!!                 \n";
		                                    cout<<"\t#  #  #                                                  #  #  #\n";
		                                    cout<<"\t@  #  @  #  @  #  @  #  @  #  @  #  @  #  @  #  @  #  @  #  @  #\n";
		                                    cout<<"\t@ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ # @ #@\n";
		                                    cout<<"\t@@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @\n";
		                                    cout<<"\t@@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @@ @\n";
		                                    cout<<"\t@@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @\n";
		                                    cout<<"\t  @@@ @@@@@@@ @@@@@@@ @@@@@@@@ @@@@@@@ @@@@@@@ @@@@@@@ @@@@@@@ \n";
		                                    cout<<"\t     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		                                    
		                                    } 
		                                    else
    {
        cout<<"MI SPAICE NON HAI FATTO 6\n";
        cout<<"PROVA CON IL NUMERO JOLLY\n";
        cout<<"\n\t\tINSERISCI IL NUMERO JOLLY--> ";
        cin>>n;
         if(n==jolly)
		 {
		   
		 cout<<"\tHAI PRESO IL NUMERO JOLLY\n\n\t\tCOMPLIMENTI!!!"; 
		 return ;
		 }
		 else
		 {
		 cout<<"\nMI SPAICE NON HAI PRESO IL NUMERO JOLLY\n";    
		 cout<<"\nHAI L'ULTIMA POSSIBILITA'\nPROVA CON IL NUMERO SUPER STAR\n";
		 }
		 cout<<"\n\t\tINSERISCI IL NUMERO STAR--> ";
		 cin>>n;
		 if(n==super){
		   cout<<"\tHAI PRESO IL NUMERO super star\n\n\t\tCOMPLIMENTI!!!"; 
		    return; 
		 }
		 else
		 {
		     cout<<"\nSEI PROPRIO SFIGATO!!\n\n";
		     cout<<"\t\t@  @  @  @  @  @\n";
		     cout<<"\t\t ||    ||    ||\n";
		     cout<<"\t\t====  ====  ====\n";
		 
      
    
    }
    }
                                    }else
    {
        cout<<"MI SPAICE NON HAI FATTO 6\n";
        cout<<"PROVA CON IL NUMERO JOLLY\n";
        cout<<"\n\t\tINSERISCI IL NUMERO JOLLY--> ";
        cin>>n;
         if(n==jolly)
		 {
		   
		 cout<<"\tHAI PRESO IL NUMERO JOLLY\n\n\t\tCOMPLIMENTI!!!"; 
		  return; 
		 }
		 else
		 {
		 cout<<"\nMI SPAICE NON HAI PRESO IL NUMERO JOLLY\n";    
		 cout<<"\nHAI L'ULTIMA POSSIBILITA'\nPROVA CON IL NUMERO SUPER STAR\n";
		 }
		 cout<<"\n\t\tINSERISCI IL NUMERO STAR--> ";
		 cin>>n;
		 if(n==super){
		   cout<<"\tHAI PRESO IL NUMERO super star\n\n\t\tCOMPLIMENTI!!!"; 
		    return; 
		 }
		 else
		 {
		     cout<<"\nSEI PROPRIO SFIGATO!!\n\n";
		     cout<<"\t\t@  @  @  @  @  @\n";
		     cout<<"\t\t ||    ||    ||\n";
		     cout<<"\t\t====  ====  ====\n";
		 
      
    
    }
    }
                            }else
    {
        cout<<"MI SPAICE NON HAI FATTO 6\n";
        cout<<"PROVA CON IL NUMERO JOLLY\n";
        cout<<"\n\t\tINSERISCI IL NUMERO JOLLY--> ";
        cin>>n;
         if(n==jolly)
		 {
		     
		 cout<<"\tHAI PRESO IL NUMERO JOLLY\n\n\t\tCOMPLIMENTI!!!"; 
		 return;
		 }
		 else
		 {
		 cout<<"\nMI SPAICE NON HAI PRESO IL NUMERO JOLLY\n";    
		 cout<<"\nHAI L'ULTIMA POSSIBILITA'\nPROVA CON IL NUMERO SUPER STAR\n";
		 }
		 cout<<"\n\t\tINSERISCI IL NUMERO STAR--> ";
		 cin>>n;
		 if(n==super){
		   cout<<"\tHAI PRESO IL NUMERO super star\n\n\t\tCOMPLIMENTI!!!";  
		    return; 
		 }
		 else
		 {
		     cout<<"\nSEI PROPRIO SFIGATO!!\n\n";
		     cout<<"\t\t@  @  @  @  @  @\n";
		     cout<<"\t\t ||    ||    ||\n";
		     cout<<"\t\t====  ====  ====\n";
		 
      
    
    }
    }
                    }else
    {
        cout<<"MI SPAICE NON HAI FATTO 6\n";
        cout<<"PROVA CON IL NUMERO JOLLY\n";
        cout<<"\n\t\tINSERISCI IL NUMERO JOLLY--> ";
        cin>>n;
         if(n==jolly)
		 {
		     
		 cout<<"\tHAI PRESO IL NUMERO JOLLY\n\n\t\tCOMPLIMENTI!!!"; 
		 return;
		 }
		 else
		 {
		 cout<<"\nMI SPAICE NON HAI PRESO IL NUMERO JOLLY\n";    
		 cout<<"\nHAI L'ULTIMA POSSIBILITA'\nPROVA CON IL NUMERO SUPER STAR\n";
		 }
		 cout<<"\n\t\tINSERISCI IL NUMERO STAR--> ";
		 cin>>n;
		 if(n==super){
		   cout<<"\tHAI PRESO IL NUMERO super star\n\n\t\tCOMPLIMENTI!!!"; 
		    return; 
		 }
		 else
		 {
		     cout<<"\nSEI PROPRIO SFIGATO!!\n\n";
		     cout<<"\t\t@  @  @  @  @  @\n";
		     cout<<"\t\t ||    ||    ||\n";
		     cout<<"\t\t====  ====  ====\n";
		 
      
    
    }
    }
            }else
    {
        cout<<"MI SPAICE NON HAI FATTO 6\n";
        cout<<"PROVA CON IL NUMERO JOLLY\n";
        cout<<"\n\t\tINSERISCI IL NUMERO JOLLY--> ";
        cin>>n;
         if(n==jolly)
		 {
		     
		 cout<<"\tHAI PRESO IL NUMERO JOLLY\n\n\t\tCOMPLIMENTI!!!"; 
		 return;
		 }
		 else
		 {
		 cout<<"\nMI SPAICE NON HAI PRESO IL NUMERO JOLLY\n";    
		 cout<<"\nHAI L'ULTIMA POSSIBILITA'\nPROVA CON IL NUMERO SUPER STAR\n";
		 }
		 cout<<"\n\t\tINSERISCI IL NUMERO STAR--> ";
		 cin>>n;
		 if(n==super){
		   cout<<"\tHAI PRESO IL NUMERO super star\n\n\t\tCOMPLIMENTI!!!";
		    return; 
		 }
		 else
		 {
		     cout<<"\nSEI PROPRIO SFIGATO!!\n\n";
		     cout<<"\t\t@  @  @  @  @  @\n";
		     cout<<"\t\t ||    ||    ||\n";
		     cout<<"\t\t====  ====  ====\n";
		 
      
    
    }
    }
    }
    else
    {
        cout<<"MI SPAICE NON HAI FATTO 6\n";
        cout<<"PROVA CON IL NUMERO JOLLY\n";
        cout<<"\n\t\tINSERISCI IL NUMERO JOLLY--> ";
        cin>>n;
         if(n==jolly)
		 {
		     
		 cout<<"\tHAI PRESO IL NUMERO JOLLY\n\n\t\tCOMPLIMENTI!!!"; 
		 return;
		 }
		 else
		 {
		 cout<<"\nMI SPAICE NON HAI PRESO IL NUMERO JOLLY\n";    
		 cout<<"\nHAI L'ULTIMA POSSIBILITA'\nPROVA CON IL NUMERO SUPER STAR\n";
		 }
		 cout<<"\n\t\tINSERISCI IL NUMERO STAR--> ";
		 cin>>n;
		 if(n==super){
		   cout<<"\tHAI PRESO IL NUMERO super star\n\n\t\tCOMPLIMENTI!!!"; 
		    return; 
		 }
		 else
		 {
		     cout<<"\nSEI PROPRIO SFIGATO!!\n\n";
		     cout<<"\t\t@  @  @  @  @  @\n";
		     cout<<"\t\t ||    ||    ||\n";
		     cout<<"\t\t====  ====  ====\n";
		 
      
    
    }
    
    } 

}
