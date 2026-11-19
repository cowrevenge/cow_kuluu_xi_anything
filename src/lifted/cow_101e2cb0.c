/* f_0x101e2cb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e2cb0(Guest* g)
{
    uint32_t eax;
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
    case 0x101e2cbfu: self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_101e2cbf;
    case 0x101e2cc6u: eax = g->eax; in_edx = g->edx; in_esi = g->esi; goto E_101e2cc6;
    case 0x101e2cedu: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_101e2ced;
    case 0x101e2cf8u: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_101e2cf8;
    case 0x101e2d13u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_101e2d13;
    case 0x101e2d6au: in_edx = g->edx; in_esi = g->esi; goto E_101e2d6a;
    case 0x101e2d79u: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_101e2d79;
    case 0x101e2d94u: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_101e2d94;
    default: break;
    }
#endif

    COW_AT(101e2cb0)
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_101e2d94;
    }
    COW_AT(101e2cbf)
    t1 = rd32(COW_IMG(0x101e2d9cu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101e2cc6u: goto L_101e2cc6;
    case 0x101e2d13u: goto L_101e2d13;
    case 0x101e2d6au: goto L_101e2d6a;
    case 0x101e2d79u: goto L_101e2d79;
    case 0x101e2d94u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_101e2d94;
    default: rt_fatal(g, COW_IMG(0x101e2cbfu), "switch");
    }
    return 0;
L_101e2cc6: ;
    COW_AT(101e2cc6)
    t22 = rd32(rd32(COW_IMG(0x106634acu)) + 8u);
    g->eax = rd32(COW_IMG(0x106634acu));
    t23 = rd32(COW_IMG(0x106634acu));
    g->esp = sp0;
    t24 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t22, 0u);
    t25 = g->ecx;
    t26 = g->edx;
    g->edx = t26;
    cow_thiscall(g, COW_IMG(0x10037b90u), t25, 0);
    t27 = g->edx;
    if (rd32(COW_IMG(0x106634acu)) == 0u)
    {
        eax = rd32(COW_IMG(0x106634acu));
        edx = t27;
        goto L_101e2d94;
    }
    eax = rd32(COW_IMG(0x106634acu));
    edx = t27;
    COW_AT(101e2ced)
    if (rd32(eax + 8u) == 0u)
    {
        eax = rd32(eax + 8u);
        goto L_101e2d94;
    }
    eax = rd32(eax + 8u);
    COW_AT(101e2cf8)
    wr8(eax + 0x63u, 1u);
    g->edx = rd32(COW_IMG(0x106634acu));
    t28 = rd32(COW_IMG(0x106634acu));
    g->esp = sp0;
    t29 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(t28 + 8u), g->edx, 0, 2, 9u, 0u);
    t30 = g->edx;
    g->esi = in_esi;
    g->edx = t30;
    return (t29 & 0xffffff00u) | 1u;
L_101e2d13: ;
    COW_AT(101e2d13)
    t9 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x1015e790u), t9, COW_IMG(0x10621838u), g->edx, 0, 2, t9, 1u);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f2b0u));
    t13 = g->edx;
    t14 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = t13;
    t15 = rd32(COW_IMG(0x10578204u));
    t16 = cow_call_regs(g, COW_IMG(0x1015e790u), t12, COW_IMG(0x10621838u), g->edx, 0, 2, t14, 1u);
    t17 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013bf40u), t15, 0);
    t18 = rd32(rd32(COW_IMG(0x106634bcu)) + 8u);
    g->edx = rd32(COW_IMG(0x106634bcu));
    t19 = rd32(COW_IMG(0x106634bcu));
    t20 = cow_call_regs(g, COW_IMG(0x1015e530u), t18, COW_IMG(0x10621838u), g->edx, 0, 1, t18);
    t21 = g->edx;
    g->esi = in_esi;
    g->edx = t21;
    return (t20 & 0xffffff00u) | 1u;
L_101e2d6a: ;
    COW_AT(101e2d6a)
    wr8(rd32(COW_IMG(0x106634c8u)) + 0x10u, 1u);
    g->esi = in_esi;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 1u;
L_101e2d79: ;
    COW_AT(101e2d79)
    t2 = rd32(rd32(COW_IMG(0x106634ccu)) + 8u);
    g->eax = t2;
    t3 = rd32(COW_IMG(0x106634ccu));
    g->esp = sp0;
    t4 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t3, 2, t2, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10037e90u), t5, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_101e2d94: ;
    COW_AT(101e2d94)
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e2cb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e2cbfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101e2cc6u:
    {
        uint32_t eax;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101e2cedu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101e2cf8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101e2d13u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101e2d6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101e2d79u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101e2d94u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2cb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101e2cb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
