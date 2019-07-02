extern printf
extern scanf
global main

section .data

	napis: db "Liczba 1: %d Liczba 2: %d Roznica: %d"

	format: db "%d", 0

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
	
	;cmp eax, 0
	;jz koniec
	
	mov eax, [x]
	sub eax, [y]
	
	mov rdi, napis 
	mov esi, [x]
	mov edx, [y]
	mov ecx, eax
	xor eax, eax

	call printf
	
koniec: ret
