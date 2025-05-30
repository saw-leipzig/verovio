/////////////////////////////////////////////////////////////////////////////
// Name:        reg.h
// Author:      Laurent Pugin
// Created:     2018
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#ifndef __VRV_REG_H__
#define __VRV_REG_H__

#include "atts_shared.h"
#include "editorial.h"

namespace vrv {

//----------------------------------------------------------------------------
// Reg
//----------------------------------------------------------------------------

class Reg : public EditorialElement, public AttSource {
public:
    /**
     * @name Constructors, destructors, and other standard methods
     * Reset method reset all attribute classes
     */
    ///@{
    Reg();
    virtual ~Reg();
    Object *Clone() const override { return new Reg(*this); }
    void Reset() override;
    std::string GetClassName() const override { return "reg"; }
    ///@}

private:
    //
public:
    //
private:
};

} // namespace vrv

#endif
