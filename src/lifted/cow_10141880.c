/* f_0x10141880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10141880(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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

    wr32(self + 0x24u, 0u);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_101418a3;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (ecx == 2u) goto L_101418a7;
    if (ecx == 3u) goto L_101418a7;
L_101418a3: ;
    if (ecx == 0u) goto L_101418af;
L_101418a7: ;
    g->eax = eax;
    g->edx = edx;
    t1 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1011ad50u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
L_101418af: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2b7u);
    t6 = g->edx;
    g->edx = t6;
    t7 = rd32(self + 8u);
    t8 = cow_thiscall(g, COW_IMG(0x1011adb0u), t7, 2, 1u, t5);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2b6u);
    t12 = g->edx;
    g->edx = t12;
    cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 2u, t11);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_call_regs(g, COW_IMG(0x10118f70u), self + 0x14u, rd32(self + 8u), g->edx, 0, 1, self + 0x14u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10141880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10141880(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
