#pragma once

#include "Shader.h"

#include <GLM/glm.hpp>
#include <GLM/gtc/matrix_transform.hpp>
#include <GLM/gtc/type_ptr.hpp>

class SceneManager {
public:
	SceneManager();
	~SceneManager();
	void initialize(GLuint width, GLuint height);
	void initializeGraphics();

	void addShader(string vFilename, string fFilename);

	// GLFW callbacks
	static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
	static void resize(GLFWwindow* window, int width, int height);

	void do_movement();
	void render();
	void run();
	void finish();

	// Scene
	void setupScene();
	void setupCamera2D();

private:
	// GFLW window
	GLFWwindow *window;
	// Our Shader Program
	Shader *shader;
	// Scene attributes
	GLuint VAO;
	// Transformations - Model Matrix
	glm::mat4 model;
	// 2D Camera - Projection matrix
	glm::mat4 projection;
	// 2D Camera - Projection matrix
	glm::mat4 projection3;
	// Translation
	glm::mat4 translation;
};

