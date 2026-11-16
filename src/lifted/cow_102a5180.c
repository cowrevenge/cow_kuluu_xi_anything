/* f_0x102a5180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102a5180(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 <= 0)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        esi = arg3;
        edi = arg2;
L_102a5193: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x102a5150u), 3, arg1, esi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        if (edi != 1u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            esi = esi + 0x30u;
            edi = edi - 1u;
            goto L_102a5193;
        }
        eax = t1;
        edx = t3;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a5180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a5180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
