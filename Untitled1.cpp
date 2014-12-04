#include<iostream>
using namespace std;

const int matrix[6][5] = {{1,0,0,0,1},{1,1,0,0,1},{0,0,0,0,1},{1,1,0,0,1},{1,0,0,0,1},{1,0,0,0,1}};

int fk(int i)
{
    if(i==1)return 1;
    else return i*(fk(i-1));
}
/*int main()
{
    //zad1
    int n;
    cin>>n;
    cout<<fk(n);
    return 0;
}*/
int fib(int i)
{
    if(i==1)return 1;
    if(i==0)return 1;
    return fib(i-1)+fib(i-2);
}/*
int main()
{
    //zad 2
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}*/
int cc(int i)
{
    if (i/10==0) return i;
    return i%10+cc(i/10);
}/*
int main()
{
    //zad3
    int n;
    cin>>n;
    cout<<cc(n);
}*/
int ss(int i, int k)
{
    if(k==0)return 1;
    return i*(ss(i,k-1));
}/*
int main()
{
    //zad4
    int n,k;
    cin>>n;
    cin>>k;
    cout<<ss(n,k);
    return 0;
}*/
bool kon(int n, int k)
{
    if(n%10==k) return true;
    if(n/10==0 && n%10!=k)return false;
    return kon(n/10,k);
}/*
int main()
{
    //zad5
    int n,k;
    cin>>n;
    cin>>k;
    cout<<kon(n,k);
    return 0;
}*/

