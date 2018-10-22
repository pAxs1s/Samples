//
//  Types.cpp
//  Basics
//
//  Created by Ярослав Политов on 22.10.2018.
//  Copyright © 2018 Ярослав Политов. All rights reserved.
//

#include "Types.hpp"

namespace Basics {
    
    const void Types::printTypesRange()
    {
        std::cout << "\nRange of Short type: \t\t [" << SHRT_MIN << " - +" << m_typeShort << "]\n";
        std::cout << "Range of Int type: \t\t [" << INT_MIN << " - +" << m_typeInt << "]\n";
        std::cout << "Range of Long type: \t\t [" << LONG_MIN << " - +" << m_typeLong << "]\n";
        std::cout << "Range of Long Long type: \t [" << LLONG_MIN << " - +" << m_typeLLong << "]\n\n";
        
        std::cout << "Range of Float type: \t\t [" << FLT_MIN << " - +" << m_typeFloat << "]\n";
        std::cout << "Range of Double type: \t\t [" << DBL_MIN << " - +" << m_typeDouble << "]\n";
        std::cout << "Range of Long Double type: \t [" << LDBL_MIN << " - +" << m_typeLDouble << "]\n\n";
        
        std::cout << "Range of Unsigned Short type: \t [" << 0 << " - +" << m_typeUShort << "]\n";
        std::cout << "Range of Unsigned Int type: \t [" << 0 << " - +" << m_typeUInt << "]\n";
        std::cout << "Range of Unsigned Long type: \t [" << 0 << " - +" << m_typeULong << "]\n";
        std::cout << "Range of Unsigned Long Long type:[" << 0 << " - +" << m_typeULLong << "]\n\n";
        
        std::cout << "Range of Char type: \t\t [" << static_cast<int>(CHAR_MIN) << " - +" << static_cast<int>(m_typeChar) << "]\n";
        std::cout << "Range of Unsigned Char type: \t [" << 0 << " - +" << static_cast<int>(m_typeUChar) << "]\n";
        std::cout << "Range of Bool type: \t\t [False - True] \n\n" << std::endl;
    }
    
    const void Types::printOtherInf()
    {
        std::cout << typeid(m_typeShort).name() << " type take: " << sizeof(m_typeShort) << " bytes \n";
        std::cout << typeid(m_typeInt).name() << " type take: " << sizeof(m_typeInt) << " bytes \n";
        std::cout << typeid(m_typeLong).name() << " type take: " << sizeof(m_typeLong) << " bytes \n";
        std::cout << typeid(m_typeLLong).name() << " type take: " << sizeof(m_typeLLong) << " bytes \n\n";
        
        std::cout << typeid(m_typeFloat).name() << " type take: " << sizeof(m_typeFloat) << " bytes \n";
        std::cout << typeid(m_typeDouble).name() << " type take: " << sizeof(m_typeDouble) << " bytes \n";
        std::cout << typeid(m_typeLDouble).name() << " type take: " << sizeof(m_typeLDouble) << " bytes \n\n";
        
        std::cout << typeid(m_typeUShort).name() << " type take: " << sizeof(m_typeUShort) << " bytes \n";
        std::cout << typeid(m_typeUInt).name() << " type take: " << sizeof(m_typeUInt) << " bytes \n";
        std::cout << typeid(m_typeULong).name() << " type take: " << sizeof(m_typeULong) << " bytes \n";
        std::cout << typeid(m_typeULLong).name() << " type take: " << sizeof(m_typeULLong) << " bytes \n\n";
        
        std::cout << typeid(m_typeChar).name() << " type take: " << sizeof(m_typeChar) << " bytes \n";
        std::cout << typeid(m_typeUChar).name() << " type take: " << sizeof(m_typeUChar) << " bytes \n";
        std::cout << typeid(m_typeBool).name() << " type take: " << sizeof(m_typeBool) << " bytes \n\n" << std::endl;
    }
}


int main ()
{
    Basics::Types t;
    
    t.printTypesRange();
    t.printOtherInf();
    
    return 0;
}
