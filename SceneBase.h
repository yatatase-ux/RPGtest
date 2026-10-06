#pragma once
#include <memory>

class SceneManager;

class SceneBase
{
protected:

public:
	virtual ~SceneBase() = default;

	virtual void OnEnter(SceneManager* manager) = 0;
	virtual bool OnUpdate(SceneManager* manager, float deltaTime) = 0;
	virtual void OnExit(SceneManager* manager) = 0;
};

#define SCENE_CLASS(className)\
	~className()override = default;\
	void OnEnter(SceneManager* manager) override;\
	bool OnUpdate(SceneManager* manager, float deltaTime) override;\
	void OnExit(SceneManager* manager) override;

#define SCENE_ENTER(className)\
	void className::OnEnter(SceneManager* manager)

#define SCENE_UPDATE(className)\
	bool className::OnUpdate(SceneManager* manager, float deltaTime)

#define SCENE_EXIT(className)\
	void className::OnExit(SceneManager* manager)