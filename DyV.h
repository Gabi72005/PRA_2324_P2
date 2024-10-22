#ifndef DYV_H
#define DYV_H


#include<vector>


template <typename T>
int busquedaBinaria(const T& x, const std::vector <T>& v, int ini, int fin){
	if(ini>fin){
                return -1;
        }
        int medio = (ini + fin) / 2;
	if (v[medio] == x) {
        	return medio; // Elemento encontrado
    	} else if (v[medio] < x) {
        	return BusquedaBinaria(x, v, medio + 1, fin); // Busca en la mitad derecha
    	} else {
        	return BusquedaBinaria(x, v, ini, medio - 1); // Busca en la mitad izquierda
   	 }	
}
#endif
