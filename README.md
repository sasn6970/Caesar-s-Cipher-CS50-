# Caesar's Cipher (CS50)

**This is a CS50x2021 and it is shared for educational purposes and encouraging feedback (since CS50x2021 course is already outdated), this code is not to be copied or replicated as solution for newer editions, in compliance with CS50's Academic Honesty Agreement.**

## Summary

In cryptography, the Caesar's cipher is one of the simplest and most used techniques. It works by replacing a letter by the letter that is a key number of positions forward.

E.g., one would substitute the letter *A* with an *E* with a key of 5; with a key value of 3, on the other hand, the *A* must be replaced by the letter *D*.

Supposedly, Julius Caesar used this method to communicate with his Generals, who knew beforehand which the secret key was and were able to decipher Caesar's message in plaintext.

The user is the one sending the plaintext message and the key (until exiting by typing *0*), and this program is going to take care of the rest! Here are a few examples of how the program might work. 

HELLO, WORLD -> IFMMP, XPSME (with key = 1)

hello, world -> uryyb, jbeyq (with key = 13)
