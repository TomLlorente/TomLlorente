#include <vector>
#include <iostream>

using namespace std;

bool existePico(vector<int> v){

	int k = 0;
	bool res = false;
	int vSize = v.size();
	int i=1;
	while(i < vSize)
	{

		if(i<vSize-1){
			if(v[i-1] < v[i] && v[i+1] < v[i])
				k = i;
		}
		
		i++;
		if (0 < k)
			res = true;
		
	}
	
    return res;
}

int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n; //Longitud del vector a rotar
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
    bool res = existePico(v);
    
    // Imprimo la salida
    cout << (res?"True":"False");
    
    return 0;
}
