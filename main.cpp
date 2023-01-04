#include <iostream>
using namespace std;
float metry;
float ile_cali(float m)
{
    return  m=m*39.37;
    //return

}

int main() {
    cout<< "Podaj ile metrów: ";
    cin>>metry;
    cout << "na cale: " << ile_cali(metry)<< endl;


    return 0;
}
