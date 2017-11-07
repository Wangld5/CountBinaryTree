#include <iostream>
#include <string>
using namespace std;
string pre;
string pos;
int count = 0;
void cal(int s1, int e1, int s2, int e2){
    if(s1>=e1) return;
    int record;
    for(int i=s2; i<=e2-1; i++){
        if(pre[s1+1] == pos[i]){
            record = i;
            break;
        }
    }
    if(record == e2-1) count++;
    cal(s1+1, s1+1+record-s2, s2, record);
    cal(s1+1+record-s2+1, e1, record+1, e2-1);
}
int pow(int n){
    int m=1;
    for(int i=0;i<n;i++){
        m*=2;
    }
    return m;
}
int main(){
    cin>>pre>>pos;
    cal(0,pre.length()-1,0,pos.length()-1);
    cout<<pow(count);
}  
