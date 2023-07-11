#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

	

void ordenar(vector<int> &items){
    // Poner aca una implementación de ordenar
	vector <int > conteo(1000 ,0) ;
	for(int i=0;i< items.size() ;i++) 
		conteo[ items[i]]++;
	
	
	int sConteo = conteo.size();
	int indice_conteo = sConteo-1;
	for(int i = 0; i< items.size() ; i++) 
	{
		// Ignoro valores nulos
		while ( conteo [ indice_conteo ]==0) 
		{
			indice_conteo--;
		}
		items[i] = indice_conteo ;
		conteo[ indice_conteo ]--;
	}
	//vector <int > conteo = contar ( items ) ;
	//return reconstruir (items , conteo ) ;
    // Atencion: no todas las implementaciones son
    // suficientemente rápidas para resolver en el
    // tiempo máximo permitido de la prueba automatizada.
    // Elegir entre las implementaciones vistas en
    // clase.
    //
    // Observación:
    // No vale usar std::sort()
}


int bestFit(int W, vector<int> &items){
    multiset<int> restos;
    for(int i=0; i<(int)items.size(); ++i){
        restos.insert(W);
    }
    int res = 0;
    for(int i=0; i<(int)items.size(); ++i){
        multiset<int>::iterator it = restos.lower_bound(items[i]);
        int restoAct = *it;
        if(restoAct==W){
            res++;
        }
        restoAct -= items[i];
        restos.erase(it);
        restos.insert(restoAct);
    }
    return res;
}

int main(){
    int N, W, aux;

    //Se levantan los items y la capacidad del contenedor
    cin >> N >> W;
    vector<int> items;
    for(int i=0; i<N; ++i){
        cin >> aux;
        items.push_back(aux);
    }
    //Se corre best-fit
    int cant1 = bestFit(W, items);
    cout << "Con la idea bestFit, se consigue una asignacion con " << cant1 << " contenedores" << endl;

    //Se ordenan los items
    ordenar(items);
    //Se corre best-fit-decreasing
    int cant2 = bestFit(W, items);
    cout << "Con la idea bestFitDecreasing, se consigue una asignacion con " << cant2 << " contenedores" << endl;

    return 0;
}

