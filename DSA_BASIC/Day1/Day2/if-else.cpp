/* Given marks of a student, print on the screen:

Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise. */
  class Solution {
public:
    void studentGrade(int marks) {

        if(marks >= 90){
            cout << "grade A";
        }
        else if(marks >= 70){
            cout << "grade B";
        }
        else if(marks >= 50){
            cout << "grade C";
        }
        else if(marks >=35){
            cout << "grade D";
        }
        else{
            cout <<"Fail";
        }
    }
};
