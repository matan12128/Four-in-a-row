char** create_board (int clum);
void print_board (char** matrix);
bool get_coordinate (int* j, int* i, char** matrix);
void put_X(int j, int i, char** matrix);
void put_Y(int j, int i, char** matrix);
int sum_X_left (int j , int i, char** matrix);
int sum_X_right (int j , int i, char** matrix);
int sum_X_up (int j , int i, char** matrix);
int sum_X_down (int j , int i, char** matrix);
int sum_Y_left (int j , int i, char** matrix);
int sum_Y_right (int j , int i, char** matrix);
int sum_Y_up (int j , int i, char** matrix);
int sum_Y_down (int j , int i, char** matrix);
bool check_win (char** matrix, char c, int j, int i);
bool check_tie (char** matrix);
void ask_for_move (int counter);
