#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long num = 0;
    int count1 = 0;
   int count2 = 0;
while(n!=0){
    long long ld = n%10;
    long long a = ld;
    long long b = 9-ld;
ld = min(a,b);
if(n/10==0 && a == 9) ld = 9;

num = num*10 + ld;
n = n/10;
count1++;
}
long long ans = 0;
while(num!=0){
long long ld = num %10;
ans = ans*10 + ld;
num = num/10;
count2++;
}
int dif = count1 - count2;
for(int i = 1 ; i<=dif; ++i){
    ans *=10;
}
cout<<ans<<endl;


    return 0;
}