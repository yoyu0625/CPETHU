#include<iostream>
using namespace std;

int main(){
    int A[26],B[26];
    string a,b;
    while(getline(cin,a)&&getline(cin,b)){
        for(int i=0;i<26;i++){
            A[i]=0;
            B[i]=0;
        }
        for(int i=0;i<a.length();i++){
            A[a[i]-'a']++;
        }
        for(int i=0;i<b.length();i++){
            B[b[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            for(int j=min(A[i],B[i]);j>0;j--){
                cout<<(char)(i+'a');
            }
        }
        cout<<endl;
    }
    return 0;
}
