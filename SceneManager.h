#pragma once
#include <iostream>
#include <memory>

class SceneBase;

class SceneManager
{
	std::unique_ptr<SceneBase> currentScene;
	bool isRunning = false;
	float gameTime = 0.0f;


	SceneManager(std::unique_ptr<SceneBase> initialScene);
public:

	SceneManager(const SceneManager&) = delete;
	SceneManager& operator=(const SceneManager&) = delete;

	static SceneManager& Instance(std::unique_ptr<SceneBase> initialScene)
	{
		static SceneManager instance(std::move(initialScene));
		return instance;
	}

	void ChangeScene(std::unique_ptr<SceneBase> nextScene);

	void Update(float deltaTime);

};