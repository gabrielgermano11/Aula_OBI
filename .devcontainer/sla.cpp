#include <bits/stdc++.h>
using namespace std;
int main(void){
    int h, m, s, t;
    cin >> h >> m >> s >> t;
    int H, M, S, R;
     
    H = t/3600;
    R = t%3600;
    M = R/60;
    S = R%60;

    int hn, mn, sn;
    
    sn = S + s;
    if (sn >= 60){
        sn -= 60;
        M++;
    }

    mn = M + m;
    if (mn >= 60){
        mn -= 60;
        H++;
    }
    hn = H + h;
    if (hn >= 24){
        hn -= 24;
    }

    cout << hn << "\n";
    cout << mn << "\n";
    cout << sn << "\n";


}