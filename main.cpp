#include "Evaluador.h"
#include <iostream>

//Esta tarea la hice con la colaboracion de el compañero WALTER VALLE

using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    //simplemente devolvemos el valor *ptr
    return *ptr;
}

    //Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    //devolvemos la suma de la variable *a y la variable *b
    return *a+*b;
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    //con el == estamos comparando las variables, si solo pusieramos un = no nos funcionara el programa
    if (a==b)
    {
    //el el ciclo if devuelve true si las variables string son iguales en el espacio de la memoria
    return true;
    }
    //de lo contrario devuelve false
    else
    {
    return false;
    }
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    // aqui hacemos lo mismo que en el anerior con la diferencia que esta ves utilizamos el * antes de las variables a y b
    if (*a==*b)
    {
    return true;
    }
    else
    {
    return false;
    }
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    //incluimos el comando at que nos permite ver la pocicion de el caracter por asi decirlo
    //fuente cplusplus
    //creamos una variable tipo char y le asignamos la variable a y con el at (0) hacemos que obtenga la primera letra
   char primeraletra = a->at(0);
   //devolvemos el char que  ya aqui obtiene el valor de la primera letra de a
   return primeraletra;

}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    return false;
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
//en total simplemente devolvemos la respuesta
    int total;
    int n;
    //hacemmos que la variable n sea igual a la bariable base
    n = *base;
    //con un for averiguamos el exponente por eso lo iniciamos en 1 comparando todos los numeros por que los vamos aumentando con el x++
    //hasta llegar a el exponente dado se para el for y cumple la condicion de abajo
      for (int x =1; x<(*exponente); x++)
      {
      //aqui hacemos practicamente la multiplicacion y obtenemos la respuesta ya que muntiblicamos n veces la base
          total = n*= *base;
      }
    //devolvemos el total donde guardamos la respuesta
    return total;

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
