#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <chrono>
#include <thread>

using namespace std;

// Structure to represent a playing card
struct Card {
    string suit;
    string face;
    int value;
};

// Function to display card design horizontally
void displayCard(const Card& card) {
    cout << "+---------+  ";
    this_thread::sleep_for(chrono::milliseconds(200)); // Introduce a 200 milliseconds delay
}

// Function to display the hand horizontally
void displayHand(const vector<Card>& hand) {
    for (const auto& card : hand) {
        displayCard(card);
    }
    cout << endl;

    for (size_t row = 0; row < 5; ++row) {
        for (const auto& card : hand) {
            if (row == 0 || row == 4) {
                cout << "+---------+  ";
            } else if (row == 1) {
                cout << "|" << card.face;
                if (card.face.size() == 1) cout << "        ";
                else cout << "       ";
                cout << "|  ";
            } else if (row == 2) {
                cout << "|         |  ";
            } else if (row == 3) {
                cout << "|    " << card.suit[0] << "    |  ";
            }
        }
        cout << endl;
    }
}

// Function to initialize a deck of cards
vector<Card> initializeDeck() {
    vector<string> suits = { "Hearts", "Diamond", "Clubs", "Spades" };
    vector<string> faces = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };

    vector<Card> deck;
    for (const auto& suit : suits) {
        for (size_t i = 0; i < faces.size(); ++i) {
            int value = (i < 9) ? (i + 1) : 0;
            if (i >= 9) value = 0;
            if (i >= 10) value = 10;
            if (i >= 11) value = 10;
            if (i >= 12) value = 10;

            deck.push_back({ suit, faces[i], value });
        }
    }
    return deck;
}

// Function to shuffle the deck
void shuffleDeck(vector<Card>& deck) {
    srand(static_cast<unsigned int>(time(nullptr)));
    random_shuffle(deck.begin(), deck.end());
}

// Function to calculate total points in a hand
int calculatePoints(const vector<Card>& hand) {
    int total = 0;
    for (const auto& card : hand) {
        total += card.value;
    }
    return total % 10;
}

int main() {
    int playerMoney;
    cout << "Enter your initial money: ";
    cin >> playerMoney;

    vector<Card> deck = initializeDeck();
    shuffleDeck(deck);

    int betAmount = 0;

    while (playerMoney > 0) {
        vector<Card> playerHand;
        vector<Card> dealerHand;

        // Ask the player for the bet amount and choice
        cout << "You have Php: " << playerMoney << ". Place your bet (0 to quit): ";
        cin >> betAmount;

        if (betAmount <= 0) {
            cout << "Thanks for playing! Goodbye!\n";
            break;
        }

        if (betAmount > playerMoney) {
            cout << "You don't have enough money to place that bet.\n";
            continue;
        }

        cout << "Choose your bet:\n1. Player\n2. Dealer\n3. Tie\nEnter your choice: ";
        int userChoice;
        cin >> userChoice;

        if (userChoice < 1 || userChoice > 3) {
            cout << "Invalid choice. Please choose again.\n";
            continue;
        }

        // Initial dealing of cards (limiting to 3 cards for each hand)
        for (int i = 0; i < 3; ++i) {
            playerHand.push_back(deck.back());
            deck.pop_back();
            dealerHand.push_back(deck.back());
            deck.pop_back();
        }

        cout << "\nYour hand:\n";
        displayHand(playerHand);
        cout << "\nDealer's hand:\n";
        displayHand(dealerHand);

        // Player's turn

        // Dealer's turn (max 3 cards)
        while (dealerHand.size() < 3) {
            int dealerPoints = calculatePoints(dealerHand);
            if (dealerPoints >= 6) {
                break;
            }
            dealerHand.push_back(deck.back());
            deck.pop_back();
        }

        // Determine the winner
        int playerPoints = calculatePoints(playerHand);
        int dealerPoints = calculatePoints(dealerHand);

        cout << "\nPlayer's total points: " << playerPoints << "\n";
        cout << "Dealer's total points: " << dealerPoints << "\n";

        if (userChoice == 1) {
            if (playerPoints > dealerPoints) {
                cout << "\nCongratulations! You win!\n";
                playerMoney += betAmount;
            } else if (playerPoints < dealerPoints) {
                cout << "\nYou lose! Dealer wins.\n";
                playerMoney -= betAmount;
            } else {
                cout << "\nIt's a tie!\n";
            }
        } else if (userChoice == 2) {
            if (dealerPoints > playerPoints) {
                cout << "\nCongratulations! You win!\n";
                playerMoney += betAmount;
            } else if (dealerPoints < playerPoints) {
                cout << "\nYou lose! Player wins.\n";
                playerMoney -= betAmount;
            } else {
                cout << "\nIt's a tie!\n";
            }
        } else if (userChoice == 3) {
            if (playerPoints == dealerPoints) {
                cout << "\nCongratulations! You win on a tie!\n";
                playerMoney += betAmount * 8; // Pay 8 times the bet for a tie
            } else {
                cout << "\nYou lose on a tie.\n";
                playerMoney -= betAmount;
            }
        }

        cout << "Your balance Php: " << playerMoney << "\n\n";

        this_thread::sleep_for(chrono::seconds(2)); // Introduce a 2-second delay before the next round
    }

    if (playerMoney <= 0) {
        cout << "You have no money left. Game over!\n";
    }

    return 0;
}
