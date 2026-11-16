/* f_0x10119110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10119110(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr16(self + 0x52u, (uint16_t)arg1);
    wr16(self + 0x54u, (uint16_t)arg2);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->edx;
    wr32(sp0 - 0xcu, t1);
    if (t1 == 0u)
    {
        edx = t2;
        goto L_101191d5;
    }
    edx = t2;
    loc_8 = 0u;
    loc_4 = 0u;
    loc_c = t1;
L_1011914a: ;
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    g->ecx = self + 0x14u;
    g->esp = sp0 - 0x1cu;
    t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0xcu);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd16(t3) != 0u)
    {
        eax = (t3 & 0xffff0000u) | rd16(t3);
        edx = t5;
        edi = t3;
        if ((uint16_t)eax != 1u)
        {
            if ((uint16_t)eax == 2u)
            {
                wr32(sp0 - 4u, edi);
                loc_4 = edi;
            }
        }
        else
        {
            t11 = (eax & 0xffffff00u) | rd8(self + 0x99u);
            wr32(sp0 - 0x20u, t11);
            wr32(sp0 - 0x24u, arg2);
            wr32(sp0 - 0x28u, arg1);
            g->esp = sp0 - 0x1cu;
            cow_fastcall(g, COW_IMG(0x10119ad0u), edi, edx, 3, arg1, arg2, t11);
            t12 = g->edx;
            if (rd16(edi + 0x3au) != rd16(self + 0x4cu))
            {
                edx = (t12 & 0xffff0000u) | rd16(edi + 0x3au);
            }
            else
            {
                edx = (t12 & 0xffff0000u) | rd16(edi + 0x3au);
                wr32(sp0 - 8u, edi);
                loc_8 = edi;
            }
        }
    }
    else
    {
        eax = (t3 & 0xffff0000u) | rd16(t3);
        ecx = t4;
        edx = t5;
        edi = t3;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 1u);
        t6 = (edx & 0xffff0000u) | rd16(edi + 0x24u);
        wr32(sp0 - 0x2cu, t6);
        t7 = (eax & 0xffff0000u) | rd16(edi + 0x22u);
        wr32(sp0 - 0x30u, t7);
        t8 = (ecx & 0xffff0000u) | rd16(self + 0x54u);
        wr32(sp0 - 0x34u, t8);
        t9 = (t6 & 0xffff0000u) | rd16(self + 0x52u);
        wr32(sp0 - 0x38u, t9);
        g->edx = t9;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011a5a0u), self, 7, t9, t8, t7, t6, 1u, 0u, 0u);
        t10 = g->edx;
        edx = t10;
    }
    if (rd32(sp0 - 0xcu) != 0u) goto L_1011914a;
    if (loc_8 != 0u)
    {
        eax = loc_8;
        if (loc_4 != 0u)
        {
            ecx = loc_4;
            wr32(sp0 - 0x20u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x10119e30u), ecx, 1, eax);
            t13 = g->edx;
            edx = t13;
        }
    }
L_101191d5: ;
    if (rd32(self + 0xcu) == 0u)
    {
        eax = rd32(self + 0xcu);
    }
    else
    {
        eax = rd32(self + 0xcu);
        wr8(eax + 0x10u, 1u);
        g->eax = rd32(rd32(self + 0xcu));
        g->edx = edx;
        t14 = rd32(rd32(self + 0xcu));
        g->esp = sp0 - 0x1cu;
        t15 = cow_thiscall(g, rd32(t14 + 0x14u), rd32(self + 0xcu), 0);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10119110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10119110(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
