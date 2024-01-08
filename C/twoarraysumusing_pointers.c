METHOD-1:LEETCODE PROBLEMN

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize=2;
    int *res=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(*(nums+i)+*(nums+j)==target){
                (res[0])=i;
                (res[1])=j;
            }
        }
    }
    return res;
}

METHOD-2:
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

*returnSize=2;// der zu returnende array hat 2 elemente

int *array = malloc(2*sizeof(int) ); // Output array max 2 elemente

for (int i=0; i<numsSize;i++)
{
    for( int j=1+i;j<numsSize;j++)
    {
        if(nums[i] + nums[j] == target)
        {
        array[0]=i;
        array[1]=j;
        return array;
        }
    }   
    
}
return -1;

}
