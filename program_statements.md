c Program Statements
====================

01 Simple Ouput
---------------

Write down a program that outputs 10 times the name passed
as a parameter at command line invocation.

```bash
the_owl@eniac:~$ ./repeat "what does the fox say?"
```
Escribir un programa que repita 10 veces el nombre anexado
en la invocación de la linea de comandos.


02 Mean
-------

Calculate the mean of 10 numbers given by the user.

Calcular la media de 10 números proporcionados por el usuario.


03 Mean
-------

Ask numbers while the user introduces something greater or equal to 0.
Show the mean of the given numbers.

Calcular la media de todos los números introducidos por el usuario.
Se tomarán todos los números hasta que se introduzca algo menor que 0. 
El último número no se tomará en cuenta.

04 Triangle
-----------

Given the height, build a triangle as in the example with the character provided in the invocation.

    l = 4
    
    *
    **
    ***
    ****

```bash
the_owl@eniac:~$ ./trinagle "*"
```

05 List of Words
----------------

Complete the following program in order to print the list of words.

```c
  int main() {
  
     const char *list[] = {
       "bread", 
       "toast",
       "bacon"
     };
     
  
  }
```

Find the way (using sizeof operator) to print the number of words defined in the list.


Future Work
===========

```c
#include <iostream>
using namespace std;

int a = 1;
int f(int a) { return a; }
int g(int x = f(a)) { return x; }

int h() {
  a = 2;
  {
    int a = 3;
    return g();
  }
}

int main() {
  cout << h() << endl;
}
```
