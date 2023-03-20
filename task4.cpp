#include <iostream>
using namespace std;

string waktu(int in){
    int h,m,s;
    string output;
    h = in / 3600;
    if(h < 10)
        output += "0";
    output = output + to_string(h);
    in = in - (3600 * (in / 3600));
    output += ":";

    m = in / 60;
    if(m < 10)
        output += "0";
    output = output + to_string(m);
    in = in - (60 * (in / 60));
    output += ":";

    s = in;
    if(s < 10)
        output += "0";
    output = output + to_string(s);
    in = in - (60 * (in / 60));

    return output;
}

int main() {
    long int nb_input;
    cout<<"Input time in sec : ";
    cin>>nb_input;
    cout<<endl<<"Time in HH:MM:SS : "<<waktu(nb_input)<<endl;
    return 0;
}
