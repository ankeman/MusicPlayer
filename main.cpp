#include<iostream>
#include"stack.h"

using namespace std;

int main() {
    stack playlist;

    // Insert songs
    playlist.insertFirst("Song 1", "Singer 1", "2024-01-01");
    playlist.insertFirst("Song 2", "Singer 2", "2024-02-01");

    // Print current song
    playlist.printCurrent();

    return 0;
}
