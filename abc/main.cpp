//打印1997年7月月历
#include <iostream>
#include<cmath>
#include<iomanip>
#include<climits>
using namespace std;

string chatTo(const string& toName, const string& content);
string chatFrom(const string& fromName = "system",   const string& content = "default msg") ;

int main()
{
    cout << "please input the name : ";
    string toName,chatMsg,content,fromName;
    getline(cin,toName);
    fromName = toName;
    cout << "please input the message : ";
    getline(cin,content);
    chatMsg = chatTo(toName, content);
    cout << endl << chatMsg << endl;
    cout <<endl;
    cout << "please input the msg from the person :";
    getline(cin,content);
    chatMsg = chatFrom(fromName,content);
    cout << endl << chatMsg << endl;
}

string chatTo(const string& toName, const string& content)
{
    string msg = "## you speak to [" + toName + "]: " + content;
    return msg;
}
string chatFrom(const string& fromName ,   const string& content)
{
    string msg = "##  [" +  fromName  + " ] speak to you :" + content;
    return msg;
}
