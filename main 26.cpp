#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
char cognome[50];
char nome[50];
char codice [16];
int conta=0,l;
int j=0,i=0;
int cons=0;
int c1,somma=0;
int data[5];
cout << "Inserisci il cognome: ";
cin >> cognome;
l=strlen(cognome);
somma+=l;
for( i = 0; i < l; i++ )
{
if( cognome[ i ] != 'a' && cognome[ i ] != 'e' && cognome[ i ] != 'i' && cognome[ i ] != 'o' && cognome[ i ] != 'u' )
{
codice[ j ] = cognome[ i ];
j++;
conta++;
}
if( conta == 3 )
{
break;
}
}
for( i = 0; i < l; i++ )
{
if( cognome[ i ] == 'a' || cognome[ i ] == 'e' || cognome[ i ] == 'i' || cognome[ i ] == 'o' || cognome[ i ] == 'u' )
{
codice[ j ] = cognome[ i ];
j++;
conta++;
}
if( conta == 3 )
{
break;
}
}

if( conta != 3 )
{
while( conta != 3 )
{
codice[ j ] = 'x';
j++;
conta++;
}
}

for( j = 0; j < conta; j++ )
{
cout << codice[ j ] << " ";
}
cout << endl;
l = 0;
conta = 0;
cout << "Inserisci il nome: ";
cin >> nome;
l = strlen( nome );
somma+=l;
for( i = 0; i < l; i++ )
{
if( nome[ i ] != 'a' && nome[ i ] != 'e' && nome[ i ] != 'i' && nome[ i ] != 'o' && nome[ i ] != 'u' )
{
cons++;
}
}
if( cons >= 4 )
{
for( i = 0; i < l; i++ )
{
if( nome[ i ] != 'a' && nome[ i ] != 'e' && nome[ i ] != 'i' && nome[ i ] != 'o' && nome[ i ] != 'u' )
{
codice[ j ] = nome[ i ];
j++;
conta++;
c1 = i;
}
if( conta == 2 )
{
break;
}
}
conta-=1;
j-=1;
c1+=1;
for( i = c1; i < l; i++ )
{
if( nome[ i ] != 'a' && nome[ i ] != 'e' && nome[ i ] != 'i' && nome[ i ] != 'o' && nome[ i ] != 'u' )
{
codice[ j ] = nome[ i ];
j++;
conta++;
}
if( conta == 3 )
{
break;
}
}
}
if( cons == 3 )
{
for( i = 0; i < l; i++ )
{
if( nome[ i ] != 'a' && nome[ i ] != 'e' && nome[ i ] != 'i' && nome[ i ] != 'o' && nome[ i ] != 'u' )
{
codice[ j ] = nome[ i ];
j++;
conta++;
}
if( conta == 3 )
{
break;
}
}
}
if( cons == 2 )
{
for( i = 0; i < l; i++ )
{
if( nome[ i ] != 'a' && nome[ i ] != 'e' && nome[ i ] != 'i' && nome[ i ] != 'o' && nome[ i ] != 'u' )
{
codice[ j ] = nome[ i ];
j++;
conta++;
}
}
for( i = 0; i < l; i++ )
{
if( nome[ i ] == 'a' && nome[ i ] == 'e' && nome[ i ] == 'i' && nome[ i ] == 'o' && nome[ i ] == 'u' )
{
codice[ j ] = nome[ i ];
j++;
conta++;
}
if( conta == 3 )
{
break;
}
}
}
if(cons==1)
{
for(i=0;i<l;i++)
{
if(nome[i]!='a'&&nome[i]!='e'&&nome[i]!= 'i'&&nome[i]!='o'&&nome[i]!='u')
{
codice[j]=nome[i];
j++;
conta++;
}
}
for(i=0;i<l;i++)
{
if(nome[i]=='a'||nome[i]=='e'||nome[i]=='i'||nome[i]=='o'||nome[i]=='u')
{
codice[j] = nome[i];
j++;
conta++;

}

if(conta==3)
{
break;
}

}

}
if(cons==0)
{
for(i=0;i<l;i++)
{
codice[j] =nome[i];
cout<<codice[j];
j++;
conta++;
if(conta==2)
{
break;
}
}
cout<<"x";
}
while(conta!= 3)
{
codice[j]='x';
}

for(j=0;j<6;j++)
{
cout<<codice[j]<<" ";
}
}