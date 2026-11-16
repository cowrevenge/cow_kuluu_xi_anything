/* f_0x10245c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10245c80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    wr32(self, 1u);
    wr32(self + 4u, 0u);
    wr32(COW_IMG(0x106690f4u), 0u);
    wr32(self + 0xcu, 0u);
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0xcu, in_esi, in_ebx);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        wr32(COW_IMG(0x106690b0u), 0u);
    }
    else
    {
        eax = t1;
        edx = t3;
        g->esp = sp0 - 8u;
        t4 = cow_fastcall(g, COW_IMG(0x1024b9b0u), eax, edx, 0);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(COW_IMG(0x106690b0u), t4);
        ecx = t5;
        edx = t6;
    }
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x10u, in_esi, in_ebx);
    t8 = g->edx;
    wr32(self + 0xcu, t7);
    if (rd32(COW_IMG(0x106690b0u)) == 0u)
    {
        edx = t8;
        goto L_10245cec;
    }
    eax = t7;
    ecx = rd32(COW_IMG(0x106690b0u));
    edx = t8;
    if (eax == 0u) goto L_10245cec;
    if (rd32(ecx) != 1u) goto L_10245d3f;
    wr32(eax, 0u);
    wr32(eax + 4u, 0u);
    wr32(eax + 8u, 0u);
    wr32(eax + 0xcu, 0u);
    return self;
L_10245cec: ;
    wr32(self, 0u);
    if (rd32(COW_IMG(0x106690b0u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x106690b0u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x106690b0u));
        if ((int32_t)(rd32(ecx - 4u) - 1u) < 0)
        {
            eax = rd32(ecx - 4u) - 1u;
            edx = rd32(ecx - 4u) * 3u;
            ebp = ecx - 4u;
        }
        else
        {
            eax = rd32(ecx - 4u) - 1u;
            edx = rd32(ecx - 4u) * 3u;
            ebp = ecx - 4u;
            edi = ecx + rd32(ecx - 4u) * 0xcu;
            ebx = eax + 1u;
L_10245d0c: ;
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t9 = cow_fastcall(g, COW_IMG(0x1024be00u), edi - 0xcu, edx, 0);
            t10 = g->ecx;
            t11 = g->edx;
            if (ebx != 1u)
            {
                eax = t9;
                edx = t11;
                ebx = ebx - 1u;
                edi = edi - 0xcu;
                goto L_10245d0c;
            }
            eax = t9;
            ecx = t10;
            edx = t11;
        }
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebp);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(COW_IMG(0x106690b0u), 0u);
        ecx = t12;
        edx = t13;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        wr32(self + 0xcu, 0u);
    }
L_10245d3f: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10245c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10245c80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
