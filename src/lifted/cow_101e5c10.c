/* f_0x101e5c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e5c10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, arg1);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), self, 4, sp0 + 4u, 0u, 0u, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 0xcu, arg1);
        g->esp = sp0 - 4u;
        t4 = cow_cdecl(g, COW_IMG(0x100e96f0u), 2, arg1, 0u);
        if ((uint8_t)t4 != 0u)
        {
            if (rd32(COW_IMG(0x10663520u)) != 0u)
            {
                eax = rd32(COW_IMG(0x10663520u));
                wr8(eax + 0x65u, rd8(eax + 0x65u) | 2u);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e5c10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
