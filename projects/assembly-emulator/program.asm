%include <assembly.cpp>

segment .data

segment .bss

segment .text
    global asm_main

asm_main:
    mov eax, 10
    mov ebx, 5
    add eax, ebx
    sub eax, 3
    
    call print_int
    call print_nl
    call print_nl

    call reg_dump