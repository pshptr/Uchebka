
use 16
model .smasll
org 100h
        mov dx , hello
        mov ah , 9
        int 21h
        mov ax , 4C00h
        int 21h

hello db 'Hello, World!$'