#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double nb_input;
    cin>>nb_input;
    nb_input += 8;
    nb_input = nb_input / 3.0;
    nb_input = fmod(nb_input,5);
    nb_input = nb_input * 5;
    cout<<endl<<"final result : "<<nb_input<<endl;
    return 0;
}
