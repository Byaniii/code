#include <iostream>

using namespace std;

int main(){
    int *data = NULL;
    int number = 5;
    data = &number;
    cout << *data;
    return 0;
}