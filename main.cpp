#include <iostream>
#include <string>
#include "gpa.h";
using namespace std;
int main(){
    int amount;
    printf("How many tests are you calculating? or Calculate gpa (16) ");
    cin >> amount;
    if(amount == 1){
        int right;
        int questions;
        printf("How many questions were there? ");
        cin >> questions;
        printf("How many did you get right? ");
        cin >> right;
        int calc = (double)right/(double)questions*100;
        cout << "The result is "<< calc << endl;
        cout << "Here's how you calculate it: 1000(questions correct)/1100(amount of questions)*100 =91%" << endl;
        cout << "Another Example: 123/400*100 = 30.75 rounded = 31%" << endl;
        main();
    }
    if(amount == 2){
        int mark1;
        int mark2;
        printf("What is your first mark?");
        cin >> mark1;
        printf("What is your second mark?");
        cin >> mark2;
        int calc = (double)mark1+mark2;
        int result = calc/2;
        cout << "The result is " << result;
        main();
    }
    if(amount == 3){
        int mark;
        int mark2;
        int mark3;
        printf("What is your first mark?");
        cin >> mark;
        printf("What is the second mark?");
        cin >> mark2;
        printf("What is the third mark?");
        cin >> mark3;
        int calc = (double)mark+(double)mark2+(double)mark3;
        int result = calc/3;
        cout << "Your mark is " << result << "%";
        main();
    }
    if(amount == 4){
     int mark1;
     int mark2;
     int mark3;
     int mark4;
     cout <<  "Enter your first mark > ";
     cin >> mark1;
     printf("Enter your second mark > ");
     cin >>  mark2;
     printf("Enter your third mark > ");
     cin >> mark3;
     printf("Enter your fourth mark > ");
     cin >> mark4;
     int calc =  (double) mark1+mark2+mark3+mark4;
     int result = calc/4;
     cout << "Your mark is " << result << "%";
     main();
    }
    if(amount ==  5){
        int mark1;
        int mark2;
        int mark3;
        int mark4;
        int mark5;
        printf("What is your first mark? ");
        cin >> mark1;
        printf("What is your second mark? ");
        cin >> mark2;
        printf("What is your third mark? ");
        cin >> mark3;
        printf("What is your fourth mark? ");
        cin >> mark4;
        printf("What is your fifth mark?");
        cin >> mark5;
        int calc = (double)ark1+mark2+mark3+mark4+mark5;
        int result = calc/5;
        cout << "Your mark is " <<  result;
        main();
    }
    if(amount == 6){
        int mark1;
        int mark2;
        int mark3;
        int mark4;
        int mark5;
        int mark6;
        printf("What is your first mark? ");
        cin >> mark1;
        printf("What is your second mark? ");
        cin >> mark2;
        printf("What is your third mark? ");
        cin >> mark3;
        printf("What is your fourth mark? ");
        cin >> mark4;
        printf("What is your fifth mark?");
        cin >> mark5;
        printf("What is your sixth mark? ");
        cin >> mark6;
        int calc = (double) mark1+mark2+mark3+mark4+mark5+mark6;
        int result = calc/6;
        cout << "Your mark is " << result;
        main();
    }
    if(amount == 7){
        int mark1;
        int mark2;
        int mark3;
        int mark4;
        int mark5;
        int mark6;
        int mark7;
        printf("What is your first mark? ");
        cin >> mark1;
        printf("What is your second mark?");
        cin >> mark2;
        printf("What is your third mark? ");
        cin >> mark3;
        printf("What is your fourth mark?");
        cin >> mark4;
        printf("What is your fifth mark? ");
        cin >> mark5;
        printf("what is your sixth mark? ");
        cin >> mark6;
        printf("What is your seventh mark? ");
        cin >> mark7;
        int calc = (double) mark1+mark2+mark3+mark4+mark5+mark6+mark7;
        int result = calc/7;
        cout << "Your mark is " << result;
        main();
    }
    if(amount == 8){
        int mark1,mark2,mark3,mark4,mark5,mark6,mark7,mark8;
        printf("What is your first mark? ");
        cin >> mark1;
        printf("What is your second mark? ");
        cin >> mark2;
        printf("What us your third mark? ");
        cin >> mark3;
        printf("What is your fourth mark? ");
        cin >> mark4;
        printf("What is your fifth mark? ");
        cin >> mark5;
        printf("Enter your sixth mark ");
        cin >> mark6;
        printf("Enter your seventh mark ");
        cin >> mark7;
        printf("Enter your eighth mark ");
        cin >> mark8;
        int calc = (double) mark1+mark2+mark3+mark4+mark5+mark6+mark7+mark8;
        int result = calc/8;
        cout << result;
        main();
    }
    if(amount == 9){
        int mark1,mark2,mark3,mark4,mark5,mark6,mark7,mark8,mark9;
        printf("Enter your first mark > ");
        cin >> mark1;
        printf("Enter your second mark > ");
        cin >> mark2;
        printf("Enter your third mark > ");
        cin >> mark3;
        printf("Enter your fourth mark > ");
        cin >> mark4;
        printf("Enter your fifth mark > ");
        cin >> mark5;
        printf("Enter your sixth mark > ");
        cin >> mark6;
        printf("Enter your seventh mark > ");
        cin >> mark7;
        printf("Enter your eighth mark > ");
        cin >> mark8;
        printf("Enter your ninth mark > ");
        cin >> mark9;
        int calc = mark1+mark2+mark3+mark4+mark5+mark6+mark7+mark8+mark9;
        int result = calc/9;
        cout << "Your mark is " << result << "%";
        main();
    }
    if(amount == 10){
        int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
        printf("Enter your first mark  > ");
        cin >> num1;
        printf("What is your second mark? ");
        cin >> num2;
        printf("Enter your third mark > ");
        cin >> num3;
        printf("Enter your fourth mark > ");
        cin >> num4;
        printf("Enter your fifth mark > ");
        cin >> num5;
        printf("Enter your sixth mark > ");
        cin >> num6;
        printf("Enter your seventh mark > ");
        cin >> num7;
        printf("Enter your eighth mark > ");
        cin >> num8;
        printf("Enter your ninth mark > ");
        cin >> num9;
        printf("Enter your tenth mark > ");
        cin >> num10;
        int calc = (double) num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
        int result = calc/10;
        cout << "Your mark is " << result <<  "%";
        main();
    }
    if(amount == 11){
        int num1,num2,num3, num4,num5,num6,num7,num8,num9,num10,num11;
        printf("Enter the first mark ");
        cin >> num1;
        printf("Enter the second mark ");
        cin >> num2;
        printf("Enter the third mark > ");
        cin >> num3;
        printf("Enter the fourth mark > ");
        cin >> num4;
        printf("Enter the fifth number > ");
        cin >> num5;
        printf("Enter the sixth mark > ");
        cin >> num6;
        printf("Enter the seventh mark > ");
        cin >> num7;
        printf("Enter the eighth mark > ");
        cin >> num8;
        printf("Enter the ninth mark > ");
        cin >> num9;
        printf("Enter the tenth mark > ");
        cin >> num10;
        printf("Enter your eleventh mark > ");
        cin >> num11;
        int calc = (double) num1+num2+num3+num4+num5+num6+num7+num8+num9+num10+num11;
        int result = calc/11;
        cout << "Your mark is " << result << "%";
        main();
    }
    if(amount == 12){
        int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12;
        printf("What is your first mark? ");
        cin >> num1;
        printf("What is your second mark? ");
        cin >> num2;
        printf("Enter your third mark ");
        cin >> num3;
        printf("Enter your fourth mark ");
        cin >> num4;
        printf("Enter your fifth mark ");
        cin >> num5;
        printf("Enter your sixth mark ");
        cin >> num6;
        printf("Enter your seventh mark ");
        cin >> num7;
        printf("Enter your eighth mark ");
        cin >> num8;
        printf("Enter your ninth mark ");
        cin >> num9;
        printf("Enter your tenth mark ");
        cin >> num10;
        printf("Enter your eleventh mark ");
        cin >> num11;
        printf("Enter your twelfth mark ");
        cin >> num12;
        int calc = num1+num2+num3+num4+num5+num6+num7+num8+num9+num10+num11+num12;
        int result = (double) calc/12;
        cout << "Your mark is " << result << "%";
        main();
    }
    if(amount == 13){
        int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13;
        printf("Enter your first mark ");
        cin >> num1;
        printf("Enter your second mark ");
        cin >> num2;
        printf("Enter your third mark ");
        cin >> num3;
        printf("Enter your fourth mark ");
        cin >> num4;
        printf("Enter your fifth mark ");
        cin >> num5;
        printf("Enter your sixth mark ");
        cin >> num6;
        printf("Enter your seventh mark ");
        cin >> num7;
        printf("Enter your eighth mark ");
        cin >> num8;
        printf("Enter your ninth mark ");
        cin >> num9;
        printf("Enter your tenth mark ");
        cin >> num10;
        printf("Enter your eleventh mark ");
        cin >> num11;
        printf("Enter your twelfth mark ");
        cin >> num12;
        printf("Enter your thirteenth mark ");
        cin >> num13;
        int calc = num1+num2+num3+num4+num5+num6+num7+num8+num9+num10+num11+num12+num13;
        int result = (double) calc/13;
        cout << "Your mark is " << calc << "%";
        main();
    }
    if(amount == 14){
        int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14;
        printf("Enter your first mark > ");
        cin >> num1;
        printf("Enter your second mark > ");
        cin >> num2;
        printf("Enter your third mark > ");
        cin >> num3;
        printf("Enter your fourth mark > ");
        cin >> num4;
        printf("Enter your fifth mark > ");
        cin >> num5;
        printf("Enter your sixth mark > ");
        cin >> num6;
        printf("Enter your seventh mark > ");
        cin >> num7;
        printf("Enter your eighth mark > ");
        cin >> num8;
        printf("Enter your ninth mark > ");
        cin >> num9;
        printf("Enter your tenth mark > ");
        cin >> num10;
        printf("Enter your eleventh mark > ");
        cin >> num11;
        printf("Enter your twelfth mark > ");
        cin >> num12;
        printf("Enter your thirteenth mark > ");
        cin >> num13;
        printf("Enter your fourteenth mark > ");
        cin >> num14;
        int result = num1+num2+num3+num4+num5+num6+num7+num8+num9+num10+num11+num12+num13+num14;
        int calc = (double)result/14;
        cout << "Your mark is " << calc << "%";
        main();
    }
    if(amount == 15){
        double mark1,mark2,mark3,mark4,mark5,mark6,mark7,mark8, num9,num10,num11,num12,num13,num14,num15;
        printf("Enter your first mark > ");
        cin >> num1;
        printf("Enter your second mark ");
        cin >> num2;
        printf("Enter your third mark ");
        cin >> num3;
        printf("Enter your fourth mark ");
        cin >> num4;
        printf("Enter your fifth mark ");
        cin >> num5;
        printf("Enter your sixth mark ");
        cin >> num6;
        printf("Enter your seventh mark ");
        cin >> num7;
        printf("Enter your eighth mark ");
        cin >> num8;
        printf("Enter your ninth mark ");
        cin >> num9;
        printf("Enter your tenth mark ");
        cin >> num10;
        printf("Enter your eleventh mark ");
        cin >> num11;
        printf("Enter your twelfth mark ");
        cin >> num12;
        printf("Enter your thirteenth mark ");
        cin >> num13;
        printf("Enter your fourteenth mark ");
        cin >> num14;
        printf("Enter your fifteenth mark ");
        cin >> num15;
        double calc = num1+num2+num3+num4+num5+num6+num7+num8+num9+num10+num11+num12+num13+num14+num15;
        double result = calc/15*100;
        cout << "Your mark is " << result << endl;
        main();
    }
    if(amount == 16){
        gpa.main();
    }
}
