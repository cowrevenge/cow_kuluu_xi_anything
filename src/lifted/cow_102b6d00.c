/* f_0x102b6d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102b6d00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edi = arg1;
    eax = 0u;
    ecx = 0x63u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg1, 0xa000au);
    wr32(arg1 + 8u, COW_IMG(0x102b6dd0u));
    wr32(arg1 + 0xcu, COW_IMG(0x102b6de0u));
    wr32(arg1 + 0x10u, COW_IMG(0x102b6e10u));
    wr32(arg1 + 0x2cu, COW_IMG(0x10291280u));
    wr32(arg1 + 0x30u, COW_IMG(0x102b38d0u));
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1028d9c0u), 1, arg1 + 0x14u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    wr32(arg1 + 0x3cu, 0u);
    wr32(arg1 + 0x40u, 0u);
    wr32(arg1 + 0x50u, COW_IMG(0x102b3840u));
    wr32(arg1 + 0x130u, 1u);
    cow_stdcall(g, COW_IMG(0x102bacf0u), 0);
    wr32(arg1 + 0x14u, 0x7f7fffffu);
    wr32(arg1 + 0x18u, 0x7f7fffffu);
    wr32(arg1 + 0x1cu, 0x7f7fffffu);
    wr32(arg1 + 0x20u, 0xff7fffffu);
    wr32(arg1 + 0x24u, 0xff7fffffu);
    wr32(arg1 + 0x28u, 0xff7fffffu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b6d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b6d00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
