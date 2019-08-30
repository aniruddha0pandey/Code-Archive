#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp = boost::multiprecision;
using namespace std;
int main()
{
    mp::cpp_int u;
    mp::cpp_int v;
    mp::cpp_int z;
    cin>>u>>v;
    z=u*v;
    cout<<z<<endl;
    return 0;
}