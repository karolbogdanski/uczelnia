extern printf
extern scanf

global main

section .data

	napis: db "x = %d y= %d x*y = %d", 10, 0
	format: db "%d", 0

section .bss
	x: resd 1
	y: resd 1

section .text

main:
	mov rdi,format
	mov rsi, x
	mov rax, 0
	call scanf

	mov rdi,format
	mov rsi, y
	mov rax, 0
	call scanf

	mov eax, [x]
	mul dword [y]

	mov rdi, napis 
	mov esi, [x]
	mov edx, [y]
	mov rcx, rax
	sub rax, rax

	call printf

mov rax, 1
mov rbx, 0
int 80h