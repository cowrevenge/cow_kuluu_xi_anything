/* f_0x101c8da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101c8da0(Guest* g)
{
    double d28;
    double d31;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 244u);

    COW_AT(101c8da0)
    g->edx = in_edx;
    g->esp = sp0 - 0xd0u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xc0u, 0);
    t5 = g->edx;
    wr32(sp0 - 0xd4u, sp0 - 0x80u);
    wr32(sp0 - 0xd8u, 2u);
    g->eax = sp0 - 0x80u;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 2u, sp0 - 0x80u);
    t7 = g->edx;
    wr32(sp0 - 0xd4u, sp0 - 0x40u);
    wr32(sp0 - 0xd8u, 0x100u);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x40u);
    t9 = g->edx;
    t10 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xc0u, 0);
    wr32(sp0 - 0xd4u, arg1);
    g->edx = arg1;
    t11 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0xc0u, 1, arg1);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t15 = g->edx;
    wr32(sp0 - 0xd4u, t14);
    wr32(sp0 - 0xd8u, 2u);
    g->edx = t15;
    cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 2u, t14);
    t16 = g->edx;
    wr32(sp0 - 0xd4u, sp0 - 0xc0u);
    wr32(sp0 - 0xd8u, 0x100u);
    g->eax = sp0 - 0xc0u;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0xc0u);
    t18 = g->edx;
    wr32(sp0 - 0xd4u, 0x3f800000u);
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0xdcu, 0u);
    wr32(sp0 - 0xe0u, 0u);
    wr32(sp0 - 0xe4u, sp0 - 0xd0u);
    g->ecx = sp0 - 0xd0u;
    cow_cdecl(g, COW_IMG(0x10026e30u), 5, sp0 - 0xd0u, 0u, 0u, 0u, 0x3f800000u);
    t19 = g->ecx;
    wr32(sp0 - 0xe8u, sp0 - 0xd0u);
    wr32(sp0 - 0xecu, sp0 - 0xd0u);
    g->eax = sp0 - 0xd0u;
    g->edx = sp0 - 0xd0u;
    g->esp = sp0 - 0xe4u;
    t20 = cow_cdecl(g, COW_IMG(0x100276f0u), 2, sp0 - 0xd0u, sp0 - 0xd0u);
    t21 = g->edx;
    wr32(sp0 - 0xf0u, sp0 - 0xd0u);
    g->esp = sp0 - 0xecu;
    t22 = cow_cdecl(g, COW_IMG(0x100278e0u), 1, sp0 - 0xd0u);
    wr32(sp0 - 0xd4u, sp0 - 0x80u);
    wr32(sp0 - 0xd8u, 2u);
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xd0u;
    cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 2u, sp0 - 0x80u);
    t23 = g->edx;
    wr32(sp0 - 0xd4u, sp0 - 0x40u);
    wr32(sp0 - 0xd8u, 0x100u);
    g->eax = sp0 - 0x40u;
    g->edx = t23;
    t24 = rd32(COW_IMG(0x1045666cu));
    t25 = cow_thiscall(g, COW_IMG(0x1000bd50u), t24, 2, 0x100u, sp0 - 0x40u);
    t26 = g->ecx;
    t27 = g->edx;
    g->edx = t27;
    d28 = fr(g, (double)rdf32(sp0 - 0xd0u) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d28);
    t29 = cow_call_regs(g, COW_IMG(0x10311c6cu), t25, g->ecx, g->edx, 1, 0);
    t30 = g->edx;
    d31 = fr(g, (double)rdf32(sp0 - 0xccu) + (double)rdf32(COW_IMG(0x10329a08u)));
    wr16(arg2, (uint16_t)t29);
    fpush(g, d31);
    t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), t29, g->ecx, g->edx, 1, 0);
    wr16(arg3, (uint16_t)t32);
    g->edx = arg3;
    t33 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t36 = g->edx;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8da0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101c8da0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
