/* f_0x101f7c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f7c60(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101f7c91;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101f7d34;
    }
    t1 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = g->edx;
    t4 = cow_call_regs(g, COW_IMG(0x101fa420u), t2, rd32(COW_IMG(0x10663888u)), t3, 0, 1, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101f7c91: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101f7d0c;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_101f7cc6;
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_101f7d34;
    }
    if (rd32(COW_IMG(0x1066389cu)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_101f7d34;
    }
    ecx = rd32(COW_IMG(0x1066389cu));
    g->eax = (uint32_t)(int16_t)arg2 - 3u;
    g->esp = sp0;
    t6 = cow_fastcall(g, COW_IMG(0x101fccf0u), ecx, in_edx, 0);
    t7 = g->edx;
    wr32(rd32(COW_IMG(0x1066389cu)) + 0x6cu, COW_IMG(0x101f7d70u));
    g->edx = t7;
    return t6;
L_101f7cc6: ;
    g->edx = in_edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x100f94d0u), self, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t10;
        goto L_101f7cfe;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    if (rd32(eax) != 1u) goto L_101f7cfe;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x45u);
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0;
    t13 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101f7d40u), 0u, t11, 0u, 0u, 1u, 0u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_101f7cfe: ;
    g->esp = sp0;
    t15 = cow_call_regs(g, COW_IMG(0x101fb910u), eax, rd32(COW_IMG(0x10663894u)), edx, 1, 0);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_101f7d0c: ;
    if ((int16_t)rd16(rd32(COW_IMG(0x10663888u)) + 0x106u) < 2)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10663888u));
        g->edx = in_edx;
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x101f9070u), (uint32_t)(int16_t)arg2 - 1u, ecx, g->edx, 1, 0);
        t17 = g->edx;
        edx = t17;
    }
    g->edx = edx;
    g->esp = sp0;
    t18 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10384ff4u), 1u, 0u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
L_101f7d34: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7c60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
