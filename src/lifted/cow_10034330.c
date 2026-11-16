/* f_0x10034330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10034330(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(self + 4u) != 0u) goto L_1003433e;
    eax = rd32(self + 4u);
    return eax & 0xffffff00u;
L_1003433e: ;
    if (rd32(self + 8u) != 0u) goto L_10034349;
    eax = rd32(self + 8u);
    return eax & 0xffffff00u;
L_10034349: ;
    if (rd32(self + 0x14u) != 0u) goto L_10034354;
    eax = rd32(self + 0x14u);
    return eax & 0xffffff00u;
L_10034354: ;
    t1 = rd32(self + 4u);
    g->eax = t1;
    g->esp = sp0 - 8u;
    t2 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t1);
    wr32(COW_IMG(0x1045ec24u), t2);
    t3 = rd16(t2 + 0x32u);
    wr32(COW_IMG(0x10462430u), t3);
    t4 = rd32(self + 0xcu);
    wr32(COW_IMG(0x1045ec20u), t4);
    if ((int32_t)t3 > 0)
    {
        edi = t3;
        ecx = 0u;
        ebx = in_ebx;
L_1003438c: ;
        t5 = rd8(ecx + rd32(self + 0x14u));
        wr8(ecx + rd32(self + 0x14u), t5 & 0x80u);
        wr32(COW_IMG(0x1045ec24u) + ecx * 4u + 4u, 1u);
        if ((int32_t)(ecx + 1u) < (int32_t)edi)
        {
            ecx = ecx + 1u;
            ebx = (ebx & 0xffffff00u) | (t5 & 0x80u);
            goto L_1003438c;
        }
    }
    t6 = rd32(self + 0x14u);
    wr32(COW_IMG(0x1045f028u), t6);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10034330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10034330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
