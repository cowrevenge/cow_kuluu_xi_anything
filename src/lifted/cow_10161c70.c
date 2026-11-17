/* f_0x10161c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10161c70(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(self + 0x5cu) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x5cu);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, eax);
        wr32(sp0 - 0x2cu, 8u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t1 = cow_fastcall(g, COW_IMG(0x101295d0u), rd32(self + 0x18u), in_edx, 4, 8u, eax, 1u, 0u);
        t2 = g->edx;
        wr32(self + 0x5cu, t1);
        edx = t2;
    }
    g->eax = rd32(rd32(COW_IMG(0x1062193cu)));
    t3 = rd32(rd32(COW_IMG(0x1062193cu)));
    g->esp = sp0 - 0x1cu;
    t4 = cow_thiscall(g, rd32(t3 + 0x48u), rd32(COW_IMG(0x1062193cu)), 0);
    t5 = rd32(self);
    wr8(sp0 + 4u, (uint8_t)t4);
    t6 = rd32(sp0 + 4u);
    wr32(sp0 - 0x20u, t6);
    g->edx = t5;
    cow_thiscall(g, rd32(t5 + 0x44u), self, 1, t6);
    t7 = g->edx;
    t8 = rd32(COW_IMG(0x1062193cu));
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    if (rd32(t8 + 8u) == 0u)
    {
        eax = t8;
        edx = t7;
        ebx = t6;
    }
    else
    {
        eax = t8;
        ecx = rd32(t8 + 8u);
        ebx = t6;
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10118f70u), eax, ecx, g->edx, 0, 1, sp0 - 8u);
        t9 = g->edx;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        g->edx = t9;
        t10 = rd32(self + 8u);
        t11 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x10u, t10, g->edx, 0, 1, sp0 - 0x10u);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x20u, 0xb4u);
        g->edx = t13;
        t14 = cow_call_regs(g, COW_IMG(0x10193850u), t11, g->ecx, g->edx, 1, 1, 0xb4u);
        t15 = g->edx;
        if (t14 == 1u) goto L_10161d23;
        eax = t14 - 1u;
        edx = t15;
        if (eax != 1u)
        {
            eax = eax - 1u;
            goto L_10161d45;
        }
        eax = (uint32_t)(int16_t)rd16(sp0 - 2u) - (uint32_t)(int16_t)rd16(sp0 - 0xau);
        ecx = (uint32_t)(int16_t)rd16(sp0 - 4u);
        edx = (uint32_t)(int16_t)rd16(sp0 - 0xeu);
L_10161d39: ;
        wr32(sp0 - 0x20u, eax + edx);
        wr32(sp0 - 0x24u, ecx);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t16 = cow_call_regs(g, COW_IMG(0x10119110u), eax + edx, rd32(self + 8u), g->edx, 0, 2, ecx, eax + edx);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
L_10161d45: ;
    wr32(sp0 - 0x20u, ebx);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t18 = cow_thiscall(g, COW_IMG(0x101626e0u), self, 1, ebx);
    t19 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->edx = t19;
    return t18;
L_10161d23: ;
    eax = (uint32_t)(int16_t)rd16(sp0 - 0xeu) - (uint32_t)(int16_t)rd16(sp0 - 0xau);
    ecx = (uint32_t)(int16_t)rd16(sp0 - 8u);
    edx = (uint32_t)(int16_t)rd16(sp0 - 6u);
    goto L_10161d39;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10161c70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
