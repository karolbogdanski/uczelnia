extern printf
extern scanf
global main

section .data

	przedzial: db "Podaj liczbę od 1 do 5",10,0
	format: db "%d",0
	napis1: db "%d",10,0
	nie_nalezy: db "%d nie nalezy do przedziału",10,0

section .bss

	x: resd 1

section .text
main:

	xor eax, eax
	
petla:
	
	mov rdi, przedzial
	xor eax, eax
	call printf
	
	mov rdi, format
	mov rsi, x
	xor eax, eax
	call scanf
	
	cmp rax, 0
	jz koniec
	
	mov rbx, [x]
	cmp rbx, 1
	jb blad 
	jz drukuj
	
	cmp rbx, 5
	ja blad
	jz drukuj
	
	cmp rbx, 2
	jz drukuj
	
	cmp rbx, 3
	jz drukuj
	
	cmp rbx, 4
	jz drukuj

	
drukuj:
	
	mov rdi, napis1
	mov rsi, [x]
	xor eax, eax
	call printf
	
	jmp petla
	
blad:
	
	mov rdi, nie_nalezy
	mov rsi, [x]
	xor eax, eax
	call printf
	
koniec:
	ret
