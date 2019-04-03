extern printf
extern scanf
global main

section .data

	format: db "%d",0
	pytanie: db "Podaj swój wiek: ",0,10
	napis: db "Twój wiek: %d Rok obecny: 2019 Rok Twojego urodzemia: %d",0,10
	rok: equ 2019
	
section .bss
	
	x: resd 1	
	
section .data

main:

	mov rdi, pytanie
	xor rax, rax
	call printf

	mov rdi, format
	mov rsi, x
	xor rax, rax
	call scanf
	
	mov eax, rok
	sub eax, [x]
	
	
	mov rdi, napis
	mov esi, [x]
	mov edx, eax
	xor rax, rax
	call printf
	
	ret
	
