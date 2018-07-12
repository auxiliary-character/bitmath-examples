#!/usr/bin/env python3
from random import randint

options = ["rock","paper","scissors","lizard","spock"]
magic = 5843500

def game_iteration():
    user_in = input("Rock, paper, scissors, lizard, spock?\n").lower()

    if user_in == "exit":
        return False

    if not user_in in options:
        print("Bad input.")
        return True

    user = options.index(user_in)
    ai = randint(0,4)
    print("Player: ",options[user].capitalize())
    print("Computer: ",options[ai].capitalize())

    if user == ai:
        print("Tie")
    else:
        if (magic>>(user*5+ai))&1:
            print("You win!")
        else:
            print("You lose.")

    return True


def main():
    while game_iteration():
        pass

if __name__ == "__main__":
    main()
