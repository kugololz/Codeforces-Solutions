#include <bits/stdc++.h>

using namespace std;

int main()
{

    int count;
    int size;
    vector<int> arr;

    bool status = false;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int alice = 0;
        int bob = 0;
        int moves = 0;
        int valor = 0;
        cin >> size;

        // INSERT DATA INTO VECTOR
        for (int j = 0; j < size; j++)
        {
            cin >> valor;
            arr.push_back(valor);
        }

        // BOB AND ALICE METHODS

        while (!arr.empty())
        {

            if (alice == bob)
            {
                alice += arr[0];
                arr.erase(arr.begin());
                moves++;
            }

            if (bob < alice && !arr.empty())
            {
                if ((arr.back() + bob) > alice)
                {
                    bob += arr.back();
                    arr.pop_back();
                    moves++;
                }
                else
                {
                    while(status == false){
                    if (!arr.empty())
                    {
                        if ((bob - alice) <= 1){
                            bob += arr.back();
                            arr.pop_back();
                            moves++;
                            }
                        else{
                            status = true;
                            }
                        }
                    }status = false;
                }
                
            }

            if (alice < bob && !arr.empty())
            {
                if ((arr[0] + alice) > bob)
                {
                    alice += arr[0];
                    arr.erase(arr.begin());
                    moves++;
                }
                else
                {
                    while(status == false){
                    if (!arr.empty())
                    {
                        if ((alice - bob) <= 1){
                            alice += arr[0];
                            arr.erase(arr.begin());
                            moves++;
                            }
                        else{
                            status = true;
                            }
                        
                        }
                    }status = false;
                }
                
            }
        }

        cout << moves << " " << alice << " " << bob << "\n";
        arr.clear();
        moves = 1;
    }
}