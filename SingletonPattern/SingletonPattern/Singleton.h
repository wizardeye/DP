//
//  Singleton.h
//  SingletonPattern
//
//  Created by air seok on 2018. 2. 12..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Singleton_h
#define Singleton_h

#include <List>

class NameSingletonPair;

class Singleton
{
public:
    static void Register(const char* name, Singleton*);
    static Singleton* Instance();
    
protected:
    static Singleton* Lookup(const char* name);
    
private:
    static Singleton* _instance;
    
    static List<NameSingletonPair>* _registry;
};


Singleton* Singleton::Instance() {
    if (_instance == nullptr) {
        const char* singletonName = getenv("SINGLETON");    //  환경변수를 이용하여 싱글톤 객체의 이름을 얻어온다.
        _instance = Lookup(singletonName);
    }
    
    return _instance;
}


class MySingleton: public Singleton
{
public:
    MySingleton() {
        Singleton::Register("MySingleton", this);
    }
    
private:
    static MySingleton theSingleton;
};

#endif /* Singleton_h */
