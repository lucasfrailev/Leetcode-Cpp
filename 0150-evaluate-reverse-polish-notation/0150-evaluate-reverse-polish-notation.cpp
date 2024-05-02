class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    while(tokens.size()>1){
        int aux;
        bool flag;
        for (int i = 0; i<tokens.size();i++){
            switch (tokens[i].back()){
                case '+':
                    aux = stoi(tokens[i-2]) + stoi(tokens[i-1]);
                    tokens[i-2] = to_string(aux);
                    tokens.erase(tokens.begin()+i-1,tokens.begin()+i+1);
                    flag = true;
                    break;
                case '-':
                    aux = stoi(tokens[i-2]) - stoi(tokens[i-1]);
                    tokens[i-2] = to_string(aux);
                    tokens.erase(tokens.begin()+i-1,tokens.begin()+i+1);
                    flag = true;
                    break;
                case '/':
                    aux = stoi(tokens[i-2]) / stoi(tokens[i-1]);
                    tokens[i-2] = to_string(aux);
                    tokens.erase(tokens.begin()+i-1,tokens.begin()+i+1);
                    flag = true;
                    break;
                case '*':
                    aux = stoi(tokens[i-2]) * stoi(tokens[i-1]);
                    tokens[i-2] = to_string(aux);
                    tokens.erase(tokens.begin()+i-1,tokens.begin()+i+1);
                    flag = true;
                    break;
            }
            if(flag){
                flag = false; 
                break;
            }
        }
    }
    return stoi(tokens[0]);
    }
};