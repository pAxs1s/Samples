//
//  Consts.hpp
//  Basics
//
//  Created by Ярослав Политов on 22.10.2018.
//  Copyright © 2018 Ярослав Политов. All rights reserved.
//

#ifndef _SAMPLES_BASICS_CONSTS_HPP_
#define _SAMPLES_BASICS_CONSTS_HPP_

#include <iostream>

namespace Basics {
    
    // Return only known value (at compilitng time)
    // Also you must define such method in your ".hpp" file (if it exists)
    constexpr int getConstexpr()
    {
        constexpr int exprConst = 5;
        return exprConst;
    }
    
    const int getConst()
    {
        return 5;
    }
    
    class Consts
    {
    private:
        
        // additional variable
        mutable int m_mutedNoConst = 1;
        int m_noConst = 3;
        
        
        // Initialization consts
        // "constexpr" - must know value at compiling time
        // "const"     - may  know value at running time (initialization time)
        // constexpr int m_exprConst = m_noConst * 3;   // ERROR (cause: above)
        const int m_constInt = m_noConst * 7;
        
        
        // arrays
        // const int m_someArr[getConst()] = {4};       // ERROR (cause: initialization must be at compiling)
        const int m_someArr[getConstexpr()] = {4};
        
        
        // pointers
        // int *const m_constPtr = &m_constInt;         // ERROR (cause: rvalue of type 'const int *')
        const int *m_ptrToConst = &m_constInt;
        int *const m_constPtr = &m_noConst;
        const int *const m_constPtrToConst = &m_constInt;
        
        
        // references
        // int &const Var = 0;                          // ERROR (cause: reference already unchageable)
        const int &m_refToConst = m_constInt;
        
        
        // static
        // constexpr int m_exprConst = 1;               // ERROR (cause: can't be with non-static member)
        const static int statConst = 4;
        constexpr static int statConstexpr = 9;
        
        
    public:
        Consts() = default;
        ~Consts() = default;
        
        Consts(Consts &&other) = delete;
        Consts(const Consts &other) = delete;
        
        // Can't change any variable within const method (So how?)
        virtual void changeVarToFive() const;
        virtual void printMutedNoConst() const;
    };
}

#endif


#ifndef _SAMPLES_INT_MAIN_
#define _SAMPLES_INT_MAIN_

int main ();

#endif
