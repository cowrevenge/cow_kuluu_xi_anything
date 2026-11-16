/* f_0x101e8ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e8ea0(Guest* g)
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, 2u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = COW_IMG(0x10381e40u);
        edx = self + 0x20u;
L_101e8ec1: ;
        t4 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
        wr32(edx, t4);
        if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x10381e4au))
        {
            ecx = ecx + 2u;
            edx = edx + 4u;
            goto L_101e8ec1;
        }
        ecx = ecx + 2u;
        edx = edx + 4u;
    }
    wr32(sp0 - 0x20u, 4u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t5 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    else
    {
        eax = t5;
        edx = t7;
        t8 = rd32(rd32(eax) + 0x17cu);
        t9 = rd32(eax);
        wr32(self + 0x54u, t8);
        eax = t9;
        ecx = t8;
    }
    wr32(sp0 - 0x20u, 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    else
    {
        eax = t10;
        ecx = 0x128u;
L_101e8f07: ;
        t13 = rd32(ecx + rd32(eax));
        wr32(ecx + self - 0xf4u, t13);
        if ((int32_t)(ecx + 4u) < 308)
        {
            ecx = ecx + 4u;
            goto L_101e8f07;
        }
        ecx = ecx + 4u;
        edx = t13;
    }
    wr32(sp0 - 0x20u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t14 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    t15 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        edx = t15;
    }
    else
    {
        eax = t14;
        ecx = COW_IMG(0x10381e4cu);
        edx = self + 0x40u;
L_101e8f35: ;
        t16 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
        wr32(edx, t16);
        if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x10381e56u))
        {
            ecx = ecx + 2u;
            edx = edx + 4u;
            goto L_101e8f35;
        }
        edx = edx + 4u;
    }
    t17 = rd32(self + 8u);
    wr8(self + 0x19u, 0x80u);
    wr8(self + 0x1au, 0xf8u);
    if (t17 != 0u)
    {
        ecx = t17;
        wr16(sp0 - 0xcu, 0u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        wr16(sp0 - 0xau, 0u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, ecx, g->edx, 0, 1, sp0 - 0xcu);
        t18 = g->edx;
        t19 = rd32(sp0 - 0xau);
        wr16(self + 0x1cu, (uint16_t)(rd32(sp0 - 6u) - t19));
        eax = t19;
        edx = t18;
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8ea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e8ea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
