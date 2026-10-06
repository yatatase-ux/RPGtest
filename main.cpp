#include <iostream>
#include <memory>
#include <conio.h>

#include "SceneManager.h"
#include "SceneStartup.h"

int main()
{
//	SceneManager sceneManager(std::make_unique<SceneStartup>());

		
    while (1)
    {
        SceneManager::Instance(std::make_unique<SceneStartup>()).Update(1.0f);

        // ESCキーで終了
        if (_kbhit())
        {
			int key = _getch();

            if(key == 27) // ESC key
            {
                std::cout << "Exiting the game..." << std::endl;
                break;
			}
        }
    }
}
