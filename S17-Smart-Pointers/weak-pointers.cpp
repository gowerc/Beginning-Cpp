
#include <memory>
#include <iostream>


struct Obj {
    Obj(int a): age{a} {};
    int age;
};


int main() {
    
    std::shared_ptr<Obj> p1 = std::make_shared<Obj>(5);
    std::shared_ptr<Obj> p1a = p1;
    std::cout << "Ref count = " << p1.use_count() << std::endl;
    
    
    // Showing that creating a weak pointer doesn't increase ref count
    std::weak_ptr<Obj> p2 = p1;
    std::cout << "Ref count = " << p1.use_count() << std::endl;
    
    
    // If we release p1 before "locking" then the lock will fail
    // as the object has been free'd
    p1.reset();
    
    // To dereference a weak pointer we must use it to create
    // a temporary shared pointer (e.g. to add to reference count)
    // Note that the lock isn't dependent on the specific shared
    // pointer (p1) but rather the underlying object.
    // As shown above even though p1 was free'd the existance
    // of "p1a" means the object hasn't been deallocated and thus
    // we can still reach it and get our lock
    std::shared_ptr<Obj> p3 = p2.lock();
    if (p3) {
        std::cout << "Got Lock " << p3->age << std::endl;
    } else {
        std::cout << "Unable to get lock" << std::endl;
    }
    std::cout << "Has the pointer expired = " << p2.expired() << std::endl;

    
    return 0;
}




