/* f_0x10028460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10028460(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    eax = sp0 - 0x40u;
    ebx = 4u;
    edi = self;
L_10028472: ;
    edx = edi;
    esi = 4u;
L_10028479: ;
    wr32(eax, rd32(edx));
    if (esi != 1u)
    {
        eax = eax + 4u;
        edx = edx + 0x10u;
        esi = esi - 1u;
        goto L_10028479;
    }
    eax = eax + 4u;
    edx = edx + 0x10u;
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        edi = edi + 4u;
        goto L_10028472;
    }
    wr32(sp0 - 0x54u, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t1 = cow_thiscall(g, COW_IMG(0x100279f0u), self, 1, sp0 - 0x40u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10028460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10028460(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
