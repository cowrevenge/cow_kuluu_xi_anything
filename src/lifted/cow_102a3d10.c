/* f_0x102a3d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102a3d10(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)(rd32(arg1 + 0x1cu) - 1u) < 0)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        esi = rd32(arg1 + 0x1cu) - 1u;
        ecx = self;
        edx = in_edx;
L_102a3d21: ;
        if (arg2 != rd32(esi * 4u + rd32(arg1 + 0x20u)))
        {
            eax = rd32(arg1 + 0x20u);
        }
        else
        {
            eax = rd32(arg1 + 0x20u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t1 = cow_cdecl(g, COW_IMG(0x102a3d40u), 2, arg1, esi);
            t2 = g->ecx;
            t3 = g->edx;
            eax = t1;
            ecx = t2;
            edx = t3;
        }
        if ((int32_t)(esi - 1u) >= 0)
        {
            esi = esi - 1u;
            goto L_102a3d21;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a3d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a3d10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
