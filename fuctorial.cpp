#include <iostream>

using namespace std;

int factorial(int x){
    if (x == 0) return 0;
    return x+(factorial(x-1));
};

int main(){
    int result, x = 10;
    cout << factorial(x) << endl;
    return 0;
}