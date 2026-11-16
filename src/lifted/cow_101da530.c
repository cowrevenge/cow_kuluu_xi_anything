/* f_0x101da530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101da530(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t3;
        goto L_101da5a6;
    }
    ecx = t2;
    edx = t3;
    if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u) != 0u) goto L_101da5a6;
    eax = rd32(COW_IMG(0x1057876cu));
    if (rd32(eax + 0xc4u) != 0u) goto L_101da5a6;
    ecx = rd32(eax + 0xc4u);
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    if ((uint16_t)t4 == 0u)
    {
        eax = t4;
        goto L_101da5b3;
    }
    eax = t4;
    t5 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 4u);
    wr32(self + 0x14u, t5);
    t6 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 8u);
    wr32(self + 0x18u, t6);
    t7 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 0xcu);
    wr32(self + 0x1cu, t7);
    t8 = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035bb50u), 1u, 0u);
    return (t9 & 0xffffff00u) | 1u;
L_101da5a6: ;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 3u);
    eax = t10;
L_101da5b3: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101da530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101da530(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
