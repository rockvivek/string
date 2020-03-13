#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    cout<<str<<endl;;
    str.push_back('s');
    cout<<str<<endl;
    if(str.find('k')){
        cout<<"yes"<<endl;
    }
    return 0;
}
