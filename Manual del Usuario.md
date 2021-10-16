# MANUAL DEL USUARIO

![devc++](https://user-images.githubusercontent.com/91577396/137566346-f25fd948-cc0d-45a7-917a-c890f9f40c0f.png)


# Indice


1....Introducción

2....Objetivos

3....Guia de Uso del Programa

4....Solucion de Algunos Problemas

5....Contactos

# Introducción

Acontinuacion encontrara una brebe explicacion de como utilizar este programa creado en C++ con la finalidad del manejo de archivos como por ejemplo modificar, guardar y leer archivos desde C++ todo esto para tener una mejor finalidad con el programa y que pueda comprender los distintos caracteres del programa pero principalmente pueda conocer el funcionamiento adecuado de dicho programa para utilizarlo al maximo. Este proyecto se creo con la finalidad de saber como manipular archivos de texto desde C++ para tener un mejor conocimiento de dichas practicas utilizando las enseñanzas en clase para la elaboracion de este proyecto.


# Objetivos:

El objetivo principal de dicho programa es llevar a cabo registros en archivos de textos los cuales debe de permitir leer un archivo, ingresar informacion, modificar dicha informacion todo esto en un menu el cual nos indicara que deseamos hacer en el dicho programa si deseamos agregar un registro o modificar dicho registro.

El objetivo de este documento o manual es brindar la mayor informacion posible para el uso de esta aplicacion a su maximo nivel y tambien brinar esa informacion de una manera sencilla y clara para todo el publico

Conocer a prfunidad el manejo de archivos en C++ pero principalmente el manejo de la informacion dentro de esos archivos todo esto de acuerdo a lo solicitado por el usuario

Llegar a tener un control de los archivos como de la informacion de una manera mas ordenada y precisa ya que en este programa se pueden hacer busquedas especificas de los datos de acuerdo a lo que se necesite

Implementar funciones aprendidas en un solo programa para tener una mejor comprension de las funciones utilizadas en este programa y tener un mejor entendimiento del manejo de archivos


# Guia de Uso

Acontinuacion encontrara una guia de como utilizar el programa y tener un maximo rendimiento al igual solventar cada una de las dudas que se puedan llegar a presentar durante el uso de dicho programa 

Al momento de inicializar el programa o compilar dicho programa se presentara un menu con algunas especificaciones y opcciones como se puede apreciar se presentar opcciones como

Agregar un alumno

Buscar un alumno

Modificar Datos del Alumno

Salir 

![Captura](https://user-images.githubusercontent.com/91577396/137566861-f74097e2-f937-4153-9549-1ac8d8e64a31.PNG)

Luego de ingresar al menu principal podremos seleccionar las opcciones que deseemos pero como primer punto debemos de crear un registro para comenzar a trabajar con las demas opcciones entonces ingresamos el numero "1" para iniciar la opccion de agregar un alumno luego se nos presentara una serie de preguntas en las cuales debemos de ingresar la informacion del alumno como el Nombre, Apellido, Carné (Muy importante porque con eso se realiza la busqueda y modificacion de los datos) entre otros datos.

![2](https://user-images.githubusercontent.com/91577396/137567387-c6a5c8ba-1c1d-4c51-9085-e0e62e8367a2.PNG)

Al haber ingresado los datos o informacion del alumno tambien vemos que se nos crea un archivo Txt llamado Registo en la carpeta en donde decidamos tener el archivo y al abrir dicho archivo txt vemos que se han guardado los datos que hemos ingresado desde la consola de C++ 

![3](https://user-images.githubusercontent.com/91577396/137567487-58b8f9cd-aeb2-4127-a6fb-06e2a8572570.PNG)

Como podemos prescenciar todos los datos que ingresamos fueron guardados en el archivo llamado Registro.txt 

![4](https://user-images.githubusercontent.com/91577396/137567611-41587b12-011f-457f-9269-f3f0c36b5892.PNG)

Luego de Guardar el registro tendremos la opccion de regresar al menu principal para continuar con las opcciones del menu. Luego debemos de seleccionar la opccion numero "2" para poder buscar a los alumnos con el numero de carné que se ingreso al principio de la creacion de los archivos es por eso la importancia de tener en cuenta el numero de carné seleccionamos la opccion "2" y se nos desplegara una pregunta para inciar la buscada, ingresamos el numero de carné del alumno aceptamos los permisos y automaticamente se nos mostrara en la pantalla los datos del alumno desde el numero de Carne hasta el Promedio.

![5](https://user-images.githubusercontent.com/91577396/137567917-083edab4-75a2-4394-8010-0ba63b891dd5.PNG)

Ahora que ya podemos buscar al alumno tambien si se ingresa mal el numero del carné del alumno nos mostrara un mensaje de que el numer de Carné no Existe y luego regresaremos al menu principal

![6](https://user-images.githubusercontent.com/91577396/137568008-197c0f8a-c7a4-49e1-bfc7-6adddf7df23b.PNG)

Al regresar al menu principal nos queda una de las opcciones mas utilizadas es la de modificar datos primero debemos ingresar el numero de Carne recordando que dos de las opcciones funcionan con la busqueda del numero de Carné es por eso la importancia de este dato, lo ingresamos y se nos mostrara el mensaje de modificar Estatus del alumno y tambien el Promedio ingresamos los nuevos datos y se guardaran en el archivo de texto llamadao Registro

![7](https://user-images.githubusercontent.com/91577396/137568192-4249960c-0c35-4e0e-a652-29d65dba79b3.PNG)

Tambien tendremos los datos nuevos ingresados en el archivo Registro.txt haciendonos referencia que son nuevos datos 

![8](https://user-images.githubusercontent.com/91577396/137568285-cd6f3be5-4089-422d-b412-feff7a58ef18.PNG)

Luego de utiliar todas las funciones y ver la funcionalidad de cada una de ellas solo nos queda el salir de ejecucion del programa y para eso ingresamos la opccion "4" y saldremos del programa sin antes que se nos muestre la opccion de salir 

![9](https://user-images.githubusercontent.com/91577396/137568330-e5a9e326-d794-43fe-9e67-5520035c0279.PNG)

# Solucion de algunos Problemas 

Al programar este proyecto es posible que se encuentran algunos fallos al momento de guardar informacion o que se modifique dicha informacion ya que hay algunas incognitas pero hemos logrado la solucion de dichos problemas estos son algunos de los mas comunes.

Modificar Informacion:

Este pequeño problema se presenta cuando se modifica la informacion del alumno cuando nosotros decidamos guardar la informacion de los alumnos en el archivo Registro.Txt se puede presentar un problema el cual se desarrolla al momento de guardar los nuevos promedios y estados de los alumnos aveces al momento de guardarse no se concatenan bien en el archivo y pueden transcribir algunos datos dentro del archivo la solucion de esto no utilizar demasiados caracteres al momento de ingresar los nuevos datos y tambien verificar si se ingresaron de manera correcta en el alumno correcto

Guardar Informacion:

Al momento de iniciar el programa o de solicitar aveces se puede ingresar mal la informacion lo cual se debe de tener un poco de cuidado mas con el numero de carné porque si este se coloca mal o no se coloca no se podra realizar la busqueda de dicho alumno como tampoco la modificacion de los nuevos datos tomar mucho en cuenta el numero de carné al momento de ingresar los datos.


Mario Quiñonez 7690-21-2086 Universidad Mariano Galvez
Facultad de Ingenieria en Sistemas 
