// OMPVerificando.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

#include <omp.h>

int main()
{
    std::cout << "Verificando la ejecución de las directivas OMP!\n";

	# ifdef _OPENMP
		std::cout << "OMP disponible y funcionando" << std::endl;
	# endif

}
