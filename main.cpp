#include <iostream>
using namespace std;

int main() {
float a, tot, med;
int g, i;
g=7;
tot=0;
i=0;
while(i<g)
{
    cout << "Qual è il livello dell'acqua oggi?" << endl;
    cin >> a;
    if(a>10)
    {
        cout << "Il valore dell'acqua è stato superato di 10cm il giorno " << i << endl;
        
    }
    else
    {

    }
    tot=tot+a;
    i=i+1;
}
med=tot/g;
if(med>0)
{
    cout<<"Acqua alta" << endl;
}
else
{
    cout << "Livello normale" << endl;
}
}


