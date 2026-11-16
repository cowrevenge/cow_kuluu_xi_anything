/* f_0x10129de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10129de0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_esi);
    if ((int32_t)rd32(sp0 + 4u) < 0)
    {
        eax = rd32(sp0 + 4u);
        goto L_10129e23;
    }
    eax = rd32(sp0 + 4u);
    if ((int32_t)eax >= 348) goto L_10129e23;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, 9u);
    wr8(sp0 + 4u, 0x79u);
    wr8(sp0 + 5u, 3u);
    wr8(sp0 + 6u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, eax);
    t2 = g->edx;
    wr32(sp0 - 0x18u, t1);
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10127c00u), self, 5, t1, sp0 + 4u, 0u, 1u, 0u);
    return t3;
L_10129e23: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10129de0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
