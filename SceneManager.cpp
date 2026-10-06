#include "SceneManager.h"
#include "SceneBase.h"

SceneManager::SceneManager(std::unique_ptr<SceneBase> initialScene)
	:currentScene(std::move(initialScene)), isRunning(true), gameTime(0.0f)
{
	if (currentScene)
	{
		currentScene->OnEnter(this);
	}
}

void SceneManager::ChangeScene(std::unique_ptr<SceneBase> nextScene)
{
	currentScene->OnExit(this);
	currentScene = std::move(nextScene);
	currentScene->OnEnter(this);
}

void SceneManager::Update(float deltaTime)
{
	gameTime += deltaTime;

	currentScene->OnUpdate(this, gameTime);
}