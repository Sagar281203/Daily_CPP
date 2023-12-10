class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>ans;
        vector<int>ans1;
        for(int i = 0; i<n; i++){
            if(arr[i]>0){
                ans.push_back(arr[i]);
            }
        }
        
        for(int i = 0; i<n; i++){
            if(arr[i]<0){
                ans1.push_back(arr[i]);
            }
        }
        
        int index = 0;
        
        for(int i = 0; i<ans.size(); i++){
            arr[index] = ans[i];
            index++;
        }
        
        for(int i = 0; i<ans1.size(); i++){
            arr[index] = ans1[i];
            index++;
        }
        
        
    }
};