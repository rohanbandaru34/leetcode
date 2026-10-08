char* removeOuterParentheses(char* s) {
    static char stack[100000];
    int top = -1;
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(')
        {
            if (count != 0)
            {
                top++;
                stack[top] = s[i];
            }

            count++;
        }

        else
        {
            count--;
            if (count != 0)
            {
                top++;
                stack[top] = s[i];
            }
        }
    }

    stack[top + 1] = '\0';

    return stack;
}