/* f_0x102a5f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102a5f00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, 0x108u, COW_IMG(0x103bde10u), 0x3du);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_102a5f1f;
    }
    eax = t1;
    return eax;
L_102a5f1f: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102a5f30u), 1, esi);
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a5f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a5f00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
