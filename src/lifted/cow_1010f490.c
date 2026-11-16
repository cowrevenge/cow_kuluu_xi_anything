/* f_0x1010f490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010f490(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10112420u), in_eax, self + 4u, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_1010f505;
    }
    eax = t1;
    edx = t2;
    if (rd8(self + 0x18u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x18u);
        goto L_1010f4b2;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x18u);
L_1010f4aa: ;
    return (eax & 0xffffff00u) | 1u;
L_1010f4b2: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x101124a0u), eax, self + 4u, g->edx, 1, 0);
    t4 = g->edx;
    if (rd32(t3 + 0x24u) == 0u)
    {
        eax = t3;
        goto L_1010f4aa;
    }
    eax = t3;
    edx = t4;
    esi = rd32(t3 + 0x24u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x1010a780u), eax, esi, g->edx, 1, 0);
    t6 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        eax = t5;
        goto L_1010f4aa;
    }
    edx = t6;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x1010d8e0u), rd32(self), 2, esi, esi + 0xcu);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1010ad90u), esi, 1, t7);
    t10 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        goto L_1010f4aa;
    }
    eax = t9;
    edx = t10;
    if ((uint8_t)arg1 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t13 = cow_call_regs(g, COW_IMG(0x10112440u), eax, self + 4u, g->edx, 1, 0);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t11 = cow_call_regs(g, COW_IMG(0x10112470u), eax, self + 4u, g->edx, 1, 0);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_call_regs(g, COW_IMG(0x10112420u), eax, self + 4u, g->edx, 1, 0);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        edx = t16;
        goto L_1010f4b2;
    }
    eax = t15;
L_1010f505: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010f490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010f490(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
