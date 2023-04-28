global   main
extern   printf
main:
    mov     edi, format
    movabs  rax, 0
    call    printf
    mov     eax, 0
    ret
format: db 'Hello, Holberton',10,0
