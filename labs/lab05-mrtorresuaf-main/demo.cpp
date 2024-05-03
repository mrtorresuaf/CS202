#include <iostream>
#include <string>
#include <vector>
#include <map>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::map;

int main() {

      vector<string> sentence {"This", "is", "the", "song", "that", "never", "ends", "yes",
            "it", "goes", "on", "and", "on", "my", "friends"};

      map<string, int> count;

      count["banana"] = 700;
      count["split"] = 700;

      for (const string& word: sentence) {

            count[word] += 1;
      }

      for (const auto& pair: count) {

            auto [key, value] = pair;

            cout << key
                 << " => "
                 << value
                 << endl;
      }

      cout << count.at("zork") << endl;

      return 0;
}
