//
//  Consts.cpp
//  Basics
//
//  Created by Ярослав Политов on 22.10.2018.
//  Copyright © 2018 Ярослав Политов. All rights reserved.
//

#include "Consts.hpp"

namespace Basics {
    
    // Can't change any variable within
    void Consts::changeVarToFive() const
    {
        // m_noConst = 3;   // ERROR (cause: you can't change variables within const method)
        // Except when variable has attribute "mutable"
        m_mutedNoConst = 5;
    }
    
    
    void Consts::printMutedNoConst() const
    {
        std::cout << "printMutedNoConst(): m_mutedNoConst = " << m_mutedNoConst << '\n';
    }
}


int main ()
{
    std::cout << '\n';
    
    Basics::Consts c;
    c.printMutedNoConst();
    c.changeVarToFive();
    c.printMutedNoConst();
    
    std::cout << '\n';
    
    return 0;
}
