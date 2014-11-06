#include<iostream>
using namespace std;
int main ()
{
    //zad1
    //char k;
    //cin>>k;
    //if(k>='0' && k<='9')cout<<" Tova e chislo";
    //if(k>='a' && k<='z')cout<<" Tova e malka Bukva";
    //if(k>='A' && k<='Z')cout<<" Tova e malka Bukva";
    //zad2
    //int a,b=0;
    //cin>>a;
    //for(int ko=2;ko<a;ko++)
    //{
    //   if(a%ko==0)b++;
    //}
    //if(b==0 && a!=1)cout<<"Chisloto e prosto ";
    //else cout<<"Chisloto ne e prosto";
    //zad3
    //int ch,ost;
    //cin>>ch;
    //for(int i=1;i<=4;i++)
    //{
    //    ost=ch%10;
    //    cout<<ost<<endl;
    //    ch=ch/10;
    //}
    //zad4
    //int n,k,ost;
    //cin>>n;
    //cin>>k;
    //for(int i=1;i<=n;i++)
    //{
    //    ost=k%10;
    //   cout<<ost<<endl;
    //   k=k/10;
    //}
    //zad5
    int n,br=0;
    cin>>n;
    int k;
    k=n;
    do
    {
        br++;
        k=k/10;
    }
    while(k!=0);
    cout<<"Chisloto n e "<<br<<" cifreno"<<endl;
    int t=1,f;
    f=1;
    do
    {
        t=t*10;
        f++;
    }
    while(f<br);
    int kon=0,o,m,bro;
    o=n;
    m=n;
    bro=br
    do
    {
        for(int i=1;i<bro;i++)
        {
            o=o/10;
        }
        if(o!=m%10)kon++;

    }
    while(o>9);
    if(kon==0)cout<<" e palindrom";
    else cout<<"ne e palindrom";
    return 0;
}
