/* f_0x100266c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100266c0(Guest* g)
{
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 244u);

    g->edx = in_edx;
    g->esp = sp0 - 0xe0u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xc0u, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t5 = g->edx;
    wr32(sp0 - 0xe4u, sp0 - 0x80u);
    wr32(sp0 - 0xe8u, 0x100u);
    g->eax = sp0 - 0x80u;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x80u);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xc0u, 0);
    t9 = g->edx;
    wr32(sp0 - 0xe4u, arg1);
    t10 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0xc0u, 1, arg1);
    wr32(sp0 - 0xe4u, sp0 - 0xc0u);
    wr32(sp0 - 0xe8u, 0x100u);
    g->edx = sp0 - 0xc0u;
    cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0xc0u);
    t11 = g->edx;
    wr32(sp0 - 0xe0u, 0u);
    wr32(sp0 - 0xd4u, 0x80800000u);
    wr32(sp0 - 0xc4u, 0x80800000u);
    wr32(sp0 - 0xdcu, 0u);
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0xd0u, 0x3f800000u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xe4u, 0x42u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xe8u, t12);
    g->eax = t12;
    t13 = cow_thiscall(g, rd32(rd32(t12) + 0x130u), rd32(t12), 2, t12, 0x42u);
    wr32(sp0 - 0xe4u, 0x10u);
    wr32(sp0 - 0xe8u, sp0 - 0xe0u);
    wr32(sp0 - 0xecu, 1u);
    wr32(sp0 - 0xf0u, 2u);
    g->edx = sp0 - 0xe0u;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 2u, 1u, sp0 - 0xe0u, 0x10u);
    t14 = g->edx;
    wr32(sp0 - 0xd0u, 0u);
    wr32(sp0 - 0xd4u, 0x80008000u);
    wr32(sp0 - 0xc4u, 0x80008000u);
    wr32(sp0 - 0xccu, 0x3f800000u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xe4u, 0x42u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xe8u, t15);
    g->eax = t15;
    t16 = cow_thiscall(g, rd32(rd32(t15) + 0x130u), rd32(t15), 2, t15, 0x42u);
    wr32(sp0 - 0xe4u, 0x10u);
    wr32(sp0 - 0xe8u, sp0 - 0xe0u);
    wr32(sp0 - 0xecu, 1u);
    wr32(sp0 - 0xf0u, 2u);
    g->edx = sp0 - 0xe0u;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 2u, 1u, sp0 - 0xe0u, 0x10u);
    t17 = g->edx;
    wr32(sp0 - 0xd0u, 0u);
    wr32(sp0 - 0xd4u, 0x80000080u);
    wr32(sp0 - 0xc4u, 0x80000080u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xc8u, 0x3f800000u);
    wr32(sp0 - 0xe4u, 0x42u);
    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xe8u, t18);
    g->eax = t18;
    t19 = cow_thiscall(g, rd32(rd32(t18) + 0x130u), rd32(t18), 2, t18, 0x42u);
    wr32(sp0 - 0xe4u, 0x10u);
    wr32(sp0 - 0xe8u, sp0 - 0xe0u);
    wr32(sp0 - 0xecu, 1u);
    wr32(sp0 - 0xf0u, 2u);
    g->edx = sp0 - 0xe0u;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 2u, 1u, sp0 - 0xe0u, 0x10u);
    t20 = g->edx;
    wr32(sp0 - 0xe4u, sp0 - 0x80u);
    wr32(sp0 - 0xe8u, 0x100u);
    g->eax = sp0 - 0x80u;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x80u);
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t28 = g->edx;
    g->edx = t28;
    return t27;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100266c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100266c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
