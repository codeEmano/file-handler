#include <iostream>
#include <fstream>
using namespace std;
int a;
void fileFn()
{
    fstream o1;
    o1.open("t1.txt",ios::app);
    cout<<"Enter";
    cin>>a;
    o1<<a;
    o1.close();
}
void fileFn2()
{
    fstream o1;
    o1.open("t2.txt",ios::app);
    int num=20;
    o1<<a<<" "<<num<<endl;
}
void fileFn3()
{
    fstream obj;
    obj.open("t2.txt",ios::in | ios::out);
    int a,b,num=10,cpy=0;
    while(!obj.eof())
    {
        obj>>a;
    //obj>>b;
        if(a==num)
        {
        obj>>b;
        b--;
        cpy=b;
    //cout<<b<<"Found here";
    break;
        }
    }
    while(!obj.eof())
    {
    obj>>a;
    //obj>>b;
    if(a==num)
    {
        obj<<" "<<cpy;
    }
    }

}
int main()
{
    fileFn();
    fileFn2();
    fileFn3();
}
