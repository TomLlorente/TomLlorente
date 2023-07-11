#include <iostream>
#include <vector>

using namespace std;

bool estaOrdenado(vector<int> v){
    
	bool rta;
	bool ordCreciente;
	int elemActual, elemAnterior;
	int vSize = v.size();
	for(int i=0; i<=vSize-1; i++)
	{
		elemActual = v[i];
		if (1 <= i)
		{
			if (1 == i)
			{
				if ( elemAnterior <= elemActual )
					ordCreciente = true;
				else
					ordCreciente = false;
			}
			else
				if ( ordCreciente == true && elemAnterior <= elemActual )
					rta = true;
				else if ( ordCreciente == false && elemActual <= elemAnterior )
					rta = true;
				else
				{
					rta = false;
					break;
				}
				
		}
		
		elemAnterior = elemActual; 
	}
	
	return rta;
    
}

    
int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n; 
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }
    
    // Evaluo si el vector v esta ordenado
    bool res = estaOrdenado(v);
    
    // Imprimo la salida
    cout << (res?"True":"False");
    
    return 0;
}
