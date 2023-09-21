section .data
    hello db 'Hello, Holberton', 0xA
    hello_len equ $-hello

section .text
    global _start

_start:
    ; write the string to stdout
    mov eax, 4
    mov ebx, 1
    mov ecx, hello
    mov edx, hello_len
    int 0x80

    ; exit the program
    mov eax, 1
    xor ebx, ebx
    int 0x80
