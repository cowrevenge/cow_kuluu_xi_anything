/* f_0x10234370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10234370(Guest* g)
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 3u > 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_10234488;
    }
    t1 = rd32(COW_IMG(0x10234498u) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t1 - RD)
    {
    case 0x10234393u: goto L_10234393;
    case 0x102343deu: goto L_102343de;
    case 0x102343edu: goto L_102343ed;
    case 0x1023442au: goto L_1023442a;
    case 0x10234467u: goto L_10234467;
    case 0x10234488u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_10234488;
    default: rt_fatal(g, COW_IMG(0x1023438cu), "switch");
    }
    return 0;
L_10234393: ;
    if (rd8(self + 0x68u) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 3u & 0xffffff00u) | rd8(self + 0x68u);
        edx = in_edx;
        goto L_10234491;
    }
    if ((uint32_t)(int16_t)arg2 == 9u) goto L_102343ce;
    if ((uint32_t)(int16_t)arg2 == 0xau) goto L_102343be;
    t26 = rd32(self + 0x30u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t27 = cow_call_regs(g, COW_IMG(0x102342c0u), t26, self, g->edx, 0, 1, t26);
    t28 = g->edx;
    g->ebx = in_ebx;
    g->edx = t28;
    return t27;
L_102343be: ;
    g->eax = (uint32_t)(int16_t)arg2 - 0xau;
    g->edx = rd32(self);
    t29 = rd32(self);
    g->esp = sp0 - 0xcu;
    t30 = cow_thiscall(g, rd32(t29 + 0x18u), self, 2, 3u, arg2);
    t31 = g->edx;
    g->ebx = in_ebx;
    g->edx = t31;
    return t30;
L_102343ce: ;
    g->eax = rd32(self);
    g->edx = in_edx;
    t32 = rd32(self);
    g->esp = sp0 - 0xcu;
    t33 = cow_thiscall(g, rd32(t32 + 0x18u), self, 2, 4u, arg2);
    t34 = g->edx;
    g->ebx = in_ebx;
    g->edx = t34;
    return t33;
L_102343de: ;
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, COW_IMG(0x10234230u), self, 1, 1u);
    t25 = g->edx;
    g->ebx = in_ebx;
    g->edx = t25;
    return t24;
L_102343ed: ;
    g->ebx = arg2;
    g->edx = in_edx;
    g->esp = sp0;
    t15 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 3u, self, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_10234418;
    }
    eax = t15;
    edx = t17;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t18 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, 0x19u, arg2);
    t19 = g->edx;
    g->ebx = in_ebx;
    g->edx = t19;
    return t18;
L_10234418: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t20 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_call_regs(g, COW_IMG(0x10234280u), t20, self, g->edx, 1, 0);
    t23 = g->edx;
    g->ebx = in_ebx;
    g->edx = t23;
    return t22;
L_1023442a: ;
    g->ebx = arg2;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 3u, self, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_10234455;
    }
    eax = t6;
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, 0x18u, arg2);
    t10 = g->edx;
    g->ebx = in_ebx;
    g->edx = t10;
    return t9;
L_10234455: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_call_regs(g, COW_IMG(0x102342a0u), t11, self, g->edx, 1, 0);
    t14 = g->edx;
    g->ebx = in_ebx;
    g->edx = t14;
    return t13;
L_10234467: ;
    if ((int16_t)arg2 < 9) goto L_10234481;
    if ((int16_t)arg2 > 10) goto L_10234481;
    g->eax = (uint32_t)(int16_t)arg2;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10221cd0u), self, 0);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10234481: ;
    g->eax = (uint32_t)(int16_t)arg2;
    g->esp = sp0 - 0xcu;
    t4 = cow_fastcall(g, COW_IMG(0x10221ce0u), self, in_edx, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_10234488: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t35 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, arg2);
    t36 = g->edx;
    eax = t35;
    edx = t36;
L_10234491: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10234370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10234370(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
