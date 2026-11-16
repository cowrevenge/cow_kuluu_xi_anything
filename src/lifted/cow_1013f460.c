/* f_0x1013f460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013f460(Guest* g)
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_esi);
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1013f521;
    }
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_1013f495;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        edx = in_edx;
        goto L_1013f51a;
    }
    t1 = ((uint32_t)(int16_t)arg2 - 2u & 0xffffff00u) | rd8(self + 0x22u);
    wr32(sp0 - 8u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100ebd10u), 1, t1);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1013f3a0u), self, 0);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1013f495: ;
    t6 = rd16(self + 0x1cu);
    wr32(sp0 - 8u, t6);
    g->edx = in_edx;
    t7 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t7, 1, t6);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        edx = t10;
        goto L_1013f4e0;
    }
    eax = t8;
    ecx = t9;
    if ((int8_t)(rd32(rd32(eax + 0x14bcu)) >> 8u) >= 0)
    {
        edx = rd32(eax + 0x14bcu);
        goto L_1013f4e0;
    }
    edx = rd32(eax + 0x14bcu);
    eax = rd32(rd32(eax + 0x14bcu));
    t11 = (eax & 0xffff0000u) | rd16(self + 0x1cu);
    wr32(sp0 - 8u, t11);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x101cba80u), 1, t11);
    t13 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        edx = t13;
        goto L_1013f4e0;
    }
    edx = t13;
    wr32(sp0 - 8u, 0x7eu);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7eu);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1013f3a0u), self, 0);
    t17 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t17;
    return t16;
L_1013f4e0: ;
    wr32(sp0 - 8u, sp0 + 4u);
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_cdecl(g, COW_IMG(0x100eb800u), 1, sp0 + 4u);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        eax = t18;
        ecx = t19;
        goto L_1013f509;
    }
    edx = t20;
    wr32(sp0 - 8u, 0x7du);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7du);
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x1013f3a0u), self, 0);
    t24 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t24;
    return t23;
L_1013f509: ;
    wr32(sp0 - 8u, arg1);
    t25 = (eax & 0xffffff00u) | rd8(self + 0x22u);
    wr32(sp0 - 0xcu, t25);
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t26 = cow_thiscall_cdecl(g, COW_IMG(0x100ebc90u), ecx, 2, t25, arg1);
    t27 = g->edx;
    eax = t26;
    edx = t27;
L_1013f51a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t28 = cow_thiscall(g, COW_IMG(0x1013f3a0u), self, 0);
    t29 = g->edx;
    eax = t28;
    edx = t29;
L_1013f521: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013f460(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
