#include <iostream>
using namespace std;

int main() {
    const int max = 50; // max number of cards which can change according to user
    int cards[max];
    int n;

    cout << "Enter number of cards: "; // to enter how many cards should be arranged
    cin >> n;

    cout << "Enter card values: "; // to enter the values of cards
   
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

   
    for (int i = 1; i < n; i++) { // for putting the next values
        int key = cards[i];
        int j = i - 1;  

        while (j >= 0 && cards[j] > key) { // used for checking and shifting
            cards[j + 1] = cards[j];
            j--;
        }
        cards[j + 1] = key;

       
        cout << "After inserting card " << key << ": ";// output of the array for each steps
        for (int k = 0; k < n; k++) {
            cout << cards[k] << " ";
        }
        cout << endl;
    }

   
    cout << "Final sorted hand: "; // final sorted cards
    for (int i = 0; i < n; i++) {
        cout << cards[i] << " ";
    }
    cout << endl;

    return 0;
}