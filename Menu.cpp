#include<iostream>
using namespace std;
int main ()
{
int menu;
do
	{
    cout << "Main Menu\n";
    cout << "Please make your selection\n";
    cout << "1 - show full list\n";
    cout << "2 - create new contact\n";
    cout << "3 - search contact\n";
    cout<<"4- edit contact\n";
    cout << "enter your choice\n";
    cin >> menu;

         switch(menu) 
		 {
           case 1:
             cout << "function1";
             break;
           case 2:
             cout <<"function2";
             break;
           case 3:
             cout << "function3";
             break;
           case 4:
             cout << "function4";
             break;
           default:
             cout << "Main Menu\n";
             cout << "Please make your selection\n";
             cout << "1 - show full list\n";
             cout << "2 - create new contact\n";
             cout << "3 - search contact\n";
             cout<<"4- edit contact\n";
            cout << "enter your choice";
            cin >> menu;
         }
      } while(menu !=4);                            
    system("PAUSE");
}	
