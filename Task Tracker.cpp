#include <iostream>
#include <vector>
#include <string>
using namespace std;

void showMenu() {
    cout << "\n**** MENU ****\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
	cout << "******** WELCOME TO DAILY TASK TRACKER ********\n";

    vector<string> tasks;
    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
        case 1: {
            string task;
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
            cout << "Task added!\n";
            break;
        }
        case 2: {
            if (tasks.empty()) {
                cout << "No tasks yet.\n";
            }
            else {
                cout << "\nYour Tasks:\n";
                for (size_t i = 0; i < tasks.size(); ++i) {
                    cout << i + 1 << ". " << tasks[i] << "\n";
                }
            }
            break;
        }
        case 3: {
            int index;
            cout << "Enter task number to delete: ";
            cin >> index;
            if (index >= 1 && index <= tasks.size()) {
                tasks.erase(tasks.begin() + index - 1);
                cout << "Task deleted.\n";
            }
            else {
                cout << "Invalid task number.\n";
            }
            break;
        }
        case 4:
            cout << "***** GOODBYE! THANKS FOR VISITING *****\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}