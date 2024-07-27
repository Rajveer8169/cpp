#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int roll;

};
int main()
{
    int i;
    int n;
    cout<<"Enter no of students :";
    cin>>n;
    student s[n];
    for (i=0 ; i<n ; i++)
    {
        cout<<"Enter name : "<<endl;
        cin>>s[i].name;
        cout<<"Enter roll no : "<<endl;
        cin>>s[i].roll;
    }
    cout<<"name\t";
    cout<<"Rollno"<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cout<<s[i].name<<"\t";
        cout<<s[i].roll<<endl;
    }
    return 0;
}