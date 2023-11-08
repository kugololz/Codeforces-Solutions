#include <bits/stdc++.h>

using namespace std;

int main(){

    vector <int> arreglo;
    vector <int> pairs;
    vector <int> no_pairs;

    int count;
    int x;
    int useless;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> useless;

        for (int j = 0; j < useless; j++)
        {
            cin >> x;
            arreglo.push_back(x);
        }

        for (int y = 0; y < useless; y++)
        {
            if(arreglo[y] % 2 == 0){
                pairs.push_back(arreglo[y]);
            }
            else{
                no_pairs.push_back(arreglo[y]);
            }
        }

        if (pairs.size() == useless || pairs.size()== (useless/2))

        arreglo.clear();
        pairs.clear();
        no_pairs.clear();
        
    }
    

}