# Caesar-Cipher-with-the-C-programming-language

This code represents a program that encrypts and decrypts student information. It also prompts for a password to verify the student number.

Firstly, the code defines a struct named `Student` that is used to store student information.

Next, it prompts the user to enter the student name and surname, which are then stored in the "student_information" struct and used for encryption.

The `prime` function is used to find the largest factor of a number. In this code, it calculates the largest prime factor of the student number.

The `cipherCaesar` function encrypts a given text using the Caesar cipher method. It shifts each character in the text by a specified key value.

The `caesarDecrypt` function performs the decryption process for the Caesar cipher. It reverses the shift operation on each character in the encrypted text based on the key value.

The main operations are performed within the "main" function. Firstly, it obtains the student information and generates the encrypted text. The encrypted text is then written to the `encryptedText.txt` file.

Next, it verifies the student number with a password. If the password is correct, it reads the encrypted text from the file, decrypts it, and prints it to the screen.

This code represents a program that performs text encryption and decryption, using the Caesar cipher method, to securely store student information.

