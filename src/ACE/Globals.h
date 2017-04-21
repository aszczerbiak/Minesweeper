#ifndef AGE_GLOBALS_H
#define AGE_GLOBALS_H

#include <SDL.h>

namespace AGE
{

/**
 * The title of the game window.
 */
const char windowTitle[] = "Minesweeper";

/**
 * Holds current screen width in pixels unit.
 */
extern int screenWidth;

/**
 * Holds current screen height in pixels unit.
 */
extern int screenHeight;


/**
 * The window that everything will be rendered on.
 */
extern SDL_Window *window;

/**
 * The surface contained by the window.
 */
extern SDL_Surface *screenSurface;

/**
 * The surface containing minesweeper tiles:
 */
extern SDL_Surface *msTilesSurface;

} // namespace AGE

#endif // AGE_GLOBALS_H
