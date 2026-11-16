/* f_0x101b92b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101b92b0(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x106626a0u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106626a0u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x106626a0u), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x106626a4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106626a4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x106626a4u), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x10662dacu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662dacu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x10662dacu), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x1066269cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066269cu));
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x1066269cu), 0u);
        eax = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x10662d9cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662d9cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t13 = rd32(ecx);
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        wr32(COW_IMG(0x10662d9cu), 0u);
        eax = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x10662d98u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662d98u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t16 = rd32(ecx);
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, rd32(t16), ecx, 1, 1u);
        t18 = g->edx;
        wr32(COW_IMG(0x10662d98u), 0u);
        eax = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x10662d40u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10662d40u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t19 = cow_thiscall(g, COW_IMG(0x101b45b0u), esi + 0xf0e8u, 0);
        t20 = g->edx;
        g->edx = t20;
        t21 = cow_thiscall(g, COW_IMG(0x101a1460u), esi + 0x7ed8u, 0);
        t22 = g->edx;
        g->edx = t22;
        t23 = cow_call_regs(g, COW_IMG(0x101baf90u), t21, esi + 4u, g->edx, 1, 0);
        t24 = g->ecx;
        t25 = g->edx;
        t26 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t24, t25, 1, 1, esi);
        t27 = g->edx;
        wr32(COW_IMG(0x10662d40u), 0u);
        eax = t26;
        edx = t27;
    }
    if (rd32(COW_IMG(0x10662da4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662da4u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t28 = rd32(ecx);
        g->esp = sp0 - 4u;
        t29 = cow_thiscall(g, rd32(t28), ecx, 1, 1u);
        t30 = g->edx;
        wr32(COW_IMG(0x10662da4u), 0u);
        eax = t29;
        edx = t30;
    }
    if (rd32(COW_IMG(0x10662da8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662da8u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t31 = rd32(ecx);
        g->esp = sp0 - 4u;
        t32 = cow_thiscall(g, rd32(t31), ecx, 1, 1u);
        t33 = g->edx;
        wr32(COW_IMG(0x10662da8u), 0u);
        eax = t32;
        edx = t33;
    }
    if (rd32(COW_IMG(0x10662788u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662788u));
        g->eax = rd32(ecx);
        t34 = rd32(ecx);
        g->esp = sp0 - 4u;
        t35 = cow_thiscall(g, rd32(t34), ecx, 1, 1u);
        wr32(COW_IMG(0x10662788u), 0u);
        eax = t35;
    }
    if (rd32(COW_IMG(0x10662da0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662da0u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        wr32(COW_IMG(0x10662da0u), 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b92b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b92b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
