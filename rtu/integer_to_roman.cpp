class Solution {
public:
    string intToRoman(int num) {
        int intcode[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        char* arr[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        string ans;
        for(int i=0;i<13;i++){
            while(num>=intcode[i]){
                ans.append(arr[i]);
                num-=intcode[i];
            }
        }
        return ans;
    }
};
