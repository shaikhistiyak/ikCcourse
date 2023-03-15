
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    cout<<"Hello World! "<<10<<"\n";
    int n;
    cin>>n;

    cout<<"The value of n is "<<n;

    List li;

    li.add("hello word");

    cout<<li.get(0);

    return 0;
}
