#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    char options;

    cout<<"Welcome to the college story" <<endl;
    cout<<"Tell your name: ";
    cin>>name;
    cout<<"Tell your age: ";
    cin>>age;
    if (age >= 18 && age <= 25){
        
        cout<<"You are allow to proceed further.." <<endl;
        cout<<"Now choose any one  mysterious options" <<endl;
        cout<<"A, B, C : ";
        cin>>options;
        cout<<"You selected an option: " <<options <<endl;
    
        if (options == 'a' || options == 'A'){
            cout<<"Congratulations 😇 you were a good student in your college. You attended all lectures and you respect your teachers..";
        } else if (options == 'b' || options == 'B'){
            cout<<"OOPs 🤓 you were an average student in your college. You attended few lectures and something bunk the college however you respect your teachers..";
        } else if (options == 'c' || options == 'C'){
            cout<<"OMG 😱 you were a back bencher in your college. You never attended the lectures and always bunk the college you don't respect your teachers..";
        } else {
            cout<<"Not a valid option";
        }
    } else if (age >= 26) {
        cout<<"You are over age, can't proceed the story.. You passed your college life. ";
    } else if (age < 18) {
        cout<<"You are under age, can't proceed the story..";
    } else {
        cout << "Not a valid age";
    }

    return 0;
}
