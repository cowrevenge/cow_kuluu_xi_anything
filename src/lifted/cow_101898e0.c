/* f_0x101898e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101898e0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ebx = arg2;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10189750u), 4, self, arg1, arg2, arg3);
    g->ebx = arg2;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10189750u), 12, self + 4u, arg1 + 4u, arg2 + 4u, arg3, self, arg1, arg2, arg3, in_edi, in_esi, in_ebp, in_ebx);
    g->ebx = arg2;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10189750u), 12, self + 8u, arg1 + 8u, arg2 + 8u, arg3, self + 4u, arg1 + 4u, arg2 + 4u, arg3, self, arg1, arg2, arg3);
    g->ebx = arg2;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10189750u), 12, self + 0xcu, arg1 + 0xcu, arg2 + 0xcu, arg3, self + 8u, arg1 + 8u, arg2 + 8u, arg3, self + 4u, arg1 + 4u, arg2 + 4u, arg3);
    t1 = rd32(arg2 + 0x10u);
    t2 = rd32(arg1 + 0x10u);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x10u, t2, t1, arg3);
    t3 = rd32(arg2 + 0x14u);
    t4 = rd32(arg1 + 0x14u);
    g->edx = self + 0x14u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x14u, t4, t3, arg3);
    t5 = g->edx;
    t6 = rd32(arg2 + 0x18u);
    t7 = rd32(arg1 + 0x18u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x18u, t7, t6, arg3);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101898e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101898e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
