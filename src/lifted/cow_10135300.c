/* f_0x10135300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10135300(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013530du: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1013530d;
    case 0x10135319u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10135319;
    case 0x10135325u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10135325;
    case 0x10135331u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10135331;
    case 0x1013533du: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1013533d;
    case 0x10135346u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10135346;
    case 0x10135352u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10135352;
    case 0x1013535bu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1013535b;
    case 0x10135367u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10135367;
    case 0x10135370u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10135370;
    case 0x1013537cu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1013537c;
    case 0x10135385u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10135385;
    case 0x10135391u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10135391;
    case 0x1013539au: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1013539a;
    case 0x101353abu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101353ab;
    case 0x101353afu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101353af;
    case 0x101353b1u: eax = g->eax; edx = g->edx; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101353b1;
    default: break;
    }
#endif

    COW_AT(10135300)
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x54u), self, 0);
    t3 = g->edx;
    if (t2 != 0x10u)
    {
        eax = t2;
    COW_AT(10135319)
        g->eax = eax;
        g->edx = rd32(self);
        t4 = rd32(self);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4 + 0x54u), self, 0);
        t6 = g->edx;
        if (t5 != 0xfu)
        {
            edx = t6;
    COW_AT(10135331)
            g->eax = rd32(self);
            g->edx = edx;
            t7 = rd32(self);
            g->esp = sp0 - 4u;
            t8 = cow_thiscall(g, rd32(t7 + 0x54u), self, 0);
            t9 = g->edx;
            if (t8 != 0xeu)
            {
                eax = t8;
    COW_AT(10135346)
                g->eax = eax;
                g->edx = rd32(self);
                t10 = rd32(self);
                g->esp = sp0 - 4u;
                t11 = cow_thiscall(g, rd32(t10 + 0x54u), self, 0);
                t12 = g->edx;
                if (t11 != 0xdu)
                {
                    edx = t12;
    COW_AT(1013535b)
                    g->eax = rd32(self);
                    g->edx = edx;
                    t13 = rd32(self);
                    g->esp = sp0 - 4u;
                    t14 = cow_thiscall(g, rd32(t13 + 0x54u), self, 0);
                    t15 = g->edx;
                    if (t14 != 0xcu)
                    {
                        eax = t14;
    COW_AT(10135370)
                        g->eax = eax;
                        g->edx = rd32(self);
                        t16 = rd32(self);
                        g->esp = sp0 - 4u;
                        t17 = cow_thiscall(g, rd32(t16 + 0x54u), self, 0);
                        t18 = g->edx;
                        if (t17 != 0xbu)
                        {
                            edx = t18;
    COW_AT(10135385)
                            g->eax = rd32(self);
                            g->edx = edx;
                            t19 = rd32(self);
                            g->esp = sp0 - 4u;
                            t20 = cow_thiscall(g, rd32(t19 + 0x54u), self, 0);
                            t21 = g->edx;
                            if (t20 != 0xau)
                            {
                                eax = t20;
    COW_AT(1013539a)
                                g->eax = eax;
                                g->edx = rd32(self);
                                t22 = rd32(self);
                                g->esp = sp0 - 4u;
                                t23 = cow_thiscall(g, rd32(t22 + 0x54u), self, 0);
                                t24 = g->edx;
                                if (t23 != 8u)
                                {
                                    eax = t23;
                                    edx = t24;
    COW_AT(101353af)
                                    loc_c = 0u;
                                }
                                else
                                {
                                    eax = t23;
                                    edx = t24;
    COW_AT(101353ab)
                                    loc_c = 1u;
                                }
                            }
                            else
                            {
                                eax = t20;
                                edx = t21;
    COW_AT(10135391)
                                loc_c = 2u;
                            }
                        }
                        else
                        {
                            eax = t17;
                            edx = t18;
    COW_AT(1013537c)
                            loc_c = 3u;
                        }
                    }
                    else
                    {
                        eax = t14;
                        edx = t15;
    COW_AT(10135367)
                        loc_c = 4u;
                    }
                }
                else
                {
                    eax = t11;
                    edx = t12;
    COW_AT(10135352)
                    loc_c = 5u;
                }
            }
            else
            {
                eax = t8;
                edx = t9;
    COW_AT(1013533d)
                loc_c = 6u;
            }
        }
        else
        {
            eax = t5;
            edx = t6;
    COW_AT(10135325)
            loc_c = 7u;
        }
    }
    else
    {
        eax = t2;
        edx = t3;
    COW_AT(1013530d)
        loc_c = 8u;
    }
    COW_AT(101353b1)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t25 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 0u, 0x40u, loc_c, 0x80808080u);
    t26 = g->ecx;
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    t29 = g->edx;
    t30 = rd32(rd32(t28) + 0x2e4u);
    g->eax = rd32(t28);
    t31 = rd32(t28);
    t32 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t29, 4, 1u, 0x41u, t30, 0x80808080u);
    wr32(arg1 + 0x4cu, 0u);
    wr32(arg1 + 0x48u, 0xffffffffu);
    g->esi = in_esi;
    return (t32 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10135300(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013530du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10135319u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10135325u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10135331u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013533du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10135346u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10135352u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013535bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10135367u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10135370u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013537cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10135385u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10135391u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013539au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101353abu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x101353afu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x101353b1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10135300(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10135300(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
