//https://leetcode.com/problems/subarray-sum-equals-k/

// contigious array sum 

/**
 * Input:
    nums = [3,9,-2,4,1,-7]
    k = 5


Step1:
    nums = [3,9,-2,4,1,-7]
            ^
    count = 0
    sum = 3
    map = [3:1]
    k = 5

    # 1 (i.e., runningSum-k, 3-5=-2) not found in map
    # add the curr sum 3 in map

Step2:
    nums = [3,9,-2,4,1,-7]
              ^
    count = 0
    sum = 12
    map = [3:1, 12:1]

    # 0 (12-5) not found in map
    # add the curr sum 12 in map

Step3:
    nums = [3,9,-2,4,1,-7]
                 ^
    count = 0
    sum = 10
    map = [3:1, 12:1, 10:1]

    # 7 (10-5) not found in map
    # add the curr sum 10 in map

Step4:
    nums = [3,9,-2,4,1,-7]
                   ^
    count = 0
    sum = 14
    map = [3:1, 12:1, 10:1, 14:1]

    # 4 (14-5) not found in map.
    # add the curr sum 14 in map

Step5:
    nums = [3,9,-2,4,1,-7]
                     ^
    count = 1
    sum = 15
    map = [3:1, 12:1, 10:1, 14:1 , 15:1]

    # 5 (15-5) found in map . Increment the count
	#add cur sum 15 in map
	
Step 6:
    nums = [3,9,-2,4,1,-7]
                        ^
    count = 2
    sum = 8
    map = [3:1, 12:1, 10:1, 14:1 , 15:1,8:1]

    # 6 (8-5) found in map . Increment the count
    #add cur sum 8 in map
  
*/


// solution 

 //similar questions : https://leetcode.com/problems/subarray-product-less-than-k/
 //https://leetcode.com/problems/continuous-subarray-sum/