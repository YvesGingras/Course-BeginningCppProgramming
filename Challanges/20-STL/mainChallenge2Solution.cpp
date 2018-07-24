#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>
#include "Source/Song.h"

using namespace std;

void display_menu() {
    cout << "\nF - Play First Song" << endl;
    cout << "N - Play Next song" << endl;
    cout << "P - Play Previous song" << endl;
    cout << "A - Add and play a new Song at current location" << endl;
    cout << "L - List the current playlist" << endl;
    cout << "===============================================" << endl;
    cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display
    // Playing: followed by the song that is playing
    cout << "Now playing: " << song.get_name() << " by " << song.get_artist() << "." << endl;
}

void display_playlist(const list<Song>  &playlist, const Song &current_song) {
    // This function should display the current playlist
    // and then the current song playing.

    for (auto&& song : playlist) {
        cout << song << endl;
    }

    play_current_song(current_song);
}

void RunProcess(list<Song>& playlist) {
    char userSelection;
    auto current_song = playlist.begin();
    string songName{}, artistName{};
    int songRating{};

    cout << "**Active playlist, and the currently playing song:" << endl;
    display_playlist(playlist,*current_song);
    do {

        display_menu();

//        cout << endl;
        cin >> userSelection;

        switch (toupper(userSelection)) {
            case 'F':
                play_current_song(playlist.front());
                break;
            case 'N':
                cout << "\n**Moving Next song**" << endl;
                current_song++;
                if (current_song == playlist.end())
                    current_song = playlist.begin();

                play_current_song(*current_song);
                break;
            case 'P':
                cout << "\n**Moving Previous song**" << endl;
                if (current_song == playlist.begin())
                    current_song = playlist.end();
                current_song--;

                play_current_song(*current_song);
                break;
            case 'A':
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');

                cout << "Enter the added song's name: ";
                getline(cin,songName);

                cout << "Enter the artists's name: ";
                getline(cin,artistName);

                cout << "Enter the song's rating: ";
                cin >> songRating;

                playlist.emplace(current_song,songName,artistName,songRating);
                current_song--;

                cout << "\nThe new song '" << (*current_song).get_name() << "' has been added to the playlist." << endl;
                play_current_song(*current_song);
                break;
            case 'L':
                cout << "\nDisplaying the songs currently in the playlist:" << endl;
                display_playlist(playlist,*current_song);
                break;
            case 'Q':
                cout << "\nThanks for listening!" << endl;
                break;
            default:
                cout << "'" << userSelection << "', " << "Unknown selection... " << endl << endl;
        }
    } while (toupper(userSelection) != 'Q' );
}

int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}
    };

    RunProcess(playlist);

    return 0;
}

