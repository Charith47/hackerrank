#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
int diffMult(int num);

// Solution --- 

vector<int> gradingStudents(vector<int> grades) {
    

    for (unsigned int itr = 0; itr < grades.size(); itr++) {
        if (grades[itr] >= 38 && diffMult(grades[itr]) < 3) grades[itr] = grades[itr] + diffMult(grades[itr]);

    }
    
    return grades;
}

// End Solution --- 

int diffMult(int num) {
    return 5-(num%5);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);
        unsigned int result_size = result.size();
    for (unsigned int i = 0; i < result_size; i++) {
        fout << result[i];

        if (i != result_size - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
