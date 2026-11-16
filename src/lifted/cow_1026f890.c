/* f_0x1026f890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1026f890(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1026f8c5;
    }
    wr32(arg1, 0xffffffffu);
    if ((int32_t)rd32(COW_IMG(0x1099aed8u)) <= 0)
    {
        eax = 0u;
        edx = rd32(COW_IMG(0x1099aed8u));
        goto L_1026f8c5;
    }
    edx = rd32(COW_IMG(0x1099aed8u));
    eax = 0u;
    ecx = rd32(COW_IMG(0x1099aedcu));
L_1026f8b1: ;
    if ((rd8(ecx) & 0x20u) != 0u) goto L_1026f8c3;
    if ((int32_t)(eax + 1u) < (int32_t)edx)
    {
        eax = eax + 1u;
        ecx = ecx + 0xc0u;
        goto L_1026f8b1;
    }
    eax = eax + 1u;
    g->edx = edx;
    return eax;
L_1026f8c3: ;
    wr32(arg1, eax);
L_1026f8c5: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026f890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026f890(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
