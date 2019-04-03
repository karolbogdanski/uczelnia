;iloczyn
mov al,[zma]
mov bl,[zmb]

mul bl
add al,48
mov [wynik],al

mov rax,4
mov rbx,1
mov rcx,wynik
mov rdx,2
int 80h
