#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count;

    cin >> count;

    while(count--){
        int n;  
        cin >> n;
        int ans = INF;
        int x0 = INF;
        int x1 = INF;
        for (int i = 0; i < n; i++){
            int k;
            string s;
            cin >> k >> s;
            if (s == "11") ans = min(ans, k);
            if (s[0] == '1') x0 = min(x0, k);
            if (s[1] == '1') x1 = min(x1, k);
        }
        ans = min(ans, x0+x1);
        if (ans == INF) ans = -1;
        cout << ans << '\n';
    }
    
   

    
}
