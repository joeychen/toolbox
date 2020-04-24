/*
 * Keep counting numbers
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    char filename[] = "count.log";
    int count = 0;
    ofstream fp_out;
    ifstream fp_in;

    //Input
    fp_in.open(filename, ios::in);
    fp_in >> count;
    //cout << count << endl;
    fp_in.close();

    count++;

    //Output
    fp_out.open(filename, ios::out);
    fp_out << count << "\n";
    cout << count << endl;
    fp_out.close();

    return 0;
}

