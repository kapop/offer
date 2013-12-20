#include<string>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
void Print(char str[] , int len){
       if(str == NULL || len < 0){
         return;
       }
     //  cout<<"step1"<<endl;
       int cnt=0,i=0,k=0;
       int *index=new int[len];
       int *val=new int [len];
       // cout<<"step2"<<endl;
       memset(val,0,sizeof(int)*len);
       // cout<<"step3"<<endl;
      memset(index,0,sizeof(int)*len);
      // cout<<"step4"<<endl;
       while(i<len){
        if(str[i] == '<'){
            index[cnt++] = i;
           // cout<<"step5"<<endl;
            //cout<<"index["<<cnt<<"]="<<*(index+cnt)<<endl;
            //cnt++;
         }
        else if(str[i] == '>'){

       //     cout<<"step6"<<endl;

            if(cnt > 0){
                k=index[cnt-1];
              //  cout<<"k="<<k<<endl;
                str[k]='a';
                str[i]='a';

//                *(val + k) = -1;
//                *(val + i) = -1;
              //  cout<<"step7"<<endl;
                while(k <= i){
                     val[k++] = -1;
                 //   cout<<"¸³Öµ"<<endl;

                }
                cnt--;
            }
        }
           i++;
       }
       i=0;
       while(i<len){
        if(val[i] != -1){
            cout<<str[i];
        }
        i++;
       }
       cout<<endl;
       delete index;
       delete val;
}
//struct node{

int main(){

    while(2){
        char str[122];
        scanf("%s",str);
        printf("%s\n",str);
        Print(str,strlen(str));
    }
    return 0;
   //  cout <<sizeof(node)<<endl;
}
