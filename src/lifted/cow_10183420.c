/* f_0x10183420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10183420(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edx = in_edx;
    esi = self + 0x60u;
    edi = 0u;
L_1018342c: ;
    if (rd32(esi) == 0u) goto L_10183443;
    g->eax = arg1 + 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10170f30u), esi + 0x44u, 2, arg1 + 0x10u, 1u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        goto L_1018344e;
    }
    edx = t2;
L_10183443: ;
    if ((int32_t)(edi + 1u) < 2)
    {
        esi = esi + 0x78u;
        edi = edi + 1u;
        goto L_1018342c;
    }
    eax = 0u;
L_1018344e: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10183420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10183420(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
