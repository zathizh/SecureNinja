section .data
msg db "Sample Assembly Program", 0xa

section .text

global _start

_start:

; Place system call number in eax, and
; arguments in ebx,ecx,edx... etc in the order
; they appear in the corresponding man page

; ssize_t write(int fd, const void *buf, size_t count)
; /usr/include/i386-linux-gnu/asm/unistd_32.h
; #define __NR_write		  4

mov eax, 4
mov ebx, 1
mov ecx, msg
mov edx, 24
int 0x80

; Place system call number in eax, and
; arguments in ebx,ecx,edx... etc in the order
; they appear in the corresponding man page

; void _exit(int status); 
; /usr/include/i386-linux-gnu/asm/unistd_32.h
; #define __NR_exit		  1
mov eax, 1
mov ebx, 0
int 0x80
