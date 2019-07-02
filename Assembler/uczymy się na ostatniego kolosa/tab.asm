extern printf
extern scanf
global main

section .data

	format: db "%d",0
	tab1: times 10 dd 0
	napis: db "%d ",10,0

section .bss

	tab2: resd 10
	x: resd 1 
	
section .text
main:

	mov rbx, tab1
	mov edx, 0
	
fill:
	cmp edx, 10
	je drukuj
	
	push rdx
	call pobierz
	pop rdx
	
	mov r12d, [x]
	mov [rbx + 4*rdx], r12d
	
	inc edx
	jmp fill
	

drukuj:
	
	cmp edx, 0
	je koniec
	dec edx
	push rdx
	
	mov rdi, napis
	mov rsi, [rbx + 4*rdx]
	xor eax, eax
	call printf
	
	pop rdx
	jmp drukuj
	
koniec:
	ret

pobierz:
	
	mov rdi, format
	mov rsi, x
	xor eax, eax  
	call scanf
	
