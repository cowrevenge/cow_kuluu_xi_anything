/* f_0x102b3b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102b3b20(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 <= 0) goto L_102b3b7e;
    if (rd32(arg1 + 0x24u) == 0u)
    {
        t3 = rd32(arg1 + 0x20u) * arg2;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, t3, COW_IMG(0x103bfe40u), 0xf3u);
        eax = t4;
    }
    else
    {
        eax = rd32(arg1 + 0x24u);
        t1 = rd32(arg1 + 0x20u) * arg2;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t1, 4, eax, t1, COW_IMG(0x103bfe40u), 0xf2u);
        eax = t2;
    }
    wr32(arg1 + 0x24u, eax);
    if (eax != 0u) goto L_102b3b73;
    return eax;
L_102b3b73: ;
    wr32(arg1 + 0x18u, arg2);
    return 1u;
L_102b3b7e: ;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x102b3ba0u), 3, arg1, in_edi, in_esi);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b3b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
