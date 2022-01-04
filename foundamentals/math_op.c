// Your task is to create a function that does four 
// basic mathematical operations.

// The function should take three arguments - operation(string/char), value1(number), value2(number).
// The function should return result of numbers after applying the chosen operation.


//my solution
int basic_op(char op, int value1, int value2) 
{
  switch (op)
  {
    case '+': return (value1 + value2);
    case '-': return (value1 - value2);
    case '*': return (value1 * value2);
    case '/': if (value2 != 0) return (value1 / value2);
    default: return 0;
  }
  return 0;
}

//alternate

int basic_op(char op, int value1, int value2) 
{
  switch (op)
  {
    case '+': return (value1 + value2);
    case '-': return (value1 - value2);
    case '*': return (value1 * value2);
    case '/': if (value2 != 0) return (value1 / value2);
    default: return 0;
  }
  return 0;
}
