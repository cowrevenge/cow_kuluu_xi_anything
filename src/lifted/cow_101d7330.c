/* f_0x101d7330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101d7330(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101d72f0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_101d7344;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_101d7344: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 0u, arg1);
    t5 = g->ecx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        goto L_101d735e;
    }
    eax = t4;
    return eax & 0xffffff00u;
L_101d735e: ;
    wr8(esi + 0xau, (uint8_t)arg1);
    wr16(esi + 8u, rd16(eax));
    wr32(esi, arg3);
    wr8(esi + 0xbu, arg4 == 0u);
    g->eax = arg3;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x100df980u), 5, arg3, (uint8_t)arg1, (uint16_t)arg2, arg4, in_edi);
    return (t6 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d7330(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
