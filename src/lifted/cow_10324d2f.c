/* f_0x10324d2f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10324d2f(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0x8000u)
    {
        eax = rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u) & 0x80u;
        ecx = (rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) & 0xffffff00u) | rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u);
        edx = (arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u;
        goto L_10324d65;
    }
    eax = rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u) & 0x80u;
    ecx = (rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) & 0xffffff00u) | rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u);
    edx = (arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u;
    ecx = (ecx & 0xffffff00u) | (ecx & 0x7fu);
L_10324d72: ;
    wr8(edx, (uint8_t)ecx);
    g->edx = edx;
    return ((-(eax != 0u) & 0xffff0000u) | (-(eax != 0u) & 0xc000u)) + 0x8000u;
L_10324d65: ;
    if (arg2 != 0x4000u) goto L_10324d80;
    ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 0x80u);
    goto L_10324d72;
L_10324d80: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t2 = g->edx;
    wr32(t1, 0x16u);
    g->edx = t2;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10324d2f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10324d2f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
