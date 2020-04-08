/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    *returnSize = n;
    char** result = malloc(*returnSize * sizeof(char*));
    
    for(int i = 1; i <= n; i++) {
        result[i-1] = malloc(10 * sizeof(char));
        if(i % 15 == 0) sprintf(result[i-1], "%s", "FizzBuzz");
        else if(i % 3 == 0) sprintf(result[i-1], "%s", "Fizz");
        else if(i % 5 == 0) sprintf(result[i-1], "%s", "Buzz");
        else sprintf(result[i-1], "%d", i);
    }
    
    return result;
}
