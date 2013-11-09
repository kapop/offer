#include<iostream>
using namespace std;
int count(int x){
    int cnt=0;
    int tt=x;
    while(tt){
        tt = (tt-1) & tt;
        cnt++;
    }
    return cnt;
}

int main()
{
    int a;
    while (cin >> a){
        cout << count(a) << endl;
    }
    return 0;
}

