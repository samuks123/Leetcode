class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result;

        unordered_map<int,int> map;
        int i = 0;

        for(auto it = nums.begin(); it != nums.end(); it++, i++){
            auto temp = map.find(target - *it);
            
            if(temp == map.end())
                map.insert(make_pair(*it, i));

            else{
                result.push_back(temp->second);
                result.push_back(i);

                return result;
            }

            //i++;
        }
        return result;
    }
};