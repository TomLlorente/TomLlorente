#include <vector>
#include <iostream>

using namespace std;




int puntoFijo(vector<int> v){

    int res = -1;
	bool vale = true;
    int vSize = v.size();
    for(int i=1; i<vSize; i++)
	{
		if(v[i-1] >= v[i])
			vale = false;
	}
	
	if(vale == true)
	{
        for (int i = 0; i < vSize; i++) 
		{
            if (res == -1 && v[i] == i)
                res = i;
        }
    }

    return res;
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
    
    // Calculo el punto fijo de v
    int res = puntoFijo(v);
    
    // Imprimo la salida
    cout << res;
    
    return 0;
}
