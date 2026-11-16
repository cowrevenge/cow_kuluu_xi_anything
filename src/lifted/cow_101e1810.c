/* f_0x101e1810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e1810(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x4eu) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x4eu);
        goto L_101e1841;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x4eu);
    if (rd32(COW_IMG(0x10578204u)) == 0u) goto L_101e1841;
    esi = rd32(COW_IMG(0x10578204u));
    if (rd32(esi + 8u) == 0u)
    {
        eax = rd32(esi + 8u);
        goto L_101e1841;
    }
    t1 = rd32(esi + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = g->edx;
    g->esp = sp0;
    g->edx = t3;
    return cow_tailcall(g, COW_IMG(0x1013bf40u), t2, esi, t3);
L_101e1841: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1810(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
