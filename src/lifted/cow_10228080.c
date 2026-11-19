/* f_0x10228080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_10228080(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    int64_t q11;
    int64_t q14;
    int64_t q17;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022809bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1022809b;
    case 0x102280c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_102280c1;
    case 0x102280d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_102280d4;
    case 0x102280e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102280e6;
    case 0x1022810bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022810b;
    case 0x10228113u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10228113;
    case 0x1022811au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022811a;
    case 0x10228122u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10228122;
    case 0x1022813du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022813d;
    case 0x10228142u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10228142;
    case 0x10228162u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10228162;
    case 0x10228168u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_10228168;
    case 0x1022816du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1022816d;
    case 0x102281a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102281a3;
    default: break;
    }
#endif

    COW_AT(10228080)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, 0xc3u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xc3u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(1022809b)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t4 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
        t5 = g->edx;
        wr32(sp0 - 0x20u, arg5);
        g->ebx = arg1;
        g->eax = t4 * 3u;
        g->edx = t5;
        t6 = cow_thiscall(g, COW_IMG(0x10227930u), arg1, 1, arg5);
        t7 = g->edx;
        if (t6 == 0u)
        {
            eax = t6;
            edx = t7;
            loc_14 = in_ebx;
            loc_18 = in_esi;
            loc_1c = in_edi;
        }
        else
        {
            eax = t6;
            esi = t4 * 0x3cu;
    COW_AT(102280c1)
            if (rd32(arg5 * 4u + arg1 + 0x2f0u) == 0x7fffffffu)
            {
                edx = rd32(arg5 * 4u + arg1 + 0x2f0u);
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
            }
            else
            {
                edx = rd32(arg5 * 4u + arg1 + 0x2f0u);
    COW_AT(102280d4)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t8 = cow_thiscall(g, COW_IMG(0x10227100u), eax, 0);
                t9 = g->edx;
                if (t8 == 0xffu)
                {
                    eax = t8;
                    edx = t9;
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                }
                else
                {
                    edx = t9;
    COW_AT(102280e6)
                    t10 = edx - esi + 0x3bu;
                    q11 = (int64_t)cow_muls(0x88888889u, t10);
                    t12 = (uint32_t)((int32_t)(t10 + cow_qhi(q11)) >> 5u);
                    t13 = t12 + (t12 >> 0x1fu);
                    if ((int32_t)t13 <= 5)
                    {
                        eax = t12 >> 0x1fu;
                        edx = t13;
                        loc_14 = rd32(sp0 - 0x14u);
                        loc_18 = rd32(sp0 - 0x18u);
                        loc_1c = rd32(sp0 - 0x1cu);
                    }
                    else
                    {
                        eax = t12 >> 0x1fu;
                        ecx = t13;
                        edx = t13;
    COW_AT(1022810b)
                        if ((int32_t)ecx < 356400) goto L_1022811a;
    COW_AT(10228113)
                        ecx = 0x57030u;
L_10228122: ;
    COW_AT(10228122)
                        q14 = (int64_t)cow_muls(0x91a2b3c5u, ecx);
                        t15 = (uint32_t)((int32_t)(ecx + cow_qhi(q14)) >> 0xbu);
                        t16 = t15 + (t15 >> 0x1fu);
                        wr32(sp0 - 0x20u, t16);
                        wr32(sp0 - 0x24u, COW_IMG(0x1038627cu));
                        eax = (uint32_t)(q14);
                        ecx = t15 >> 0x1fu;
                        loc_20 = t16;
                        loc_24 = COW_IMG(0x1038627cu);
L_10228168: ;
    COW_AT(10228168)
                        wr32(sp0 - 0x28u, sp0 - 0x10u);
                        edx = sp0 - 0x10u;
L_1022816d: ;
    COW_AT(1022816d)
                        g->ebx = arg1;
                        g->esp = sp0 - 0x14u;
                        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, loc_24, loc_20, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
                        wr32(sp0 - 0x20u, 1u);
                        wr32(sp0 - 0x24u, 0x3f59999au);
                        wr32(sp0 - 0x28u, 0x3f59999au);
                        wr32(sp0 - 0x2cu, 0x80808080u);
                        wr32(sp0 - 0x30u, sp0 - 0x10u);
                        wr32(sp0 - 0x34u, arg4 + 0x14u);
                        wr32(sp0 - 0x38u, arg3 + 0xeu);
                        g->eax = sp0 - 0x10u;
                        g->edx = arg3 + 0xeu;
                        t20 = cow_cdecl(g, COW_IMG(0x101c97b0u), 9, arg3 + 0xeu, arg4 + 0x14u, sp0 - 0x10u, 0x80808080u, 0x3f59999au, 0x3f59999au, 1u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
                        t21 = g->edx;
                        eax = t20;
                        edx = t21;
                        loc_14 = rd32(sp0 - 0x14u);
                        loc_18 = rd32(sp0 - 0x18u);
                        loc_1c = rd32(sp0 - 0x1cu);
                    }
                }
            }
        }
    }
    COW_AT(102281a3)
    g->ebx = loc_14;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->edx = edx;
    return eax;
L_1022811a: ;
    COW_AT(1022811a)
    if ((int32_t)ecx < 3600) goto L_1022813d;
    goto L_10228122;
L_1022813d: ;
    COW_AT(1022813d)
    if ((int32_t)ecx < 60) goto L_10228162;
    COW_AT(10228142)
    q17 = (int64_t)cow_muls(0x88888889u, ecx);
    t18 = (uint32_t)((int32_t)(ecx + cow_qhi(q17)) >> 5u);
    t19 = t18 + (t18 >> 0x1fu);
    wr32(sp0 - 0x20u, t19);
    wr32(sp0 - 0x24u, COW_IMG(0x10386278u));
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    eax = t18 >> 0x1fu;
    ecx = sp0 - 0x10u;
    edx = t19;
    loc_20 = t19;
    loc_24 = COW_IMG(0x10386278u);
    goto L_1022816d;
L_10228162: ;
    COW_AT(10228162)
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, COW_IMG(0x10352ff0u));
    loc_20 = ecx;
    loc_24 = COW_IMG(0x10352ff0u);
    goto L_10228168;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10228080(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022809bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102280c1u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102280d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102280e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022810bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10228113u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022811au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10228122u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022813du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10228142u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10228162u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10228168u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022816du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102281a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10228080(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10228080(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
