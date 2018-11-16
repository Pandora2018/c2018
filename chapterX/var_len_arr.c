int main(void)
{
	double test[ROWS][COLS], des[ROWS][COLS];
	
	mkd_arr(ROWS, COLS, test);
	copyd_arr(ROWS, COLS, test, des);
	shd_arr(ROWS, COLS, test);
	shd_arr(ROWS, COLS, des);
	
	return 0;
}
