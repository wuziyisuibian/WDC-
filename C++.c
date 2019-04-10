
/**********************************/
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



/*************************/
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
	//delete  p;
	(2).int *p=new int[10];
	//只会开空间不会初始化
	//int *p=new int[10]();
	//开空间，并初始化为0;
	//delete []p;
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
}
