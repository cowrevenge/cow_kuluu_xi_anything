/* f_0x101fe890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101fe890(Guest* g)
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

    t1 = rd32(self + 0xcu);
    wr32(self + 8u, 0xdu);
    if (t1 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(self + 0xcu, 0u);
        ecx = t2;
        edx = t3;
    }
    if (rd32(self + 0xcu) == 0u)
    {
        t4 = rd32(self + 8u) * 0x54u;
        t5 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t4, in_ebx, in_esi);
        t7 = g->edx;
        if (t6 == 0u)
        {
            edx = t7;
            ebx = 0u;
        }
        else
        {
            edx = t7;
            ebx = t6;
            esi = t5;
            if ((int32_t)(esi - 1u) >= 0)
            {
                eax = esi - 1u;
                edi = ebx;
                esi = eax + 1u;
L_101fe8e8: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t8 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
                t9 = g->edx;
                if (esi != 1u)
                {
                    eax = t8;
                    edx = t9;
                    esi = esi - 1u;
                    edi = edi + 0x54u;
                    goto L_101fe8e8;
                }
                edx = t9;
            }
        }
        wr32(self + 0xcu, ebx);
    }
    esi = 0u;
L_101fe900: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x101fda20u), rd32(COW_IMG(0x10663aacu)), 1, esi);
    t11 = g->edx;
    if (t10 == 0xffffu)
    {
        edx = t11;
    }
    else
    {
        eax = t10;
        edx = t11;
        g->esp = sp0 - 8u;
        cow_fastcall(g, COW_IMG(0x101fe580u), self, edx, 3, eax, 0x80509050u, 0xffffffffu);
        t12 = g->edx;
        edx = t12;
    }
    if ((int32_t)(esi + 1u) < 12)
    {
        esi = esi + 1u;
        goto L_101fe900;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fe890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fe890(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
