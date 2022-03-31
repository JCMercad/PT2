#include <iostream>
#include <fstream>

using namespace std;

int main (){
    string name;
    int n, range;
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open("PT3.txt", ios :: app);
    fout.open("PT3.txt", ios :: app);

    do{
        cout << "Enter range of numbers: " << endl;
        fout << "Enter range of numbers: ";
        cin >> range;
        fin >> range;
        for (int n, count = 1; count <= range; count++){
            cout << "Enter number " << "(" << count << "): ";
            fout << "Enter number " << "(" << count << "): " << endl;
            cin >> n;
            fin >> n;
            if (n % 2 == 0){
            cout << n << " is an EVEN number." << endl;
            fout << n << " is an EVEN number." << endl;
            } else {    
            cout << n << " is an ODD number." << endl;
            fout << n << " is an ODD number." << endl;
            }
    
        }
    
    } while (ch == 'y');

    fin.close();
    fout.close();
    return 0;
}