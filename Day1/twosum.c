#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* arr=malloc (sizeof (int) * 4);;
   
    for(int i =0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                arr[0]=i;
                arr[1]=j;
                
            }
        }
    }
   return arr;
    
    

}
void main(){
int nums[]={3,3};
int numsSize=sizeof(nums)/4;
int target=6;
int returnSize[10]={};

int* arr=twoSum(nums,numsSize,target,returnSize);
for(int i =0;i<2;i++){
    printf("%d",arr[i]);
}


}
