#include <iostream>
using namespace std;

int main(){
	int var=5;
	
	int*pointvar;
	pointvar=&var;
	
	cout<< "var =" << var << endl;
	cout<< "Direccion de la variable var (&var) =" << &var << endl << endl;
	cout<< "apuntador poinvar = " << pointvar <<endl << endl;
	cout<< "cambia el valor de var a 7:" <<endl <<endl;
	var= 7;
	cout<<"var =" << var << endl << endl;
	cout << "pointvar =" <<pointvar << endl << endl;
	cout<< "cambia el valor de *pointvar a 16:" << endl;
	*pointvar = 16;
	cout << "var =" << var << endl << endl;
	cout << "apuntador pointvar = " << pointvar << endl;
	cout << "point var =" << var << endl << endl;
	cout << "var = " << var << endl << endl;
	
	return 0;
}
