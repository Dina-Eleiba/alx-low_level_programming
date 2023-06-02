Section text
extern printf
global main
main:
mov edi, msg
mov eax, 0
call printf
Gisection .data
msg db 'Hello, Holberton', Oxa, 0
