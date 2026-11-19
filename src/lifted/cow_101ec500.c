/* f_0x101ec500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ec500(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ec517u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101ec517;
    case 0x101ec51du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101ec51d;
    case 0x101ec527u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101ec527;
    case 0x101ec569u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_101ec569;
    case 0x101ec589u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_101ec589;
    case 0x101ec590u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_101ec590;
    case 0x101ec5afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_101ec5af;
    case 0x101ec5b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_101ec5b8;
    case 0x101ec5cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101ec5cf;
    case 0x101ec5dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101ec5dc;
    case 0x101ec5eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101ec5ea;
    case 0x101ec613u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101ec613;
    case 0x101ec624u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101ec624;
    case 0x101ec626u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_101ec626;
    case 0x101ec62eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_101ec62e;
    case 0x101ec64eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ec64e;
    default: break;
    }
#endif

    COW_AT(101ec500)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr16(self + 0x2eu, (uint16_t)(rd16(self + 0x2eu) - 1u));
    if ((int16_t)rd16(self + 0x2eu) >= 0)
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x2eu);
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x2eu);
    COW_AT(101ec517)
        wr16(self + 0x2eu, 0xffffu);
    }
    COW_AT(101ec51d)
    if ((int16_t)rd16(self + 0x2eu) >= 0)
    {
        edx = in_edx;
        ebp = in_ebp;
        loc_10 = in_ebx;
        loc_14 = in_esi;
        loc_18 = in_edi;
    }
    else
    {
    COW_AT(101ec527)
        wr32(sp0 - 0x1cu, in_ebp);
        wr32(sp0 - 0x20u, sp0 - 8u);
        t1 = rd32(self + 8u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
        t2 = g->edx;
        t3 = (uint32_t)(int16_t)rd16(self + 0x2au) + (uint32_t)(int16_t)rd16(sp0 - 8u) + 4u;
        wr32(sp0 - 0xcu, t3);
        if (rd32(self + 0x30u) == 0u)
        {
            edx = t2;
            ebp = t3;
            esi = (uint32_t)(int16_t)rd16(sp0 - 6u) + 4u;
            loc_c = t3;
        }
        else
        {
            eax = (uint32_t)(int16_t)rd16(sp0 - 8u);
            ecx = rd32(self + 0x30u);
            ebp = t3;
            esi = (uint32_t)(int16_t)rd16(sp0 - 6u) + 4u;
            loc_c = t3;
    COW_AT(101ec569)
            t4 = rd32(self + 0x38u);
            wr32(sp0 - 0x20u, t4);
            t5 = (uint32_t)(int16_t)rd16(sp0 - 4u) - eax - 8u;
            wr32(sp0 - 0x24u, t5);
            wr32(sp0 - 0x28u, esi);
            wr32(sp0 - 0x2cu, eax + 4u);
            wr32(sp0 - 0x30u, 1u);
            g->eax = eax + 4u;
            g->edx = t5;
            g->esp = sp0 - 0x1cu;
            t6 = cow_thiscall_cdecl(g, ecx, ecx, 5, 1u, eax + 4u, esi, t5, t4);
            t7 = g->edx;
            edx = t7;
            esi = esi + t6 * 0x10u;
            loc_c = rd32(sp0 - 0xcu);
        }
    COW_AT(101ec589)
        if (rd32(self + 0x20u) == 0u)
        {
            eax = rd32(self + 0x20u);
    COW_AT(101ec5af)
            if (rd16(self + 0x2cu) == 0u)
            {
                eax = (eax & 0xffff0000u) | rd16(self + 0x2cu);
            }
            else
            {
                eax = (eax & 0xffff0000u) | rd16(self + 0x2cu);
    COW_AT(101ec5b8)
                wr32(sp0 - 0x20u, (uint16_t)eax);
                g->eax = (uint16_t)eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t10 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, (uint16_t)eax);
                t11 = g->edx;
                if (t10 == 0u)
                {
                    eax = t10;
                    edx = t11;
                }
                else
                {
                    eax = t10;
                    edx = t11;
                    ebp = t10;
    COW_AT(101ec5cf)
                    wr32(sp0 - 0x20u, 0u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t12 = cow_thiscall(g, COW_IMG(0x1015b1e0u), ebp, 1, 0u);
                    t13 = g->edx;
                    if ((int32_t)t12 <= 0)
                    {
                        eax = t12;
                        edx = t13;
                        goto L_101ec624;
                    }
                    eax = t12;
                    edx = t13;
                    ebx = 0u;
L_101ec5dc: ;
    COW_AT(101ec5dc)
                    wr32(sp0 - 0x20u, ebx);
                    wr32(sp0 - 0x24u, 0u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t14 = cow_thiscall(g, COW_IMG(0x1015b240u), ebp, 2, 0u, ebx);
                    t15 = g->edx;
                    if (t14 == 0u)
                    {
                        eax = t14;
                        edx = t15;
                    }
                    else
                    {
                        eax = t14;
                        edx = t15;
    COW_AT(101ec5ea)
                        wr32(sp0 - 0x20u, 0x80808080u);
                        wr32(sp0 - 0x24u, ebx);
                        wr32(sp0 - 0x28u, 0u);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t16 = cow_thiscall(g, COW_IMG(0x1015b240u), ebp, 2, 0u, ebx);
                        t17 = g->edx;
                        wr32(sp0 - 0x24u, t16);
                        wr32(sp0 - 0x28u, ebx);
                        wr32(sp0 - 0x2cu, 0u);
                        g->edx = t17;
                        g->esp = sp0 - 0x24u;
                        t18 = cow_thiscall(g, COW_IMG(0x1015b1f0u), ebp, 2, 0u, ebx);
                        t19 = g->ecx;
                        t20 = g->edx;
                        wr32(sp0 - 0x28u, t18);
                        wr32(sp0 - 0x2cu, esi);
                        t21 = rd32(sp0 - 0xcu);
                        wr32(sp0 - 0x30u, t21);
                        g->eax = t21;
                        g->edx = t20;
                        g->esp = sp0 - 4u;
                        t22 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t21, esi, t18, rd32(sp0 - 0x24u), 0x80808080u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
                        t23 = g->edx;
                        eax = t22;
                        edx = t23;
                    }
    COW_AT(101ec613)
                    wr32(sp0 - 0x20u, 0u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t24 = cow_thiscall(g, COW_IMG(0x1015b1e0u), ebp, 1, 0u);
                    t25 = g->edx;
                    if ((int32_t)(ebx + 1u) < (int32_t)t24)
                    {
                        eax = t24;
                        edx = t25;
                        ebx = ebx + 1u;
                        esi = esi + 0x10u;
                        goto L_101ec5dc;
                    }
                    eax = t24;
                    edx = t25;
                    esi = esi + 0x10u;
L_101ec624: ;
    COW_AT(101ec624)
                }
            }
        }
        else
        {
            eax = rd32(self + 0x20u);
    COW_AT(101ec590)
            wr32(sp0 - 0x20u, 0u);
            t8 = (uint32_t)(int16_t)rd16(sp0 - 4u) - ebp - 4u;
            wr32(sp0 - 0x24u, t8);
            wr32(sp0 - 0x28u, eax);
            wr32(sp0 - 0x2cu, esi);
            wr32(sp0 - 0x30u, ebp);
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t9 = cow_thiscall_cdecl(g, COW_IMG(0x1011d6e0u), t8, 5, ebp, esi, eax, t8, 0u);
            eax = t9;
            edx = (uint32_t)(int16_t)rd16(self + 0x26u);
            esi = esi + (uint32_t)(int16_t)rd16(self + 0x26u);
        }
    COW_AT(101ec626)
        if (rd32(self + 0x34u) == 0u)
        {
            ebp = rd32(sp0 - 0x1cu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
        else
        {
            ecx = rd32(self + 0x34u);
            ebp = rd32(sp0 - 0x1cu);
    COW_AT(101ec62e)
            t26 = rd32(self + 0x3cu);
            wr32(sp0 - 0x1cu, t26);
            t27 = (uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u) - 8u;
            wr32(sp0 - 0x20u, t27);
            wr32(sp0 - 0x24u, esi);
            t28 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 4u;
            wr32(sp0 - 0x28u, t28);
            wr32(sp0 - 0x2cu, 1u);
            g->eax = t28;
            g->edx = t27;
            g->esp = sp0 - 0x18u;
            t29 = cow_thiscall_cdecl(g, ecx, ecx, 5, 1u, t28, esi, t27, t26);
            t30 = g->edx;
            eax = t29;
            edx = t30;
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
    }
    COW_AT(101ec64e)
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ec500(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ec517u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec51du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec527u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec569u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101ec589u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec590u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec5afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec5b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec5cfu:
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
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec5dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ec5eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ec613u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ec624u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ec626u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec62eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101ec64eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ec500(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ec500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
