class Solution {

    string makeString(int n,vector<pair<string,string>>&sym){
        string s = "";
        int i = 0;
        // cout<<n<<":";
        while(n){
            string num = sym[i].first;
            string symbol = sym[i].second;
            // cout<<num<<":"<<symbol<<endl;
            int number = stoi(num);
            if(number <= n){
                n -= number;
                s += symbol;
            }else{
                i++;
            }
        }

        // cout<<s<<endl;

        return s;
    }

public:
    string intToRoman(int num) {    
        vector<pair<string,string>>sym = {
            {"1000","M"},
            {"900","CM"},
            {"500","D"},
            {"400","CD"},
            {"100","C"},
            {"90","XC"},
            {"50","L"},
            {"40","XL"},
            {"10","X"},
            {"9","IX"},
            {"5","V"},
            {"4","IV"},
            {"1","I"}
        };




        string s = "";
        string value = to_string(num);
        int i = 0;
        while(i < value.length()){
            int n = (value[i]-'0')*pow(10,value.length()-i-1);
            s += makeString(n,sym);
            i++;
        }


        return s;
    }
};