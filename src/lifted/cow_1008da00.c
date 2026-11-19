/* f_0x1008da00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008da00(Guest* g)
{
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 16u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008da13u: in_eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da13;
    case 0x1008da20u: in_eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da20;
    case 0x1008da2bu: in_eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da2b;
    case 0x1008da30u: in_eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da30;
    case 0x1008da3du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da3d;
    case 0x1008da47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da47;
    case 0x1008da4du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da4d;
    case 0x1008da57u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da57;
    case 0x1008da5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da5d;
    case 0x1008da67u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da67;
    case 0x1008da6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da6f;
    case 0x1008da7du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da7d;
    case 0x1008da86u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da86;
    case 0x1008da8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1008da8f;
    case 0x1008da98u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1008da98;
    case 0x1008dac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008dac5;
    case 0x1008dae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008dae4;
    case 0x1008daf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008daf2;
    case 0x1008dafeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008dafe;
    case 0x1008db09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008db09;
    case 0x1008db1du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008db1d;
    case 0x1008db2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1008db2f;
    default: break;
    }
#endif

    COW_AT(1008da00)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if ((rd32(self + 0x120u) >> 8u & 0x20u) != 0u)
    {
        loc_4 = self;
        loc_8 = in_esi;
    }
    else
    {
        edx = rd32(self + 0x120u);
    COW_AT(1008da13)
        if ((rd32(self + 0x78u) & 0xff000000u) == 0u)
        {
            loc_4 = self;
            loc_8 = in_esi;
        }
        else
        {
    COW_AT(1008da20)
            if (rd8(self + 0xeeu) == 2u)
            {
                ecx = (self & 0xffffff00u) | rd8(self + 0xeeu);
                goto L_1008da30;
            }
            ecx = (self & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(1008da2b)
            if ((uint8_t)ecx != 7u) goto L_1008da67;
L_1008da30: ;
    COW_AT(1008da30)
            if (rd16(self + 0xfcu) < 0x3c0u)
            {
                eax = (in_eax & 0xffff0000u) | rd16(self + 0xfcu);
                goto L_1008da47;
            }
            eax = (in_eax & 0xffff0000u) | rd16(self + 0xfcu);
    COW_AT(1008da3d)
            if ((uint16_t)eax <= 0x3c9u)
            {
                loc_4 = self;
                loc_8 = in_esi;
                goto L_1008db2f;
            }
L_1008da47: ;
    COW_AT(1008da47)
            if ((uint16_t)eax < 0x979u) goto L_1008da57;
    COW_AT(1008da4d)
            if ((uint16_t)eax <= 0x97du)
            {
                loc_4 = self;
                loc_8 = in_esi;
                goto L_1008db2f;
            }
L_1008da57: ;
    COW_AT(1008da57)
            if ((uint16_t)eax < 0x9bfu) goto L_1008da67;
    COW_AT(1008da5d)
            if ((uint16_t)eax <= 0x9c3u)
            {
                loc_4 = self;
                loc_8 = in_esi;
                goto L_1008db2f;
            }
L_1008da67: ;
    COW_AT(1008da67)
            if ((int8_t)edx < 0)
            {
                loc_4 = self;
                loc_8 = in_esi;
            }
            else
            {
    COW_AT(1008da6f)
                if (rd32(self + 0x170u) != 0u)
                {
                    loc_4 = self;
                    loc_8 = in_esi;
                }
                else
                {
    COW_AT(1008da7d)
                    if ((uint8_t)ecx == 3u)
                    {
                        loc_4 = self;
                        loc_8 = in_esi;
                    }
                    else
                    {
    COW_AT(1008da86)
                        if ((uint8_t)ecx == 4u)
                        {
                            loc_4 = self;
                            loc_8 = in_esi;
                        }
                        else
                        {
    COW_AT(1008da8f)
                            if ((uint8_t)ecx == 5u)
                            {
                                loc_4 = self;
                                loc_8 = in_esi;
                            }
                            else
                            {
    COW_AT(1008da98)
                                t1 = (uint32_t)(int16_t)rd16(self + 0x1bau);
                                wr32(sp0 - 4u, t1);
                                wrf32(sp0 - 4u, (float)(double)(float)(double)(int32_t)t1);
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 8u;
                                t2 = cow_call_regs(g, COW_IMG(0x10014cf0u), t1, g->ecx, g->edx, 1, 0);
                                t3 = g->ecx;
                                t4 = g->edx;
                                d5 = cow_take_float(g);
                                g->ecx = t3;
                                g->edx = t4;
                                d6 = fr(g, (double)rdf32(sp0 - 4u) - d5);
                                fpush(g, d6);
                                t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
                                t8 = g->ecx;
                                t9 = g->edx;
                                wr16(self + 0x1bau, (uint16_t)t7);
                                if ((int16_t)t7 >= 0)
                                {
                                    edx = t9;
                                }
                                else
                                {
                                    eax = t7;
                                    ecx = t8;
                                    edx = t9;
    COW_AT(1008dac5)
                                    g->eax = eax;
                                    g->esp = sp0 - 8u;
                                    t10 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
                                    t11 = cow_divs(g, t10, 0x258u);
                                    t12 = cow_mods(g, t10, 0x258u);
                                    wr16(self + 0x1bau, (uint16_t)(t12 + 0x258u));
                                    g->eax = t11;
                                    t13 = cow_fastcall(g, COW_IMG(0x103149e0u), 0x258u, t12 + 0x258u, 0);
                                    t14 = g->edx;
                                    if (t13 & 1u)
                                    {
                                        edx = t14;
    COW_AT(1008daf2)
                                        t16 = rd32(self + 0x1acu);
                                        wr32(self + 0x1a4u, t16);
                                    }
                                    else
                                    {
    COW_AT(1008dae4)
                                        t15 = rd32(self + 0x1a8u);
                                        wr32(self + 0x1a4u, t15);
                                        edx = t15;
                                    }
                                }
    COW_AT(1008dafe)
                                if ((rd32(self + 0x120u) >> 8u & 2u) == 0u)
                                {
                                    loc_4 = rd32(sp0 - 4u);
                                    loc_8 = rd32(sp0 - 8u);
                                }
                                else
                                {
                                    eax = rd32(self + 0x120u);
    COW_AT(1008db09)
                                    wr32(sp0 - 0xcu, COW_IMG(0x10330ebcu));
                                    g->eax = eax;
                                    g->esp = sp0 - 8u;
                                    t17 = cow_fastcall(g, COW_IMG(0x1002c8f0u), rd32(self + 0xa0u), edx, 1, COW_IMG(0x10330ebcu));
                                    if ((uint8_t)t17 == 0u)
                                    {
                                        loc_4 = rd32(sp0 - 4u);
                                        loc_8 = rd32(sp0 - 8u);
                                    }
                                    else
                                    {
    COW_AT(1008db1d)
                                        t18 = rd32(self + 0x1a4u);
                                        wr32(rd32(self + 0xa0u) + 0x7c8u, t18);
                                        loc_4 = rd32(sp0 - 4u);
                                        loc_8 = rd32(sp0 - 8u);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
L_1008db2f: ;
    COW_AT(1008db2f)
    g->esi = loc_8;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1008da00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008da13u:
    {
        uint32_t edx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->esi = self;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da20u:
    {
        uint32_t edx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->esi = self;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da2bu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da30u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da3du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da67u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1008da98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008dac5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008dae4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008daf2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008dafeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008db09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008db1du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008db2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1008da00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1008da00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
