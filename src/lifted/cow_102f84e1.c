/* f_0x102f84e1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f84e1(Guest* g)
{
    double d14;
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
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    if (rd32(arg1 + 0x58u) & 1u)
    {
        eax = rd32(arg1 + 0x58u);
        goto L_102f851e;
    }
    eax = rd32(arg1 + 0x58u);
    wr32(sp0 - 0xcu, COW_IMG(0x10348ce4u));
    wr32(sp0 - 0x10u, arg1);
    g->esi = arg1;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, self, in_edx, 1, 2, arg1, COW_IMG(0x10348ce4u));
    rt_fatal(g, COW_IMG(0x102f84f5u), "no way on");
L_102f84fa: ;
    ecx = COW_IMG(0x10348c98u);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
L_102f84fc: ;
    if (arg3 == 1u) goto L_102f854e;
    wr32(sp0 - 0xcu, COW_IMG(0x10348cc8u));
    loc_c = COW_IMG(0x10348cc8u);
L_102f8507: ;
    wr32(sp0 - 0x10u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, edx, 1, 2, arg1, loc_c);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, t5, 1, 5, arg1, arg3, arg1, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t6 = g->edx;
    edx = t6;
    edi = in_edi;
L_102f85cd: ;
    g->esi = rd32(sp0 - 8u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_102f851e: ;
    if ((eax & 4u) == 0u) goto L_102f8529;
    wr32(sp0 - 0xcu, COW_IMG(0x10348cb0u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_8 = in_esi;
    loc_c = COW_IMG(0x10348cb0u);
    goto L_102f8507;
L_102f8529: ;
    if ((eax & 2u) == 0u) goto L_102f853a;
    wr32(sp0 - 0xcu, COW_IMG(0x10348c98u));
    wr32(sp0 - 0x10u, arg1);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, in_edx, 1, 2, arg1, COW_IMG(0x10348c98u));
    t2 = g->edx;
    eax = t1;
    edx = t2;
    goto L_102f84fa;
L_102f853a: ;
    if (arg2 == 0u)
    {
        eax = arg2;
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_esi;
        goto L_102f84fc;
    }
    if ((rd8(arg2 + 9u) & 8u) == 0u)
    {
        eax = arg2;
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_esi;
        goto L_102f84fc;
    }
    wr32(sp0 - 0xcu, COW_IMG(0x10348c80u));
    eax = arg2;
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_8 = in_esi;
    loc_c = COW_IMG(0x10348c80u);
    goto L_102f8507;
L_102f854e: ;
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, sp0 + 7u);
    wr32(sp0 - 0x14u, arg1);
    g->eax = sp0 + 7u;
    g->ecx = ecx;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 + 7u, 1u, loc_8, loc_4);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = t8;
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, t9, 1, 5, arg1, 0u, arg1, sp0 + 7u, 1u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        edx = t12;
        edi = in_edi;
    }
    else
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        wr32(sp0 - 0xcu, in_edi);
        if ((int32_t)(arg1 >> 0x18u) < 4)
        {
            if (!(rd8(arg2 + 8u) & 1u))
            {
                eax = arg2;
            }
            else
            {
                d14 = fabs(fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x130u) * (double)rdf32(COW_IMG(0x10348c68u))) + rdf64(COW_IMG(0x1032ab90u))) - rdf64(COW_IMG(0x10348be0u))));
                if ((cow_fsw(g, d14, rdf64(COW_IMG(0x10348bd8u)), 0u) >> 8u & 0x41u) != 0u)
                {
                    eax = (arg2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, rdf64(COW_IMG(0x10348bd8u)), 0u);
                }
                else
                {
                    eax = (arg2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, rdf64(COW_IMG(0x10348bd8u)), 0u);
                    wr32(sp0 - 0x10u, COW_IMG(0x10348b9cu));
                    wr32(sp0 - 0x14u, arg1);
                    g->eax = eax;
                    g->esp = sp0 - 0xcu;
                    t15 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, edx, 1, 2, arg1, COW_IMG(0x10348b9cu));
                    t16 = g->edx;
                    eax = t15;
                    ecx = COW_IMG(0x10348b9cu);
                    edx = t16;
                }
            }
            wr32(sp0 - 0x10u, arg1 >> 0x18u);
            wr32(sp0 - 0x14u, arg2);
            wr32(sp0 - 0x18u, arg1);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall_cdecl(g, COW_IMG(0x102f1efcu), ecx, 3, arg1, arg2, arg1 >> 0x18u);
            t17 = g->edx;
            edx = t17;
        }
        else
        {
            wr32(sp0 - 0x10u, COW_IMG(0x10348c6cu));
            wr32(sp0 - 0x14u, arg1);
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, edx, 1, 2, arg1, COW_IMG(0x10348c6cu));
            t13 = g->edx;
            edx = t13;
        }
        edi = rd32(sp0 - 0xcu);
    }
    goto L_102f85cd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f84e1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f84e1(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
