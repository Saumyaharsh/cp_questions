#include<bits/stdc++.h>
using namespace std;
int main(){
 /*int n,k,l,c,d,p,nl,np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 int max_toast_drink = (k*l)/nl;
 int max_toast_lime = c*d;
 int max_toast_salt = p/np;
 int ans = min(max_toast_drink,max_toast_lime);
 int ans_1 = min(ans,max_toast_salt);
 int finalans = ans_1/n;
 cout<<finalans<<endl;

*/
// brute force approach
int n,k,l,c,d,p,nl,np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 int total_drink = k*l;
 int total_lime = c*d;
 int total_salt = p;
 int min_drink = nl*n;
 int min_slice = 1*n;
 int min_salt = np*n;
 int a = min_drink;
 int b = min_slice;
 int e = min_salt;
 int count = 0;
 while(min_drink<=total_drink && min_slice<=total_lime && min_salt<=total_salt){
    count+=1;
    min_drink+=a;
    min_slice+=b;
    min_salt+=e;
 }
cout<<count<<endl;

    return 0;
}