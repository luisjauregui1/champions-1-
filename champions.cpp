#include <iostream>
#include <stdio.h>  
#include <windows.h>  
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

using namespace std;
 
int main()
{
    int valida = 777;
    int clave,op,i;
 
    do
    {
        gotoxy(0,0);cout << "Introduzca su clave : ";
        gotoxy(50,0);cout << "la clave es: 777" << endl;
        gotoxy(21,0);cin >> clave;
        fflush( stdin );
        if (clave != valida) 
            gotoxy(35,0);cout << "No valida" << endl;
    }
    while (clave != valida);
 
    gotoxy(0,1);cout << "Aceptada." << endl;
    
    for(int i=0;i<112;i++)
    	{ 
    	gotoxy (i,2);cout << "*" << endl;
    	gotoxy (i,4); cout << "*" << endl;
		}
	
	
    
    gotoxy(2,3);cout << "*Campeon*" << endl;
    gotoxy(26,3);cout << "*semifinal*" << endl;
    gotoxy(46,3);cout << "*cuartos*" << endl;
    gotoxy(67,3);cout << "*octavos*" <<endl;
    gotoxy(92,3);cout << "*octavos* " <<endl;
    
    gotoxy(2,6); cout << "liverpool" << endl;
    gotoxy(2,10); cout << "*FINAL*" << endl;
    gotoxy(2,15); cout << "tottenham" << endl;
    gotoxy(2,16); cout << "liverpool" << endl;
    
    
    gotoxy(26,6);cout << "liverpool" << endl;
    gotoxy(26,7);cout << "barcelona" << endl;
    gotoxy(26,10);cout << "Ajax" << endl;
    gotoxy(26,11);cout << "tottenham" << endl;
   
   	
   	gotoxy(46,6);cout << "juventus" << endl;
   	gotoxy(46,7);cout << "Ajax" << endl;
   	
   	
    gotoxy(46,10);cout << "manchester city" << endl;
    gotoxy(46,11);cout << "tottenham" << endl;
    
   	gotoxy(46,15);cout << "barcelona" << endl;
   	gotoxy(46,16);cout << "manchester united" << endl;
   	
   	
   	gotoxy(46,20);cout << "Porto" << endl;
   	gotoxy(46,21);cout << "Liverpool" << endl;
   

   	gotoxy(67,6);cout << "Real madrid" << endl;
   	gotoxy(67,7);cout << "Ajax" << endl;
   	
    gotoxy(67,10);cout << "Porto" << endl;
    gotoxy(67,11);cout << "Roma" << endl;
    
    gotoxy(67,15);cout << "manchester city" << endl;
    gotoxy(67,16);cout << "schalke 04" << endl;
    
    gotoxy(67,20);cout << "bayer" << endl;
    gotoxy(67,21);cout << "liverpool" << endl;
    
    gotoxy(92,6);cout << "Dormund" << endl;
    gotoxy(92,7);cout << "tottenham" << endl;
    gotoxy(92,10);cout << "PSG " << endl;
    gotoxy(92,11);cout << "Mnachester united" << endl;
    
    gotoxy(92,15);cout << "juventus" << endl;
    gotoxy(92,16);cout << "Atlerico de madrid" << endl;
    gotoxy(92,20);cout << "Barcelona" << endl;
   	gotoxy(92,21);cout << "Lyon" << endl;
   	
    
    
    gotoxy (1,26); cout << "Fernandez de Jauregui Luis Gustavo" << endl;
    gotoxy (1,27); cout << "cuadro de la champions league" << endl;
    

    
    return 0;
}
