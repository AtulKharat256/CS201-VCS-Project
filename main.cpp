#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
string username;

const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string MAGENTA = "\033[1;35m";
const string CYAN = "\033[36m";
const string WHITE = "\033[37m";

#include "sha1_hash.hpp"

#include "file_features.hpp"
#include "setup.hpp"
#include "tree.hpp"
#include "commit.hpp"
#include "branch_changing.hpp"
#include "head.hpp"

Head head;

#include "stage.hpp"
#include "stash.hpp"
#include "branch.hpp"


#define prefix cout<<MAGENTA<<username<<RESET<<" ("+head.active_branch+") "


void merge() {
    Branch master;
    string command;
    cin >> command;
    if (command == "atom-ffm") {
        string branch;
        cin >> branch;
        Branch b1(branch);
        master.fast_forward_merge(b1);
    }
    else if (command == "atom-twm") {
        string branch;
        cin >> branch;
        Branch b1(branch);
        master.three_way_merge(b1);
    }
    else {
        print_err("use some valid code of merge");
    }
    return;
}

int main() {

    cout << "enter your username: ";
    cin >> username;

    cout << branching_menu << endl;
    string command;
    prefix << GREEN << "$ " << RESET;
    cin >> command;
    while (command != "atom-quit")
    {
        if (command == "atom-init") {
            Branch master;
        }
        else if (command == "atom-branch") {
            string branch_name;
            cin >> branch_name;
            Branch master(branch_name);
        }
        else if (command == "atom-checkout") {
            string branch_name;
            cin >> branch_name;
            Branch master(branch_name);
            head.change_branch(master.branch_name);
        }
        else if (command == "atom-delete") {
            string branch_name;
            cin >> branch_name;
            Branch master(branch_name);
            master.delete_branch();
        }
        else if (command == "atom-stage") {
            Branch master;
            master.commit();
        }
        else if (command == "atom-show") {
            list_branches();
        }
        else if (command == "atom-menu") {
            cout << branching_menu << endl;
        }
        else if (command == "atom-merge") {
            merge();
        }
        else if (command == "atom-merges") {
            cout << merge_menu << endl;
        }
        else if (command == "atom-stash") {
            Branch master;
            master.create_stash();
        }
        else if (command == "atom-restash") {
            Branch master;
            master.restore_stash();
        }
        else {
            print_err("unknown command entered");
        }
        prefix << GREEN << "$ " << RESET;
        cin >> command;
    }
}
