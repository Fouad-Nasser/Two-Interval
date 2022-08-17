#include<iostream>
using namespace std;
typedef long long ll;



int main(){
    ll l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    if(l1>r2 || l2>r1)
    {
        cout<<-1;
    }
    else
    {
        cout<<(l1>l2?l1:l2)<<" "<<(r1<r2?r1:r2);
    }
    cout<<endl;
   
    return 0;
}
