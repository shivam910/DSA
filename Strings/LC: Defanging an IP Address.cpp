class Solution {
public:
    string defangIPaddr(string address) {
        string a;
            for(int i=0; i<address.length(); i++)
            {
                if(address[i]=='.')
                    a+="[.]";
                else
                    a.push_back(address[i]);
            }
        return a;
    }
};
