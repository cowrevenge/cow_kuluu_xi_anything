/* f_0x100276f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100276f0(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 208u);

    wr32(sp0 - 0xc4u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xc0u, 0);
    t1 = g->edx;
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    t3 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0xc0u);
    wr32(sp0 - 0xccu, 0x100u);
    g->eax = sp0 - 0xc0u;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0xc0u);
    t5 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0x40u);
    wr32(sp0 - 0xccu, 2u);
    t6 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 2u, sp0 - 0x40u);
    wr32(sp0 - 0xc8u, sp0 - 0x80u);
    wr32(sp0 - 0xccu, 3u);
    g->edx = sp0 - 0x80u;
    cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 3u, sp0 - 0x80u);
    t7 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0xc0u, 1, sp0 - 0x40u);
    t9 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0x80u);
    t10 = cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0xc0u, 1, sp0 - 0x80u);
    t11 = g->ecx;
    wr32(sp0 - 0xc8u, arg2);
    wr32(sp0 - 0xccu, arg1);
    g->edx = arg2;
    t12 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, arg1, arg2);
    t13 = g->edx;
    wr32(sp0 - 0xc8u, arg1);
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10028320u), sp0 - 0xc0u, 1, arg1);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t19 = g->edx;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100276f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100276f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
