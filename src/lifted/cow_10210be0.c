/* f_0x10210be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10210be0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10210c34;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_10210c66;
    }
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10664508u));
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10210840u), t1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(rd32(COW_IMG(0x1066451cu)) + 0x14u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1066451cu)) + 0x14u);
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1066451cu)) + 0x14u);
        ecx = t2;
        edx = t3;
        esi = rd32(COW_IMG(0x1066451cu)) + 0x14u;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(esi, 0u);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x100f8ac0u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    t9 = rd32(self + 8u);
    g->edx = t8;
    t10 = cow_call_regs(g, COW_IMG(0x1015e790u), t7, COW_IMG(0x10621838u), g->edx, 0, 2, t9, 1u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_10210c34: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_10210c55;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        edx = in_edx;
        goto L_10210c66;
    }
    g->eax = (uint32_t)(int16_t)arg2 - 2u;
    t12 = rd32(COW_IMG(0x1066451cu));
    g->esp = sp0 - 4u;
    t13 = cow_fastcall(g, COW_IMG(0x102107d0u), rd32(COW_IMG(0x10664508u)), t12, 1, t12);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_10210c55: ;
    g->eax = rd32(COW_IMG(0x10664518u));
    t15 = rd32(COW_IMG(0x10664518u));
    g->esp = sp0 - 4u;
    t16 = cow_fastcall(g, COW_IMG(0x102107d0u), rd32(COW_IMG(0x10664508u)), in_edx, 1, t15);
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_10210c66: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10210be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10210be0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
