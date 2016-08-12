/**************
Author:
Mark Singleton
Date: 12/16/2015
Class:
COP 2224C Professor Reed
***************/

#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
    vector<string> toDoList;
    string task;
    string userInput;

    cout << "Enter the task or type 'finished'." << endl;
    getline(cin, task);

    while(task != "finished")
    {
        toDoList.push_back(task);
        getline(cin, task);
    }
    cout << endl << "Press any key then ENTER to see the next task." << endl;
    while (toDoList.size() > 0)
    {
        task = toDoList.back();
        toDoList.pop_back();
        cout << task << "   ";
        cin >> userInput;
    }
    cout << endl << "Task Completed." << endl;

    return 0;
}

