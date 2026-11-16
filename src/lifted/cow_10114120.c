/* f_0x10114120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10114120(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
    uint32_t t2;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0xcu, 0u);
    if (rd16(self + 0x108u) == rd16(self + 0x10au))
    {
        edx = in_edx;
        ebp = 0u;
        esi = 0u;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x108u);
        wr32(sp0 - 0x20u, 0xffffffffu);
        wr32(sp0 - 0x24u, rd32(self));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        t1 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), rd32(self), 2, rd32(self), 0xffffffffu);
        t2 = g->edx;
        if (t1 == 0xffffffffu)
        {
            edx = t2;
            ebp = 0u;
            esi = 0u;
        }
        else
        {
            if (sp0 - 0x10u == self + rd16(self + 0x108u) * 0x10u + 8u)
            {
                edx = rd16(self + 0x108u) << 4u;
                ebp = 0u;
                esi = 0u;
            }
            else
            {
                eax = self + rd16(self + 0x108u) * 0x10u + 8u;
                t3 = rd32(eax + 4u);
                wr32(sp0 - 0xcu, t3);
                if (rd32(eax + 8u) == 0u)
                {
                    edx = t3;
                    ebp = rd32(eax);
                    esi = rd32(eax + 8u);
                    loc_c = t3;
                }
                else
                {
                    edx = t3;
                    ebp = rd32(eax);
                    esi = rd32(eax + 8u);
                    loc_c = t3;
                    wr32(esi, rd32(esi) + 1u);
                }
            }
            wr32(sp0 - 0x20u, in_ebx);
            if (rd32(self + rd16(self + 0x108u) * 0x10u + 0x10u) == 0u)
            {
                ecx = sp0 - 0x10u;
            }
            else
            {
                eax = rd32(self + rd16(self + 0x108u) * 0x10u + 0x10u);
                ebx = self + rd16(self + 0x108u) * 0x10u + 8u;
                t4 = rd32(eax) - 1u;
                t5 = rd32(eax);
                wr32(eax, t4);
                if (t5 >= 2u)
                {
                    ecx = t5;
                    edx = t4;
                }
                else
                {
                    ecx = t5;
                    edx = t4;
                    if (rd32(rd32(ebx + 8u) + 4u) == 0u)
                    {
                        eax = rd32(rd32(ebx + 8u) + 4u);
                    }
                    else
                    {
                        eax = rd32(rd32(ebx + 8u) + 4u);
                        wr32(sp0 - 0x24u, eax);
                        g->eax = eax;
                        g->esp = sp0 - 0x18u;
                        t6 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, in_ebx, rd32(sp0 - 0x1cu));
                        t7 = g->edx;
                        eax = t6;
                        edx = t7;
                    }
                    t8 = rd32(ebx + 8u);
                    wr32(sp0 - 0x24u, t8);
                    g->esp = sp0 - 0x20u;
                    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t8, edx, 1, 1, t8);
                    t9 = g->ecx;
                    t10 = g->edx;
                    ecx = t9;
                    edx = t10;
                }
                wr32(ebx + 8u, 0u);
            }
            wr32(sp0 - 0x24u, rd32(self));
            t11 = rd32(self);
            t12 = rd8(self + 0x108u);
            wr16(self + 0x108u, t12 + 1u & 0xfu);
            g->edx = t12 + 1u & 0xfu;
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(COW_IMG(0x103291ccu)), ecx, 1, t11);
            t13 = g->edx;
            edx = t13;
        }
    }
    wr32(arg1 + 8u, 0u);
    if (arg1 == sp0 - 0x10u) goto L_1011420e;
    wr32(arg1, ebp);
    wr32(arg1 + 4u, 0u);
    wr32(arg1 + 8u, esi);
    if (esi == 0u) goto L_10114237;
    wr32(esi, rd32(esi) + 1u);
    edx = 0u;
L_1011420e: ;
    if (esi != 0u)
    {
        t14 = rd32(esi) - 1u;
        t15 = rd32(esi);
        wr32(esi, t14);
        if (t15 < 2u)
        {
            ecx = t14;
            if (rd32(esi + 4u) == 0u)
            {
                eax = rd32(esi + 4u);
            }
            else
            {
                eax = rd32(esi + 4u);
                wr32(sp0 - 0x20u, eax);
                g->eax = eax;
                g->esp = sp0 - 0x14u;
                t16 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, in_edi, in_esi);
                t17 = g->ecx;
                t18 = g->edx;
                eax = t16;
                ecx = t17;
                edx = t18;
            }
            wr32(sp0 - 0x20u, esi);
            g->esp = sp0 - 0x1cu;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
        }
    }
L_10114237: ;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10114120(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
