; define glfw externals
extern _glfwInit
extern _glfwCreateWindow
extern _glfwTerminate
extern _glfwMakeContextCurrent
extern _glfwWindowShouldClose
extern _glfwSwapBuffers
extern _glfwPollEvents
extern _glfwDestroyWindow

; tidy up the c++ decorating
glfwInit                equ    _glfwInit
glfwCreateWindow        equ    _glfwCreateWindow
glfwTerminate           equ    _glfwTerminate
glfwMakeContextCurrent  equ    _glfwMakeContextCurrent
glfwWindowShouldClose   equ    _glfwWindowShouldClose
glfwSwapBuffers         equ    _glfwSwapBuffers
glfwPollEvents          equ    _glfwPollEvents
glfwDestroyWindow       equ    _glfwDestroyWindow