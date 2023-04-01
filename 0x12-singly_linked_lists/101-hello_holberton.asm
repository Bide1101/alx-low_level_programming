section .data
    msg db 'Hello, Holberton',0x0A,0 ; define the message to be printed with newline

section .text
    global main     ; define the entry point of the program
    extern printf   ; declare printf function

main:
    push rbp        ; save the base pointer
    mov rbp, rsp    ; set the stack frame pointer

    mov rdi, msg    ; Loads address of the message into the first argument register
    mov rax, 0      ; Set the floating-point return value to zero
    call printf     ; Call the printf function to print the message

    mov rsp, rbp    ; restore the stack pointer
    pop rbp         ; restore the base pointer
    mov rax, 0      ; set the return value to 0
    ret             ; return
