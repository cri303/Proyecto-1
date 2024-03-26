#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    queue<string> cola;
    cola.push("david");
    cola.push("ana");
    cola.push("sofia");

    //atender primero
    cout << "se atendio a: "<< cola.front() << endl;
    cola.pop();
    
    cout <<" en la cola quedan: \n" <<endl;
    while (!cola.empty()){
        cout<<"cliente: "<< cola.front() << endl;
        cola.pop(); 
    }
    

};
