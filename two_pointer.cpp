int lastMin=-1;
    int lastMax=-1;
    int start=0;
    long long count=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]<minK || nums[i]>maxK){
            start = i+1;
            lastMin = i;
            lastMax = i;
            continue;
        }
        if(nums[i] == minK){
            lastMin = i;
        }
        if(nums[i] == maxK){
            lastMax = i;
        }
        int valid = (i-start+1);
        int invalid = i - (min(lastMin, lastMax) + 1) + 1;
        count+= valid - invalid;
      }
    return count;    