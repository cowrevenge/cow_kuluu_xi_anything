/* f_0x101513d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101513d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101513e6u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); goto E_101513e6;
    case 0x101513f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101513f4;
    case 0x101513feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101513fe;
    case 0x1015141eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1015141e;
    case 0x1015145du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_1015145d;
    case 0x10151468u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_10151468;
    case 0x10151481u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_10151481;
    case 0x10151492u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_10151492;
    case 0x101514a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_101514a5;
    case 0x101514a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_101514a7;
    case 0x101514bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_101514bb;
    case 0x101514d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101514d3;
    case 0x101514f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_101514f4;
    case 0x101514ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_101514ff;
    case 0x1015150bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1015150b;
    case 0x10151514u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10151514;
    case 0x1015153du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_1015153d;
    case 0x10151555u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10151555;
    case 0x1015156du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_1015156d;
    case 0x101515acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101515ac;
    default: break;
    }
#endif

    COW_AT(101513d0)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        ebp = in_ebp;
        esi = in_esi;
        loc_14 = in_ebx;
        loc_18 = in_edi;
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(101513e6)
        wr32(sp0 - 0x1cu, in_ebp);
        wr32(sp0 - 0x20u, in_esi);
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        t1 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        if ((t1 & 0x200000u) != 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            goto L_101513fe;
        }
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(101513f4)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t4 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        if ((t4 >> 8u & 8u) == 0u)
        {
            edx = t6;
            goto L_1015141e;
        }
        eax = t4;
        ecx = t5;
        edx = t6;
L_101513fe: ;
    COW_AT(101513fe)
        wr32(sp0 - 0x24u, 0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t7 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, 0u);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x28u, 0u);
        t10 = (uint8_t)t7 - 1u;
        g->ebx = self;
        g->edx = t9;
        g->esp = sp0 - 0x1cu;
        t11 = cow_call_regs(g, COW_IMG(0x100eb8d0u), t10, t8, g->edx, 1, 3, 0u, 0u, rd32(sp0 - 0x20u));
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x2cu, t10);
        wr32(sp0 - 0x30u, t10 - t11);
        g->edx = t13;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x101cb590u), 2, t10 - t11, t10);
        t14 = g->edx;
        edx = t14;
L_1015141e: ;
    COW_AT(1015141e)
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, 0xbu);
        wr32(sp0 - 0x30u, sp0 - 8u);
        t15 = rd32(self + 8u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        g->ebx = self;
        g->edi = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x10118900u), t15, 4, sp0 - 8u, 0xbu, 1u, 1u);
        t16 = g->edx;
        t17 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0xcu, t17);
        if (rd8(rd32(COW_IMG(0x104dfd98u)) + 0x194c6u) != 0u)
        {
            edx = t16;
            loc_c = t17;
            goto L_10151481;
        }
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = t16;
        loc_c = t17;
    COW_AT(1015145d)
        if (rd16(eax + 0x194c4u) != 0xffffu) goto L_10151481;
    COW_AT(10151468)
        wr32(sp0 - 0x24u, 1u);
        t18 = rd32(sp0 - 6u) + 1u;
        wr32(sp0 - 0x28u, t18);
        t19 = rd32(sp0 - 4u) + 9u;
        wr32(sp0 - 0x2cu, t19);
        t20 = rd32(eax + 0x194c0u);
        wr32(sp0 - 0x30u, t20);
        ecx = t19;
        edx = t20;
        loc_28 = t18;
        loc_2c = t19;
        loc_30 = t20;
L_10151492: ;
    COW_AT(10151492)
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x10140910u), 4, loc_30, loc_2c, loc_28, 1u);
        wr32(sp0 - 0x10u, 0u);
        ebp = 0x194c8u;
        loc_10 = 0u;
L_101514a7: ;
    COW_AT(101514a7)
        if (rd32(ebp + rd32(COW_IMG(0x104dfd98u))) == 0u)
        {
            eax = rd32(ebp + rd32(COW_IMG(0x104dfd98u)));
        }
        else
        {
            edx = rd32(COW_IMG(0x104dfd98u));
            esi = ebp + rd32(COW_IMG(0x104dfd98u));
    COW_AT(101514bb)
            t23 = rd16(esi + 4u);
            wr32(sp0 - 0x24u, t23);
            g->eax = t23;
            g->esp = sp0 - 0x20u;
            t24 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t23);
            if (t24 == 0u)
            {
                eax = t24;
                loc_10 = rd32(sp0 - 0x10u);
            }
            else
            {
                eax = t24;
                edi = t24;
    COW_AT(101514d3)
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, 1u);
                t25 = rd32(sp0 - 0x10u) + 1u;
                wr32(sp0 - 0x2cu, t25);
                wr32(sp0 - 0x30u, sp0 - 8u);
                g->ebx = self;
                g->edi = edi;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t25, 1u, 1u);
                if (rd32(edi + 0x14c0u) == 0u)
                {
                    eax = rd32(edi + 0x14c0u);
                    goto L_1015150b;
                }
                eax = rd32(edi + 0x14c0u);
    COW_AT(101514f4)
                if (rd16(eax) <= 1u)
                {
                    eax = (eax & 0xffffff00u) | rd16(eax) > 1u;
                    goto L_1015150b;
                }
    COW_AT(101514ff)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x80808080u);
                wr32(sp0 - 0x2cu, rd32(esi));
                eax = rd32(esi);
                loc_2c = rd32(esi);
L_10151514: ;
    COW_AT(10151514)
                wr32(sp0 - 0x30u, 0x3f800000u);
                t26 = rd32(sp0 - 6u);
                wr32(sp0 - 0x34u, t26);
                t27 = rd32(sp0 - 8u);
                wr32(sp0 - 0x38u, t27);
                t28 = (eax & 0xffffff00u) | rd8(esi + 6u);
                wr32(sp0 - 0x3cu, t28);
                wr32(sp0 - 0x40u, 0u);
                g->eax = t28;
                g->edx = t27;
                g->esp = sp0 - 0x38u;
                t29 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 0u, t28);
                t30 = g->edx;
                wr32(sp0 - 0x3cu, t29);
                g->esp = sp0 - 0x20u;
                t31 = cow_thiscall(g, COW_IMG(0x1015bdb0u), rd32(COW_IMG(0x10621808u)), 7, t29, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), 0x3f800000u, rd32(sp0 - 0x2cu), 0x80808080u, 0u);
                eax = t31;
                loc_10 = rd32(sp0 - 0x10u);
            }
        }
    COW_AT(1015153d)
        wr32(sp0 - 0x10u, loc_10 + 1u);
        if ((int32_t)(ebp + 8u) < 103696)
        {
            ebp = ebp + 8u;
            loc_10 = loc_10 + 1u;
            goto L_101514a5;
        }
    COW_AT(10151555)
        if ((int32_t)rd32(sp0 - 0xcu) <= (int32_t)((uint32_t)(int16_t)(rd16(self + 0x18u) + 4u) + 5u))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 4u);
            edx = (uint32_t)(int16_t)(rd16(self + 0x18u) + 4u) + 5u;
            ebp = rd32(sp0 - 0x1cu);
            esi = rd32(sp0 - 0x20u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 4u);
            ecx = rd32(sp0 - 0xcu);
            ebp = rd32(sp0 - 0x1cu);
            esi = rd32(sp0 - 0x20u);
    COW_AT(1015156d)
            t32 = (-(rd32(self + 0xc0u) != 4u) & 0x4060u) - 0x7f7fbfe0u;
            wr32(sp0 - 0x1cu, t32);
            t33 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
            wr32(sp0 - 0x20u, t33);
            t34 = (t33 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 5u);
            wr32(sp0 - 0x24u, t34);
            wr32(sp0 - 0x28u, eax);
            t35 = ecx - eax - 5u;
            wr32(sp0 - 0x2cu, t35);
            g->eax = eax;
            g->edx = t34;
            g->esp = sp0 - 0x18u;
            t36 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t35, eax, t34, t33, t32);
            t37 = g->edx;
            eax = t36;
            edx = t37;
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
    }
    COW_AT(101515ac)
    g->ebx = loc_14;
    g->esi = esi;
    g->edi = loc_18;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_10151481: ;
    COW_AT(10151481)
    wr32(sp0 - 0x24u, 1u);
    t21 = rd32(sp0 - 6u) + 1u;
    wr32(sp0 - 0x28u, t21);
    t22 = rd32(sp0 - 4u) + 9u;
    wr32(sp0 - 0x2cu, t22);
    wr32(sp0 - 0x30u, 0u);
    eax = t21;
    ecx = t22;
    loc_28 = t21;
    loc_2c = t22;
    loc_30 = 0u;
    goto L_10151492;
L_101514a5: ;
    COW_AT(101514a5)
    goto L_101514a7;
L_1015150b: ;
    COW_AT(1015150b)
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x80808080u);
    wr32(sp0 - 0x2cu, 0u);
    loc_2c = 0u;
    goto L_10151514;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101513d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101513e6u:
    {
        uint32_t eax;
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
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebx = self;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101513f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101513feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015141eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015145du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10151468u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10151481u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10151492u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        g->edi = 0u;
        wr32(sp0 - 0x24u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x101514a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101514a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101514bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101514d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101514f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101514ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015150bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10151514u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x28u, 0x80808080u);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1015153du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10151555u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1015156du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101515acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101513d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101513d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
