#include <iostream>

int main(int argc, char* argv[])
{
	for (int i = 1; i <= 100; ++i)
	{
		auto result = "";
		//判定処理をここに書いてください
		if (i % 15 == 0) {
			result = "hogepiyo";
		}
		else if (i % 3 == 0) {
			result = "hoge";
		}
		else if (i % 5 == 0) {
			result = "piyo";
		}
		else {
			std::cout << i << std::endl;
			continue;
		}
		std::cout << result << std::endl;
		//出力は以下の形式を使用してください
		//std::cout << i << std::endl;		//数字を出力する
		//std::cout << "hoge" << std::endl;	//文字列を出力する
	}

    return 0;
}