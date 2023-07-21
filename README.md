![Image text](https://github.com/blackcat80/push_swap/blob/main/push_swap.png)

**push_swap** es un proyecto de algoritmo de la escuela 42 donde debemos ordenar una lista dada de números aleatorios con un conjunto limitado de instrucciones, utilizando el menor número posible de acciones.

## Uso
1. Clona el repositorio con `Git` y navega hacia él con `cd`.
2. Luego usa `make` para compilar.

Luego ejecútalo con:
```
./push_swap <números>
```

Los números proporcionados pueden ser enteros positivos o negativos. No debe haber duplicados. Por ejemplo:
```
./push_swap 86 -14 0 -217 2147483647 -2147483648 004 -03
```

Si los argumentos son válidos, el programa mostrará la lista de acciones más eficiente para ordenar la lista.

## Bonus
3. Ejecuta `make bonus` para compilar el checker.


Ahora ya podemos verificar el resultado con nuestro checker de esta manera:
```
ARG="7 13 -2 90"; ./push_swap $ARG | ./checker $ARG
```
Tambien puedes usar el proporcionado "checker_linux (si no usas Mac) o checker_Mac":
```
ARG="7 13 -2 90"; ./push_swap $ARG | ./checker_linux $ARG
ARG="7 13 -2 90"; ./push_swap $ARG | ./checker_Mac $ARG
```
Con pocos números puedes ejecutar el checker de forma manual, escribiendo las acciones una a una, al finalizar tan solo presionar `ctrl + d` para obtener el resultado:
```
$ ./push_swap 1 3 2 4
pb
sa
pa
$ ./checker 1 3 2 4
pb
sa
pa
OK
```
## Link para generar números aleatorios
<a href="https://pinetools.com/es/generador-numeros-aleatorios" rel="noopener">Generador de números aleatorios</a>

## Reglas del proyecto
El programa se compone de dos stacks (a y b).  
En el stack_a tendrás números positivos y/o negativos, nunca duplicados  .  
El stack_b empezará vacio.

### Operaciones que tienes a tu disposición:

| Instrucciones | Descripción |
|--|--|
| sa | intercambia los dos primeros elementos de la pila A |
| sb | intercambia los dos primeros elementos de la pila B |
| ss | hace sa y sb al mismo tiempo |
| pa | saca el primer elemento de B y lo coloca en la parte superior de A |
| pb | saca el primer elemento de A y lo coloca en la parte superior de B |
| ra | rota hacia arriba la pila A (el primer elemento se mueve al final) |
| rb | rota hacia arriba la pila B (el primer elemento se mueve al final) |
| rr | rota hacia arriba tanto la pila A como la pila B |
| rra | rota hacia abajo la pila A (el último elemento se mueve al principio) |
| rrb | rota hacia abajo la pila B (el último elemento se mueve al principio) |
| rrr | rota hacia abajo tanto la pila A como la pila B |

## Puntuación 

Puntuación según la eficiencia del proceso de ordenación del programa:

1. Ordenar 3 valores: Se requiere un máximo de 3 acciones para obtener la máxima calificación.
2. Ordenar 5 valores: El proceso de ordenación no debe exceder las 12 acciones para obtener la calificación más alta.

|          |     100 Numeros     |          |     500 Numeros     |
| Operaciones | Puntos | Operaciones | Puntos |
| :---: | :---: | :---: | :---: |
| Menos de 700 | 5 | Menos de 5500 | 5 |
| Menos de 900 | 4 | Menos de 7000 | 4 |
| Menos de 1100 | 3 | Menos de 8500 | 3 |
| Menos de 1300 | 2 | Menos de 10000 | 2 |
| Menos de 1500 | 1 | Menos de 11500 | 1 |



La eficiencia del proceso de ordenación determina la calificación final del programa, donde una menor cantidad de acciones requeridas se traduce en una calificación más alta.

Buena suerte! 😁

## Créditos y uso del test

Agradecimientos especiales a gemartin99 por sus valiosos Tester (push_swap_test_linux.sh y push_swap_test.sh). Su trabajo ha sido fundamental para mejorar la calidad y funcionalidad de esta aplicación.

Instrucciones funcionamiento aquí: https://github.com/gemartin99/Push-Swap-Tester

