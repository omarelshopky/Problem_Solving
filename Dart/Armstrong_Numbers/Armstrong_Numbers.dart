import 'dart:math';

class ArmstrongNumbers {
  bool isArmstrongNumber(int numI){
    String numS = numI.toString();
    int len = numS.length;
    double result = numS.split("").fold(0, (prev,curr) => prev + pow(int.parse(curr), len));

    if(result == numI) return true;
    else return false;
  }
}
