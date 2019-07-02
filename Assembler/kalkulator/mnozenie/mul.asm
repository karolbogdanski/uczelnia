extern printf
extern scanf
global main

section .data

	format: db "%d",0
	napis: db "Pierwsza liczba: %d Druga liczba: %d Mnożenie: %d",10,0

section .bss

	x: resd 1
	y: resd 1

section .text
	
main:
	mov rdi, format
	mov rsi, x
	xor rax, rax
	call scanf
	
	mov rdi, format
	mov rsi, y
	xor rax, rax
	call scanf

	mov rax, [x]
	mov rbx, [y]
	mul rbx

	mov rdi, napis
	mov rsi, [x]
	mov rdx, [y]
	mov rcx, rax
	xor rax, rax
	call printf

	ret
