# Sonda-meteorologica
Proyecto de ciencias 2023


1. INTRODUCCIÓN
Lo que se busca es crear un proyecto en donde podremos afrontar de una forma más eficaz la gran crisis del cambio climático a la que nos enfrentamos.
La divulgación de la metereología es algo importante ya que esta ciencia es una de las claves a la hora de conocer este problema de forma precisa.
Se busca conocer y compartir de forma exacta los datos obtenidos a través del tiempo para medir los cambios del clima.
Nuestra previsión consiste en que con la sonda se podrá obtener información precisa a bajo costo sobre las condiciones atmosféricas de donde es lanzada, y con esto encontraremos que problemas son los que más afectan a las regiones para así buscar la medida más eficaz en el combate contra el cambio climático.

En cuanto a limitaciones, el globo tiene una altura máxima a la que puede elevarse antes de explotar.
En contraparte, si se utiliza una cuerda para mantenerlo cerca, su altura está limitada sin embargo se complica ya que no existen cuerdas de tal dimensión.

1.1 Justificación
La creación de una sonda eficaz, accesible y más duradera genera beneficios tales como el hecho de que esta puede captar con una mayor calidad y cantidad los datos ya que esta flota más tiempo en el aire además de que las sondas convencionales
no duran mucho y gastan demasiado presupuesto al tener que invertir en globos constantemente ya que estos revientan al llegar a cierto punto en la atmósfera a comparación de nuestra sonda la cual tiene un costo mínimo y es reutilizable. 
Una vez la sonda recopila el número de datos correctos estos pueden ser utilizados para analizar los cambios climáticos del área que abarca la sonda y con esto realizar un plan mucho más eficaz y detallado para detener el cambio climático y a su vez sus efectos adversos.

En síntesis, aqui se subira los códigos relacionados al funcionamiento de la sonda con tal de que sea de código abierto, libre para todos 
y poder impulsar un proyecto metereológico mas grande.

El índice de temperatura emplea la siguiente formula:
HI = c1 + c2T + c3R + c4TR + c5T^2 + c6R^2 + c7T^2R + c8TR^2 + c9T^2R^2

Donde:

HI: índice de calor
T: temperatura en grados Celsius
R: humedad relativa en porcentaje
c1-c9: constantes que se utilizan en la fórmula
En el código proporcionado anteriormente, la función calcularIC() es la encargada de calcular el índice de calor a partir de la temperatura y la humedad relativa medidas por el sensor DHT11.
