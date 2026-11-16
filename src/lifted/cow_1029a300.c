/* f_0x1029a300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1029a300(Guest* g)
{
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u)
    {
        if ((int32_t)rd32(arg1 + 0x3cu) <= 0) goto L_1029a340;
        edx = in_edx;
        esi = 0u;
L_1029a313: ;
        t1 = rd32(esi * 4u + rd32(arg1 + 0x38u));
        g->ecx = t1;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x102af630u), 1, t1);
        t2 = g->ecx;
        t3 = rd32(esi * 4u + rd32(arg1 + 0x38u));
        g->edx = rd32(arg1 + 0x38u);
        t4 = rd32(arg1 + 0x38u);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t3, COW_IMG(0x103bc310u), 0x17cu);
        t5 = g->edx;
        if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x3cu))
        {
            edx = t5;
            esi = esi + 1u;
            goto L_1029a313;
        }
    }
L_1029a340: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029a300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029a300(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
