//car fuel
#include <iostream>
using namespace std;
int main()
{
    int tankfuel,fuelrate,distance;
    cin>>tankfuel>>fuelrate>>distance;
    distance=(tankfuel/fuelrate)*100;
    if(distance<100){
            cout<<"please refuel tank";
    }
    cout<<"Distance"<<distance;
    return 0;
}
