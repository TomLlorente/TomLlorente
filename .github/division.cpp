#include <iostream>

void division(int dividendo, int divisor, int& cociente, int& resto){
	// Modificar el pasaje de parametros de ser necesario para que calcule el cociente y resto. Deben se por copia o referencia??
	if (0 <= dividendo && 0 <= divisor)
	{
		int cocientePosible = 1;
		int divisorCociente = divisor*cocientePosible;
		int restoPosible = dividendo - divisorCociente;
		while( divisorCociente < dividendo && 0 <= restoPosible)
		{
			cocientePosible++;
		    divisorCociente = divisor*cocientePosible;
		    restoPosible = dividendo - divisorCociente;
		}
    
		if( 0 != restoPosible )
		{
			cocientePosible--;
			divisorCociente = divisor*cocientePosible;
			restoPosible = dividendo - divisorCociente;
		}
		cociente = cocientePosible;
		resto = restoPosible;
    }
		
    
}

using namespace std;
int main() {
    /* No hace falta modificar el main */
    //Leo la entrada
    int divisor,dividendo,cociente,resto;
    cin >> dividendo>>divisor;
    
    //Calculo la division
    division(dividendo,divisor,cociente,resto);
    
    //Salida
    cout << cociente << " " << resto;
    
    return 0;
}
