void rotate(int* nums, int numsSize, int k) {
    k=k% numsSize;
    if(k==0) return;
    for(int i=0,j=numsSize-1;i<j;i++,j--){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    for(int i=0,j=k-1;i<j;i++,j--){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    for(int i=k,j=numsSize-1;i<j;i++,j--){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
}

 
