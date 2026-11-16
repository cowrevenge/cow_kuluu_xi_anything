/* f_0x10014a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10014a30(Guest* g)
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(self + 4u) > 3u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_10014a59;
    }
    eax = (uint32_t)(int16_t)rd16(self + 4u);
    t1 = rd32(COW_IMG(0x10014ab4u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10014a43u: goto L_10014a43;
    case 0x10014a5du: goto L_10014a5d;
    case 0x10014a87u: goto L_10014a87;
    case 0x10014aa5u: goto L_10014aa5;
    default: rt_fatal(g, COW_IMG(0x10014a3cu), "switch");
    }
    return 0;
L_10014a43: ;
    g->esp = sp0 - 4u;
    t8 = cow_fastcall(g, COW_IMG(0x10014c90u), self, in_edx, 0);
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        goto L_10014a59;
    }
    eax = t8;
L_10014a4e: ;
    wr32(self + 0x24u, 0x384u);
L_10014a55: ;
    wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
L_10014a59: ;
    return eax & 0xffffff00u;
L_10014a5d: ;
    t5 = rd32(self + 0x24u) - 1u;
    t6 = rd32(self + 0x24u);
    wr32(self + 0x24u, t5);
    if (t6 == 0u)
    {
        eax = t6;
        goto L_10014a4e;
    }
    eax = t6;
    ecx = t5;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x100f76d0u), eax, g->ecx, g->edx, 1, 1, 0u);
    if ((uint8_t)t7 != 1u)
    {
        eax = t7;
        goto L_10014a59;
    }
    eax = t7;
    wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
    wr32(self + 0x24u, 0x384u);
    return eax & 0xffffff00u;
L_10014a87: ;
    t2 = rd32(self + 0x24u) - 1u;
    t3 = rd32(self + 0x24u);
    wr32(self + 0x24u, t2);
    if (t3 == 0u)
    {
        eax = t3;
        goto L_10014a55;
    }
    edx = t2;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x100f10f0u), 0);
    if (t4 != 0u)
    {
        eax = t4;
        goto L_10014a59;
    }
    eax = t4;
    wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
    return eax & 0xffffff00u;
L_10014aa5: ;
    wr32(self + 0x44u, 0xeu);
    wr8(self + 0xau, 0u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10014a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10014a30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
