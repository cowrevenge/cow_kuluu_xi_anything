/* f_0x10119c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10119c00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10119c14u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119c14;
    case 0x10119c1du: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119c1d;
    case 0x10119c27u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119c27;
    case 0x10119c2eu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119c2e;
    case 0x10119c32u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119c32;
    case 0x10119c33u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_3c = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119c33;
    case 0x10119c38u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119c38;
    case 0x10119c3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119c3e;
    case 0x10119c47u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119c47;
    case 0x10119c55u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119c55;
    case 0x10119c65u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10119c65;
    case 0x10119c71u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10119c71;
    case 0x10119c76u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10119c76;
    case 0x10119c84u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10119c84;
    case 0x10119c9au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10119c9a;
    case 0x10119c9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119c9e;
    case 0x10119ca9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119ca9;
    case 0x10119cb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119cb1;
    case 0x10119cc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119cc4;
    case 0x10119cf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119cf2;
    case 0x10119d04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119d04;
    case 0x10119d0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119d0b;
    case 0x10119d1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119d1c;
    case 0x10119d22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119d22;
    case 0x10119d26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119d26;
    case 0x10119d44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119d44;
    case 0x10119d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119d4b;
    case 0x10119d4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119d4e;
    case 0x10119d56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119d56;
    case 0x10119d68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10119d68;
    default: break;
    }
#endif

    COW_AT(10119c00)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    if (rd32(self + 0xcu) == 0u)
    {
        eax = in_eax;
        loc_2c = in_ebx;
        loc_30 = in_ebp;
        loc_34 = in_esi;
        loc_38 = in_edi;
    }
    else
    {
    COW_AT(10119c14)
        if ((int16_t)rd16(self + 0x28u) <= 0)
        {
            edx = in_edx;
        }
        else
        {
            eax = (in_eax & 0xffff0000u) | rd16(self + 0x28u);
    COW_AT(10119c1d)
            wr16(self + 0x28u, (uint16_t)(eax - 1u));
            if ((int16_t)(eax - 1u) > 0)
            {
                edx = in_edx;
            }
            else
            {
                eax = eax - 1u;
    COW_AT(10119c27)
                if (rd8(self + 0x24u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
    COW_AT(10119c32)
                    wr32(sp0 - 0x3cu, 0u);
                    loc_3c = 0u;
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
    COW_AT(10119c2e)
                    wr32(sp0 - 0x3cu, 3u);
                    loc_3c = 3u;
                }
    COW_AT(10119c33)
                g->edx = in_edx;
                g->esp = sp0 - 0x38u;
                cow_stdcall(g, COW_IMG(0x10119970u), 1, loc_3c);
                t1 = g->edx;
                edx = t1;
            }
        }
    COW_AT(10119c38)
        if ((int16_t)rd16(self + 0x28u) >= 0)
        {
            loc_2c = in_ebx;
            loc_30 = in_ebp;
            loc_34 = in_esi;
            loc_38 = in_edi;
        }
        else
        {
    COW_AT(10119c3e)
            if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(10119c47)
                t2 = rd32(eax + 4u);
                wr32(sp0 - 0x28u, t2);
                t3 = rd32(eax + 8u);
                wr32(sp0 - 0x24u, t3);
                edx = t3;
            }
    COW_AT(10119c55)
            wr32(sp0 - 0x3cu, sp0 - 0x28u);
            g->eax = sp0 - 0x28u;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t4 = cow_thiscall(g, COW_IMG(0x10119bc0u), self, 1, sp0 - 0x28u);
            t5 = g->edx;
            if ((uint8_t)t4 != 0u)
            {
                edx = t5;
                loc_2c = in_ebx;
                loc_30 = in_ebp;
                loc_34 = in_esi;
                loc_38 = in_edi;
            }
            else
            {
                eax = t4;
                edx = t5;
    COW_AT(10119c65)
                wr32(sp0 - 0x3cu, 0u);
                wr16(self + 0x28u, 0u);
                g->edx = edx;
                g->esp = sp0 - 0x38u;
                cow_stdcall(g, COW_IMG(0x10119970u), 1, 0u);
                t6 = g->edx;
                edx = t6;
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
            }
        }
    COW_AT(10119c71)
        if (rd32(self + 4u) == 0u) goto L_10119c84;
    COW_AT(10119c76)
        if (rd32(self + 0x14u) == rd32(self + 0x10u)) goto L_10119d44;
L_10119c84: ;
    COW_AT(10119c84)
        t7 = rd32(self + 0x10u);
        t8 = rd32(self + 0xcu);
        wr32(self + 0x14u, t7);
        if (rd8(rd32(t8) + 0x1bu) == 0u)
        {
            edx = (t7 & 0xffffff00u) | rd8(rd32(t8) + 0x1bu);
            goto L_10119d44;
        }
        eax = t8;
        ecx = rd32(t8);
    COW_AT(10119c9a)
        wr32(sp0 - 0x28u, 0u);
        ebx = 0u;
        ebp = in_ebp;
        loc_28 = 0u;
L_10119c9e: ;
    COW_AT(10119c9e)
        if (loc_28 + rd32(eax + 4u) == 0u) goto L_10119d26;
        esi = loc_28 + rd32(eax + 4u);
        eax = loc_28;
    COW_AT(10119ca9)
        if (rd16(esi) == 0u) goto L_10119cc4;
        ecx = (ecx & 0xffff0000u) | rd16(esi);
    COW_AT(10119cb1)
        t9 = rd32(self + 0x10u);
        wr32(sp0 - 0x3cu, t9);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x38u;
        t10 = cow_cdecl(g, COW_IMG(0x10119870u), 1, t9);
        t11 = g->ecx;
        if ((uint32_t)(int16_t)t11 != t10)
        {
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_28 = rd32(sp0 - 0x28u);
            goto L_10119d26;
        }
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_28 = rd32(sp0 - 0x28u);
L_10119cc4: ;
    COW_AT(10119cc4)
        t12 = rd16(esi + 2u);
        wr8(sp0 - 0x10u, 0u);
        t13 = rd32(esi + 4u);
        wr32(sp0 - 0x20u, t13);
        t14 = rd32(esi + 8u);
        wr32(sp0 - 0x1cu, t14);
        t15 = rd32(esi + 0xcu);
        wr32(sp0 - 0x18u, t15);
        t16 = rd32(esi + 0x10u);
        wr32(sp0 - 0x14u, t16);
        if (rd32(esi + 0x18u) != 0u)
        {
            ebp = (ebp & 0xffff0000u) | t12;
        }
        else
        {
            eax = rd32(esi + 0x18u);
            ebp = (ebp & 0xffff0000u) | t12;
    COW_AT(10119cf2)
            wr32(sp0 - 0x3cu, sp0 - 0x20u);
            g->eax = eax;
            g->esp = sp0 - 0x38u;
            t17 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, sp0 - 0x20u);
            wr32(esi + 0x18u, t17);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    COW_AT(10119d04)
        if (rd32(esi + 0x18u) == 0u)
        {
            eax = rd32(esi + 0x18u);
            goto L_10119d68;
        }
        eax = rd32(esi + 0x18u);
    COW_AT(10119d0b)
        t18 = rd32(rd32(eax) + (uint32_t)(int16_t)ebp * 4u);
        wr32(self + 4u, t18);
        if (rd16(esi) != 0u)
        {
    COW_AT(10119d22)
            wr8(self + 0x48u, 1u);
        }
        else
        {
    COW_AT(10119d1c)
            wr8(self + 0x48u, 0u);
        }
L_10119d26: ;
    COW_AT(10119d26)
        wr32(sp0 - 0x28u, loc_28 + 0x1cu);
        if ((int32_t)(ebx + 1u) < (int32_t)rd8(rd32(rd32(self + 0xcu)) + 0x1bu))
        {
            eax = rd32(self + 0xcu);
            ecx = rd32(rd32(self + 0xcu));
            ebx = ebx + 1u;
            loc_28 = loc_28 + 0x1cu;
            goto L_10119c9e;
        }
        edx = rd8(rd32(rd32(self + 0xcu)) + 0x1bu);
L_10119d44: ;
    COW_AT(10119d44)
        if (rd32(self + 8u) == 0u)
        {
            eax = rd32(self + 8u);
        }
        else
        {
            eax = rd32(self + 8u);
    COW_AT(10119d4b)
            wr32(self + 4u, eax);
        }
    COW_AT(10119d4e)
        if ((uint8_t)arg1 == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        }
        else
        {
    COW_AT(10119d56)
            wr32(sp0 - 0x3cu, self + 0x20u);
            wr32(sp0 - 0x40u, self + 0x1cu);
            g->eax = self + 0x20u;
            g->esp = sp0 - 0x38u;
            t19 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, self + 0x1cu, self + 0x20u);
            eax = t19;
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
        }
    }
L_10119d68: ;
    COW_AT(10119d68)
    g->ebx = loc_2c;
    g->esi = loc_34;
    g->edi = loc_38;
    g->ebp = loc_30;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10119c00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10119c14u:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        g->edi = self;
        wr32(sp0 - 0x30u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10119c1du:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        g->edi = self;
        wr32(sp0 - 0x30u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10119c27u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        g->edi = self;
        wr32(sp0 - 0x30u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10119c2eu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        g->edi = self;
        wr32(sp0 - 0x30u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10119c32u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        g->edi = self;
        wr32(sp0 - 0x30u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10119c33u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->edi = self;
        wr32(sp0 - 0x30u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10119c38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        wr32(sp0 - 0x30u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10119c3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        wr32(sp0 - 0x30u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10119c47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        wr32(sp0 - 0x30u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10119c55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        wr32(sp0 - 0x30u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10119c65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x10119c71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119c76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119c84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119c9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119c9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119ca9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119cb1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119cc4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119cf2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119d04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119d0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119d1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119d22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119d26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119d44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119d4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119d4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119d56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119d68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10119c00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10119c00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
