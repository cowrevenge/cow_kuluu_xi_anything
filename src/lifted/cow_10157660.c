/* f_0x10157660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10157660(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd32(self + 0x5cu) & 3u) == arg1)
    {
        eax = rd32(self + 0x5cu) & 3u;
    }
    else
    {
        if (arg1 == 0u) goto L_101576dc;
        if (arg1 == 1u) goto L_101576d8;
        if (arg1 != 2u)
        {
            eax = arg1 - 2u;
            goto L_101576d1;
        }
        eax = arg1 - 2u;
        ebx = 4u;
L_10157686: ;
        if (rd8(self + 0x20u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x20u);
            goto L_101576d1;
        }
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_stdcall(g, COW_IMG(0x101576f0u), 0);
        t2 = g->edx;
        if ((uint8_t)t1 == 1u)
        {
            eax = t1;
            goto L_101576d1;
        }
        eax = t1;
        edx = t2;
        if (rd8(self + 0x22u) == 1u) goto L_101576d1;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_call_regs(g, COW_IMG(0x101598a0u), t3, self, g->edx, 1, 0);
        t6 = g->ecx;
        t7 = g->edx;
        if (t3 == 0u)
        {
            eax = t5;
            goto L_101576d1;
        }
        eax = t5;
        ecx = t6;
        edx = t7;
        edi = t3;
        if (edi == eax) goto L_101576d1;
L_101576b7: ;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10159420u), 2, ebx, 0u);
        t8 = rd32(self + 0x5cu);
        t9 = ((t8 ^ arg1) & 3u) ^ t8;
        wr32(self + 0x5cu, t9);
        eax = t8;
    }
L_101576d1: ;
    return eax;
L_101576d8: ;
    eax = arg1 - 1u;
    ebx = 0u;
    goto L_10157686;
L_101576dc: ;
    ecx = self;
    edx = in_edx;
    ebx = 1u;
    goto L_101576b7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10157660(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
