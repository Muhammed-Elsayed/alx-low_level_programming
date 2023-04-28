section .data
    format db 'Hello, Holberton!', 10, 0 ; 10 is the ASCII code for a new line character

section .text
    global main

main:
    push rbp
    mov rbp, rsp

    ; call printf with the format string
    mov rdi, format
    xor esi, esi ; set the second argument to 0 (no arguments to substitute)
    mov eax, 0 ; set the return value to 0
    call printf

    mov rsp, rbp
    pop rbp
    ret
