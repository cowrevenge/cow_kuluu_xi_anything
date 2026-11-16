/* f_0x101a2d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101a2d30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 0) goto L_101a2dec;
    if ((int32_t)arg1 >= 40) goto L_101a2dec;
    t1 = (uint32_t)((int32_t)(rd32(self + 0x1dbcu) - (uint32_t)((int32_t)rd32(self + 0x1dbcu) >> 0x1fu)) >> 1u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101a2660u), self, 2, t1, COW_IMG(0x103d3c84u));
    wr8(self + 0x235fu, 1u);
    edi = 0u;
L_101a2d70: ;
    t2 = (uint32_t)((int32_t)(arg1 * 0x14u + edi - (uint32_t)((int32_t)(arg1 * 0x14u + edi) >> 0x1fu)) >> 1u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101a26c0u), self, 2, t2, COW_IMG(0x103d3c84u));
    t3 = (uint32_t)((int32_t)(edi - (uint32_t)((int32_t)edi >> 0x1fu)) >> 1u);
    cow_thiscall(g, COW_IMG(0x101a2660u), self, 2, t3, COW_IMG(0x1034f7b4u));
    if ((int32_t)(edi + 2u) < 20)
    {
        edi = edi + 2u;
        goto L_101a2d70;
    }
    t4 = (uint32_t)((int32_t)(rd32(self + 0x1dbcu) - (uint32_t)((int32_t)rd32(self + 0x1dbcu) >> 0x1fu)) >> 1u);
    t5 = rd32(self + 0x1dbcu);
    wr8(self + 0x235fu, 0u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101a26c0u), self, 2, t4, COW_IMG(0x103d3c84u));
    t6 = g->ecx;
    wr8(self + 0x235eu, 1u);
    eax = arg1 * 0x10u + self + 0x1dc6u;
    ecx = t6;
L_101a2ddb: ;
    t7 = rd8(eax);
    wr8(eax - arg1 * 0x10u + 0x586u, (uint8_t)t7);
    if ((uint8_t)t7 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t7;
        goto L_101a2ddb;
    }
    eax = eax + 1u;
    return (eax & 0xffffff00u) | 1u;
L_101a2dec: ;
    return in_eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a2d30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
