// Q-1 square pattern ABCD
//                    ABCD
//                    ABCD
//                    ABCD
// For n = 4
 #include <iostream>
 using namespace std;

 int main(){
    int n = 4;
    for(int i=0 ; i <= n-1 ; i++){
        char ch = 'A';
        for(int j=1; j<=n; j++){
            cout << ch << " ";
            ch = ch+1;
        }
        cout << endl;
    }

    return 0;
 }