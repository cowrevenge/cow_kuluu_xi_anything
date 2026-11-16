/* f_0x10167440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10167440(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = 0x20u;
    esi = self + 0x10u;
L_10167451: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10001070u), g->eax, g->ecx, edx, 0, 4, esi, 4u, 0x20u, COW_IMG(0x1005e100u));
    t2 = g->ecx;
    t3 = g->edx;
    if (ebx != 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = ebx - 1u;
        esi = esi + 0x8cu;
        goto L_10167451;
    }
    wr32(self, COW_IMG(0x10336614u));
    wr32(self + 4u, 0u);
    edi = self + 8u;
    eax = 0u;
    ecx = 0x460u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10167440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10167440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
