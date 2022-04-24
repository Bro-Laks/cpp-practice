#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main(){
    using namespace std;

    //2 ������

    int N = 5;

    fstream N_file;
    N_file.open("N_file.txt",ios::in);
    srand(time(NULL));

    double p = 1;

    for(int i = 0; i<N; i++){
        double current;
        N_file >> current;
        p*=current;

    }
    N_file.close();
    cout << p << endl;

    //3 ������

    int amount;
    cout << "amount\n";
    cin >> amount;

    int mini;
    cout << "mini\n";
    cin >> mini;

    int maxi;
    cout << "maxi\n";
    cin >> maxi;

    fstream F_file;
    F_file.open("F_file.txt",ios::out);

    for(int i = 0; i<amount; i++){
        F_file << rand()% (maxi-mini+1) + mini << "\t";
    }
    F_file.close();


    int m;
    cout << "m\n";
    cin >> m;

    int n;
    cout << "n\n";
    cin >> n;

    F_file.open("F_file.txt",ios::in);
    ofstream G_file("G_file.txt");

    for(int i = 0; i<amount; i++){
        int current;
        F_file >> current;
        if(current%m==0 && current%n!=0){
            G_file << current << "\t";
        }
    }


    F_file.close();
    G_file.close();

    return 0;
}
