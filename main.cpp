#include <iostream>
#include <string>

using namespace std;

int main()
{
    string pierwszy, drugi;   //2zmienne

    cout <<"Wypisz dwa wyrazy, po jednym w lini." <<endl;   //wpisywanie wyrazow
    cin >> pierwszy;
    cin >> drugi;

    cout<< "Te same litery: ";

    std::size_t znalezione;
    char literaA = 'A', literaZ = 'Z', literaa='a';
    for (int znak = literaA; znak <= literaZ; znak++) {

        znalezione = pierwszy.find(znak);
        if(znalezione != std::string::npos){
            znalezione = drugi.find(znak);
            if(znalezione != std::string::npos) printf("%c ", znak);
        }
        znalezione = pierwszy.find(znak+(literaa-literaA));
        if(znalezione != std::string::npos){
            znalezione = drugi.find(znak +(literaa-literaA));
            if(znalezione != std::string::npos) printf("%c ", znak +(literaa-literaA));
        }
    }
    printf("\n");
}
