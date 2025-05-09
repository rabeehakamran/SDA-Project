#include<iostream>
#include"student.h"
using namespace std;

int main() {
    Student s1(1, 1001, "Ali", "ali@example.com", "123");
    s1.signup();
    s1.login("ali@example.com", "123");
    s1.joinClass("CS101");
    s1.joinClass("MATH202");
    s1.generateReport("1010");
    s1.logout();
}