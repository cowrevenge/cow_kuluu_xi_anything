/* f_0x1022f3d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022f3d0(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x38u, 0x70u);
    g->esp = sp0 - 0x2cu;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x70u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr32(COW_IMG(0x10668eccu), 0u);
    }
    else
    {
        eax = t1;
        edx = t3;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t4 = cow_thiscall(g, COW_IMG(0x1022f610u), eax, 0);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(COW_IMG(0x10668eccu), t4);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    wr32(sp0 - 0x38u, 0x94u);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x94u, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        wr32(COW_IMG(0x10668ed0u), 0u);
    }
    else
    {
        eax = t7;
        edx = t9;
        esi = t7;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t10 = cow_thiscall(g, COW_IMG(0x102217c0u), esi, 0);
        t11 = g->edx;
        g->edx = t11;
        t12 = cow_thiscall(g, COW_IMG(0x102303b0u), esi + 0x70u, 0);
        t13 = g->ecx;
        t14 = g->edx;
        wr32(esi, COW_IMG(0x1033c648u));
        wr32(COW_IMG(0x10668ed0u), esi);
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    wr32(sp0 - 0x38u, 0x90u);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x90u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 == 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        wr32(COW_IMG(0x10668ed4u), 0u);
    }
    else
    {
        eax = t15;
        edx = t17;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t18 = cow_thiscall(g, COW_IMG(0x10233c00u), eax, 0);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(COW_IMG(0x10668ed4u), t18);
        eax = t18;
        ecx = t19;
        edx = t20;
    }
    wr32(sp0 - 0x38u, 0x6cu);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t21 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x6cu, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 == 0u)
    {
        ecx = t22;
        edx = t23;
        wr32(COW_IMG(0x10668ed8u), 0u);
    }
    else
    {
        eax = t21;
        edx = t23;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t24 = cow_thiscall(g, COW_IMG(0x102340c0u), eax, 0);
        t25 = g->ecx;
        t26 = g->edx;
        wr32(COW_IMG(0x10668ed8u), t24);
        ecx = t25;
        edx = t26;
    }
    wr32(sp0 - 0x2cu, 0x40u);
    wr32(sp0 - 0x28u, 0x41u);
    wr32(sp0 - 0x24u, 0x42u);
    wr32(sp0 - 0x20u, 0x43u);
    wr32(sp0 - 0x1cu, 0x44u);
    wr32(sp0 - 0x18u, 0x45u);
    wr32(sp0 - 0x14u, 0x46u);
    wr32(sp0 - 0x10u, 0x47u);
    wr32(sp0 - 0xcu, 0x48u);
    wr32(sp0 - 8u, 0x58u);
    wr32(sp0 - 4u, 0x59u);
    esi = COW_IMG(0x10668380u);
    edi = sp0 - 0x2cu;
L_1022f4d7: ;
    wr32(sp0 - 0x38u, rd32(edi));
    g->eax = rd32(edi);
    t27 = rd32(edi);
    g->esp = sp0 - 0x34u;
    t28 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, t27);
    t29 = g->edx;
    wr32(sp0 - 0x38u, t28);
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x1022eee0u), esi, 1, t28);
    t31 = g->ecx;
    t32 = g->edx;
    if ((int32_t)(esi + 0x94u) < (int32_t)COW_IMG(0x106689dcu))
    {
        ecx = t31;
        edx = t32;
        esi = esi + 0x94u;
        edi = edi + 4u;
        goto L_1022f4d7;
    }
    eax = t30;
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022f3d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022f3d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
