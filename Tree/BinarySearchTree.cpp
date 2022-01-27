int search(vector<int>& nums, int target) {
        int half=nums.size()/2;
        cout<<" a "<<half<<nums[half]<<endl;
        if(target>=nums[half]){
            cout<<"here ";
            for(int i=half;i<nums.size();i++){
                 cout<<" 2a "<<i<<nums[i]<<"";
                if(nums[i]==target)
                    return i;
            }
        }
        else{
            cout<<" else ";
            for(int i=0;i<half;i++){
                if(nums[i]==target)
                    return i;
            }
        }
        return -1;
    }