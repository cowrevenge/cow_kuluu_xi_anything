/* f_0x1014a650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1014a650(Guest* g)
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

    g->esi = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(self + 0x50u);
    wr32(self + 0x3cu, 0u);
    wr8(self + 0x44u, 0x20u);
    wr8(self + 0x45u, 0x18u);
    if (t3 == 0u)
    {
        eax = t3;
        ecx = t1;
        edx = t2;
    }
    else
    {
        eax = t3;
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(self + 0x50u, 0u);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    if (rd32(self + 0x50u) == 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x1f80u, in_ebx, in_edi);
        t8 = g->edx;
        if (t7 == 0u)
        {
            edx = t8;
            eax = 0u;
        }
        else
        {
            eax = t7;
            edx = t8;
            ebx = t7;
            ebp = 0x60u;
            edi = ebx;
L_1014a69e: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
            t10 = g->edx;
            if (ebp != 1u)
            {
                eax = t9;
                edx = t10;
                ebp = ebp - 1u;
                edi = edi + 0x54u;
                goto L_1014a69e;
            }
            edx = t10;
            eax = ebx;
        }
        wr32(self + 0x50u, eax);
    }
    wr16(self + 0x56u, 0u);
    if ((int32_t)arg1 >= 0) goto L_1014a6cd;
    wr8(self + 0x54u, 0u);
    g->esi = in_esi;
    return;
L_1014a6cd: ;
    if (arg1 == 0u)
    {
        wr8(self + 0x54u, 0u);
        g->eax = arg1;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t11 = cow_thiscall(g, COW_IMG(0x1014a700u), self, 0);
        t12 = g->edx;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103719fcu), 1u, 0u);
    }
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014a650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014a650(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
