global main 
default rel 

extern scanf
extern printf 


section .data

dziesiec dd 10
format db "%d ",0
tab TIMES 100 dd 0
format2 db 10 


section .text
main:

push rbp
mov rbp,rsp              ;wkladanie na stos 



;--------------------------------------------------------------------------------------------------------------------wypelnienie tablicy 

mov r12d,0               ;licznik  


;---------------------------------------------------petla  for(int i = 0 ; i < 100 , i++ )
_petla:
cmp r12d,100             ;warunek petli 
je _dalej

mov eax,r12d
xor edx,edx              ;xorujemy w celu pozbycia sie smieci 
div dword[dziesiec]      ;dzielenie w celu rodzielenia liczby na czynniki (np: 17/10 -->  1 - cakowite | 7 - reszta z dzielenia ) 
mov r13d,eax             ;wiersz - calkowite (np: 1 ) 
mov r14d,edx             ;kolumna - reszta z dzielenia  (np: 7 ) 
add r14d,r13d            ;suma 
mov [tab+4*r12d],r14d    ;uzupelnienie tablicy suma liczb

inc r12d

jmp _petla
;---------------------------------------------------koniec petli   













;--------------------------------------------------------------------------------------------------------------------wypisanie 

_dalej:
mov r12d,0              ;licznik  - licznik liczb w wierszu 
mov r15d,0              ;licznik  - licznik wierszy


;--------------------------------------------------------petla zew 
_endl:
cmp r15d,11             ;warunek 
je _koniec 

mov rdi,format2         ;wypisanie konca linii
xor rax,rax         
call printf wrt ..plt 

inc r15d 
mov r13d,0

;----------------------------------------------petla wew
_loop:
cmp r13d,10 
je _endl


mov rdi,format          ;
mov esi,[tab+4*r12d]    ;wypisanie kolejnych komuerk tablicy        
xor rax,rax             ;
call printf wrt ..plt   ;


inc r12d
inc r13d

jmp _loop

;-------------------------------------- koniec petli wew 

;---------------------------------------------------koniec petli zew 







;--------------------------------------------------------------------------------------------------------------------koniec 
_koniec:

mov rsp,rbp            ;zdejmowanie ze stosu
pop rbp


mov rax,1
xor rbx,rbx
int 80h

 
