.model small
.stack 100h
.data
msg db "IM STUDENT"
.code
main proc
    mov ax,@data
    mov ds,ax
    mov bx,offset msg
    mov cx,10
    
 l1: 
 
 cmp [bx] ,20h
 je e
 add [bx],32
 
 e:mov dx,[bx]
 mov ah,02
 int 21h
 inc bx
 loop l1
endp
end main



include 'emu8086.inc' 
.model small
.stack 100h
.data
inpt db 10 dup(?)
.code
main proc
    mov ax,@data
    mov ds,ax
    mov cx,10
    
    print "Enter the String:"
     
     
   input:
   mov ah,01 
   int 21h
   mov [si] ,al
   inc si
   loop input  
   
   mov ah,2
   mov dl,10
   int 21h
   mov dl,13
   int 21h
   
   mov cx,10
   mov si,offset inpt
   print "Your string in a Uppercase is:"
   output:
   mov dl,[si]
   mov ah,2
   int 21h
   inc si
    loop output 
    
endp
end main
   
                        