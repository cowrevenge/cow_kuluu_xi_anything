/* f_0x1022ca30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1022ca30(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x6cu) != 0u)
    {
        eax = rd32(self + 0x6cu);
        goto L_1022cae3;
    }
    if ((uint32_t)(int16_t)arg1 == 5u)
    {
        ecx = rd32(self + 0x40u);
        goto L_1022cac2;
    }
    ecx = rd32(self + 0x40u);
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_1022caad;
    if ((uint32_t)(int16_t)arg1 - 6u == 2u) goto L_1022ca6a;
    g->eax = arg2;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, arg2);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1022ca6a: ;
    if ((int32_t)ecx <= 0)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = arg1;
        goto L_1022cb83;
    }
    if (rd32(self + 0xc0u) == 0u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = arg1;
        goto L_1022cb83;
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102211b0u), rd32(COW_IMG(0x105781f8u)) + 0x20u, 1, 2u);
    t3 = rd32(rd32(self + 0xc0u) + 8u);
    g->eax = t3;
    t4 = rd32(self + 0xc0u);
    t5 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t4, 2, t3, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10037e90u), t6, 0);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_1022caad: ;
    t10 = rd32(self + 8u);
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x1015e790u), (uint32_t)(int16_t)arg1 - 6u, COW_IMG(0x10621838u), g->edx, 0, 2, t10, 1u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1022cac2: ;
    if ((int32_t)ecx <= 0)
    {
        eax = (uint32_t)(int16_t)arg1 - 5u;
        edx = arg1;
        goto L_1022cb83;
    }
    g->ebx = 0u;
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x1022c7a0u), self, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_1022cb7e;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t17 = g->edx;
    g->ebx = in_ebx;
    g->edx = t17;
    return t16;
L_1022cae3: ;
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1022cb48;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_1022cb00;
    g->eax = arg2;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, arg2);
    t19 = g->edx;
    g->ebx = in_ebx;
    g->edx = t19;
    return t18;
L_1022cb00: ;
    if (eax != 2u) goto L_1022cb17;
    wr32(self + 0x6cu, 1u);
    wr8(self + 0xbcu, 0u);
    g->ebx = in_ebx;
    g->edx = arg1;
    return eax;
L_1022cb17: ;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102211b0u), rd32(COW_IMG(0x105781f8u)) + 0x20u, 1, 2u);
    t20 = g->edx;
    if (rd32(self + 0xc0u) == 0u)
    {
        eax = rd32(self + 0xc0u);
        edx = t20;
    }
    else
    {
        eax = rd32(self + 0xc0u);
        t21 = rd32(eax + 8u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t22 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t21, 2, t21, 0u);
        t23 = g->edx;
        eax = t22;
        edx = t23;
    }
    wr32(self + 0x6cu, 0u);
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_1022cb48: ;
    if (eax != 1u) goto L_1022cb6a;
    t24 = rd32(self + 0x30u);
    wr32(self + 0x6cu, 2u);
    wr32(self + 0x70u, t24);
    wr8(self + 0xbcu, 0u);
    g->eax = t24;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t25 = cow_thiscall(g, COW_IMG(0x10037b90u), (uint32_t)(int16_t)arg1 - 5u, 0);
    t26 = g->edx;
    g->ebx = in_ebx;
    g->edx = t26;
    return t25;
L_1022cb6a: ;
    g->esi = self;
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x1022c8e0u), self, 0);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(self + 0x6cu, 1u);
    wr8(self + 0xbcu, 0u);
    eax = t27;
    ecx = t28;
    edx = t29;
L_1022cb7e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t30 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t31 = g->edx;
    eax = t30;
    edx = t31;
L_1022cb83: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022ca30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022ca30(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
