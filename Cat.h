//
// Created by Kevin Stradtman on 8/7/24.
//

#ifndef CAT_H
#define CAT_H



class Cat {
private:
    bool happy;
public:
    void makeHappy();
    void makeUnHappy();
    void speak() const;
    Cat();
    ~Cat();
};



#endif //CAT_H
