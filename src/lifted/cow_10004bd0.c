/* f_0x10004bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10004bd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 608u);

    eax = arg2;
    ecx = self;
L_10004be3: ;
    t1 = rd8(eax);
    wr8(eax + sp0 - arg2 - 0x104u, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_10004be3;
    }
    wr32(sp0 - 0x230u, in_ebx);
    wr32(sp0 - 0x234u, arg1);
    wr32(sp0 - 0x238u, COW_IMG(0x1034f8d4u));
    wr32(sp0 - 0x23cu, sp0 - 0x208u);
    g->ecx = sp0 - 0x208u;
    g->esp = sp0 - 0x228u;
    t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x208u, COW_IMG(0x1034f8d4u), arg1, in_ebx, rd32(sp0 - 0x22cu));
    t3 = g->ecx;
    wr32(sp0 - 0x240u, sp0 - 0x208u);
    g->esp = sp0 - 0x23cu;
    cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, t3, sp0 - 0x208u, 1, 1, sp0 - 0x208u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x244u, COW_IMG(0x1034f7fcu));
    wr32(sp0 - 0x248u, sp0 - 0x208u);
    g->eax = sp0 - 0x208u;
    g->esp = sp0 - 0x234u;
    t6 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x208u, COW_IMG(0x1034f7fcu), sp0 - 0x208u, sp0 - 0x208u, COW_IMG(0x1034f8d4u));
    if (t6 == 0u)
    {
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        ebx = t6;
        wr32(sp0 - 0x234u, in_edi);
        wr32(sp0 - 0x238u, sp0 - 0x22cu);
        wr32(sp0 - 0x23cu, sp0 - 0x104u);
        g->esp = sp0 - 0x230u;
        t7 = cow_call_regs(g, COW_IMG(0x103124c7u), g->eax, sp0 - 0x22cu, sp0 - 0x104u, 1, 3, sp0 - 0x104u, sp0 - 0x22cu, in_edi);
        t8 = g->ecx;
        t9 = g->edx;
        if (t7 != 0u)
        {
            ecx = t8;
            edx = t9;
            esi = in_esi;
            edi = in_edi;
        }
        else
        {
            ecx = t8;
            edx = t9;
            t10 = rd32(sp0 - 0x218u);
            wr32(sp0 - 0x238u, t10);
            g->esp = sp0 - 0x22cu;
            t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t10, rd32(sp0 - 0x234u), rd32(sp0 - 0x230u));
            t12 = g->ecx;
            t13 = g->edx;
            if (t11 == 0u)
            {
                ecx = t12;
                edx = t13;
                esi = in_esi;
                edi = t11;
            }
            else
            {
                eax = t11;
                edx = t13;
                edi = t11;
                wr32(sp0 - 0x238u, in_esi);
                wr32(sp0 - 0x23cu, COW_IMG(0x1034f2d0u));
                wr32(sp0 - 0x240u, sp0 - 0x104u);
                g->eax = eax;
                g->ecx = sp0 - 0x104u;
                g->edx = edx;
                g->esp = sp0 - 0x22cu;
                t14 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x104u, COW_IMG(0x1034f2d0u), in_esi, rd32(sp0 - 0x234u), rd32(sp0 - 0x230u));
                t15 = g->ecx;
                t16 = g->edx;
                if (t14 == 0u)
                {
                    eax = t14;
                    ecx = t15;
                    edx = t16;
                }
                else
                {
                    ecx = t15;
                    esi = t14;
                    wr32(sp0 - 0x23cu, esi);
                    t17 = rd32(sp0 - 0x218u);
                    wr32(sp0 - 0x240u, t17);
                    wr32(sp0 - 0x244u, 1u);
                    wr32(sp0 - 0x248u, edi);
                    g->ecx = ecx;
                    g->esp = sp0 - 0x230u;
                    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, t17, 1, 6, edi, 1u, t17, esi, rd32(sp0 - 0x238u), rd32(sp0 - 0x234u));
                    t18 = g->ecx;
                    t19 = g->edx;
                    wr32(sp0 - 0x24cu, ebx);
                    t20 = rd32(sp0 - 0x218u);
                    wr32(sp0 - 0x250u, t20);
                    wr32(sp0 - 0x254u, 1u);
                    wr32(sp0 - 0x258u, edi);
                    g->ecx = t18;
                    g->esp = sp0 - 0x240u;
                    cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, t19, 1, 6, edi, 1u, t20, ebx, rd32(sp0 - 0x248u), 1u);
                    t21 = g->ecx;
                    t22 = g->edx;
                    wr32(sp0 - 0x25cu, esi);
                    g->edi = edi;
                    g->ecx = t21;
                    g->esp = sp0 - 0x250u;
                    t23 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t22, 1, 3, esi, rd32(sp0 - 0x258u), 1u);
                    t24 = g->ecx;
                    t25 = g->edx;
                    eax = t23;
                    ecx = t24;
                    edx = t25;
                }
                wr32(sp0 - 0x23cu, edi);
                g->esp = sp0 - 0x238u;
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, edi);
                t26 = g->ecx;
                t27 = g->edx;
                ecx = t26;
                edx = t27;
                esi = rd32(sp0 - 0x238u);
            }
        }
        wr32(sp0 - 0x238u, ebx);
        g->edi = edi;
        g->esp = sp0 - 0x22cu;
        cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, ebx, rd32(sp0 - 0x234u), rd32(sp0 - 0x230u));
        edi = rd32(sp0 - 0x234u);
    }
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = esi;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10004bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10004bd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
