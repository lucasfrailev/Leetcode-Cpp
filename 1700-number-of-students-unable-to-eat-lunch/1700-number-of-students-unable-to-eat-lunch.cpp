class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size(), square_p = 0, square_s = 0, circle_p = 0;
        for(int i = 0; i<n;i++){
            square_p +=students[i];
            square_s +=sandwiches[i]; 
        }
        circle_p = n-square_p;
        int left = square_s-square_p;
        if (left ==0){
            return 0;
        } else {
            for(int i = 0; i<n;i++){
                square_p -=sandwiches[i];
                circle_p -=!sandwiches[i];
                if (square_p<0 || circle_p<0){
                    return square_p+1+circle_p;
                } 
            }
        }
        return 0;
    }
};