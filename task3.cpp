#include <iostream>
using namespace std;

int main() {
    long int nb_input, nb_output;
    cout<<"INPUT : ";
    cin>>nb_input;
    while(nb_input > 0){
        int a = (nb_input % 10);
        nb_output = nb_output + a;
        nb_input /= 10;
    }
    cout<<endl<<"OUTPUT : "<<nb_output<<endl;
    return 0;
}
