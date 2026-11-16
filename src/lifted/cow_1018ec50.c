/* f_0x1018ec50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018ec50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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

    if (rd8(rd32(self + 0xcu) + 0x60u) != 0u)
    {
        ecx = rd32(self + 0xcu);
        goto L_1018ec65;
    }
    return 0u;
L_1018ec65: ;
    if ((int32_t)rd32(self + 0x10u) > 0)
    {
        eax = rd32(self + 0x10u);
        goto L_1018ec79;
    }
    wr32(self + 0x10u, 0u);
    return 0u;
L_1018ec79: ;
    wr32(self + 0x10u, eax - 1u);
    t1 = cow_divs(g, eax - 1u, 0x32u);
    t2 = cow_mods(g, eax - 1u, 0x32u);
    if ((int32_t)t1 >= (int32_t)rd8(ecx + 0x54u))
    {
        edx = t2;
        goto L_1018eccc;
    }
    edx = t2;
    ebx = rd8(ecx + 0x54u);
    esi = t1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x1018e7f0u), ecx, 1, esi);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        ecx = t4;
        edx = t5;
        if ((int32_t)esi < (int32_t)(ebx - 2u))
        {
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x1018e890u), ecx, 1, esi + 2u);
            t6 = g->edx;
            edx = t6;
        }
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x1018e800u), rd32(self + 0xcu), 1, esi);
    }
    t7 = cow_divs(g, rd32(self + 0x10u), 0x32u);
    t8 = cow_mods(g, rd32(self + 0x10u), 0x32u);
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x1018e7d0u), rd32(self + 0xcu), 2, esi, t8);
    return t9;
L_1018eccc: ;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x1018e620u), rd32(self + 4u), 1, edx);
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ec50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018ec50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
