; Begin cdecl calling convention (store stack state)
%macro cdecl_begin 0
    push ebp
    mov ebp, esp
%endmacro

; End cdecl calling convention (restore stack state)
%macro cdecl_end 0
    mov esp, ebp
    pop ebp
%endmacro

; Convenience function for pushing a float on the stack
%macro pushfloat 1
    fld dword [%1]
    sub esp, 4
    fstp dword [esp]
%endmacro