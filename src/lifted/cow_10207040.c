/* f_0x10207040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10207040(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 6u) goto L_10207086;
L_1020704b: ;
    g->eax = rd32(COW_IMG(0x10664420u));
    t1 = rd32(COW_IMG(0x10664420u));
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t1);
    t3 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10664420u)) + 0xau);
    g->edx = t3;
    t4 = cow_call_regs(g, COW_IMG(0x101f7080u), t2, rd32(COW_IMG(0x10663740u)), g->edx, 0, 2, t3, 0u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_10207074: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e274u));
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_10207083: ;
    g->edx = edx;
    return eax;
L_10207086: ;
    if ((uint16_t)arg1 != 5u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        edx = in_edx;
        goto L_10207083;
    }
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_102070b3;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_1020709c;
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_10207074;
    }
    goto L_1020704b;
L_1020709c: ;
    g->eax = (uint32_t)(int16_t)arg2 - 2u;
    g->edx = in_edx;
    g->esp = sp0;
    t8 = cow_stdcall(g, COW_IMG(0x10206ad0u), 0);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e274u));
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_102070b3: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x10206830u), g->eax, g->ecx, in_edx, 1, 0);
    t13 = g->edx;
    g->edx = t13;
    return t12;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10207040(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
