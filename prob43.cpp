//https://leetcode.com/problems/integer-to-roman/

// string question 

// class solution{
//     public: 
//      string intoRoman(int num)
//      {
//         string one[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
//         string ten[] = {"", "X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
//         string hund[] = {"", "C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
//         string tho[] = {"","M","MM","MMM"};
        
//         return  tho[num/1000] + hund[(num%1000)/100] + ten[(num%100)/10] + one[num%10];
//      }
// }