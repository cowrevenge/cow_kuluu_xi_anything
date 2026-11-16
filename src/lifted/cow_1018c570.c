/* f_0x1018c570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018c570(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 <= 0)
    {
        ebp = 0u;
    }
    else
    {
        eax = in_eax;
        edx = arg1;
        ebx = in_ebx;
        ebp = 0u;
        edi = 0u;
L_1018c580: ;
        t1 = rd8(rd32(COW_IMG(0x10662684u)));
        wr8(rd32(COW_IMG(0x10662684u)), (uint8_t)(uint32_t)((int32_t)(uint32_t)(int8_t)t1 >> 1u));
        t2 = rd32(COW_IMG(0x10662688u)) + 1u;
        t3 = rd32(COW_IMG(0x10662688u));
        wr32(COW_IMG(0x10662688u), t2);
        if (t3 + 1u != 8u)
        {
            eax = t2;
            ebx = (t1 & 1u) << (edi & 0x1fu);
            ebp = ebp | (t1 & 1u) << (edi & 0x1fu);
        }
        else
        {
            eax = t2;
            ecx = edi;
            ebx = (t1 & 1u) << (edi & 0x1fu);
            ebp = ebp | (t1 & 1u) << (edi & 0x1fu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t4 = cow_stdcall(g, COW_IMG(0x1018c550u), 0);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
        if ((int32_t)(edi + 1u) < (int32_t)edx)
        {
            edi = edi + 1u;
            goto L_1018c580;
        }
    }
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018c570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
