//optimal Approach
class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
    
        int n=nums.size(),cnt=0,sum=0;
        map <int,int> m;
        m[0]=1;
        int remove;
    
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            remove=sum-k;
    
            cnt += m[remove];
    
            m[sum]++;
        }
        return cnt;
        }     
    };