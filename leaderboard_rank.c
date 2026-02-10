#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 5
#define MAX_NAME_LEN 20

// Define a structure to hold player name and score
struct Player {
    char name[MAX_NAME_LEN];
    int score;
};

// Function to sort players based on score in descending order (Bubble Sort)
void sortLeaderboard(struct Player players[], int n) {
    int i, j;
    struct Player temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Compare scores for descending order
            if (players[j].score < players[j + 1].score) {
                // Swap the entire structure
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}

// Function to display the leaderboard
void displayLeaderboard(struct Player players[], int n) {
    printf("\n--- Leaderboard ---\n");
    printf("Rank | Name\t\t| Score\n");
    printf("--------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-4d | %-20s| %-4d\n", i + 1, players[i].name, players[i].score);
    }
}

int main() {
    struct Player leaderboard[MAX_PLAYERS] = {
        {"Alice", 150},
        {"Bob", 120},
        {"Charlie", 180},
        {"David", 120},
        {"Eve", 100}
    };

    int num_players = MAX_PLAYERS;

    // Sort the leaderboard
    sortLeaderboard(leaderboard, num_players);

    // Display the results
    displayLeaderboard(leaderboard, num_players);

    return 0;
}
