#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int *ptr = &n;
    int *pttr = &m;
    cout<<*ptr+*pttr;
}