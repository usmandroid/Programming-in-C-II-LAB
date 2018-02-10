char * itobin ( int n, char * binstr ) {
 int i;
 for (i = 0; i <= maxbit ; i ++) {
 if (n & 1 << i) {
 binstr [ maxbit - i] = '1';
 }
 else {
 binstr [ maxbit - i] = '0';
 }
 }
 binstr [ maxbit + 1] = '\0 ';
 return binstr ;
 }
