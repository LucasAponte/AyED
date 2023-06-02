#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double pi = 0.0;
    int contador = 0;
    double sumador = 0.0;
    double aux=0.0;

    while (abs(pi-3.141592)>0.0000001)
    {
        // sumador = contador%2== 0 ? sumador + (1/(1+2*contador)): sumador - (1/(1+2*contador));
        if (contador % 2 == 0)
        {
            sumador = sumador + (1.0 / (1.0 + (2.0 * aux)));
        }
        else
        {
            sumador = sumador - (1.0 / (1.0+ (2.0* aux)));
        }
        pi = (4.0 * sumador);
        contador++;
        aux ++;
        
    }
    cout <<setprecision(8)<< pi ;
    return 0;
}