/* f_0x1022a660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1022a660(Guest* g)
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
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr16(self + 0x8eu, (uint16_t)arg2);
    wr8(self + 0x88u, (uint8_t)arg1);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103580ccu), 1u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(self + 0x88u) == 1u)
    {
        ecx = t2;
        edx = t3;
        goto L_1022a69a;
    }
    eax = (t1 & 0xffffff00u) | rd8(self + 0x88u);
    ecx = t2;
    edx = t3;
    if ((uint8_t)eax != 2u) goto L_1022a6c0;
L_1022a69a: ;
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057847cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1057847cu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2d1u);
        t5 = g->edx;
        g->edx = t5;
        g->esp = sp0 - 4u;
        t6 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t4, 2u);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
L_1022a6c0: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1022a7b0u), self, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022a660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022a660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
