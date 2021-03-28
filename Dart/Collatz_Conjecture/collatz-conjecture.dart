class CollatzConjecture {
  int steps(double n){
    int step = 0;
    if (n < 1)
      throw new ArgumentError("Only positive numbers are allowed");

    while(n > 1){
      if (n % 2 == 0){
        n /= 2;
      }else{
        n = 3 * n + 1;
      }
      step++;
    }
    return step;
  }
}
