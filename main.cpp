#include <iostream>
#include <GL/freeglut.h> // Importando o OpenGL no projeto.

using namespace std;

// Função de callback para desenhar a cena na tela.
void desenha()
{
    glClear(GL_COLOR_BUFFER_BIT); // Apagando o frame buffer.
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Mudando o fundo da tela.

    // Primeira primitiva
    glBegin(GL_TRIANGLES); // Inicio do macro (liga tres pontos formando triângulo)
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.5f, -0.5f);
        glVertex2f(-0.5f, -0.5f);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(-0.5f, 0.5f);
    glEnd();

    glBegin(GL_TRIANGLES); // Inicio do macro (liga tres pontos formando triângulo)
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(-0.5f, 0.5f);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(0.5f, -0.5f);
    glEnd();

    glutSwapBuffers(); // Exibe a cena (carrega a imagem sintetizada no frame buffer)

}

int main(int argc, char * argv[])
{
    glutInit(&argc, argv); // Inicializando o OpenGL.
    glutInitWindowSize(800, 600); // Dimensionando a janela.
    glutCreateWindow("Meu primeiro exemplo de OpenGL"); // Cria a janela
    glutDisplayFunc(desenha); // Vinculando uma função para desenho.
    glutMainLoop(); // Inicializa a aplicação gráfica.
    return 0;
}
