class Solution {
public:
    //   Shivangi
    int smallestNumber(int n) {
        int decimalNum=n;
        if (decimalNum == 0) {
        return 0;
    }
    string binaryString = "";
    while (decimalNum > 0) {
        binaryString += (decimalNum % 2 == 0 ? '0' : '1');
        decimalNum /= 2;
    }
    
      
      for(int i=0;i<binaryString.size();i++){
        if(binaryString[i]=='0')
        binaryString[i]='1';
      }
       
    
    int power = 0;
    for (int i = binaryString.length() - 1; i >= 0; i--) {
        if (binaryString[i] == '1') {
            decimalNum += pow(2, power);
        }
        power++;
    }
    return decimalNum;

        
    
    }  
};