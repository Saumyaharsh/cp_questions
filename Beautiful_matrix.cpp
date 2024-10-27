#include<bits/stdc++.h>
using namespace std;
int main(){
int v[5][5];
int row_1;
int col_1;
int ans = 0;
for(int i = 0; i<5; ++i){
    for(int j=0; j<5;++j){
       int x;
       cin>>x;
      v[i][j] = x;
        if(x==1){
            row_1 = i;
            col_1 = j;
            ans = abs(2-row_1) + abs(2-col_1);
        }
    }
}
cout<<ans<<endl;






    return 0;
}