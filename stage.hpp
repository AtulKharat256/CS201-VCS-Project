#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

#define staged "stagedFiles"

string staging_menu = R"(
    welcome to staging area, some commands for staging area.
    
    add    <filename>
    remove <filename>
    show   {stagedfiles}
    commit {commits the staging area to repo}
    menu   {shows menu again}
)";

class StagingArea{
    public:
        unordered_set<string> stagedFiles;      //assuming only files will be staged
        string filename;
        StagingArea(){
            filename = variable_store + staged;
            ifstream file(filename);
            if (file.is_open())
            {
                string line;
                while (getline(file, line))
                {
                    stagedFiles.insert(line);
                }
                file.close();
            }
        }
        void stageFile(const string filename){
            stagedFiles.insert(paths(filename));
        }
        void unstageFile(const string filename){
            stagedFiles.erase(paths(filename));
        }
        void printStagedFiles() const {
            cout << "Staged files: " << endl;
            for(const auto& file: stagedFiles){
                cout << " " + file << endl;
            }
        }
        void take_input(){
            string command;
            cout << GREEN << "$ " << RESET;
            cin >> command;
            while(command!="atom-commit"){
                if(command=="atom-add"){
                    string file;
                    cin>>file;
                    stageFile(file);
                }else if(command=="atom-remove"){
                    string file;
                    cin >> file;
                    unstageFile(file);
                }else if(command=="atom-show"){
                    printStagedFiles();
                }else if(command=="atom-menu"){
                    cout << staging_menu << endl;
                }else{
                    print_err("unknown command entered");
                }
                cout << GREEN << "$ " << RESET;
                cin >> command;
            }
        }
        string commit(const string parent_commit){  // implementation remaining
            return setup_commit(username, parent_commit, stagedFiles);
        }
        ~StagingArea(){
            ofstream file(filename);
            if(file.is_open()){
                for(const auto& item: stagedFiles){
                    file << item << endl;
                }
                file.close();
            }
        }
};
