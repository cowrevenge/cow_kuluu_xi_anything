/* f_0x101d5140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d5140(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
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
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x18u, 0u);
    edx = in_edx;
    ebx = in_ebx;
    ebp = self + (arg1 == 9u) * 0x144u + 0x4cu;
    loc_18 = 0u;
L_101d5167: ;
    if (rd32(ebp) != 0u)
    {
        ecx = rd32(ebp);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t1 = cow_thiscall(g, COW_IMG(0x101ce7a0u), ecx, 0);
        t2 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            wr32(sp0 - 0x2cu, rd32(ebp));
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t3 = cow_thiscall(g, COW_IMG(0x101d5ea0u), self, 1, rd32(ebp));
            t4 = g->edx;
            wr32(sp0 - 0x14u, 2u);
            eax = t3;
            edx = t4;
            edi = self + 0x4cu;
            loc_14 = 2u;
L_101d5195: ;
            ebx = 0x51u;
L_101d519a: ;
            if (rd32(edi) != 0u)
            {
                ecx = rd32(edi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t5 = cow_thiscall(g, COW_IMG(0x101cea70u), ecx, 0);
                t6 = g->edx;
                eax = t5;
                edx = t6;
            }
            if (ebx != 1u)
            {
                ebx = ebx - 1u;
                edi = edi + 4u;
                goto L_101d519a;
            }
            ebx = ebx - 1u;
            edi = edi + 4u;
            wr32(sp0 - 0x14u, loc_14 - 1u);
            if (loc_14 != 1u)
            {
                eax = loc_14 - 1u;
                loc_14 = loc_14 - 1u;
                goto L_101d5195;
            }
            eax = loc_14 - 1u;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t7 = cow_call_regs(g, COW_IMG(0x101d5e40u), eax, self, g->edx, 1, 0);
            t8 = g->edx;
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0xcu, 0u);
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0x3f800000u);
            g->edx = t8;
            t9 = cow_call_regs(g, COW_IMG(0x101d30f0u), t7, self, g->edx, 1, 0);
            t10 = g->ecx;
            t11 = g->edx;
            if (t9 != 0u)
            {
                eax = t9;
                ecx = t10;
                edx = t11;
                g->esp = sp0 - 0x28u;
                t12 = cow_call_regs(g, COW_IMG(0x101d30f0u), eax, ecx, g->edx, 1, 0);
                g->edx = rd32(t12);
                t13 = rd32(t12);
                t14 = cow_thiscall(g, rd32(t13 + 0x1bcu), t12, 0);
                t15 = g->edx;
                wr32(sp0 - 0x10u, rd32(t14));
                t16 = rd32(t14);
                t17 = cow_call_regs(g, COW_IMG(0x101d30f0u), t16, self, g->edx, 1, 0);
                g->edx = rd32(t17);
                t18 = rd32(t17);
                t19 = cow_thiscall(g, rd32(t18 + 0x1bcu), t17, 0);
                t20 = g->edx;
                t21 = rd32(t19 + 4u);
                wr32(sp0 - 0xcu, t21);
                t22 = cow_call_regs(g, COW_IMG(0x101d30f0u), t21, self, g->edx, 1, 0);
                g->edx = rd32(t22);
                t23 = rd32(t22);
                t24 = cow_thiscall(g, rd32(t23 + 0x1bcu), t22, 0);
                t25 = g->edx;
                t26 = rd32(t24 + 8u);
                wr32(sp0 - 8u, t26);
                t27 = cow_call_regs(g, COW_IMG(0x101cd990u), t26, rd32(ebp), g->edx, 1, 0);
                if (rd16(self + 0x7e6u) == (uint16_t)t27)
                {
                    wr16(self + 0x7e6u, 0u);
                }
            }
            t28 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x2cu, t28);
            wr32(sp0 - 0x30u, arg1);
            g->edx = arg1;
            g->esp = sp0 - 0x28u;
            t29 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, arg1, t28);
            t30 = g->edx;
            wr32(sp0 - 0x2cu, t29);
            g->edx = t30;
            t31 = cow_thiscall(g, COW_IMG(0x101d4be0u), self, 1, t29);
            t32 = g->edx;
            if (rd32(ebp) == 0u)
            {
                edx = t32;
            }
            else
            {
                eax = t31;
                edx = t32;
                edi = rd32(ebp);
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t33 = cow_call_regs(g, COW_IMG(0x101cd900u), eax, edi, g->edx, 1, 0);
                t34 = g->ecx;
                t35 = g->edx;
                wr32(sp0 - 0x2cu, edi);
                g->edx = t35;
                cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, edi);
                t36 = g->edx;
                wr32(ebp, 0u);
                edx = t36;
            }
            wr32(sp0 - 0x2cu, sp0 - 0x10u);
            wr32(ebp, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t37 = cow_thiscall(g, COW_IMG(0x101d5cd0u), self, 1, sp0 - 0x10u);
            t38 = g->ecx;
            t39 = g->edx;
            t40 = rd16(self + 0x7e6u);
            wr16(self + 0x48u, (uint16_t)(rd16(self + 0x48u) - 1u));
            wr16(self + 0x7e6u, (uint16_t)(-((uint16_t)(t40 - (uint16_t)t37) != 0u) & t37));
            edx = t39;
        }
    }
    wr32(sp0 - 0x18u, loc_18 + 1u);
    if ((int32_t)(loc_18 + 1u) < 81)
    {
        ebp = ebp + 4u;
        loc_18 = loc_18 + 1u;
        goto L_101d5167;
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d5140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d5140(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
