class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> sol;
        
        unordered_map<int, int> numbers;

        for(int i = 0; i < nums.size(); i++){

            int first =  nums[i];
            int second = target - first;

            if(numbers.find(second) != numbers.end()){
                sol.push_back(numbers[second]);
                sol.push_back(i);
                break;
            } else{
                numbers.insert({first , i});
            }

        }
    return sol;
    }
};
