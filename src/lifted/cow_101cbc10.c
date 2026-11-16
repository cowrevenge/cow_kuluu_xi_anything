/* f_0x101cbc10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101cbc10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd8(sp0 + 8u) == 0u)
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(sp0 + 8u);
        t2 = rd32(sp0 + 4u);
        eax = in_eax;
        ecx = t2;
        loc_8 = t2;
        loc_c = 4u;
    }
    else
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(sp0 + 8u);
        t1 = rd32(sp0 + 4u);
        eax = t1;
        ecx = self;
        loc_8 = t1;
        loc_c = 0x14u;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, loc_c, loc_8);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        goto L_101cbc4f;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    if ((uint8_t)ebx != 0u) goto L_101cbc4f;
    wr32(sp0 + 8u, 0x40u);
    wr32(sp0 + 4u, 9u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10152ef0u), eax, ecx, edx);
L_101cbc4f: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cbc10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cbc10(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
