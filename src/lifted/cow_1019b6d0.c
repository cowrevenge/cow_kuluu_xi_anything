/* f_0x1019b6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1019b6d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t of;
    uint32_t sf;
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
    const uint32_t in_ebx = g->ebx;

    if ((int16_t)rd16(COW_IMG(0x106218b8u)) >= 1024)
    {
        eax = in_eax;
        ecx = (self & 0xffff0000u) | rd16(COW_IMG(0x106218b8u));
        edx = in_edx;
        ebp = rd32(self + 0x38u);
        edi = rd32(self + 0x3cu);
    }
    else
    {
        ebp = rd32(self + 0x38u);
        edi = rd32(self + 0x3cu);
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_call_regs(g, COW_IMG(0x101606d0u), in_eax, COW_IMG(0x10621838u), g->edx, 0, 1, 0xffffffffu);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = (t2 & 0xffff0000u) | rd16(COW_IMG(0x106218b8u));
        edx = t3;
        ebp = 0xffffffffu;
    }
    if (rd8(COW_IMG(0x106218edu)) == 0xffu)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106218edu));
        goto L_1019b712;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106218edu));
    if ((uint8_t)eax == 0u) goto L_1019b782;
    if ((uint8_t)eax != 1u) goto L_1019b72d;
L_1019b712: ;
    sf = (int16_t)((uint16_t)ecx - 0x280u) < 0;
    of = (((uint16_t)ecx ^ 0x280u) & ((uint16_t)ecx ^ (uint16_t)((uint16_t)ecx - 0x280u))) >> 0xfu;
L_1019b717: ;
    if (sf != of)
    {
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t4 = cow_call_regs(g, COW_IMG(0x101606e0u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, 0xffffffffu);
        t5 = g->ecx;
        t6 = g->edx;
        eax = (t4 & 0xffffff00u) | rd8(COW_IMG(0x106218edu));
        ecx = t5;
        edx = t6;
        edi = 0xffffffffu;
    }
L_1019b72d: ;
    if ((int8_t)eax >= 0)
    {
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
    else
    {
        wr32(self + 0x38u, 1u);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t7 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x9du, 1u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
        ebx = in_ebx & 0xffffff00u;
    }
    if ((int8_t)rd8(COW_IMG(0x106218eeu)) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106218eeu));
        loc_4 = (self & 0xffffffu) | 0x1000000u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106218eeu));
        loc_4 = self & 0xffffffu;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_call_regs(g, COW_IMG(0x101606d0u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, ebp);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_call_regs(g, COW_IMG(0x101606e0u), t9, COW_IMG(0x10621838u), g->edx, 0, 1, edi);
    t12 = g->edx;
    if ((uint8_t)ebx == 0u)
    {
        eax = t11;
        edx = t12;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x1019b830u), self, 1, 0xcu);
        t14 = g->edx;
        edx = t14;
    }
    else
    {
        eax = t11;
        edx = t12;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x1019b800u), self, 1, 0xcu);
        t13 = g->edx;
        edx = t13;
    }
    t15 = rd32(self + 0x38u);
    g->ebx = ebx;
    g->eax = t15;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t16 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t15, 0xcu, 0xdu);
    t17 = g->edx;
    if (loc_4 >> 0x18u == 0u)
    {
        eax = (t16 & 0xffffff00u) | loc_4 >> 0x18u;
        edx = t17;
        goto L_1019b7cc;
    }
    eax = (t16 & 0xffffff00u) | loc_4 >> 0x18u;
    edx = t17;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, COW_IMG(0x1019b800u), self, 1, 0xeu);
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x1019b800u), self, 1, 0xfu);
    t21 = g->edx;
    t22 = rd32(self + 0x3cu);
    g->ebx = ebx;
    cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t22, 0xeu, 0xfu);
    g->ebx = in_ebx;
    return;
L_1019b782: ;
    sf = (int16_t)((uint16_t)ecx - 0x400u) < 0;
    of = (((uint16_t)ecx ^ 0x400u) & ((uint16_t)ecx ^ (uint16_t)((uint16_t)ecx - 0x400u))) >> 0xfu;
    goto L_1019b717;
L_1019b7cc: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t23 = cow_thiscall(g, COW_IMG(0x1019b830u), self, 1, 0xeu);
    t24 = g->edx;
    cow_thiscall(g, COW_IMG(0x1019b830u), self, 1, 0xfu);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019b6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019b6d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
