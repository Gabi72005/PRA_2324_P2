#include "DyV.h"
#include<vector>


int main() {
    // Test con un vector de enteros
	std::vector<int> vecInt = {1, 3, 5, 7, 9, 11, 13, 15};
	busquedaBinaria(2, vecInt, 0, vecInt.size() - 1); // No debería encontrarlo
	busquedaBinaria(3, vecInt, 0, vecInt.size() - 1); // Debería encontrarlo


    // Test con un vector de floats
    	std::vector<float> vecFloat = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    	busquedaBinaria(2.7f, vecFloat, 0, vecFloat.size() - 1); // No debería encontrarlo
	busquedaBinaria(3.3f, vecFloat, 0, vecFloat.size() - 1); // Debería encontrarlo

    

    // Test con un vector de chars
	std::vector<char> vecChar = {'a', 'b', 'c', 'd', 'e'};
	busquedaBinaria('c' , vecChar, 0, vecChar.size()-1); // Debería encontrarlo
	busquedaBinaria('z',vecChar, 0, vecChar.size()-1); // No debería encontrarlo

    // Test con un vector de doubles
	std::vector<double> vecDouble = {0.1, 0.2, 0.3, 0.4, 0.5};
	busquedaBinaria(0.4, vecDouble, 0, vecDouble.size() -1); // Debería encontrarlo
	busquedaBinaria(0.6, vecDouble, 0, vecDouble.size() -1); // No debería encontrarlo

    return 0;
}
