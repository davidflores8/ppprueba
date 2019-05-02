#include <iostream>
#include <vector>

int main()
{
	//inicializa el vector con un size y los valores que tendran ese vector
	vector<int>arreglo(5, 10);

	//devuelve el tamano del vector
	cout<<arreglo.size()<<" size del vector" <<std::endl;

	//cambiar el size del vector, lleva como parametro el nuevo size del cual tomara los elementos desde 0 hasta el nuevo size
	arreglo.resize(5);	

	//El acceso a los elementos del vector es igual a acceder a los de un arreglo
	
	//Para borrar elementos del vector, lleva como parametros dos numeros, la posicion en la cual eliminara, y la posicion tope 
	arreglo.erase();

	//anadir elementos al vector
	
	arreglo.push_back(5);//lleva como parametro el nuevo elemento que anadiremos al vector
	arreglo.insert(1,3);//lleva como parametro la posicion donde se pondra el elemento, y el nuevo elemento
	arreglo.insert(1,2,4);//el iterador que indica desde donde se agregara, la cantidad de veces que se repite, y el valor a agregar


	return 0;

}
