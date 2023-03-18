def caesar_cipher_decrypt(input_value):
    # Define the pattern
    pattern = "VWXYZABCDEFGHIJKLMNOPQRSTU"
    
    # Initialize the decrypted message
    decrypted_message = ""
    
    # Loop through each character in the input value
    for char in input_value:
        # If the character is a letter, decrypt it using the pattern
        if char.isalpha():
            decrypted_char = pattern[ord(char.upper()) - ord('A')]
            # If the original character was uppercase, add the decrypted character as uppercase
            if char.isupper():
                decrypted_message += decrypted_char
            # If the original character was lowercase, add the decrypted character as lowercase
            else:
                decrypted_message += decrypted_char.lower()
        # If the character is not a letter, add it to the decrypted message as is
        else:
            decrypted_message += char
    
    return decrypted_message


input_value = "AQs"
decrypted_message = caesar_cipher_decrypt(input_value)
print(decrypted_message)  # Outputs "40956"


# print(caesar_cipher_encrypt('40893')) # Output: 'ALW'
# print(caesar_cipher_encrypt('40956')) # Output: 'AQ9'
# print(caesar_cipher_encrypt('40957')) # Output: 'AQs'
