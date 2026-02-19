/* Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Invalid.

Ensure only the 1st letter of the answer is capitalised.

For printing use:-

for C++ : cout << variable_name;
for Java : System.out.print();
for Python : print()
for Javascript : console.log() */

class Solution {
public:
    void whichWeekDay(int day) {
        
        switch(day){
            case 1: cout <<"Sunday";
            break;
            case 2: cout <<"Monday";
            break;
            case 3: cout <<"Tuesday";
            break;
            case 4: cout <<"Wednesday";
            break;
            case 5: cout <<"Thursday";
            break;
            case 6: cout <<"Friday";
            break;
            case 7: cout <<"Saturday";
            break;
            default :
            cout << "NA";            
        }
    }
};
