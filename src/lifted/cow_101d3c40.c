/* f_0x101d3c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_101d3c40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + (uint8_t)arg1 * 4u + (arg2 == 9u) * 0x144u + 0x4cu) == 0u) goto L_101d3caf;
    ecx = rd32(self + (uint8_t)arg1 * 4u + (arg2 == 9u) * 0x144u + 0x4cu);
    g->edx = (uint8_t)arg1;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101ce170u), (uint8_t)arg1 + (arg2 == 9u) * 0x51u, ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_101d3ca8;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if ((uint8_t)arg4 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg4;
        goto L_101d3ca8;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x35u);
    t5 = g->edx;
    t6 = rd32(self + (uint8_t)arg1 * 4u + (arg2 == 9u) * 0x144u + 0x4cu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101d3b90u), t6, t4, 0u, 0u, 1u, 0u);
    return;
L_101d3ca8: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101ce0f0u), rd32(self + (uint8_t)arg1 * 4u + (arg2 == 9u) * 0x144u + 0x4cu), 0);
L_101d3caf: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d3c40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
