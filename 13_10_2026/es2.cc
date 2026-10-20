#include <iostream>
using namespace std;

int main() {

    int l;

    cout << "Inserisci il numero: " << endl;
    cin >> l ;

    for (int i=0; i<l; ++i){
        for (int j=0; j<l; ++j){

            if(i%(l-1)==0 || j%(l-1)==0) {
                cout << "X";
            }else{ 
                cout << " ";
            }

        }
        std::cout << std::endl;
    }



}