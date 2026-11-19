/* f_0x1026d886 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_1026d886(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026d8acu: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); goto E_1026d8ac;
    case 0x1026d8b5u: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_4 = rd32(sp0 - 4u); goto E_1026d8b5;
    case 0x1026d8c1u: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_4 = rd32(sp0 - 4u); goto E_1026d8c1;
    case 0x1026d8f6u: ecx = g->ecx; edx = g->edx; goto E_1026d8f6;
    case 0x1026d8ffu: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); goto E_1026d8ff;
    case 0x1026d907u: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); goto E_1026d907;
    case 0x1026d938u: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); goto E_1026d938;
    case 0x1026d941u: ecx = g->ecx; edx = g->edx; goto E_1026d941;
    case 0x1026d94au: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); goto E_1026d94a;
    case 0x1026d952u: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); goto E_1026d952;
    case 0x1026d983u: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); goto E_1026d983;
    case 0x1026d98cu: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); goto E_1026d98c;
    case 0x1026d9b0u: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); goto E_1026d9b0;
    case 0x1026d9beu: ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_4 = rd32(sp0 - 4u); goto E_1026d9be;
    default: break;
    }
#endif

    COW_AT(1026d886)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x1cu, 0xccccccccu);
    wr32(sp0 - 0x18u, 0xccccccccu);
    wr32(sp0 - 0x14u, 0xccccccccu);
    wr32(sp0 - 0x10u, 0xccccccccu);
    wr32(sp0 - 0xcu, 0xccccccccu);
    wr32(sp0 - 8u, 0xccccccccu);
    wr32(sp0 - 0x18u, 0u);
    edx = in_edx;
    loc_4 = in_ebp;
    loc_1c = 0xccccccccu;
    loc_18 = 0u;
L_1026d8b5: ;
    COW_AT(1026d8b5)
    if ((int32_t)loc_18 >= (int32_t)arg4)
    {
        ecx = loc_18;
        goto L_1026d9be;
    }
    ecx = loc_18;
    COW_AT(1026d8c1)
    wr32(sp0 - 0x20u, 0u);
    t1 = arg1 + loc_18 * 0x10058u;
    wr32(sp0 - 0x24u, t1);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026ccc5u), 3, t1, 0u, loc_1c);
    t2 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 0x10u, arg5);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x1cu, 0u);
    loc_1c = 0u;
L_1026d8ff: ;
    COW_AT(1026d8ff)
    if ((int32_t)loc_1c >= (int32_t)arg6) goto L_1026d938;
    COW_AT(1026d907)
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    t3 = arg1 + rd32(sp0 - 0x18u) * 0x10058u + 0x803cu;
    wr32(sp0 - 0x24u, t3);
    g->esp = sp0 - 0x18u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), arg1, 3, t3, sp0 - 0x14u, loc_1c);
    t4 = arg5 + rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t4);
    t5 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x14u, t5);
    COW_AT(1026d8f6)
    t6 = rd32(sp0 - 0x1cu) + 1u;
    wr32(sp0 - 0x1cu, t6);
    loc_1c = t6;
    goto L_1026d8ff;
L_1026d8ac: ;
    COW_AT(1026d8ac)
    t15 = rd32(sp0 - 0x18u) + 1u;
    wr32(sp0 - 0x18u, t15);
    loc_4 = rd32(sp0 - 4u);
    loc_18 = t15;
    goto L_1026d8b5;
L_1026d938: ;
    COW_AT(1026d938)
    wr32(sp0 - 0x1cu, 0u);
    loc_1c = 0u;
L_1026d94a: ;
    COW_AT(1026d94a)
    if ((int32_t)loc_1c >= (int32_t)arg7) goto L_1026d983;
    COW_AT(1026d952)
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    t7 = arg1 + rd32(sp0 - 0x18u) * 0x10058u + 0x4034u;
    wr32(sp0 - 0x24u, t7);
    g->esp = sp0 - 0x18u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), t7, 3, t7, sp0 - 0x14u, loc_1c);
    t8 = arg5 + rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t8);
    t9 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x14u, t9);
    COW_AT(1026d941)
    t10 = rd32(sp0 - 0x1cu) + 1u;
    wr32(sp0 - 0x1cu, t10);
    loc_1c = t10;
    goto L_1026d94a;
L_1026d983: ;
    COW_AT(1026d983)
    if (rd32(rd32(sp0 + 8u) + 4u) != 0u)
    {
    COW_AT(1026d98c)
        t11 = rd32(rd32(sp0 + 8u) + 4u);
        wr32(sp0 - 0x20u, t11);
        t12 = rd32(rd32(sp0 + 8u));
        wr32(sp0 - 0x24u, t12);
        t13 = arg1 + rd32(sp0 - 0x18u) * 0x10058u;
        wr32(sp0 - 0x28u, t13);
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x1026ce14u), g->eax, t13, t12, 1, 4, t13, t12, t11, loc_1c);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(1026d9b0)
    t14 = rd32(sp0 + 8u) + 8u;
    wr32(sp0 + 8u, t14);
    edx = t14;
    goto L_1026d8ac;
L_1026d9be: ;
    COW_AT(1026d9be)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026d886(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026d8acu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d8b5u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d8c1u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d8f6u:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026d8ffu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d907u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d938u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d941u:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026d94au:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d952u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d983u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d98cu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d9b0u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d9beu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d886(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1026d886(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
