/* f_0x101a72e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a72e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(COW_IMG(0x106627ccu)) == 0u)
    {
        eax = rd32(COW_IMG(0x106627ccu));
        ecx = self;
        edx = in_edx;
        ebp = in_ebp;
        esi = in_esi;
    }
    else
    {
        wr32(sp0 - 0x1cu, in_ebp);
        wr32(sp0 - 0x20u, in_esi);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        t1 = rd32(self + 8u);
        wr16(sp0 - 0x10u, 0u);
        wr16(sp0 - 0xeu, 0u);
        wr16(sp0 - 0xcu, 0u);
        wr16(sp0 - 0xau, 0u);
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x10u, t1, g->edx, 0, 1, sp0 - 0x10u);
        t3 = g->edx;
        wr32(sp0 - 0x24u, sp0 - 8u);
        g->ebx = 0u;
        g->edi = self;
        cow_thiscall(g, COW_IMG(0x101a7040u), rd32(COW_IMG(0x106627ccu)), 1, sp0 - 8u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        g->edx = sp0 - 0x10u;
        t4 = rd32(sp0 - 8u);
        t5 = rd16(sp0 - 0x10u);
        t6 = rd16(sp0 - 0xcu);
        t7 = rd16(sp0 - 0xau);
        t8 = rd16(sp0 - 0xeu);
        cow_call_regs(g, COW_IMG(0x10118f70u), rd32(COW_IMG(0x106627ccu)), rd32(rd32(COW_IMG(0x106627ccu)) + 8u), g->edx, 0, 1, sp0 - 0x10u);
        t9 = g->edx;
        if ((int32_t)rd32(sp0 - 4u) <= (int32_t)((uint32_t)(int16_t)rd16(sp0 - 0xau) - ((uint32_t)(int16_t)t7 - (uint32_t)(int16_t)t8)))
        {
            eax = (uint32_t)(int16_t)rd16(sp0 - 0xau) - ((uint32_t)(int16_t)t7 - (uint32_t)(int16_t)t8);
            ecx = rd32(sp0 - 4u);
            edx = t9;
            ebp = t4 + (uint32_t)(int16_t)t5 - (uint32_t)(int16_t)t6;
        }
        else
        {
            eax = (uint32_t)(int16_t)rd16(sp0 - 0xau) - ((uint32_t)(int16_t)t7 - (uint32_t)(int16_t)t8);
            edx = t9;
            ebp = t4 + (uint32_t)(int16_t)t5 - (uint32_t)(int16_t)t6;
            ecx = eax;
        }
        wr32(sp0 - 0x24u, ecx);
        wr32(sp0 - 0x28u, ebp);
        g->edx = edx;
        t10 = rd32(self + 8u);
        g->esp = sp0 - 0x20u;
        t11 = cow_call_regs(g, COW_IMG(0x10119110u), eax, t10, g->edx, 0, 2, ebp, ecx);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
        ebp = rd32(sp0 - 0x1cu);
        esi = rd32(sp0 - 0x20u);
    }
    if (rd32(COW_IMG(0x106627e8u)) == 0u)
    {
        wr32(sp0 - 0x1cu, 4u);
        wr32(sp0 - 0x20u, 5u);
        g->eax = eax;
        g->edx = edx;
        t14 = rd32(self + 8u);
        g->esp = sp0 - 0x18u;
        t15 = cow_thiscall(g, COW_IMG(0x10118b60u), t14, 2, 5u, 4u);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t18 = cow_stdcall(g, COW_IMG(0x101a7d00u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        eax = t18;
        edx = t20;
        goto L_101a739c;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t21 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t22 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        edx = t22;
        goto L_101a73a8;
    }
    eax = t21;
    edx = t22;
L_101a739c: ;
    wr32(sp0 - 0x1cu, 8u);
    wr32(sp0 - 0x20u, 5u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t23 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 8u);
    t24 = g->edx;
    eax = t23;
    edx = t24;
L_101a73a8: ;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = esi;
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a72e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a72e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
