#include <thread>
#include <iostream>

int create();
int main(int argc, char **argv)
{

    std::thread workerB([]() {
       std::cout << "B start time: " << std::chrono::system_clock::now().time_since_epoch().count() << std::endl;
    //    int64_t b  = create();       
       std::cout << "B: " << create() << std::endl;
    });
    std::thread workerA([]() {
       std::cout << "A start time: " << std::chrono::system_clock::now().time_since_epoch().count() << std::endl;
    //    int64_t a = create();
       std::cout << "A: " << create() << std::endl;
    });
    workerA.join();
    workerB.join();

    return 0;
}


int create()
{
    static struct M {
      int value;
      M(): value(0) {
          std::cout << "Create M" << std::endl;
          std::this_thread::sleep_for(std::chrono::seconds(5));
      }
    } m;
    std::cout << "time: " << std::chrono::system_clock::now().time_since_epoch().count() << std::endl;
    // return m.value++;
    return std::chrono::system_clock::now().time_since_epoch().count();
}