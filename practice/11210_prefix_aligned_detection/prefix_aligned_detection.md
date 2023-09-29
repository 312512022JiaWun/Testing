## Task Description
You have a binary string of length 5 where all the bits are initially 0. We will change all the bits of this binary string from 0 to 1 one by one. You are given an integer array that indicates the order in which elements of the binary string will be changed. Your task is to count how many times the binary string is prefix-aligned at each step.

For example, see the sample input 1 below. The input array is [3, 2, 4, 1, 5]. The binary string is initially "00000".

After applying step 1(value of first index of input array): The string becomes "00100", which is not prefix-aligned.

After applying step 1(value of second index of input array): The string becomes "01100", which is not prefix-aligned.

After applying step 1(value of third index of input array): The string becomes "01110", which is not prefix-aligned.

After applying step 1(value of fourth index of input array): The string becomes "11110", which is prefix-aligned.

After applying step 1(value of fifth index of input array): The string becomes "11111", which is prefix-aligned.

The String was prefix-aligned 2 times, so the output is 2.

## Sample Input 1
```
3 2 4 1 5
```

## Sample Output 1
```
2
```

## Sample Input 2
```
1 2 3 4 5
```

## Sample Output 2
```
5
```

