/* f_0x1028d2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1028d2e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg1 + 0x44u) != 0u)
    {
        eax = rd32(arg1 + 0x44u);
        if ((int32_t)eax > 0)
        {
            ecx = self;
            edx = in_edx;
            ebp = 0u;
L_1028d2f5: ;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, arg1, ebp);
            t2 = g->ecx;
            t3 = g->edx;
            if (rd32(t1) != 0x1c0003u)
            {
                ecx = t2;
                edx = t3;
            }
            else
            {
                ecx = t2;
                edx = t3;
                ebx = t1;
                if ((int32_t)rd32(arg1 + 0x58u) <= 0) goto L_1028d362;
                eax = rd32(arg1 + 0x58u);
                esi = 0u;
L_1028d312: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t4 = cow_cdecl(g, COW_IMG(0x102798b0u), 2, arg1, esi);
                t5 = g->edx;
                if (rd32(ebx + 0x24u) == t4)
                {
                    eax = t4;
                    ecx = rd32(ebx + 0x24u);
                    edx = t5;
                    goto L_1028d32d;
                }
                ecx = rd32(ebx + 0x24u);
                edx = t5;
                if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x58u))
                {
                    eax = rd32(arg1 + 0x58u);
                    esi = esi + 1u;
                    goto L_1028d312;
                }
            }
L_1028d362: ;
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x44u))
            {
                eax = rd32(arg1 + 0x44u);
                ebp = ebp + 1u;
                goto L_1028d2f5;
            }
        }
    }
    g->ebx = in_ebx;
    return;
L_1028d32d: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x10279b60u), 2, arg1, esi);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        ecx = t7;
        edx = t8;
    }
    else
    {
        eax = t6;
        edx = t8;
        if ((int32_t)rd32(ebx + 0x1cu) > 1)
        {
            ecx = COW_IMG(0x1034f7b0u);
            ebx = rd32(ebx + 0x1cu);
        }
        else
        {
            ebx = rd32(ebx + 0x1cu);
            ecx = COW_IMG(0x103d3c84u);
        }
        g->ebx = ebx;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103ba464u), eax, ebx, ecx);
        t9 = g->ecx;
        t10 = g->edx;
        ecx = t9;
        edx = t10;
    }
    goto L_1028d362;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028d2e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028d2e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
