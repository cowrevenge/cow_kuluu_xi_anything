/* f_0x100d7510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100d7510(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    t1 = rd32(arg1 + 0x10u);
    wr32(sp0 - 8u, t1);
    t2 = rd32(arg1 + 0x14u);
    wr32(sp0 - 4u, t2);
    if ((t1 >> 3u & 0x3fu) < 0x38u)
    {
        eax = t1 >> 3u & 0x3fu;
        ecx = 0x38u;
    }
    else
    {
        eax = t1 >> 3u & 0x3fu;
        ecx = 0x78u;
    }
    wr32(sp0 - 0x10u, ecx - eax);
    wr32(sp0 - 0x14u, COW_IMG(0x1035fc40u));
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->ecx = ecx - eax;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x100d7450u), 3, arg1, COW_IMG(0x1035fc40u), ecx - eax);
    t4 = g->ecx;
    wr32(sp0 - 0x1cu, 8u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, arg1);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x100d7450u), 3, arg1, sp0 - 8u, 8u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d7510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d7510(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
