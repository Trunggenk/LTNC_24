#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> m;
    int q;
    std::cin >> q;

    for(int i = 0; i < q; ++i) {
        int type;
        std::cin >> type;
        std::string x;
        std::cin >> x;

        switch(type) {
            case 1: {
                int y;
                std::cin >> y;
                m[x] += y;
                break;
            }
            case 2:
                m.erase(x);
                break;
            case 3: {
                std::map<std::string, int>::iterator itr = m.find(x);
                if(itr != m.end())
                    std::cout << itr->second << std::endl;
                else
                    std::cout << "0" << std::endl;
                break;
            }
        }
    }

    return 0;
}