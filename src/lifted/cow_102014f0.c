/* f_0x102014f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102014f0(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    g->edx = t3;
    fpush(g, d4);
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t6 = g->edx;
    t7 = t5 + rd32(self + 0x18u);
    t8 = rd32(self + 0x14u);
    wr32(self + 0x18u, t7);
    if (t8 == 0u)
    {
        eax = t8;
        ecx = t7;
        goto L_10201552;
    }
    eax = t8;
    ecx = t7;
    edx = t6;
    if (eax != 1u) goto L_10201566;
    if ((int32_t)rd32(self + 0x2cu) > 0) goto L_10201528;
    if ((rd32(self + 0x20u) | rd32(self + 0x1cu)) != 0u)
    {
        ecx = rd32(self + 0x1cu);
        goto L_10201528;
    }
    eax = rd32(self + 0x20u) | rd32(self + 0x1cu);
    ecx = rd32(self + 0x1cu);
    wr32(self + 0x18u, 0u);
    edi = 0u;
L_10201549: ;
    if (rd32(self + 0x18u) <= edi) goto L_10201566;
    loc_c = 0u;
L_1020155f: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102014c0u), self, 1, loc_c);
    t9 = g->ecx;
    t10 = g->edx;
    ecx = t9;
    edx = t10;
L_10201566: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_stdcall(g, COW_IMG(0x100f6f30u), 0);
    t12 = g->edx;
    g->edx = t12;
    cow_thiscall(g, COW_IMG(0x102010a0u), self + 0x1cu, 1, (uint16_t)t11);
    t13 = g->ecx;
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_stdcall(g, COW_IMG(0x100f6f00u), 0);
    t16 = g->edx;
    g->edx = t16;
    cow_thiscall(g, COW_IMG(0x102010e0u), self + 0x1cu, 1, (uint16_t)t15);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    g->edx = t18;
    t19 = cow_stdcall(g, COW_IMG(0x10115250u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(self + 0x2cu, (uint16_t)t19);
    if ((int32_t)(uint16_t)t19 <= 0)
    {
        ecx = t20;
        edx = t21;
        goto L_102015a8;
    }
    eax = (uint16_t)t19;
    edx = t21;
    wr32(self + 0x30u, 2u);
    g->edx = edx;
    return eax;
L_10201528: ;
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        goto L_10201542;
    }
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
        goto L_10201542;
    }
    eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10385272u));
    edi = (uint32_t)(int16_t)rd16(COW_IMG(0x10385272u)) * 3u;
    goto L_10201549;
L_10201542: ;
    edi = (uint32_t)(int16_t)rd16(COW_IMG(0x10385272u));
    goto L_10201549;
L_10201552: ;
    if ((int32_t)ecx <= (int16_t)rd16(COW_IMG(0x10385270u)))
    {
        edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10385270u));
        goto L_10201566;
    }
    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10385270u));
    loc_c = 1u;
    goto L_1020155f;
L_102015a8: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t22 = cow_stdcall(g, COW_IMG(0x100f6f90u), 0);
    t23 = g->edx;
    if ((uint16_t)t22 == 0u)
    {
        eax = t22;
        edx = t23;
        goto L_102015be;
    }
    eax = t22;
    edx = t23;
    wr32(self + 0x30u, 1u);
    g->edx = edx;
    return eax;
L_102015be: ;
    wr32(self + 0x30u, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102014f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102014f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
