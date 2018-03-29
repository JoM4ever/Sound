#define ESC 0x1B
// constant definitions
enum COLORS {BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};

//function prototype
void clearScreen(void);
void gotoxy(int row, int col);
void setColor(int color);
void dispBar(int col, double dB);
