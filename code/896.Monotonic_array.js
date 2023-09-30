
var isMonotonic = function(nums) {
    let n = nums.length;
    if ( n < 2 ){
        return true;
    } 
    let temp = 0;
    for (let i = 1; i < n; i++){
        if (nums[i] > nums[i - 1]){
            if (temp === 0) {
                temp = 1;
            } else if (temp === -1){
                return false;
            }
        }
        else if (nums[i] < nums[i - 1]){
            if (temp === 0) {
                temp = -1;
            } else if (temp === 1){
                return false;
            }
        }
    }
    return true;
};