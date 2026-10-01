bool isValid(char* s) {
    char stack[10000];
    int top = -1;

   for (int i = 0; s[i] != '\0'; i++)
   {
    if (s[i] == '(' || s[i] == '{' || s[i] == '[')
    {
        top++;
        stack[top] = s[i];
    }
    else
    {
        if (top == -1)
        {
            return false;
        }
       char ch = stack[top];
        if (ch == '(' && s[i] == ')')
        {
            top = top - 1;
        }
        else if (ch == '{' && s[i] == '}')
        {
            top = top - 1;
        }
        else if (ch == '[' && s[i] == ']')
        {
           top = top - 1;
        }
        else
        {
            return false;
        }

    }

   } 

   if (top == -1)
   {
    return true;
   }

   else
   {
    return false;
   }
}