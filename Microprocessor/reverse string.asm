  .model small
  .data
  str db "jenishpkl$"
  msg db "Length=$"
  len db 0
  .code
  mov ax,@data 
  mov ds,ax
  mov si,offset str
  
  l:
  mov al,[si]
  cmp al,'$'
  je exit
  inc si
  inc len
  
  loop l
  exit:
  mov dx,offset msg
  mov ah,09h
  int 21h 
  
  mov dl,len
  add dl,30h
  mov ah,2h
  int 21h 
  
  mov ah,4ch
  int 21h
  
                    
                    
  
  