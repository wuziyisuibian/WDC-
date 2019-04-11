
1. C++weekOne{

/********************************************************************/
2019/04/08{
1. 差别{
	<iostream>;
		实现是用模板；
		看到全部的实现；
		没有分头文件，.c
	(a)namespace;{
		防止命名冲突；
		定义：{
			using namespace wd;
			namespace wd{
				int number=100;
			}
			wd::number;
			(b)'::' 作用域限定符;
		}
		命名空间可以定义任意实体：函数，变量，结构体，类；
		
		两种使用方式；
		(1)using namespace std;//using 编译指令；
		//把命名空间的所有实体全部引用
		(2)wd::number;//作用域限定符
		(3)using std::cin;
		   using std::cout;
		   //首选using 声明机制
		   
		注：
		(1)先定义/声明再使用;
		(2)命名空间可以嵌套定义; wd::jsh::display();
		(3)变量使用就近原则;
		(4):: 全局作用域;
		//匿名的命名空间;
		(5)声明：
			namespace wd{
				void show();
			}
	}
	cout;
		'<<'C++运算符重载；
		'cout'一个对象;
	cin>>;{
	}
}

2.const关键字{
(1)用法:{
	(1)修饰常量：const int nu;
	(2)修饰指针:{
		(const int)*p:int (const *)p:
			//常量指针(point to const)
			不能修改*p=9;
			可以修改p=&num;
		int * (const p) = &num;
			//指针常量(const point)
			可以修改*p=9;
			不能修改p=&num;
		const int * const p=&num;
	}
	
	
(2)内置类型{//不需要自己定义的类型
	
}	
(3){
	int arr[10];
	数组指针:
	int (*p)[10]=arr;
	
	指针数组:
	int *p[10];
	
	/*********/
	函数类型；
	void display();
	函数指针:
	void(*p)()=display;
	typedef void(*p)();
	指针函数:
	
}

(99)注：{
	(1)const 变量必须初始化；
	(2)赋值与初始化
	(3)初始化方法：{
		int nu=1;
		int num(1);//类比string的初始化
	}
	(4)预处理>编译>汇编>链接>可执行文件;
	(5)宏定义发生时机,预处理,仅仅是字符替换;
		const发生时机:编译,有类型检查;
		/***多用const替换宏定义***/
	}
}
}
}

/*******************************************************************/
2019/04/09{
	
1.引用{
	(1)用法:{
		(1).将引用作为函数参数使用;
			//引用传递,比值传递效率高;
		(2).函数返回值;
		//没有复制,返回变量本身;
		//不要轻易返回堆空间的引用
		//可能会发生内存泄漏
		//如果返回的变量在堆区
		//需要内存回收的策略
		//返回的值生命周期要大于函数的生命周期(全局，堆.静态变量)
	}
	(2)参数传递{
		(1).值传递;
		(2).地址传递>值传递>复制;
		(3).引用传递;//直观
		
	}
	
	(99)注:{
		(1).引用必须初始化;
		(2).引用一经绑定不会再改变其指向;
		(3).优势,直接绑定实参,对形参的操作与实参保持一致;
		//更容易理解，更直观
		(4).函数返回引用时,不能返回局部变量;
		(5).赋值与初始化不同;		
		(6).C的头文件放在C++的上面,自己定义的放在最上面;
		(7).引用是变量的别名;
	}
}

2.左值右值{
	
	(99)注:{
		(1).左值可以取地址,右值不可以取地址;
		(2).左值能够存储在内存中,被持久化的对象;
		(3).右值,临时对象
	}
	
}

3.new{
	(1).int *p= new int(10);
	//申请，初始化，返回指针；
	>delete  p;
	(2).int *p=new int[10];
	//只会开空间不会初始化
	>int *p=new int[10]();
	//开空间，并初始化为0;
	>delete []p;
}

4.野指针内存泄漏内存踩踏{
	(1).野指针;
	//没有初始化;
	//free之后没有置NULL,nullptr;
	
}

5. malloc/free VS new/delete异同{
	/*
	new/delete是表达式;
	malloc/free是标准库函数;
	new表达式开空间的同时初始化;
	malloc只开辟空间,不初始化;
	
	*/
}

/*******/
6.强制类型转换{
	(1).int y=static_cast<int>(x);
	//grep static_cast *
	//grep static_cast * -n
	//查找;
	//wangchujiang.com/linux-command/
	/*dynamic_cast;
	  const_cast;*/
	/*reinterpret_cast
	  任意类型去转换;*/
	
}

7.函数重载{
	//C语言不支持函数重载;
	//C++支持函数重载;
	/*
	  原理:名字改编(name magling)
	  操作步骤:
	  函数名相同时,根据参
	数类型的顺序个数不同进
	行改编
	  g++ -o xxx.cc
	  nm xxxx.o  
	  addii;adddd;
	  
	#ifdef __cplusplus
	extern "C"{
	#endif
	
	int add(int,int){}
	
	#ifdef __cplusplus
	}
	#endif
	**目标:
	  用C的方式调用函数,C/C++混合编程;
	  */
}

8.默认参数缺省参数{
	
	/*
	int add(int x,int y=0){};
	add(a,b);
	add(a);***使用默认参数作为参数
	默认参数:
	  如果某个参数为默认参数;
	  后面的所有参数必须设置为默认参数;
	  从右往左设置;
	  若没有设置缺省参数的个数相同;
	  则会冲突;
	
	*/
}

9.bool{
	
	//C99:  _Bool类型
}

10.inline{
	inline
	int main(){}
	/* 
	功能与带参宏定义相同;
	减少函数调用的开销;
	比带参数的宏定义更安全,有类型检查;
	有循环语句的最好不要用inline函数;
	""首选当前目录;
	<>首选标准库头文件; /usr/include
	find / -name iostream
	
	声明和定义要放一起;
	不能分头文件和实现文件;
	*/
}

11.boost库{
	
	/*
	准标准库
	/usr/local/include
	*/
}

12.string{
	/*
	std::string s1="hello";
	C风格转换成C++风格字符串;
	
	const char *pstr=s1.c_str();
	const char *pstr=s1.data();
	C++风格转换为C风格字符串;
	
	获取字符串长度:
	s1.size();
	s1.lenth();
	
	字符串拼接:
	(1)s3=s1+s2;
	(2)s3.append("hello");
	
	截取子串:substr();
	查找子串:find();
	*/
}

13.内存布局{
	/*
	栈,堆,全局/静态区,文字常量区,程序代码区
	*/
}

//printf底层实现;
//malloc/free的底层实现;
//new/delete的底层实现;
}

git{
	git init
	git add <file>
	git commit -m <message>
	git log
	git log --pretty=oneline
	git reset --hard HEAD^
	//head~100
	git reset --hard 1094a[xxxxxxxxx(版本id)]
	git reflog
	git status
	git diff HEAD -- readme.txt
	git checkout -- readme.txt
	git reset HEAD <file>
	git rm <file>
	git push origin master
}

/******************************************************************/
2019/04/10{

(1)构造函数{
	
	/*
	Point pt(1,2);
	没有返回值;
	名字与类名相同;
	>创建对象,调用构造函数;
	 无参,调用默认构造函数;
	 没有默认构造函数时,Point pt报错;
	>没有显式定义构造函数时;
	 系统提供构造函数;
	>显示定义了构造函数时,
	 系统不再提供构造函数,
	 需要自己定义无参构造函数;
	 
	>初始化表达式/初始化列表;
	 Point(int ix=0,int iy=0)**默认值
	 :_ix(ix),_iy(iy)//初始化
	 {
		 //赋值与初始化不同
	 }
	
	>初始化表达式/列表先后顺序
	 根据私有成员声明的位置相关;
	
	>复制构造函数;用已经存在的对象初始化对象;
	 若不显式定义,系统会自动提供;
	 Point(const Point &rhs)
	 :_ix(rhs._ix)
	 >问题:
	  复制的成员函数含有指针时,
	  直接拷贝地址,浅拷贝;
	  delete时,会delete两次;
	 >解决:
	  采用深拷贝
	 >类内可以访问其他对象的私有成员;
	 
	 >复制构造函数的第三种调用情况;
	  编译器有优化操作;
	  -fno*********************
	
	*/
	
	
}

(2)析构函数{
	~Point(){}
	/*
	>无参无返回值,析构函数只有一个;
	
	>系统自动为类提供默认构造函数,
	 析构函数;
	 
	>析构函数执行清理操作;
	 释放堆空间必须定义析构函数;
	
	>定义 堆 对象;
	 delete时调用析构函数;
	 
	 
	*/
}

(88)练习{
	1.memory.cc{
		/*
		全局变量;
		自动初始化,即使没有显示初始化;
		常量区在下;
		全局静态区在常量区上;
		堆在全局静态区上;
		程序段在常量区之下;
		*/
	}
	
	2.computer.cc{
		class Computer
		{
		public:
			
		protected:
			
		private:
			char _brand[20];
			float _price;
		};
		/*
		自己定义的类名,第一个字母大写;
		数据成员加下划线 _brand;
		
		私有成员只能在类内部访问;
		保护成员,不能在类外访问;
		保护成员对其(派生类/子类)开放;
		
		>在类内部实现的函数默认inline函数;
		
		>类外部实现函数
		Computer::setBrand(){}
		
		class 默认私有;
		struct 默认public;
		
		函数对象;
		
		*/
	}
	//Computer2.cc
	3.point.cc
	//point2.cc
	
	
}

(99)注{
	(1).面向过程,面向对象{
		/*
		>面向对象:
		>对象属性:
			name;
			money;
		>对象动作:
			交钱;
			收钱;
			
		>执行动作的过程,消息传递;
		>导致对象状态的改变;
		
		抽象:
		对象 > 类;
		具体 > 一般;
		
		>封装/继承/多态
		
		*/
	}
	(2)浅拷贝/深拷贝{
		>:brand(new char[strlen(brand)+1]())
		浅拷贝:复制指针;
		深拷贝:复制内容;
	}
	(3)对象占据的空间{
		char *;
		float;
		/*
		只和数据成员有关;
		内存对齐
		*/
	}
	
}	
	
}

/**************************************************************************************************************/
2019/04/11{

1.this指针{
	
	/*
	this 是隐含的参数(调用函数时存在);
	this 指针有const 保护;
	指针常量;
	*/
}

2.单例设计模式{
	>1. 该对象不是栈对象/全局对象,只能是堆对象;
	>2. 
	>3.
	/*
	该类有且仅有一个对象;
	看做全局变量;
	
	static Sig* get(){}
	定义静态指针,保存对空间的地址;
	(静态成员初始化sig * sig::p=nullptr)
	构造函数私有化;
	通过类名,调用公有(静态)成员函数,
	创建堆空间,地址保存到静态成员;
	
	>
	
	*/
}

(88)练习{
	(1)Point.cc{
		>
	}
	
	(2)Computer2.cc{
	   >Computer& Computer::operator=(const Computer & rhs)
		{
			_brand=rhs._brand;
			l_price=rhs._price;
		}
		/*
		赋值运算符函数;
		赋值操作分:左操作数,右操作数;
		>问题:
			1.double freee();
			2.原来的空间没有free();
		
		>修改{
			先回收,再深拷贝;
			delete []_brand;
			brand= new char[strlen(rhs._brand)+1]();
		}
		
		if(this != rhs){}
		
		pc1.operator=(pc2);
		
		*/
		
	}

	(3)NullPointer{
		
		/*
		指向空的对象指针;
		可以调用用不到数据成员的成员函数;
		
		*/
		
	}
	
	(4)point.cc{
		point pt=1;
		加上explicit;//implicit
		/*
		隐式转化;
		通过构造函数,创建临时对象,
		再将该临时对象初始化对象;
		explict
		Point(int x=0,int y=0):_ix(x),_iy(y)
		*/
		
	}
	
	(5)string.cc{
		//-fno**去掉创建时的优化操作;
	}
	
	(6)point2.cc{
		
		/*
		构造函数内是赋值;
		初始化在初始化列表;
		const成员只能在初始化列表初始化;
		*/
	}
	
	(7)point3.cc{
		/*
		引用成员只能在初始化列表中初始化;
		*/
	}
	
	(8)point4.cc{
		//对象成员
		/*
		没有显式初始化列表;
		: _pt1(x1,x2)
		, _pt2(x1,x2)
		放在初始化列表中初始化;
		
		*/
	}
	
	(9)Computer.cc{
		//静态成员;
		/*
		位于全局静态区;
		不占对象空间;
		被整个类的所有对象共享;
		*/
		
		/*
		静态成员初始化在类外;
		double Computer::totalPrice=0;
		
		不能直接访问;
		
		静态成员函数内部,
		不能访问非静态成员,
		只能访问静态成员函数和数据成员;
	   >因为静态成员函数没有隐含的this指针;
		
		>可以通过类名调用静态成员函数;
		*/
		
		/*
		const 成员函数;
		void Computer::print() const{}
		
		非const成员函数可以修改数据成员;
		const 成员函数不能修改数据成员;
		
		Computer *const this
		>Computer const *const this
		
		const成员函数内不能访问非const的成员函数,
		因为在非const成员函数内可能修改数据成员;
		
		非const函数和const函数可以重载,
		this指针不一样;
		
		非const与const的调用时机:
		>非const对象
		 首选调用非const版本成员函数;
		 也可以调用const成员函数;
		>const对象只能调用const版本成员函数;
		 const Computer pc3;
			
		*/
		
	}
	
	(10)singleleton.cc{
		
	}
	
}

(99)注{
	>赋值运算符函数
	(返回引用),
	 为了连续操作,
	 pc1=pc2=pc3;
	>
}
	
(100)复习{
	0>标准库中的组件(component)
	  都是小写的;
	1>自定义的类型都是大写的,
	  与标准库的组件进行区分;
	2>先public再private, 数据成员+'_';
	3>代码能够自解释;
	4>空类占据的存储空间1字节;
	  默认构造函数;
	  析构函数;
	  复制构造函数;
	  赋值运算符函数;
	5>复制构造函数的形参要引用;
	6>非const 引用不能绑定到右值;
	  const 引用可以绑定到右值,左值;
	
}

//一个成员函数没有修改数据成员,
//就设置为const函数;	
}



}









