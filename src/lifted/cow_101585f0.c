/* f_0x101585f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101585f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(self + 0xc4u) != 0u)
    {
        eax = rd32(self + 0xc4u);
        goto L_1015861e;
    }
    if (rd32(self + 0xc8u) != 0u)
    {
        eax = rd32(self + 0xc8u);
        goto L_1015861e;
    }
    eax = rd32(self + 0xc8u);
    if (rd8(self + 0x74u) != 0u) goto L_101587a6;
    eax = (eax & 0xffffff00u) | rd8(self + 0x74u);
    if ((int16_t)rd16(self + 0x6au) > 0) goto L_101587a6;
L_1015861e: ;
    if ((rd8(self + 0x74u) & 2u) != 0u) goto L_101587a6;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x101587b0u), 3, COW_IMG(0x10371ee0u), in_edi, in_esi);
    t2 = g->edx;
    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106631d4u));
        edx = t2;
        edi = t1;
        goto L_1015864b;
    }
    eax = rd32(COW_IMG(0x106631d4u));
    edx = t2;
    edi = t1;
    if (rd16(eax + 0x1cu) == 1u) goto L_101587a6;
L_1015864b: ;
    if (rd32(COW_IMG(0x10662d40u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10662d40u));
        goto L_10158662;
    }
    ecx = rd32(COW_IMG(0x10662d40u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u) goto L_101587a6;
    eax = t3;
    ecx = t4;
    edx = t5;
L_10158662: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_10158681;
    }
    ecx = t7;
    edx = t8;
    if (rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4du) != 5u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        goto L_10158681;
    }
    eax = rd32(COW_IMG(0x104e1d4cu));
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10158b40u), self, edx, 1, edi);
    return;
L_10158681: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t10 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        edx = t10;
        goto L_101586a1;
    }
    eax = t9;
    edx = t10;
    if (rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4du) != 4u) goto L_101586a1;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10158b40u), self, edx, 1, edi);
    return;
L_101586a1: ;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x10158470u), eax, self, edx, 1, 0);
    t12 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        edx = t12;
        goto L_1015874a;
    }
    eax = t11;
    edx = t12;
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x101587f0u), eax, self, edx, 0, 1, edi);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 0u) goto L_101587a6;
    eax = t13;
    ecx = t14;
    edx = t15;
    if (edi == 1u) goto L_101586ce;
    if (edi != 0x16u) goto L_101587a6;
L_101586ce: ;
    if (rd8(self + 0x59u) != 0u) goto L_101587a6;
    if (rd32(self + 0xc4u) != 0u) goto L_101587a6;
    eax = rd32(self + 0xc4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t17 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        edx = t17;
        goto L_10158726;
    }
    eax = t16;
    edx = t17;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f840u), 1u, 1u);
    t18 = g->ecx;
    if (rd32(rd32(COW_IMG(0x10578250u)) + 8u) == 0u) goto L_101587a6;
    eax = rd32(rd32(COW_IMG(0x10578250u)) + 8u);
    ecx = t18;
    edx = rd32(COW_IMG(0x10578250u));
    if (rd8(eax + 0x6eu) != 0u) goto L_101587a6;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x6eu);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10037e30u), eax, ecx, edx);
    return;
L_10158726: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f5b4u), 1u, 1u);
    t19 = g->ecx;
    t20 = g->edx;
    if (rd32(rd32(COW_IMG(0x10578170u)) + 8u) == 0u) goto L_101587a6;
    eax = rd32(rd32(COW_IMG(0x10578170u)) + 8u);
    ecx = t19;
    edx = t20;
    if (rd8(eax + 0x6eu) != 0u) goto L_101587a6;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x6eu);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10037e30u), eax, ecx, edx);
    return;
L_1015874a: ;
    if (edi == 0u) goto L_101587a6;
    eax = edi;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10158793;
    }
    eax = eax - 1u;
    if (eax == 0x15u)
    {
        eax = (eax - 0x15u & 0xffffff00u) | rd8(COW_IMG(0x10482f18u));
        goto L_10158772;
    }
    eax = (eax - 0x15u & 0xffffff00u) | rd8(COW_IMG(0x10482f18u));
    if ((uint8_t)eax != 1u) goto L_10158767;
    if (edi != 0x11u) goto L_101587a6;
L_10158767: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101587f0u), eax, self, edx, 0, 1, edi);
    return;
L_10158772: ;
    if ((uint8_t)eax == 1u) goto L_101587a6;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, self, g->edx, 1, 0);
    t22 = g->edx;
    t23 = cow_call_regs(g, COW_IMG(0x101587f0u), t21, self, t22, 0, 1, 0x16u);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_call_regs(g, COW_IMG(0x101598a0u), t23, self, g->edx, 1, 0);
    t26 = g->edx;
    if (t25 != t21) goto L_101587a6;
    eax = t25;
    edx = t26;
L_10158793: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x10158db0u), self, 1, 0u);
    t28 = g->ecx;
    t29 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10123ea0u), 0);
L_101587a6: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101585f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101585f0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
