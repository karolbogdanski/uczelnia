default rel 
global main 

extern printf 
extern scanf 

section .data
format2 db "ilczba najmniejsza to  %d",10,0
format db "%d",0

tab TIMES 10 dd 0 ;powtarza 10 razy db wartosc poczatkowa 0

section .text

main:

push rbp
mov rbp,rsp 


;----------------------------------tworzenie tablicy 
mov r12,tab
mov r13,0

_loop:

cmp r13,10
je _dalej 

inc r13 

mov rdi,format
mov rsi,r12
xor rax,rax
call scanf wrt ..plt


add r12,4

jmp _loop


;------------------------------------dalej


_dalej:
mov r14d,[tab]
mov r13,1

_petla:



cmp r13,10
je _koniec 


cmp r14d,[tab+(4*r13)]
jl _mniejsze 

mov r14d,[tab+4*r13]

_mniejsze:
inc r13
jmp _petla



;--------------------------------------koniec 
_koniec:
mov rdi,format2
mov esi,r14d
xor rax,rax
call printf wrt ..plt

mov rsp,rbp
pop rbp

mov rax,1
xor rbx,rbx
int 80h