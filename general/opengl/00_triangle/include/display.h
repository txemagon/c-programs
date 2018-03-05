#ifndef  display_INC
#define  display_INC

#include <SDL2/SDL.h>
#include <string>

class Display
{
    public:
        Display(int width, int height, const std::string &title);
        void clear(float r, float g, float b, float a);
        void Update();
        bool IsClosed();
        virtual ~Display();

    protected:
    private:
        Display(const Display &other) {}
        void  operator=(const Display &other) { }

        SDL_Window *m_window;
        SDL_GLContext m_glContext;

        bool m_isClosed;
};

#endif   /* ----- #ifndef display_INC  ----- */
