// 2 hours
// solution
int main(int num) {
  //makeNegative

    if(num > 0) {
        num = num - (num * 2);
        return num;
    }

    else if(num < 0) {
        return num; 
    }
    else {
        return num;
    }
}

int main(int num)
{
  return -abs(num);
}

// if(num < 0 || num == 0) return num; else { num * -1 }