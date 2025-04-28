// Q-1 square pattern 1234 
//                    1234
//                    1234
//                    1234
// For n = 4


#include <iostream>
using namespace std;

int main () {
    int n = 4;
    for(int i=0; i <=n-1; i++){
        for( int j=1; j<=n ; j++){
            cout << j << "";
        }
        cout << endl;
    }
    

    return 0;
}