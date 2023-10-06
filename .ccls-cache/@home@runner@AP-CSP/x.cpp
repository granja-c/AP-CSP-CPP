int romanNum(char s) {
  if (s == 'I') {
      return 1;
    } else if (s == 'V') {
      return 5;
    } else if (s == 'X') {
      return 10;
    } else if (s == 'L') {
      return 50;
    } else if (s == 'C') {
      return 100;
    } else if (s == 'D') {
      return 500;
    } else if (s == 'M') {
      return 1000;
    }
  return 0;
}