extern printf
extern scanf
global main

section .data

	format: db "%d",0
	napis: db "Liczba 1: %d Liczba 2: %d Suma: %d" ,10,0
	
section .bss

	x: resd 1
	y: resd 1

section .text

main:
	
	mov rdi, format
	mov rsi, x
	mov rax, 0
	call scanf
	
	mov rdi, format
	mov rsi, y
	mov rax, 0
	call scanf
	
	cmp eax, 0
	jz koniec
	
	mov eax, [x]
	add eax, [y]
	
	mov rdi, napis
	mov esi, [x]
	mov edx, [y]
	mov ecx, eax
	mov eax, 0
	call printf
	jmp main
	
koniec:	ret
