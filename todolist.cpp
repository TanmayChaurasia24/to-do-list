// to do list project with c++

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> to_do_list;
    vector<string> high;
    vector<string> medium;
    vector<string> low;
    int choice;
    int n = 1;
    while (true)
    {
        cout << endl
             << endl;
        cout << "\t\t\t************ TO-DO LIST****************\t\t\t" << endl
             << endl;
        cout << "\t\t\tpress 1 to add the task " << endl;
        cout << "\t\t\tpress 2 to remove the task " << endl;
        cout << "\t\t\tpress 3 to see the whole list " << endl;
        cout << "\t\t\tpress 4 to see the high priority task " << endl;
        cout << "\t\t\tpress 5 to see the medium priority task " << endl;
        cout << "\t\t\tpress 6 to see the low priority task " << endl;
        cout << "\t\t\tpress 7 to exit " << endl
             << endl;
        cout << "\t\t\t enter your choice: ";
        cin >> choice;
        cin.ignore();
        cout << endl
             << endl;

        switch (choice)
        {
        case 1:
        {
            string task;
            string priority;
            cout << "\t\t\t enter task " << n << ": ";
            getline(cin, task);
            // cin.ignore();
            cout << endl;
            cout << "\t\t\t enter priority of the task: ";
            cout << endl
                 << endl;
            cout << "\t\t\t 'high' for the task that is very important " << endl;
            cout << "\t\t\t 'medium' for the task that is important " << endl;
            cout << "\t\t\t 'low' for the task that is not important " << endl
                 << endl;
            cout << "\t\t\t enter priority: ";
            getline(cin, priority);
            // cin.ignore();
            if (priority == "high")
            {
                high.push_back(task);
                // to_do_list.push_back(task);
            }
            else if (priority == "medium")
            {
                medium.push_back(task);
                // to_do_list.push_back(task);
            }
            else if (priority == "low")
            {
                low.push_back(task);
                // to_do_list.push_back(task);
            }
            n++;
            to_do_list.push_back(task);
            cout << endl
                 << endl;

            break;
        }

        case 2:
        {
            if (to_do_list.empty())
            {
                cout << "\t\t\tyour list is empty " << endl;
                break;
            }
            int num;
            string priority;
            cout << "\t\t\ttask: " << endl;
            for (size_t i = 0; i < to_do_list.size(); i++)
            {
                cout << "\t\t\t\t" << i + 1 << ": " << to_do_list[i] << endl;
            }
            cout << "\t\tenter the number of task that you want to remove: ";
            cin >> num;
            cin.ignore();
            cout << endl;

            cout << endl;
            if (num >= 1 && num <= to_do_list.size())
            {
                cout << "\t\t\t enter priority of the task that you want to remove: ";
                getline(cin, priority);
                
                if (priority == "high")
                {
                    cout << "\t\t\t task: " << endl;
                    for (size_t i = 0; i < high.size(); i++)
                    {
                        cout << "\t\t\t\t" << i + 1 << ": " << high[i] << endl;
                    }
                    cout << endl;
                    cout << "\t\tenter the number of task that you want to remove from the given task above: ";
                    cin >> num;
                    cin.ignore();
                    high.erase(high.begin() + num - 1);
                }
                else if (priority == "medium")
                {
                    cout << "\t\t\t task: " << endl;
                    for (size_t i = 0; i < medium.size(); i++)
                    {
                        cout << "\t\t\t\t" << i + 1 << ": " << medium[i] << endl;
                    }
                    cout << endl;
                    cout << "\t\tenter the number of task that you want to remove from the given task above: ";
                    cin >> num;
                    cin.ignore();
                    medium.erase(medium.begin() + num - 1);
                }
                else if (priority == "low")
                {
                    cout << "\t\t\t task: " << endl;
                    for (size_t i = 0; i < low.size(); i++)
                    {
                        cout << "\t\t\t\t" << i + 1 << ": " << low[i] << endl;
                    }
                    cout << endl;
                    cout << "\t\tenter the number of task that you want to remove from the given task above: ";
                    cin >> num;
                    cin.ignore();
                    low.erase(low.begin() + num - 1);
                }
                to_do_list.erase(to_do_list.begin() + num - 1);
                cout << "\t\t\t\ttask removed " << endl
                     << endl;
            }
            if (num < 1 || num > to_do_list.size())
            {
                cout << "\t\tyou dont have this much of task in your list " << endl
                     << endl;
            }
            break;
        }

        case 3:
        {
            if (to_do_list.empty())
            {
                cout << " \t\t\tyour list is empty " << endl;
            }
            else
            {
                cout << "\t\t\ttask: " << endl;
                for (size_t i = 0; i < to_do_list.size(); i++)
                {
                    cout << "\t\t\t\t" << i + 1 << ": " << to_do_list[i] << endl;
                }
            }
            break;
        }
        case 4:
        {
            if (high.empty())
            {
                cout << " \t\t\tyour list is empty " << endl;
            }
            else
            {
                cout << "\t\t\ttask: " << endl;
                for (size_t i = 0; i < high.size(); i++)
                {
                    cout << "\t\t\t\t" << i + 1 << ": " << high[i] << endl;
                }
            }
            break;
        }
        case 5:
        {
            if (medium.empty())
            {
                cout << " \t\t\tyour list is empty " << endl;
            }
            else
            {
                cout << "\t\t\ttask: " << endl;
                for (size_t i = 0; i < medium.size(); i++)
                {
                    cout << "\t\t\t\t" << i + 1 << ": " << medium[i] << endl;
                }
            }
            break;
        }
        case 6:
        {
            if (low.empty())
            {
                cout << " \t\t\tyour list is empty " << endl;
            }
            else
            {
                cout << "\t\t\ttask: " << endl;
                for (size_t i = 0; i < low.size(); i++)
                {
                    cout << "\t\t\t\t" << i + 1 << ": " << low[i] << endl;
                }
            }
            break;
        }
        case 7:
        {
            cout << "\t\t\tquiting..." << endl;
            return 0;
        }
        default:
        {
            cout << "\t\t\tplease enter the  correct choice " << endl;
            break;
        }
        }
    }
    return 0;
}