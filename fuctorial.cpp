#include <iostream>
#include <vector>
using namespace std;

int factorial(int x){
    if (x == 0) return 0;
    return x+(factorial(x-1));
};

int factNR(int x) {
    vector<int> temp = {0};
    for (int i = 1; i <= x; i++) {
        int a = temp[temp.size() - 1] + i;
        temp.push_back(a);
    }
    return temp[ temp.size() - 1 ];
};

int main(){
    int result, x = 10;
    cout << factorial(x) << endl;

    cout << factNR(x) << endl;
    return 0;
}