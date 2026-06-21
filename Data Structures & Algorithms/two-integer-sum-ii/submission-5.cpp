class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        while(j>i){
            if(numbers[j] + numbers[i] > target) j--;
            else if(numbers[j] + numbers[i] < target) i++;
            else return {i+1, j+1}; 
        }
        return {};
        }
        
    };

