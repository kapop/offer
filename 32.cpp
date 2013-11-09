#include<iostream>
using namespace std;
int count(int x){
    int cnt = 0;
    int curnumber = 0;
    int lownnumber = 0;
    int highnumber = 0;
    int k = 1;
    while(x / k != 0 ){
        lownnumber = x - (x/k)*k;
        curnumber = (x / k) % 10;
        highnumber = x / (k*10);
        if ( curnumber == 0 ) {
            cnt += highnumber*k;
        }
        else if ( curnumber == 1 ) {
            cnt += highnumber * k + lownnumber + 1 ;
        }
        else {
            cnt += ( highnumber + 1 ) * k;
        }
        k *= 10 ;
    }
    return cnt;
}

int main(){
    int a;
    while(cin>>a){
        cout << count(a) << endl;
    }

    return 0;
}
