/* f_0x10178df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10178df0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
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
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(self + 0x54u, 1u);
    wr32(self + 0x38u, 0u);
    wr32(self + 0x50u, 0u);
    wr32(self + 0x3cu, arg1);
    wr32(COW_IMG(0x1065c5d8u), arg1);
    if (arg1 != 0x95u)
    {
        wr32(self + 0x16cu, 0x40000000u);
        wr32(self + 0x170u, 0x40000000u);
    }
    else
    {
        wr32(self + 0x16cu, 0x3fc00000u);
        wr32(self + 0x170u, 0x3f000000u);
    }
    wr8(COW_IMG(0x10376ee8u), 1u);
    t1 = rd32(self + 0x38u);
    wr32(self + t1 * 0x78u + 0x64u, arg1);
    if (rd32(self + 0x39498u) == 0u)
    {
        edx = in_edx;
        ebp = self + t1 * 0x78u + 0x60u;
        loc_4 = in_ebx;
        loc_8 = in_ebp;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        ebp = self + t1 * 0x78u + 0x60u;
        if ((int32_t)arg1 >= 700) goto L_10178e78;
        if ((int32_t)arg1 < 600)
        {
            eax = arg1 + 0x9b97u;
            goto L_10178e7e;
        }
L_10178e78: ;
        eax = arg1 + 0x14817u;
L_10178e7e: ;
        wr32(sp0 - 0x14u, eax);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_stdcall(g, COW_IMG(0x10178de0u), 1, eax);
        t3 = g->edx;
        wr32(sp0 - 0x14u, t2);
        wr32(sp0 - 0x18u, sp0 + 4u);
        g->edx = t3;
        t4 = cow_thiscall(g, COW_IMG(0x10072fd0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 + 4u, t2);
        t5 = g->edx;
        if (rd32(t4) == 0u)
        {
            edx = t5;
            eax = 0u;
        }
        else
        {
            eax = rd32(t4);
            edx = t5;
            eax = rd32(eax);
        }
        wr32(ebp + 0x58u, eax);
        if (eax == 0u)
        {
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
        else
        {
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10071e90u), eax, eax, g->edx, 1, 0);
            t6 = g->edx;
            edx = t6;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
    }
    if ((int32_t)arg1 >= 700) goto L_10178ec4;
    if ((int32_t)arg1 < 600)
    {
        eax = arg1 + 0x64u;
        goto L_10178eca;
    }
L_10178ec4: ;
    eax = arg1 + 0x144f7u;
L_10178eca: ;
    wr32(sp0 - 0x14u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t7 = cow_stdcall(g, COW_IMG(0x10178dd0u), 1, eax);
    wr32(sp0 - 0x14u, t7);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->edx = sp0 + 4u;
    t8 = cow_thiscall(g, COW_IMG(0x10072fd0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 + 4u, t7);
    t9 = g->edx;
    if (rd32(t8) == 0u)
    {
        edx = t9;
        eax = 0u;
    }
    else
    {
        eax = rd32(t8);
        edx = t9;
        eax = rd32(eax);
    }
    wr32(ebp + 0x54u, eax);
    if (eax != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10071e90u), eax, eax, g->edx, 1, 0);
        t10 = g->edx;
        edx = t10;
    }
    wr32(sp0 - 0x14u, 0x1b8cu);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x10072fd0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 + 4u, 0x1b8cu);
    t12 = g->edx;
    if (rd32(t11) == 0u)
    {
        eax = rd32(t11);
        edx = t12;
        ecx = 0u;
    }
    else
    {
        eax = rd32(t11);
        edx = t12;
        ecx = rd32(eax);
    }
    wr32(self + 0x174u, ecx);
    if (ecx != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t13 = cow_call_regs(g, COW_IMG(0x10071e90u), eax, ecx, g->edx, 1, 0);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    wr32(self + 0x44u, 0u);
    g->ebx = 0u;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x10178f90u), self, edx, 0);
    t15 = g->edx;
    wr32(self + 0x54u, 0u);
    wr32(self + 0x150u, 1u);
    wr16(self + 0x34u, 2u);
    if (rd32(ebp + 0x54u) != 0u)
    {
        eax = rd32(ebp + 0x54u);
        edx = t15;
        t16 = rd32(eax + 0x14u);
        wr32(sp0 - 0x14u, t16);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10055040u), self + 0x3959cu, 1, t16);
    }
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return rd32(ebp + 0x54u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10178df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10178df0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
