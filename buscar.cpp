#include <bits/stdc++.h>
using namespace std;


string BuscarPosiciones(string f, string l);

int main(){
	string f , l;
	cout<<"Ingrese una frase/palabra:  ";
	getline(cin,f);
	cout<<"ingrese un caracter:  ";
	cin>>l;
	cout<<BuscarPosiciones(f,l);
}

string BuscarPosiciones(string frase, string letra){
	 string posiciones;
    size_t found = frase.find(letra);
    while (found != string::npos) {
        posiciones += to_string(found) + " ";
        found = frase.find(letra, found + 1);
    }
    return posiciones;
}