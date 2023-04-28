#include <windows.h>

int main() {
    HINSTANCE hInstance = GetModuleHandle(NULL);
    int result = MessageBox(NULL, "Is yumi an wiredo?", "is wired?", MB_YESNO | MB_ICONQUESTION);
    
    if (result == IDYES) {
        // user clicked "Yes"
        MessageBox(NULL, "ok you cool", "cool ending", MB_OK | MB_ICONQUESTION);
    } else {
        // user clicked "No"
        MessageBox(NULL, "you not cool", "notcoolending", MB_OK | MB_ICONQUESTION);
    }
    return 0;
}

