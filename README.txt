
Ejercicios capítulo 10

1. Explica la diferencia entre una variable de tipo entero, y un puntero a una variable de ese tipo.

2. ¿Podemos saber dónde se va a guardar la información de una variable puntero? ¿Por qué?

3. Explica qué está pasando en el siguiente código, línea por línea.
- Int numero = 27;
- int *punteroNum = NULL;
- punteroNum = &numero

4. ¿Cómo asignaríamos en el ejemplo anterior el valor 77 a la variable número, a través del puntero
que la referencia?

5. ¿Qué diferencias hay entre la zona de memoria de la pila y el heap? Hay una de ellas que permite el
uso de punteros. ¿Cuál?

6. ¿Para qué necesitamos los punteros si ya tenemos variables globales y locales?

7. ¿Qué está sucediendo en el siguiente código?
- Int *edad = 25;
- Delete *edad;

8. Modifica el proyecto creado en el capítulo anterior, y haz que los vehículos que guardamos en cada
plaza estén almacenados en un puntero de tipo Vehículo.
Lo que conseguimos con este cambio es evitar la creación de coches “fantasma” que aparecen
cuando creamos la plaza, antes de ocuparla con un vehículo. En un programa corto no se notaría la
diferencia, pero si hubiera 50.000 plazas estaríamos creando en memoria 50.000 objetos extra de
tipo Vehículo que nuestra aplicación no necesita.

9. Práctica final del capítulo
Haz una aplicación para llevar las notas de los alumnos de una escuela.
De ellos querremos saber el nombre, las notas de cada trimestre (en matemáticas, inglés y
geografía) y la nota media del curso. Además deberemos poder introducir, eliminar y listar
alumnos, y visualizar las notas de cada uno, así como la nota media de todos ellos, al alumno con la
nota media más alta y con la más baja.
El menú de la aplicación será como el siguiente:
a) Introducir alumno: Alta de alumno (con sus notas)
b) Eliminar alumno: eliminar alumno
c) Listar alumnos: Listado de todos los alumnos que hemos introducido
d) Mostrar notas alumno: Nota de un alumno en matemáticas, inglés y geografía de cada
trimestre, y la media.
e) Mostrar media del curso
f) Mostrar alumnos con mejor y con peor media.
g) Salir
Utiliza punteros, y crea una clase Alumno que contendrá el nombre y las notas correspondientes.
Pista: Consideraremos un máximo de 30 alumnos en la aplicación. Puedes usar un array de
punteros a Alumno para almacenarlos.
