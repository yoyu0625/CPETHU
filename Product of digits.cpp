#include <iostream>
using namespace std;

int main(){
    int test;
    long long num;
    cin>>test;
    while(test--){
        cin>>num;
        if(num==1){
            cout<<"1"<<endl;
            continue;
        }
        int d[10000],length=0;
        for(int i=9;i>1;i--){
            while(num%i==0){
                num/=i;
                d[length++]=i;
            }
        }
        if(num>1){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=length-1;i>=0;i--){
                cout<<d[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
