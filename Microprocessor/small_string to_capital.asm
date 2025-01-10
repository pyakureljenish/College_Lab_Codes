.model small
.stack 100h
.data
STRING DB 'welcome to tu'
case DB 13 DUP('')
.code
main  proc
    mov Ax,@DATA
    mov DS,AX
    LEA SI, STRING
    LEA DI,CASE
    MOV CX,13
    TOP:
    CMP CX,0000H
    JE EXIT
    MOV AH,[SI]
    CMP AH,60H
    JA ISSMALL
    CMP AH,5AH
    JB ISCAP
    
    ISSMALL:
    AND AH,11011111B
    MOV [DI],AH
    INC SI
    INC DI
    DEC CX
    JMP TOP
    
    ISCAP:
    OR AH,00100000B
    MOV [DI],AH
    INC SI
    INC DI
    DEC CX
    JMP TOP
    
    EXIT:
    MOV AL,'$'
    MOV [DI],AL
    MOV DX,OFFSET CASE
    MOV AH,09H
    INT 21H
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN