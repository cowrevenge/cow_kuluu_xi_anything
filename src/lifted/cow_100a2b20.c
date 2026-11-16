/* f_0x100a2b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100a2b20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;

    if (self + 0x70u >= self + 0xf0u) goto L_100a2b5f;
    edi = self + 0x70u;
L_100a2b32: ;
    if ((int32_t)(rd32(self + 0x60u) - rd32(self + 0x6cu)) <= 0) goto L_100a2b5f;
    eax = rd32(self + 0x60u) - rd32(self + 0x6cu);
    edx = rd32(self + 0x6cu);
    if (rd8(edi) == 0u)
    {
        if ((int32_t)rd32(self + 0x64u) < (int32_t)eax)
        {
            ecx = rd32(self + 0x64u);
            eax = ecx;
        }
        g->ebx = self + 0xf0u;
        g->esp = sp0 - 0xcu;
        t1 = cow_call_regs(g, COW_IMG(0x100a2b70u), eax, self, g->edx, 0, 2, edi, eax);
        wr32(self + 0x6cu, t1 + rd32(self + 0x6cu));
    }
    if (edi + 0x20u < self + 0xf0u)
    {
        edi = edi + 0x20u;
        goto L_100a2b32;
    }
L_100a2b5f: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a2b20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
