/* f_0x100b5f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b5f70(Guest* g)
{
    double d11;
    double d14;
    double d16;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b5f9au: eax = g->eax; edx = g->edx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); goto E_100b5f9a;
    case 0x100b5fb3u: eax = g->eax; edx = g->edx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); goto E_100b5fb3;
    case 0x100b5fc1u: eax = g->eax; edx = g->edx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); goto E_100b5fc1;
    case 0x100b606du: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100b606d;
    case 0x100b6078u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100b6078;
    case 0x100b60beu: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100b60be;
    case 0x100b60cau: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100b60ca;
    case 0x100b610bu: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100b610b;
    case 0x100b6115u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100b6115;
    case 0x100b612eu: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100b612e;
    default: break;
    }
#endif

    COW_AT(100b5f70)
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 4u);
    wr32(sp0 - 0x24u, 1u);
    g->eax = sp0 - 0x10u;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x24u, t1);
    g->esp = sp0 - 0x18u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 0x10u);
    t4 = g->edx;
    if ((uint8_t)t3 != 1u)
    {
        esi = in_esi;
        loc_14 = in_ebp;
        loc_18 = in_edi;
    }
    else
    {
        edx = t4;
    COW_AT(100b5f9a)
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u) == 0u)
        {
            esi = in_esi;
            loc_14 = in_ebp;
            loc_18 = in_edi;
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u);
            ebp = (uint16_t)rd32(sp0 - 0x10u);
    COW_AT(100b5fb3)
            if (rd32(eax + 0xd4u) == 0u)
            {
                esi = in_esi;
                loc_14 = in_ebp;
                loc_18 = in_edi;
            }
            else
            {
                eax = rd32(eax + 0xd4u);
    COW_AT(100b5fc1)
                wr32(sp0 - 0x1cu, in_esi);
                wr32(sp0 - 0x20u, 5u);
                g->eax = eax;
                g->edx = edx;
                t5 = rd32(eax + 0x260u);
                g->esp = sp0 - 0x1cu;
                t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
                t7 = g->edx;
                wr32(sp0 - 0xcu, t6);
                wr32(sp0 - 0x20u, 7u);
                d8 = fr(g, (double)(int32_t)t6 * (double)rdf32(COW_IMG(0x1032a22cu)));
                wrf32(t5 + 0x140u, (float)d8);
                g->edx = t7;
                t9 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 7u);
                t10 = g->edx;
                wr32(sp0 - 0xcu, t9);
                wr32(sp0 - 0x20u, 9u);
                d11 = fr(g, (double)(int32_t)t9 * (double)rdf32(COW_IMG(0x1032a22cu)));
                wrf32(t5 + 0x148u, (float)d11);
                g->edx = t10;
                t12 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 9u);
                t13 = g->edx;
                wr32(sp0 - 0xcu, t12);
                wr32(sp0 - 0x20u, 0xbu);
                d14 = fr(g, (double)(int32_t)t12 * (double)rdf32(COW_IMG(0x1032a22cu)));
                wrf32(t5 + 0x144u, (float)d14);
                t15 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xbu);
                wr32(sp0 - 0xcu, t15);
                d16 = fr(g, fr(g, (double)(int32_t)t15 * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
                wrf32(t5 + 0x154u, (float)d16);
                t17 = rd32(rd32(COW_IMG(0x10480af0u) + ebp * 4u) + 0x120u);
                if ((rd32(rd32(COW_IMG(0x10480af0u) + ebp * 4u) + 0x128u) >> 0xeu | t17 >> 0x15u | t17 >> 0x14u) & 1u)
                {
                    eax = t17 >> 0x15u;
                    edx = (rd32(rd32(COW_IMG(0x10480af0u) + ebp * 4u) + 0x128u) >> 0xeu & 0xffffff00u) | (uint8_t)(rd32(rd32(COW_IMG(0x10480af0u) + ebp * 4u) + 0x128u) >> 0xeu | t17 >> 0x15u | t17 >> 0x14u);
                }
                else
                {
                    esi = t5;
    COW_AT(100b606d)
                    if (ebp != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
                    {
    COW_AT(100b60ca)
                        t24 = rd32(esi + 0x148u);
                        wr32(sp0 - 4u, t24);
                        t25 = rd32(esi + 0x144u);
                        wr32(sp0 - 8u, t25);
                        t26 = rd32(esi + 0x140u);
                        wr32(sp0 - 0xcu, t26);
                        wr32(sp0 - 0x20u, sp0 - 0x10u);
                        wr32(sp0 - 0x24u, t24);
                        wr32(sp0 - 0x28u, t25);
                        wr32(sp0 - 0x2cu, t26);
                        g->eax = t25;
                        g->edx = t24;
                        g->esp = sp0 - 0x1cu;
                        t27 = cow_thiscall(g, COW_IMG(0x10181300u), rd32(COW_IMG(0x10631f24u)), 4, t26, t25, t24, sp0 - 0x10u);
                        t28 = g->edx;
                        if ((uint8_t)t27 != 1u)
                        {
                            eax = t27;
                            edx = t28;
                        }
                        else
                        {
                            eax = t27;
    COW_AT(100b610b)
                            t29 = rd32(sp0 - 0x10u);
                            wr32(esi + 0x144u, t29);
                            edx = t29;
                        }
                    }
                    else
                    {
    COW_AT(100b6078)
                        t18 = rd32(esi + 0x148u);
                        wr32(sp0 - 0xcu, t18);
                        t19 = rd32(esi + 0x144u);
                        wr32(sp0 - 8u, t19);
                        t20 = rd32(esi + 0x140u);
                        wr32(sp0 - 4u, t20);
                        wr32(sp0 - 0x20u, sp0 - 0x10u);
                        wr32(sp0 - 0x24u, 0x42480000u);
                        wr32(sp0 - 0x28u, t18);
                        wr32(sp0 - 0x2cu, t19);
                        wr32(sp0 - 0x30u, t20);
                        g->eax = t18;
                        g->edx = t20;
                        g->esp = sp0 - 0x1cu;
                        t21 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, t20, t19, t18, 0x42480000u, sp0 - 0x10u);
                        t22 = g->edx;
                        if ((uint8_t)t21 != 1u)
                        {
                            eax = t21;
                            edx = t22;
                        }
                        else
                        {
                            edx = t22;
    COW_AT(100b60be)
                            t23 = rd32(sp0 - 0x10u);
                            wr32(esi + 0x144u, t23);
                            eax = t23;
                        }
                    }
                }
    COW_AT(100b6115)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t30 = cow_thiscall(g, COW_IMG(0x10092f90u), rd32(COW_IMG(0x10480af0u) + ebp * 4u), 0);
                t31 = g->edx;
                cow_thiscall(g, COW_IMG(0x1008f2a0u), rd32(COW_IMG(0x10480af0u) + ebp * 4u), 0);
                esi = rd32(sp0 - 0x1cu);
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
            }
        }
    }
    COW_AT(100b612e)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xdu));
    g->esi = esi;
    g->edi = loc_18;
    g->ebp = loc_14;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b5f70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b5f9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x20u, sp0 - 4u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b5fb3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x20u, sp0 - 4u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b5fc1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x20u, sp0 - 4u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b606du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b6078u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b60beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b60cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b610bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b6115u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b612eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b5f70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b5f70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
