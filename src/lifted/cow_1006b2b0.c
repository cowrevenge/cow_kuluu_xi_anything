/* f_0x1006b2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1006b2b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006b2c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = rd32(sp0 - 4u); goto E_1006b2c2;
    case 0x1006b2cau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = rd32(sp0 - 4u); goto E_1006b2ca;
    case 0x1006b2ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = rd32(sp0 - 4u); goto E_1006b2cc;
    case 0x1006b2f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1006b2f0;
    case 0x1006b2feu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1006b2fe;
    case 0x1006b308u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1006b308;
    case 0x1006b33cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1006b33c;
    case 0x1006b342u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1006b342;
    case 0x1006b348u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1006b348;
    case 0x1006b35bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1006b35b;
    case 0x1006b369u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1006b369;
    case 0x1006b373u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1006b373;
    case 0x1006b38bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1006b38b;
    case 0x1006b3a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1006b3a0;
    default: break;
    }
#endif

    COW_AT(1006b2b0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, 0x1eccu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x1eccu);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
    COW_AT(1006b2ca)
        eax = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(1006b2c2)
        wr32(eax, COW_IMG(0x1032c0d8u));
    }
    COW_AT(1006b2cc)
    t3 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047bfa8u), eax);
    wr32(sp0 - 8u, t3);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_fastcall(g, COW_IMG(0x10069dd0u), eax, edx, 1, t3);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 8u, 0x4a8u);
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x4a8u);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
    COW_AT(1006b2fe)
        wr32(COW_IMG(0x1047bff8u), 0u);
    }
    else
    {
        eax = t7;
        edx = t8;
    COW_AT(1006b2f0)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, COW_IMG(0x1006b0c0u), eax, 0);
        t10 = g->edx;
        wr32(COW_IMG(0x1047bff8u), t9);
        eax = t9;
        edx = t10;
    }
    COW_AT(1006b308)
    wr32(sp0 - 8u, 0u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10072ed0u), rd32(COW_IMG(0x1047d128u)), 1, 0u);
    wr32(sp0 - 8u, 0x636f7270u);
    wr32(sp0 - 0xcu, 7u);
    wr32(sp0 - 0x10u, sp0 - 4u);
    t11 = rd32(rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u));
    g->eax = t11;
    g->edx = rd32(COW_IMG(0x1047d128u));
    t12 = rd32(COW_IMG(0x1047d128u));
    t13 = cow_thiscall(g, COW_IMG(0x10072290u), t11, 3, sp0 - 4u, 7u, 0x636f7270u);
    t14 = g->ecx;
    t15 = g->edx;
    if (rd32(t13) == 0u)
    {
        eax = rd32(t13);
        ecx = t14;
        edx = t15;
    }
    else
    {
        eax = rd32(t13);
        ecx = t14;
        edx = t15;
    COW_AT(1006b33c)
        if (rd32(eax) == 0u)
        {
            eax = rd32(eax);
        }
        else
        {
            eax = rd32(eax);
    COW_AT(1006b342)
            t16 = rd32(eax + 0x74u);
            wr8(t16, 0x80u);
            edx = t16;
        }
    }
    COW_AT(1006b348)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x10044270u), ecx, 0);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 8u, 0x10u);
    g->ecx = t18;
    g->edx = t19;
    t20 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x10u);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
    COW_AT(1006b369)
        wr32(COW_IMG(0x1047bff4u), 0u);
    }
    else
    {
        eax = t20;
        edx = t22;
    COW_AT(1006b35b)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t23 = cow_thiscall(g, COW_IMG(0x1006b050u), eax, 0);
        t24 = g->ecx;
        t25 = g->edx;
        wr32(COW_IMG(0x1047bff4u), t23);
        eax = t23;
        ecx = t24;
        edx = t25;
    }
    COW_AT(1006b373)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t26 = cow_call_regs(g, COW_IMG(0x10075280u), g->eax, g->ecx, edx, 1, 0);
    t27 = g->ecx;
    t28 = g->edx;
    g->ecx = t27;
    g->edx = t28;
    t29 = cow_stdcall(g, COW_IMG(0x100555d0u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 8u, 0x1cu);
    g->edx = t31;
    t32 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x1cu);
    t33 = g->edx;
    if (t32 == 0u)
    {
        edx = t33;
        goto L_1006b3a0;
    }
    eax = t32;
    edx = t33;
    COW_AT(1006b38b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t34 = cow_thiscall(g, COW_IMG(0x1006c140u), eax, 0);
    t35 = g->edx;
    wr32(COW_IMG(0x1047c004u), t34);
    t36 = cow_thiscall(g, COW_IMG(0x1006c210u), t34, 0);
    return t36;
L_1006b3a0: ;
    COW_AT(1006b3a0)
    wr32(COW_IMG(0x1047c004u), 0u);
    g->eax = 0u;
    g->esp = sp0 - 4u;
    t37 = cow_thiscall(g, COW_IMG(0x1006c210u), 0u, 0);
    return t37;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006b2b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006b2c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006b2cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006b2ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006b2f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006b2feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006b308u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006b33cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1006b342u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1006b348u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1006b35bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1006b369u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1006b373u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1006b38bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1006b3a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b2b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006b2b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
