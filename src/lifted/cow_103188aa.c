/* f_0x103188aa - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_103188aa(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ebx = 0u;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 2u, in_edi, in_esi);
    t2 = g->edx;
    if ((int32_t)rd32(COW_IMG(0x109f9420u)) <= 0)
    {
        eax = t1;
        ecx = 2u;
        edx = t2;
        ebx = 0u;
        edi = 0u;
        goto L_10318937;
    }
    ecx = 2u;
    edx = t2;
    ebx = 0u;
    esi = 0u;
    edi = 0u;
L_103188c3: ;
    if (rd32(esi * 4u + rd32(COW_IMG(0x109f8414u))) == 0u)
    {
        eax = rd32(esi * 4u + rd32(COW_IMG(0x109f8414u)));
    }
    else
    {
        eax = rd32(esi * 4u + rd32(COW_IMG(0x109f8414u)));
        if ((rd8(eax + 0xcu) & 0x83u) != 0u)
        {
            g->ebx = ebx;
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x103171dcu), g->eax, ecx, edx, 1, 2, esi, eax);
            t3 = g->edx;
            if ((rd32(rd32(esi * 4u + rd32(COW_IMG(0x109f8414u))) + 0xcu) & 0x83u) == 0u)
            {
                ecx = rd32(rd32(esi * 4u + rd32(COW_IMG(0x109f8414u))) + 0xcu);
                edx = t3;
            }
            else
            {
                eax = rd32(esi * 4u + rd32(COW_IMG(0x109f8414u)));
                ecx = rd32(rd32(esi * 4u + rd32(COW_IMG(0x109f8414u))) + 0xcu);
                edx = t3;
                if (arg1 != 1u)
                {
                    if (arg1 == 0u)
                    {
                        if ((ecx & 2u) != 0u)
                        {
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 4u;
                            t6 = cow_cdecl(g, COW_IMG(0x10318817u), 3, eax, in_edi, in_esi);
                            t7 = g->edx;
                            if (t6 != 0xffffffffu)
                            {
                                ecx = eax;
                                edx = t7;
                            }
                            else
                            {
                                ecx = eax;
                                eax = t6;
                                edx = t7;
                                edi = edi | eax;
                            }
                        }
                    }
                }
                else
                {
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 4u;
                    t4 = cow_cdecl(g, COW_IMG(0x10318817u), 3, eax, in_edi, in_esi);
                    t5 = g->edx;
                    if (t4 == 0xffffffffu)
                    {
                        ecx = eax;
                        edx = t5;
                    }
                    else
                    {
                        ecx = eax;
                        edx = t5;
                        ebx = ebx + 1u;
                    }
                }
            }
            t8 = rd32(esi * 4u + rd32(COW_IMG(0x109f8414u)));
            g->eax = rd32(COW_IMG(0x109f8414u));
            t9 = rd32(COW_IMG(0x109f8414u));
            g->esp = sp0 - 0xcu;
            t10 = cow_call_regs(g, COW_IMG(0x1031722eu), g->eax, ecx, edx, 1, 2, esi, t8);
            t11 = g->edx;
            eax = t10;
            ecx = t8;
            edx = t11;
        }
    }
    if ((int32_t)(esi + 1u) < (int32_t)rd32(COW_IMG(0x109f9420u)))
    {
        esi = esi + 1u;
        goto L_103188c3;
    }
L_10318937: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 2u, in_edi, in_esi);
    if (arg1 == 1u)
    {
        eax = ebx;
    }
    else
    {
        eax = edi;
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103188aa(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103188aa(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
