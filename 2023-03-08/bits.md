# Bit operations in C

- Bitwise AND (`&`)
- Bitwise OR (`|`)
- Bitwise XOR (`^`)
- Unary (One's complement) (`~`)
- Bit shift left (`x << 5`)
- Bit shift right (`y >> 6`)

char x = 8 (0b00000100);

x << 2 ~= x * 4
x = 0b00010000 (32)

x << 4 ~= x * 16  Watch out for overflow!
x = 0b00000000 (0)

## Check if x is negative
x = 0b10110101 (0xB5) (-75)
y = x >> 8*sizeof(char) - 1

## Take lower half
x = 0b10110101 (0xB5)
end = 0b00000101
y = x << 4
y = y >> 4

z = x & 0b00001111 (0x0F) (15)

a = x | 0b11110000
a = a ^ 0b11110000

## Print a character in binary
The quick brown fox jumped over the lazy dog!

c = T (0x54) (0b01010100)

for (i = CHAR_BIT, i > 0, i--)
  c >> i - 1 
  c = c & 1
  print(c)

