/* f_0x10143af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10143af0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(COW_IMG(0x103714e8u), 1u);
    eax = 1u;
    ecx = self;
    edx = in_edx;
L_10143b18: ;
    t1 = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 1u);
    wr32(sp0 - 0x18u, t1);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_cdecl(g, COW_IMG(0x10141c20u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint16_t)t2 == 0u)
    {
        ecx = t3;
        edx = t4;
        edi = t2;
    }
    else
    {
        edi = t2;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 1u);
        t5 = rd8(self + rd32(COW_IMG(0x103714e8u)) + 0x167u);
        wr32(sp0 - 0x20u, t5);
        wr32(sp0 - 0x24u, sp0 - 8u);
        g->ebx = 0u;
        g->edi = edi;
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t5, 1u, 1u);
        t6 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0x80808080u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0x3f800000u);
        t7 = rd32(sp0 - 6u);
        wr32(sp0 - 0x28u, t7);
        t8 = rd32(sp0 - 8u);
        wr32(sp0 - 0x2cu, t8);
        wr32(sp0 - 0x30u, edi + 0x7400u);
        g->edx = t6;
        t9 = rd32(COW_IMG(0x10621808u));
        cow_thiscall(g, COW_IMG(0x1015bd70u), t9, 7, edi + 0x7400u, t8, t7, 0x3f800000u, 0u, 0x80808080u, 0u);
        t10 = g->ecx;
        t11 = g->edx;
        ecx = t10;
        edx = t11;
        edi = edi + 0x7400u;
    }
    t12 = rd32(COW_IMG(0x103714e8u)) + 1u;
    t13 = rd32(COW_IMG(0x103714e8u));
    wr32(COW_IMG(0x103714e8u), t12);
    if ((int32_t)(t13 + 1u) <= 12)
    {
        eax = t12;
        goto L_10143b18;
    }
    eax = t12;
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 0xdu);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->ebx = 0u;
    g->edi = edi;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 0xdu, 1u, 1u);
    t14 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x3f800000u);
    t15 = rd32(sp0 - 6u);
    wr32(sp0 - 0x28u, t15);
    t16 = rd32(sp0 - 8u);
    wr32(sp0 - 0x2cu, t16);
    g->edx = t14;
    g->esp = sp0 - 0x2cu;
    t17 = cow_stdcall(g, COW_IMG(0x10141e70u), 0);
    t18 = g->edx;
    wr32(sp0 - 0x30u, t17);
    g->edx = t18;
    g->esp = sp0 - 0x14u;
    t19 = cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, t17, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), 0x3f800000u, 0u, 0x80808080u, 0u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    esi = self + 0x28u;
    edi = 0xau;
L_10143bc5: ;
    wr32(sp0 - 0x18u, 0x80808080u);
    t21 = (edx & 0xffff0000u) | rd16(esi + 0x1eu);
    wr32(sp0 - 0x1cu, t21);
    g->ebx = 0u;
    g->edx = t21;
    g->esp = sp0 - 0x14u;
    t22 = cow_call_regs(g, COW_IMG(0x10131440u), eax, esi, g->edx, 0, 2, t21, 0x80808080u);
    t23 = g->edx;
    if (edi != 1u)
    {
        eax = t22;
        edx = t23;
        esi = esi + 0x20u;
        edi = edi - 1u;
        goto L_10143bc5;
    }
    eax = t22;
    edx = t23;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10143af0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
