/* f_0x101338f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101338f0(Guest* g)
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
    const uint32_t in_edi = g->edi;

    t1 = (self & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    g->edx = in_edx;
    t2 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t1);
    t4 = g->edx;
    if (rd8(self + 0x14fu) != 0xffu)
    {
        edx = t4;
        edi = t3;
        goto L_10133956;
    }
    eax = (t3 & 0xffffff00u) | rd8(self + 0x14fu);
    edx = t4;
    edi = t3;
    if ((int16_t)edi >= 0) goto L_10133956;
    t5 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = t5;
    t6 = rd32(COW_IMG(0x10578204u));
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t5, 1u);
    t8 = g->edx;
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x1013bf40u), t6, 0);
    t9 = g->edx;
    t10 = rd32(COW_IMG(0x10663484u));
    wr8(t10 + 0x16u, 1u);
    wr8(t10 + 0x17u, 0x73u);
    g->edx = t9;
    t11 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f868u), 1u, 0u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_10133956: ;
    t13 = rd32(rd32(COW_IMG(0x10663484u)) + 8u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1015e790u), rd32(COW_IMG(0x10663484u)), COW_IMG(0x10621838u), g->edx, 0, 2, t13, 1u);
    t14 = g->ecx;
    if (rd8(self + 0x14fu) == 0xffu) goto L_1013399f;
    ecx = t14;
    if (rd8(self + (uint32_t)(int16_t)edi + 0x22u) == 0u)
    {
        eax = 0u;
        edx = (uint32_t)(int16_t)edi;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + (uint32_t)(int16_t)edi + 0x22u);
        edx = (uint32_t)(int16_t)edi;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t15 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 2u, ecx);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 2, eax, 0u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_1013399f: ;
    if (rd32(rd32(COW_IMG(0x10578204u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        ecx = rd32(COW_IMG(0x10578204u));
        goto L_101339cb;
    }
    ecx = rd32(COW_IMG(0x10578204u));
    t19 = rd32(self + (uint32_t)(int16_t)edi * 4u + 0x98u);
    t20 = ((uint32_t)(int16_t)edi & 0xffff0000u) | rd16(self + (uint32_t)(int16_t)edi * 2u + 0x78u);
    g->edi = edi;
    g->eax = t20;
    g->edx = t19;
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x1013e200u), ecx, 4, t20, t19, 0u, 0u);
    t22 = g->edx;
    g->edi = in_edi;
    g->edx = t22;
    return t21;
L_101339cb: ;
    t23 = (eax & 0xffff0000u) | rd16(self + (uint32_t)(int16_t)edi * 2u + 0x78u);
    g->edi = edi;
    g->edx = (uint32_t)(int16_t)edi;
    g->esp = sp0 - 8u;
    t24 = cow_call_regs(g, COW_IMG(0x1013e410u), t23, ecx, g->edx, 0, 7, 0u, t23, 0u, 0u, 0u, 0u, 0u);
    t25 = g->edx;
    g->edi = in_edi;
    g->edx = t25;
    return t24;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101338f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101338f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
