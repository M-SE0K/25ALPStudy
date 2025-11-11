#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int sumPart(string& str)
{
    stringstream ss(str);
    string token;
    int sum = 0;
    while (getline(ss, token, '+'))
    {
        sum += stoi(token);
    }
    return sum;
}

int main()
{
    string s;
    cin >> s;

    vector<string> parts;
    string temp;
    stringstream ss(s);
    while (getline(ss, temp, '-'))
        parts.push_back(temp);

    int result = sumPart(parts[0]);
    for (int i = 1; i < (int)parts.size(); i++)
        result -= sumPart(parts[i]);

    cout << result << '\n';
    return 0;
}
