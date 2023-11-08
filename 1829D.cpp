#include <bits/stdc++.h>

using namespace std;

int splitter(int n){
    n = n/3;
    return n;

}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int count;
    int n, m;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int t1, t2;
        bool check = false;
        cin >> n >> m;


        if (n > m && n%3 == 0){

            while (true)
            {
                t1 = splitter(n);
                t2 = t1*2;

                if(t1 == m) break;
                if(t2 == m) break;

                if (t1%3 == 0){
                    n = t1;
                }

                else if (t2%3 == 0){
                    n = t2;
                }

                if(t1%3 != 0 && t2%3 != 0) break;

            }
            
            cout << "YES" << "\n";


        }

        else{
            cout << "NO" << "\n";
        }


    }
    



}