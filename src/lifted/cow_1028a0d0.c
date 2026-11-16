/* f_0x1028a0d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1028a0d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 <= 0) goto L_1028a0e9;
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    esi = arg1;
L_1028a0d9: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x1034f2b8u), in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (esi != 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = esi - 1u;
        goto L_1028a0d9;
    }
L_1028a0e9: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028a0d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028a0d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
