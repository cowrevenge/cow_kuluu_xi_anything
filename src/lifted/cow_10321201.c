/* f_0x10321201 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
void cow_fn_10321201(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
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
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1032120du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1032120d;
    case 0x10321213u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10321213;
    case 0x1032122du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1032122d;
    case 0x10321234u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10321234;
    case 0x1032124bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1032124b;
    case 0x10321250u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_10321250;
    case 0x10321258u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_10321258;
    case 0x1032125cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1032125c;
    case 0x10321261u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_10321261;
    case 0x10321273u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_10321273;
    case 0x10321279u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_10321279;
    case 0x1032129cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1032129c;
    case 0x1032129fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1032129f;
    case 0x103212a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_103212a7;
    default: break;
    }
#endif

    COW_AT(10321201)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->esp = sp0 - 0x14u;
    t1 = cow_fastcall(g, COW_IMG(0x1031a04du), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1032120d)
    if (rd32(eax + 0x68u) == 0u)
    {
        loc_4 = in_ebp;
        loc_8 = self;
        loc_c = self;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_10321234;
    }
    COW_AT(10321213)
    wr32(sp0 - 0x18u, arg8);
    wr32(sp0 - 0x1cu, arg7);
    wr32(sp0 - 0x20u, arg5);
    wr32(sp0 - 0x24u, arg4);
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0x2cu, arg2);
    wr32(sp0 - 0x30u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10316400u), g->eax, ecx, edx, 1, 9, arg1, arg2, arg3, arg4, arg5, arg7, arg8, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1032122d)
    if (eax != 0u) goto L_103212a7;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_10321234: ;
    COW_AT(10321234)
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, arg6);
    wr32(sp0 - 0x24u, arg7);
    wr32(sp0 - 0x28u, arg5);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x1031652bu), g->eax, ecx, edx, 1, 5, arg5, arg7, arg6, sp0 - 8u, sp0 - 0xcu);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(1032124b)
    esi = eax;
    loc_8 = rd32(sp0 - 8u);
L_10321250: ;
    COW_AT(10321250)
    if (loc_8 >= rd32(sp0 - 0xcu)) goto L_103212a7;
    COW_AT(10321258)
    if ((int32_t)arg6 >= (int32_t)rd32(esi))
    {
    COW_AT(1032125c)
        if ((int32_t)arg6 <= (int32_t)rd32(esi + 4u))
        {
    COW_AT(10321261)
            if (rd32(rd32(esi + 0xcu) * 0x10u + rd32(esi + 0x10u) - 0xcu) == 0u)
            {
                eax = rd32(esi + 0xcu) * 0x10u + rd32(esi + 0x10u);
                ecx = rd32(rd32(esi + 0xcu) * 0x10u + rd32(esi + 0x10u) - 0xcu);
                goto L_10321279;
            }
            eax = rd32(esi + 0xcu) * 0x10u + rd32(esi + 0x10u);
            ecx = rd32(rd32(esi + 0xcu) * 0x10u + rd32(esi + 0x10u) - 0xcu);
    COW_AT(10321273)
            if (rd8(ecx + 8u) != 0u) goto L_1032129f;
L_10321279: ;
    COW_AT(10321279)
            wr32(sp0 - 0x18u, 1u);
            wr32(sp0 - 0x1cu, arg8);
            wr32(sp0 - 0x20u, arg7);
            wr32(sp0 - 0x24u, esi);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, eax - 0x10u);
            wr32(sp0 - 0x30u, arg5);
            wr32(sp0 - 0x34u, arg4);
            wr32(sp0 - 0x38u, arg3);
            wr32(sp0 - 0x3cu, arg2);
            wr32(sp0 - 0x40u, arg1);
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_thiscall_cdecl(g, COW_IMG(0x103213bcu), ecx, 10, arg1, arg2, arg3, arg4, arg5, eax - 0x10u, 0u, esi, arg7, arg8);
            t9 = g->edx;
            edx = t9;
    COW_AT(1032129c)
            loc_8 = rd32(sp0 - 8u);
        }
    }
L_1032129f: ;
    COW_AT(1032129f)
    wr32(sp0 - 8u, loc_8 + 1u);
    esi = esi + 0x14u;
    loc_8 = loc_8 + 1u;
    goto L_10321250;
L_103212a7: ;
    COW_AT(103212a7)
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10321201(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1032120du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x10321213u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x1032122du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10321234u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032124bu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->edi = arg6;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10321250u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10321258u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1032125cu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10321261u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10321273u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10321279u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1032129cu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1032129fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x103212a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10321201(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10321201(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
