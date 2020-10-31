#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
#define USER "admin"
#define PASS "admin"
#define ENTER 13 
#define BACKSPACE 8

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
			
	   int	cont=0;
	   bool entrar=false;
	   string usr,pwd;
	   
	do
	{
		system("cls");
	   	cout<<"\tLOGIN"<<endl;
	   	cout<<"--------------------"<<endl;
	   	cout<<"Username: ";
	 	getline(cin, usr); 
	    
	   // cin.ignore(0,'\n');
	    char caracter;
	    cout << "Password: ";
	    caracter = getch();
	   	pwd="";
	   	
	    while (caracter != ENTER) {
	        
	        if (caracter != BACKSPACE) {
	            pwd.push_back(caracter);
	            cout << "*";    
	        } else {
	        	
	            if (pwd.length() > 0) {
	                cout << "\b \b";
	                pwd = pwd.substr(0, pwd.length() - 1);
	            }
	        }
	            
	            caracter = getch();
	    }
	   	
	   	if (usr == USER && pwd == PASS){
			system("cls");
	    	cout<<"\nAcceso correcto"<<endl;
	        entrar = true;
	    }else {
	    	system("cls");
	        cout<<"\n\n\tEL usuario y/o password son incorrectos"<<endl;
	        cin.get();
	        cont++;
	     	
	
	    }
	   	
	}while(entrar==false && cont<3);
	   
	    system("PAUSE"); 
		
		return 0;
}





