#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    int ans;
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++){
            int x;
            cin >> x;
            if(x == 1){
                cout << abs(3 - i - 1) + abs(3 - j - 1) << '\n';
                return;
            }
        }

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