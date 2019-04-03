extern printf
global main

section .data

napis: db "Welcome to hell." ,10,0
liczba_iteracji: equ 4

section .text

main:
	mov rbx, 0

petla:
	mov rdi, napis
	xor rax, rax
	
	call printf
	
	add rbx, 1
	cmp rbx, liczba_iteracji
	jb petla
	
	mov rax, 1
	mov rbx, 0
	int 80h
