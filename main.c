#include "main.h"

int main() {
    int num_chars = _printf("Hello, %s! I am %c. This is a percent sign: %%.\n", "John", 'A');
    
    printf("Number of characters printed: %d\n", num_chars);
    _printf("Let's try to printf a simple sentence.\n");
    _printf("Character:[%c, %c]\n", 'H', 'B');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    return (0);
}
