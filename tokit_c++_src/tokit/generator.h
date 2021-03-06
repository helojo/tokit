///<------------------------------------------------------------------------------
//< @file:   tokit\tokit\generator.h
//< @author: ������
//< @date:   2014��9��25�� 14:46:13
//< @brief:  
//< Copyright (c) 2014 Tokit. All rights reserved.
///<------------------------------------------------------------------------------

#ifndef _generator_h_
#define _generator_h_

#include "cfg.h"
#include "echo_tool.h"

class generator
{
public:
    generator(cfgbase_t &cfgbase)
        : m_cfgbase(cfgbase)
    {
    }

public:
    virtual bool generate() = 0;

protected:
    void echo_errs();

protected:
    std::string m_excel;
    const cfgbase_t &m_cfgbase;
    errvec_t m_errvec;
};

#endif //_generator_h_