/* f_0x10251880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10251880(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = in_eax;
    edx = in_edx;
    esi = 1u;
L_1025188e: ;
    g->ebx = arg1;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10251810u), self, 2, esi, arg1);
    t2 = g->edx;
    if ((int32_t)(esi + 1u) < 24)
    {
        eax = t1;
        edx = t2;
        esi = esi + 1u;
        goto L_1025188e;
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10251880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10251880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
