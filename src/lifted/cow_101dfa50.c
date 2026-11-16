/* f_0x101dfa50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101dfa50(Guest* g)
{
    double d9;
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101dfafb;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_101dfaac;
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_101dfba6;
    }
    if ((int32_t)rd32(self + 0x50u) >= 0)
    {
        eax = rd32(self + 0x50u);
        ecx = self;
        goto L_101dfaa1;
    }
    if ((int32_t)rd32(rd32(COW_IMG(0x106634a8u)) + 0x10u) >= 0)
    {
        eax = rd32(COW_IMG(0x106634a8u));
        ecx = rd32(rd32(COW_IMG(0x106634a8u)) + 0x10u);
        goto L_101dfaa1;
    }
    eax = rd32(COW_IMG(0x106634a8u));
    t1 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t2 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t1, 2, t1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10037e90u), t3, 0);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_101dfaa1: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t8 = g->edx;
    d9 = cow_take_float(g);
    g->edx = t8;
    fpush(g, d9);
    return (t7 & 0xffffff00u) | 1u;
L_101dfaac: ;
    if ((int32_t)rd32(self + 0x50u) >= 0)
    {
        eax = rd32(COW_IMG(0x106634a8u));
        ecx = rd32(rd32(COW_IMG(0x106634a8u)) + 0x10u);
        goto L_101dfacc;
    }
    eax = rd32(COW_IMG(0x106634a8u));
    ecx = rd32(rd32(COW_IMG(0x106634a8u)) + 0x10u);
    if ((int32_t)ecx >= 0) goto L_101dfad4;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x101df160u), self, 0);
    t11 = g->edx;
    g->edx = t11;
    return (t10 & 0xffffff00u) | 1u;
L_101dfacc: ;
    if ((int32_t)ecx < 0)
    {
        edx = in_edx;
        goto L_101dfba6;
    }
L_101dfad4: ;
    wr32(eax + 0x10u, 0xffffffffu);
    t12 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
    g->eax = rd32(COW_IMG(0x1066369cu));
    t13 = rd32(COW_IMG(0x1066369cu));
    g->esp = sp0 - 4u;
    t14 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t12, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x10037bf0u), t15, 0);
    t18 = g->edx;
    g->edx = t18;
    return (t17 & 0xffffff00u) | 1u;
L_101dfafb: ;
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    if (rd32(self + 0x38u) == 0u) goto L_101dfb29;
    eax = t19;
    edx = rd32(self + 0x38u);
    if ((int32_t)eax >= (int16_t)rd16(self + 0x20u)) goto L_101dfb29;
    if (eax * 0x54u + edx == 0u) goto L_101dfb29;
    eax = eax * 0x54u + edx;
    eax = rd32(eax + 0x48u);
L_101dfb2b: ;
    if ((int32_t)rd32(rd32(COW_IMG(0x106634a8u)) + 0x10u) < 0)
    {
        ecx = eax - 1u;
        edx = rd32(COW_IMG(0x106634a8u));
        goto L_101dfb78;
    }
    ecx = eax - 1u;
    eax = rd32(rd32(COW_IMG(0x106634a8u)) + 0x10u);
    edx = rd32(COW_IMG(0x106634a8u));
    t20 = ((ecx & 0xffffff00u) | (uint8_t)((ecx == eax) - 1u)) & eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t22 = g->ecx;
    t23 = g->edx;
    t24 = (t23 & 0xffffff00u) | rd8(self + 0x5cu);
    g->esi = self;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100fcf80u), 4, t24, 0x1000u, t21, t20);
    t25 = rd32(COW_IMG(0x106634a8u));
    wr32(t25 + 0x10u, 0xffffffffu);
    t26 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
    eax = t25;
    edx = t26;
    loc_c = t26;
L_101dfb97: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t30 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, loc_c, 0u);
    t31 = g->ecx;
    t32 = g->edx;
    eax = t30;
    ecx = t31;
    edx = t32;
L_101dfba1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t33 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t34 = g->edx;
    eax = t33;
    edx = t34;
L_101dfba6: ;
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101dfb29: ;
    eax = 0u;
    goto L_101dfb2b;
L_101dfb78: ;
    if ((int32_t)rd32(self + 0x50u) >= 0)
    {
        eax = rd32(self + 0x50u);
        goto L_101dfba1;
    }
    wr32(edx + 0x18u, ecx);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t27 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t28 = g->edx;
    wr32(self + 0x50u, t27);
    t29 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
    eax = rd32(COW_IMG(0x1066369cu));
    edx = t28;
    loc_c = t29;
    goto L_101dfb97;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dfa50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dfa50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
