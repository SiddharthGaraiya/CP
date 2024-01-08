#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    std::string ans;
    for (size_t i = 0; i < s.size();) {
        if (s.substr(i, 3) == "WUB") {
            i += 3; // Skip "WUB"
        } else {
            size_t j = i;
            while (j < s.size() && s.substr(j, 3) != "WUB") {
                ans.push_back(s[j]);
                j++;
            }
            ans.push_back(' ');
            i = j;
        }
    }

    // Remove trailing space, if any
    if (!ans.empty() && ans.back() == ' ') {
        ans.pop_back();
    }

    std::cout << ans << std::endl;

    return 0;
}
