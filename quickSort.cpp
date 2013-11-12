#include<iostream>
#include<exception>
#include <algorithm>
using namespace std;
const int N = 100;
int srandOfArray(int L,int R){
    srand((unsigned int )time(NULL));
    return L + rand()%(R-L);
}
int partion(int a[], int L, int R){
    int t = srandOfArray(L,R);
    swap(a[t],a[R]);
    int tmp = a[R];
    int i = L-1;
    for(int j=L;j<R;j++){
        if(a[j] <= tmp){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[R]);
    return i+1;
}
void quickSort(int a[],int L, int R){
    if(a == NULL || L > R || R < 0){
        return;
    }
    if(L < R ){
        int p = partion(a,L,R);
        quickSort(a,L,p-1);
        quickSort(a,p+1,R);
    }
}
int main(){
    int n;
    while(cin>>n){
        int a[N];
        for( int i = 0; i< n; i++){
            cin>>a[i];
        }
        quickSort(a,0,n-1);
        for( int i = 0; i< n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
