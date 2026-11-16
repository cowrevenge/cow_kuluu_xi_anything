/* f_0x101d6ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101d6ad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 != 0u)
    {
        g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x101d6a70u), self, 0);
        t2 = g->edx;
        if (t1 != 0u)
        {
            eax = t1;
            edx = t2;
            if (rd16(eax + 2u) != 0u)
            {
                ecx = rd16(eax + 2u);
                t3 = (eax & 0xffffff00u) | rd8(self + 0x50u);
                g->eax = t3;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t4 = cow_cdecl(g, COW_IMG(0x100f0a40u), 3, 5u, t3, ecx);
                t5 = g->ecx;
                t6 = g->edx;
                g->edx = t6;
                t7 = cow_thiscall(g, COW_IMG(0x10037b90u), t5, 0);
                t8 = g->edx;
                cow_fastcall(g, COW_IMG(0x101d68e0u), self, t8, 0);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d6ad0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
