int longestValidParentheses(char* s) {
    int stack[50000];
    int top = -1;
    int arr[50000] = {0};
    
    int n = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        n++;
    }
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') 
        {
            top++;
            stack[top] = i;
        }
        else
        { 
        if (top != -1) 
        {
            int match = stack[top];
            top--;
            arr[match] = 1;
            arr[i] = 1;
        }
      }
    }
    
    int count = 0;
    int max_count = 0;
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (arr[i] == 1) {
            count++;
        } 
        else 
        {
            count = 0;
        }

        if (count > max_count) 
        {
            max_count = count;
        }
    }
    
    return max_count;
}