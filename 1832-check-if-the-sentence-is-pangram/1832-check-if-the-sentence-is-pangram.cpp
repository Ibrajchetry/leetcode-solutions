class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>alpha(26,0);
        //check the alpha and place 1 if alpha is present
        for(int i=0;i<sentence.size();i++){
            alpha[sentence[i]-'a']=1;
        }
        // check is an alpha is not present
        for(int i=0;i<alpha.size();i++){
            if(alpha[i]==0){
                return false;
            }
        }
        return true;

    }
};