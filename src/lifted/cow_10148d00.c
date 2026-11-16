/* f_0x10148d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10148d00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10148d49;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_10148e6d;
    }
    if ((int16_t)rd16(self + 0x18u) >= 0) goto L_10148d37;
    t1 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10148d37: ;
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t4 = cow_stdcall(g, COW_IMG(0x10148ac0u), 0);
    t5 = g->edx;
    wr16(self + 0x18u, 0xffffu);
    g->edx = t5;
    return t4;
L_10148d49: ;
    if ((uint32_t)(int16_t)rd16(self + 0x18u) == (uint32_t)(int16_t)arg2 - 1u)
    {
        eax = (uint32_t)(int16_t)arg1 - 5u;
        edx = in_edx;
        goto L_10148e6d;
    }
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t6 = cow_stdcall(g, COW_IMG(0x10148ac0u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint32_t)(int16_t)arg2 - 1u != 5u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_10148d81;
    }
    eax = t6;
    edx = t8;
    if (rd32(COW_IMG(0x106671d4u)) == 0u) goto L_10148e67;
    ecx = rd32(COW_IMG(0x106671d4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x1022a620u), ecx, 1, 1u);
    t10 = g->edx;
    wr16(self + 0x18u, 0xffffu);
    g->edx = t10;
    return t9;
L_10148d81: ;
    if ((uint32_t)(int16_t)arg2 - 1u != 9u) goto L_10148da6;
    if (rd32(COW_IMG(0x106671d4u)) == 0u) goto L_10148e67;
    ecx = rd32(COW_IMG(0x106671d4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x1022a620u), ecx, 1, 2u);
    t12 = g->edx;
    wr16(self + 0x18u, 0xffffu);
    g->edx = t12;
    return t11;
L_10148da6: ;
    if ((uint32_t)(int16_t)arg2 - 1u != 8u) goto L_10148dc5;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x10371978u), 0u);
    t14 = g->edx;
    wr16(self + 0x18u, 0xffffu);
    g->edx = t14;
    return t13;
L_10148dc5: ;
    if ((uint32_t)(int16_t)arg2 - 1u != 0xau) goto L_10148de6;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371964u), 1u, 0u);
    t16 = g->edx;
    wr16(self + 0x18u, 0xffffu);
    g->edx = t16;
    return t15;
L_10148de6: ;
    if ((uint32_t)(int16_t)arg2 - 1u != 0xbu) goto L_10148dfe;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103718c4u), 1u, 0u);
    t18 = g->edx;
    wr16(self + 0x18u, (uint16_t)((uint32_t)(int16_t)arg2 - 1u));
    g->edx = t18;
    return t17;
L_10148dfe: ;
    if ((uint32_t)(int16_t)arg2 - 1u != 0xcu) goto L_10148e18;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371950u), 1u, 0u);
    t20 = g->edx;
    wr16(self + 0x18u, 0xffffu);
    g->edx = t20;
    return t19;
L_10148e18: ;
    t21 = (uint32_t)(int16_t)arg2 - 1u;
    t22 = COW_IMG(0x103716b8u) + t21 * 0x20u;
    g->edx = t22;
    g->esp = sp0 - 8u;
    t23 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, t22, 1u, 0u);
    t24 = g->ecx;
    t25 = g->edx;
    wr16(self + 0x18u, (uint16_t)t21);
    if (t21 != 6u)
    {
        eax = t23;
        edx = t25;
        esi = t21;
        goto L_10148e62;
    }
    ecx = t24;
    edx = t25;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t27 = g->edx;
    if ((uint8_t)t26 == 0u)
    {
        edx = t27;
    }
    else
    {
        edx = t27;
        wr8(rd32(COW_IMG(0x10578418u)) + 0x1cu, 1u);
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t28 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037193cu), 1u, 0u);
    t29 = g->edx;
    wr16(self + 0x18u, 0xffffu);
    g->edx = t29;
    return t28;
L_10148e62: ;
    if (esi != 7u) goto L_10148e6d;
L_10148e67: ;
    wr16(self + 0x18u, 0xffffu);
L_10148e6d: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10148d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10148d00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
