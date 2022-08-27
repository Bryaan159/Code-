# Punteros

Un puntero es una variable que contiene una direccion de memoria.
#### **Variable**
es algo que se puede almacenar en valores (como una caja donde puede meterse cosas).

#### **Memoria de una computadora**
está divida en muchos segmentos,que están numerados de manera secuencial. y se utiliza para almacenar valores.

No hay razon por la cual deberiamos preocuparnos por comprender el valor numérico de la dirección de una variable. **cada celda tiene una dirección asignada**.
___

#### **Obtener la dirección de una memoria variable**

Se utiliza el operador **&** para obtener la dirección de una variable.

Normalmente se antepone a una variable, entonces se obtiene su direccion de memoria.7
______

### **int *puntero; (indireccion)***
indica que dicha variable se utilizara como un puntero y no como una variable normal, es decir, su uso sera almacenar la direccion en momeria a otra variable.
_______
### **cout<<(*puntero); (desreferencia)***
Devuelve el valor contenido o asigna uno nuevo en la direccion apuntada por dicho puntero.