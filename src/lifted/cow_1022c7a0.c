/* f_0x1022c7a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1022c7a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022c7bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1022c7bc;
    case 0x1022c7d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1022c7d4;
    case 0x1022c7e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1022c7e1;
    case 0x1022c7e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1022c7e6;
    case 0x1022c820u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1022c820;
    case 0x1022c832u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1022c832;
    case 0x1022c86bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1022c86b;
    case 0x1022c881u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1022c881;
    default: break;
    }
#endif

    COW_AT(1022c7a0)
    t1 = rd32(self + 0x30u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x1022c730u), self, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_cdecl(g, COW_IMG(0x1022cf30u), 1, t2);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
        edi = t2;
        goto L_1022c7d4;
    }
    eax = t5;
    edx = t6;
    COW_AT(1022c7bc)
    t7 = rd32(COW_IMG(0x10386900u) + eax * 4u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, t7);
    g->esi = in_esi;
    g->edi = in_edi;
    return t8 & 0xffffff00u;
L_1022c7d4: ;
    COW_AT(1022c7d4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x1022c770u), self, 1, 0xffffffffu);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_1022c7e6;
    }
    eax = t9;
    COW_AT(1022c7e1)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_1022c7e6: ;
    COW_AT(1022c7e6)
    wr32(COW_IMG(0x10667a84u), edi);
    t12 = (edx & 0xffffff00u) | rd8(eax + 0x44u);
    t13 = (ecx & 0xffffff00u) | rd8(eax + 2u);
    t14 = (t12 & 0xffff0000u) | rd16(eax + 6u);
    g->eax = eax;
    g->edx = t14;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x101022e0u), t13, 4, t14, t13, t12, COW_IMG(0x10485a30u));
    t16 = g->edx;
    g->eax = (uint16_t)t15;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x10159440u), rd32(COW_IMG(0x1057876cu)), 2, COW_IMG(0x1022d140u), (uint16_t)t15);
    t18 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        eax = t17;
        edx = t18;
        goto L_1022c832;
    }
    eax = t17;
    edx = t18;
    COW_AT(1022c820)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0x16u);
    g->esi = in_esi;
    g->edi = in_edi;
    return t19 & 0xffffff00u;
L_1022c832: ;
    COW_AT(1022c832)
    g->eax = eax;
    g->edx = edx;
    t20 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x101594e0u), t20, 1, COW_IMG(0x1022d1c0u));
    t22 = g->ecx;
    t23 = g->edx;
    g->edx = t23;
    cow_call_regs(g, COW_IMG(0x1022b850u), t21, t22, g->edx, 1, 1, edi);
    t24 = g->edx;
    t25 = rd32(self + 8u);
    g->eax = t25;
    g->edx = t24;
    t26 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t25, 1u, 0u, 1u, 0u);
    t27 = g->edx;
    if (rd32(self + 0xc0u) != 0u)
    {
        eax = t26;
        edx = t27;
        esi = rd32(self + 0xc0u);
    COW_AT(1022c86b)
        t28 = rd32(esi + 8u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t28, 1u, 0u, 1u, 0u);
    }
    COW_AT(1022c881)
    t29 = rd32(rd32(COW_IMG(0x10578474u)) + 8u);
    g->eax = t29;
    g->edx = rd32(COW_IMG(0x10578474u));
    t30 = rd32(COW_IMG(0x10578474u));
    g->esp = sp0 - 8u;
    t31 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t29, 1u, 1u, 0u, 0u);
    t32 = g->ecx;
    t33 = g->edx;
    g->edx = t33;
    g->esp = sp0 - 0xcu;
    t34 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x4fu);
    t35 = g->edx;
    g->edx = t35;
    t36 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 8u;
    t37 = cow_thiscall(g, COW_IMG(0x1013a320u), t36, 2, t34, 2u);
    t38 = g->ecx;
    t39 = g->edx;
    t40 = cow_call_regs(g, COW_IMG(0x1022bda0u), t37, t38, t39, 1, 2, edi, 2u);
    t41 = g->edx;
    g->edx = t41;
    g->esp = sp0 - 0xcu;
    t42 = cow_thiscall(g, COW_IMG(0x1022bf00u), t40, 1, edi);
    t43 = g->edx;
    g->esp = sp0 - 8u;
    t44 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t42, 2u);
    g->esi = in_esi;
    g->edi = in_edi;
    return (t44 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022c7a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022c7bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1022c7d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1022c7e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1022c7e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1022c820u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1022c832u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1022c86bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1022c881u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022c7a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1022c7a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
