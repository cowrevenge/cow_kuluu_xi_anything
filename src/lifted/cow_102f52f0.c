/* f_0x102f52f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102f52f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self) != 0u)
    {
        if (rd32(self + 4u) == 0u)
        {
            eax = in_eax;
            ecx = self;
            edx = in_edx;
            goto L_102f5316;
        }
        ecx = self;
        edx = in_edx;
        edi = 0u;
L_102f5300: ;
        if (rd32(edi * 4u + rd32(self)) == 0u)
        {
            eax = rd32(edi * 4u + rd32(self));
        }
        else
        {
            eax = rd32(edi * 4u + rd32(self));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t1 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t2 = g->edx;
            ecx = eax;
            eax = t1;
            edx = t2;
        }
        if (edi + 1u < rd32(self + 4u))
        {
            edi = edi + 1u;
            goto L_102f5300;
        }
L_102f5316: ;
        t3 = rd32(self);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t3);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f52f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f52f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
