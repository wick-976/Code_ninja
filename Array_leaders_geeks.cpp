class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
    vector<int>answer;
    int size=arr.size();
    int max_ele=INT_MIN;
    for(int i=size-1;i>=0;i--)
    {
        if(arr[i]>=max_ele)
        {
            answer.push_back(arr[i]);
            max_ele=arr[i];
        }
        
    }
    reverse(answer.begin(),answer.end());
    
    return answer;
        
    }
};