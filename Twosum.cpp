#include <iostream>
#include <vector>
using namespace std;

int main(){
    int entry;
    bool found = false;
    vector <int> TwoSum;
    int target = 5;
    TwoSum.push_back(2);
    TwoSum.push_back(2);
    TwoSum.push_back(2);
    TwoSum.push_back(2);
    TwoSum.push_back(2);
    TwoSum.push_back(2);
    cout << "Two Sum capacity: "<<TwoSum.capacity();
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