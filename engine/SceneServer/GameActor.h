#pragma once
#include <functional>
#include <vector>
#include <set>
#include "Vector.h"
//#include "GameScene.h"

enum ActorType
{
	UNKNOW = 0,
	PLYAER = 1,
	NPC = 2,
};

#define GRID_X_SIZE 10
#define GRID_Y_SIZE 10

typedef Vector2<float> Position;
typedef Vector2<int> Grid;

typedef std::function<void(int, Grid*)> GridChgFunc;

class GameActor
{
protected:
	int m_actorId;
	int m_moveSpeed; 
	ActorType m_actorType;
	GridChgFunc m_gridChgFunc;

	void* m_gameScene;

	std::set<int> m_sightActors; // 视野中的角色

	Position m_pos; // 当前位置
	Grid m_grid; // 所处格子
	std::vector<Position> m_tgtPosList;  // 移动的目标位置
	int64_t m_lastMoveTime;	// 上次计算移动的时间戳(更新位置是使用)
public:

	GameActor(ActorType actorType, int actorId, void* gameScene, GridChgFunc posChgFunc);
	GameActor(ActorType actorType, int actorId, int x, int y, void* gameScene, GridChgFunc posChgFunc);

	inline int getActorId() { return m_actorId; }

	inline void setMoveSpeed(int speed) { m_moveSpeed = speed; }
	inline int getMoveSpeed() { return m_moveSpeed; }
	inline int getX() { return m_pos.x; }
	inline int getY() { return m_pos.y; }
	inline int getGridX() { return m_grid.x; }
	inline int getGridY() { return m_grid.y; }
	inline ActorType getActorType() { return m_actorType; }
	inline bool isPlayer() { return m_actorType == PLYAER; }
	inline bool isNpc() { return m_actorType == NPC; }

	void addSightActors(std::set<int>& actors);
	void addSightActor(int actorId);
	void removeSightActors(std::set<int>& actors);
	void removeSightActor(int actorId);

	void setTgtPosList(std::vector<Position> tgtPosList);

	inline bool isMoving() {
		return !m_tgtPosList.empty();
	}

	void setPos(float x, float y, bool isTemp=false);
	void updatePos(int64_t ts);

	virtual void test() {};
};

