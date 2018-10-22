//
//  Types.hpp
//  Basics
//
//  Created by Ярослав Политов on 22.10.2018.
//  Copyright © 2018 Ярослав Политов. All rights reserved.
//

#ifndef _SAMPLES_BASICS_TYPES_HPP_
#define _SAMPLES_BASICS_TYPES_HPP_

#include <climits>
#include <cfloat>
#include <iostream>
#include <typeinfo>

namespace Basics {

    class Types
    {
    private:
        // Numeric singed types
        // Integer types
        const   short               m_typeShort     = SHRT_MAX;
        const   int                 m_typeInt       = INT_MAX;
        const   long                m_typeLong      = LONG_MAX;
        const   long long           m_typeLLong     = LLONG_MAX;
        
        // Real types
        const   float               m_typeFloat     = FLT_MAX;
        const   double              m_typeDouble    = DBL_MAX;
        const   long double         m_typeLDouble   = LDBL_MAX;
        
        
        // Numeric unsigned types
        // Integer types
        const   unsigned short      m_typeUShort    = USHRT_MAX;
        const   unsigned int        m_typeUInt      = UINT_MAX;
        const   unsigned long       m_typeULong     = ULONG_MAX;
        const   unsigned long long  m_typeULLong    = ULLONG_MAX;
        
        // Other types
        const   char                m_typeChar      = CHAR_MAX;
        const   unsigned char       m_typeUChar     = UCHAR_MAX;
        const   bool                m_typeBool      = true;
        
        
    public:
        Types() = default;
        ~Types() = default;
        
        Types(Types &&other) = delete;
        Types(const Types &other) = delete;
        
        virtual const void printTypesRange();
        virtual const void printOtherInf();
    };
}

#endif


#ifndef _SAMPLES_INT_MAIN_
#define _SAMPLES_INT_MAIN_

int main ();

#endif
