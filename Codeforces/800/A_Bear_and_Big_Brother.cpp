#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    int a, b;
    cin >> a >> b;
    int years = 0;
    while(a <= b){
        years++;
        a *= 3;
        b *= 2;
    }
    cout << years << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int tt = 1;
    // cin >> tt;
    while(tt--){
        solveIt();            
    }
    
	return 0;
}