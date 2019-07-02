extern printf, scanf
global main

section .data

napis1: db "Liczba %d jest podzielna przez %d",10,0
napis2: db "Liczba %d nie jest podzielna przez %d",10,0

format: db "%d",0

section .bss

x: resd 1
y: resd 1

section .text
main:

xor eax, eax

mov rdi, format
mov rsi, x
xor eax, eax
call scanf

mov rdi, format
mov rsi, y
xor eax, eax
call scanf

mov eax, [x]
mov ebx, [y]
xor rdx, rdx
div ebx

cmp rdx, 0
jz podzielne

niepodzielne:
	
	mov rdi, napis2
	mov rsi, [x]
	mov rdx, [y]
	xor eax, eax
	call printf
	jmp koniec
	
podzielne:
	
	mov rdi, napis1
	mov rsi, [x]
	mov rdx, [y]
	xor eax, eax
	call printf

koniec:
	ret
