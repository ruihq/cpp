#include <windows.h>

int main() {
    HINSTANCE hInstance = GetModuleHandle(NULL);
    int result = MessageBox(NULL, "Is yumi an wiredo?", "is wired?", MB_YESNO | MB_ICONQUESTION);
    
    if (result == IDYES) {
        // user clicked "Yes"
    } else {
        // user clicked "No"
    }
    return 0;
}

