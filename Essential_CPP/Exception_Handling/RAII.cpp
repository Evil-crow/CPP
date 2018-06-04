#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main(void)
{
    int *p = new int;
    m.acquiration();

    process(p);            // 如果在process()中抛出异常使得程序意外终止, 那么m, p的资源就无法释放了
    m.release();
    delete p;
}

// 一种解法是: try()子块内进行检测, catch()子块内进行资源释放

try {
    ...
}
catch {
    m.release();
    delete p;
}

// 但是,向上述这样做,会增加异常的查询以及处理效率

// 第二种方法: 大名鼎鼎的RAII,资源申请初始化

class MutexLock {
public:
    MutexLock(Mutex m) : _lock(m) {
        _lock.acquiration();
    }

    ~MutexLock() {
        _lock.release();
    }
private:
    Mutex &_lock;
};

void f()
{
    auto_ptr<int> p(new int);
    MutexLock ml(m);
    process(p);               // 此时即使process()中抛出异常使程序意外终止,对象的析构函数依旧会进行调用
}