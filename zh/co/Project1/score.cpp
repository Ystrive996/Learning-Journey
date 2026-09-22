//id是高低难度，1低难度，2高难度,aa是出题函数的返回值，可改分数值
int score(int id, bool aa)
{
	if (aa)
	{
		if (id == 1)
			return 5;//低难度
		return 10;//高难度
	}
	return 0;
}


/*
两个方案，一个是用户自己选择高低难度，一个是达到一定分数，用if语句自动切换高低难度。
首先设置全局变量userscore,在while循环中，低难度和高难度整合成两个出题函数，返回类型为bool型，正确返回1，错误返回0，
然后userscore += score( , )
最后时间到，循环结束，返回useranswer*/