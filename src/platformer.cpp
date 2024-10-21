//
// Created by Denis Flynn on 21/10/2024.
//
//platformer.cpp

/*******
    !!!!! Please note that this is placeholder code, 
    the final version should consist of less than 10 (or less again) lines of code.
*******/

#include "engine.h"

class MenuScene : public Scene {
public:
    MenuScene() = default;
    ~MenuScene() override = default;

    void Load() override;

    void Update(const double& dt) override;
};
void MenuScene::Load()
{
    std::cout << "MenuScene Loaded\n";
    setLoaded(true);
}
void MenuScene::Update(const double& dt)
{
    std::cout << "MenuScene Updated\n";
}

using namespace std;

MenuScene menu;
//Level1Scene level1;
//Level2Scene level2;
//Level3Scene level3;

int main() {
    Engine::Start(1280, 720, "Platformer",&menu);
}
