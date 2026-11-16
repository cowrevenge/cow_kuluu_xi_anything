/* f_0x1029a0b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1029a0b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u)
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102aeca0u), 1, arg1 + 0x24u);
        t1 = g->ecx;
        t2 = g->edx;
        if (rd32(arg1 + 0x38u) != 0u)
        {
            eax = rd32(arg1 + 0x38u);
            ecx = t1;
            edx = t2;
            if ((int32_t)(rd32(arg1 + 0x3cu) - 1u) < 0) goto L_1029a0e5;
            esi = rd32(arg1 + 0x3cu) - 1u;
L_1029a0d3: ;
            t3 = esi * 4u + rd32(arg1 + 0x38u);
            g->eax = eax;
            g->ecx = rd32(arg1 + 0x38u);
            g->edx = t3;
            t4 = rd32(arg1 + 0x38u);
            g->esp = sp0 - 8u;
            t5 = cow_cdecl(g, COW_IMG(0x10285760u), 1, t3);
            t6 = g->ecx;
            t7 = g->edx;
            if ((int32_t)(esi - 1u) >= 0)
            {
                eax = t5;
                esi = esi - 1u;
                goto L_1029a0d3;
            }
            ecx = t6;
            edx = t7;
L_1029a0e5: ;
            t8 = rd32(arg1 + 0x38u);
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, t8, COW_IMG(0x103bc310u), 0xc3u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029a0b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029a0b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
