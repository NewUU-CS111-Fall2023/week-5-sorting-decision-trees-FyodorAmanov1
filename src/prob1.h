#include <iostream>
#include <vector>

using namespace std;

void swap(vector<string>& arr, int i, int j) {
    string temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(vector<string>& bookTitles) {
    int n = bookTitles.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (bookTitles[j] > bookTitles[j + 1]) {
                swap(bookTitles, j, j + 1);
            }
        }
    }
}

void printSortedBooks(const vector<string>& bookTitles) {
    for (const string& title : bookTitles) {
        cout << title << endl;
    }
}

int main() {
    vector<string> bookTitles{"Catcher in the Rye", "Pride and Prejudice", "To Kill a Mockingbird", "The Great Gatsby", "Moby Dick"};

    bubbleSort(bookTitles);

    printSortedBooks(bookTitles);

    return 0;
}