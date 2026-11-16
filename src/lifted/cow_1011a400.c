/* f_0x1011a400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1011a400(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    if ((int16_t)rd16(self + 0x58u) < 1)
    {
        edx = in_edx;
        goto L_1011a420;
    }
    eax = in_eax;
    edx = in_edx;
    esi = 1u;
L_1011a40f: ;
    g->edi = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101192e0u), self, 1, esi);
    t1 = g->edx;
    if ((int32_t)(esi + 1u) <= (int16_t)rd16(self + 0x58u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x58u);
        edx = t1;
        esi = esi + 1u;
        goto L_1011a40f;
    }
    edx = t1;
L_1011a420: ;
    g->edi = in_edi;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011a400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011a400(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
