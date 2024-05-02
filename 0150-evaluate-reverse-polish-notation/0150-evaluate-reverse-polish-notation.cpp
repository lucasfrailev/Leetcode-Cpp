class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    vector<int> auxvector;
        int aux;
        for (int i = 0; i<tokens.size();i++){
            switch (tokens[i].back()){
                case '+':
                    aux = auxvector.rbegin()[1] + auxvector.rbegin()[0];
                    auxvector.pop_back();
                    auxvector.pop_back();
                    auxvector.push_back(aux);
                    break;
                case '-':
                    aux = auxvector.rbegin()[1] - auxvector.rbegin()[0];
                    auxvector.pop_back();
                    auxvector.pop_back();
                    auxvector.push_back(aux);
                    break;
                case '/':
                    aux = auxvector.rbegin()[1] / auxvector.rbegin()[0];
                    auxvector.pop_back();
                    auxvector.pop_back();
                    auxvector.push_back(aux);
                    break;
                case '*':
                    aux = auxvector.rbegin()[1] * auxvector.rbegin()[0];
                    auxvector.pop_back();
                    auxvector.pop_back();
                    auxvector.push_back(aux);
                    break;
                default:
                    auxvector.push_back(stoi(tokens[i]));
            }
    }
    return auxvector[0];
    }
};