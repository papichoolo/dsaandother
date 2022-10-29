#include <iostream>
using namespace std;
template <class a, class b>
class bruh{
    public:
void swap(a x, b y){
     b t;
    t = x;
    x = y;
    y = t;
cout<<"after swap"<<x<<y<<endl;
}
};
int main(){
    bruh <int, double> g;
    
    g.swap(23,4.5);
    
}