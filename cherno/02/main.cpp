#include <iostream>

class Entity
{
public:
	float X,Y;

	void Move(float xa, float ya)
	{	
		this->X += xa;
		this->Y += ya;
	}
};

class Player : public Entity
{
public:
	const char* Name;

	void PrintName()
	{
		std::cout << this->Name << std::endl;
	}
};

void PrintXandY(const Entity& entity)
{
	std::cout << entity.X << std::endl;
	std::cout << entity.Y << std::endl;
}

int main()
{
	Player p1;
	p1.Name = "bruce";
	p1.PrintName();
	p1.X = 5;
	p1.Y = 5;
	PrintXandY(p1); // 即使函数的参数类型不是Player，但也可以传入Player，因为Player是Entity的超集
	std::cout << sizeof(Entity) << std::endl;	// 8  Bytes
	std::cout << sizeof(Player) << std::endl;	// 16 Bytes (Player里多存了一个char* 对于64位的系统和编译器，指针占8个字节)

	std::cin.get();
}