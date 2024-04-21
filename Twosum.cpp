#include <iostream>
#include <vector>
using namespace std;

int main(){
    bool found = false;
    vector <int> TwoSum{3, 3};
    int target = 6;

    for (int i = 0; i < TwoSum.size(); i++){
        for (int j = 0; j < TwoSum.size(); j++){
            if (!(j == i)){
                int sum = TwoSum[j] + TwoSum[i];
                if (sum == target){
                    cout << i << ' ' << j;
                    found = true;
                }
            }
            if (found){
                break;
            }
        }
        if (found){
                break;
            }
            
    }
    
    if (!found){
        cout << "No Match";
    }
    return 0;
}