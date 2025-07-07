#include <stdio.h>

int main() {
    printf("How many numbers in array?\n");
    int len;
    scanf("%d", &len);

    int nums[len];
    int even[len];
    int odd[len];

    for(int i = 0; i < len; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < len; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    int evenP = 0;
    int oddP = 0;
    for(int i = 0; i < len; i++){
        if(nums[i] % 2 == 0){
            even[evenP] = nums[i];
            evenP++;
        }
        else{
            odd[oddP] = nums[i];
            oddP++;
        }
    }
    
    int sort[oddP + evenP];
    for(int i = 0; i < evenP; i++){
        sort[i] = even[i];
    }
    
    for(int i = 0; i < oddP; i++){
        sort[i + oddP] = odd[i];
    }
    
    for(int i = 0; i < oddP + evenP; i++){
        printf("%d ", sort[i]);
    }
    printf("\n");

    return(0);
}
