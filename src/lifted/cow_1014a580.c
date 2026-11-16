/* f_0x1014a580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1014a580(Guest* g)
{
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1014a5bc;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_1014a5a7;
    }
    if (rd8(self + 0x54u) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 6u & 0xffffff00u) | rd8(self + 0x54u);
        goto L_1014a5ad;
    }
    t1 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1014a5a7: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1014a5ad: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x1014a650u), self, 1, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4 & 0xffffff00u;
L_1014a5bc: ;
    if (rd8(self + 0x54u) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 5u & 0xffffff00u) | rd8(self + 0x54u);
        edx = in_edx;
        goto L_1014a5a7;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x1014a3a0u), self, 0);
    t7 = g->edx;
    g->ecx = self;
    g->edx = t7;
    t8 = cow_stdcall(g, COW_IMG(0x1014a550u), 1, t6);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        edx = t10;
        goto L_1014a5a7;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t11 = g->edx;
    d12 = cow_take_float(g);
    g->edx = t11;
    t13 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t14 = g->edx;
    wr8(self + 0x58u, (uint8_t)t13);
    if (rd32(COW_IMG(0x1057842cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057842cu));
        edx = t14;
        x0 = d12;
    }
    else
    {
        edx = t14;
        x0 = d12;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t15 = cow_thiscall(g, COW_IMG(0x1014a3a0u), self, 0);
        t16 = g->edx;
        g->edx = t16;
        t17 = cow_call_regs(g, COW_IMG(0x1014af70u), t15, rd32(COW_IMG(0x1057842cu)), g->edx, 0, 1, t15);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
    g->edx = edx;
    fpush(g, x0);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014a580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014a580(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
