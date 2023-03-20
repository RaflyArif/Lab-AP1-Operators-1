#include <iostream>
using namespace std;
int main() {
    long int nb_input, nb_output, m = 10;
    cin>>nb_input;
    while(nb_input > 0){
        int a = ((nb_input % 10)+2);
        if (a >= 10) {
            a = a % 10;
        };
        nb_output = nb_output + (a*m);
        m *= 10;
        nb_input /= 10;
    }
    nb_output /= 10;
    cout<<endl<<"result : "<<nb_output<<endl;
    return 0;
}
