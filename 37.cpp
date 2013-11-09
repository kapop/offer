#include<iostream>
#include<algorithm>
using namespace std;
struct node {
    int val;
    node * next;
    node (){
        next = NULL;
    }
};
bool IsIntersection(node *a,node *b){

    if (a == NULL || b == NULL ) {
        return false;
    }
    bool flag = false;
    node *ahead = a;
    node *bhead = b;
    while( ahead && ahead -> next ){
        ahead = ahead -> next;
    }
    while(bhead && bhead -> next){
        bhead = bhead -> next;
    }
    if (ahead == bhead ){
        flag = true;
    }
    return flag;
}
unsigned int getListLength(node* phead){
    unsigned int nLength = 0;
    node* pnode = phead;
    while(pnode != NULL){
        ++nLength;
        pnode = pnode -> next;
    }
    return nLength;
}
node* FindFirstCommonNode(node* a, node* b){
    unsigned int nLength1 =getListLength(a);
    unsigned int nLength2 =getListLength(b);
    int diff = nLength1 - nLength2;
    node* pheadlong = a;
    node* pheadshort = b;

    if(nLength2 > nlength1){
        pheadlong = b;
        pheadshort =a;
        diff = nLength2 - nLength1;
    }
    for(int i = 0; i < diff; i++){
        pheadlong = pheadlong ->next;
    }
    while(pheadlong && pheadshort && pheadlong-> val != pheadshort -> val){
        pheadlong = pheadlong -> next;
        pheadshort = pheadshort -> next;
    }
    node *common = pheadlong;
    return common;
}

