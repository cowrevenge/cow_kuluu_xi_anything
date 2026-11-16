/* f_0x10157c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10157c60(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, sp0 + 4u);
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10159e10u), 1, sp0 + 4u);
    if ((uint8_t)t1 != 0u) goto L_10157c78;
    eax = t1;
    return eax;
L_10157c78: ;
    if (rd32(COW_IMG(0x10480af0u) + arg1 * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + arg1 * 4u);
        goto L_10157c8d;
    }
    eax = rd32(COW_IMG(0x10480af0u) + arg1 * 4u);
    return eax & 0xffffff00u;
L_10157c8d: ;
    wr32(sp0 - 8u, arg4);
    wr32(sp0 - 0xcu, arg3);
    t2 = rd32(eax + 0xa0u);
    wr32(sp0 - 0x10u, t2);
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x10157b40u), self, arg4, 3, t2, arg3, arg4);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10157c60(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
