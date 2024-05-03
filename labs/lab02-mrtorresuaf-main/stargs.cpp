#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::vector;

int main(int argc, char** argv) {

    if (argc < 2) {
        cerr << "Error: not enough args; write a string in quotes after " << argv[0] << ".\n";
             
        return 1;
    }

    vector<string> args(argv, argv + argc);
    string message{args[1]};
    int line_width{63};
    int left_padding{(line_width - static_cast<int>(message.size())) / 2};
    int right_padding{(line_width - static_cast<int>(message.size())) - left_padding};

    string upper_right{"┓"};
    string lower_right{"┛"};
    string upper_left{"┏"};
    string lower_left{"┗"};
    string horizontal{"━"};
    string vertical{"┃"};

    cout << upper_left;
    for (int i{0}; i < line_width - 2; i += 1) {
        cout << horizontal;
    }
    cout << upper_right << endl;

    for (int i{0}; i < left_padding - 1; i += 1) {
        if (i == 0){
            cout << vertical;
        }
        cout << " ";
    }

    cout << message;

    for (int i{0}; i < right_padding - 1; i += 1) {
        cout << " ";
        if (i == (right_padding-2)) {
            cout << vertical;
        }
    }

    cout << endl << lower_left;
    for (int i{0}; i < line_width -2; i += 1) {
        cout << horizontal;
    }
    cout << lower_right << endl;

    return 0;
}
