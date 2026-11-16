/* f_0x10099a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10099a40(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = in_eax;
    edx = in_edx;
    esi = 0u;
L_10099a4d: ;
    if (rd32(COW_IMG(0x10480af0u) + esi * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + esi * 4u);
        if (esi == (uint16_t)arg1)
        {
            eax = (uint16_t)arg1;
        }
        else
        {
            if (rd32(ecx + 0x78u) != arg2)
            {
                eax = (uint16_t)arg1;
            }
            else
            {
                g->ebx = arg2;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t1 = cow_call_regs(g, COW_IMG(0x1008ee30u), (uint16_t)arg1, ecx, g->edx, 1, 0);
                t2 = g->edx;
                t3 = cow_fastcall(g, COW_IMG(0x10092900u), rd32(COW_IMG(0x10480af0u) + esi * 4u), t2, 0);
                t4 = g->edx;
                g->edx = t4;
                t5 = cow_thiscall(g, COW_IMG(0x1008a350u), rd32(COW_IMG(0x10480af0u) + esi * 4u), 1, 0u);
                t6 = g->edx;
                eax = t5;
                edx = t6;
            }
        }
    }
    if ((int32_t)(esi + 1u) < 2304)
    {
        esi = esi + 1u;
        goto L_10099a4d;
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10099a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10099a40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
