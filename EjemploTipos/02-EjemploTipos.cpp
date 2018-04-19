/*Tipo de Valores
Trabajo Practico 2
Andrés Martín Bottero
20180419
*/

#include <iostream>
#include <cassert>
using namespace std;

int main(){

const bool amor=true;
const char sigla='Batman';
const unsigned int maximo=65535;
const int room=237;
const double precio=299.99;
const string mensaje="Conocete a ti mismo";

assert(amor==true);
assert(sigla=='n');
assert(maximo==65535);
assert(room==237);
assert(precio==299.99);
assert(mensaje=="Conocete a ti mismo");

//cout<<amor<<"\n"<<sigla<<"\n"<<maximo<<"\n"<<room<<"\n"<<precio<<"\n"<<mensaje;

}
