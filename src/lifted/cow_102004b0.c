/* f_0x102004b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102004b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1020053f;
    }
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_10200510;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_10200508;
    if ((uint32_t)(int16_t)arg2 - 2u != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 4u;
        edx = in_edx;
        goto L_10200530;
    }
    t1 = rd32(self + 0x24u);
    t2 = rd32(self + 0x20u);
    t3 = rd32(self + 0x1cu);
    t4 = rd32(self + 0x18u);
    g->eax = t3;
    g->edx = t2;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x100f7590u), 6, t4, t3, t2, t1, COW_IMG(0x10200230u), 0x19u);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        edx = t6;
        goto L_10200530;
    }
    eax = t5;
    edx = t6;
    wr8(COW_IMG(0x10663ac8u), 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103851e8u));
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_10200508: ;
    g->eax = (uint32_t)(int16_t)arg2 - 2u;
    g->edx = in_edx;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x102001a0u), self, 0);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_10200510: ;
    if (rd32(COW_IMG(0x10663ab8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663ab8u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10663ab8u));
        t11 = rd32(self + 0x24u);
        t12 = rd32(self + 0x20u);
        t13 = rd32(self + 0x1cu);
        t14 = rd32(self + 0x18u);
        g->edx = t13;
        g->esp = sp0;
        t15 = cow_call_regs(g, COW_IMG(0x101ffbc0u), eax, eax, g->edx, 0, 4, t14, t13, t12, t11);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
L_10200530: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t17 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103851e8u));
    t18 = g->edx;
    eax = t17;
    edx = t18;
L_1020053f: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102004b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102004b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
