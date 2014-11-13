#include <iostream>

using namespace std;

/*int main()
{
    char m[20];
    char k;
    for(int i=0;i<20;i++)
    {
        cin>>m[i];
    }
    for(int i=1;i<20;i++)
        {
            cout<<m[i]<<endl;
        }
    return 0;
}*/
int main ()
{
    int p,min,max;
    int
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>m[i];

    }
    for(int i=0;i<p;i++)
    {
        if(m[i]>m[i+1])max=m[i];
    }
    for(int i=0;i<p;i++)
    {
        if(m[i]<m[i+1])min=m[i];
    }
    cout<<"nai stariq e "<<max;
    cout<<"nai mladiq e"<<min;
    system("pause");
    return 0;
}
