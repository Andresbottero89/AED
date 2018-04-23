/*Tipo de Valores
Trabajo Practico 2
Andrés Martín Bottero
20180419
*/

#include<iostream>
#include<cassert>
#include<math.h>                //Esta libreria la invoco para poder utilizar operaciones matemáticas básicas.

using namespace std;

double redondear(double);       //Prototipo de una función

double redondear(double num){   //Se define la función
return round(num);              //Redondeara la variable que luego reemplazará a "num"
}

int main(){

const bool amor=true;
const char sigla='Batman';
const unsigned int maximo=65535;
const int room=237;
const double precio=299.99;
const string mensaje="Conocete a ti mismo";

assert(amor!=false and sigla=='n');     //Amor es verdadero. Si se ingresa una palabra en el tipo de dato char entonces solo se guardara la ultima letra.
assert((maximo%room)>mensaje.length()); //Compara el resto de una división con la longitud de una frase.
assert(precio!=redondear(precio));      //El valor de precio no debe ser igual al valor de precio redondeado.
assert(-(room-precio)==precio-room);    //Comparo negativos.
assert(room*room*room==pow(room,3));
}
