/* f_0x1017c8b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1017c8b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 8u);
    if (arg3 == 0u)
    {
        ebx = t1;
        loc_14 = t1;
        eax = in_eax;
        loc_18 = self + 0x38fdcu;
    }
    else
    {
        ebx = t1;
        loc_14 = t1;
        eax = self + 0x38edcu;
        loc_18 = self + 0x38edcu;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x10181bb0u), eax, g->ecx, g->edx, 0, 2, loc_18, loc_14);
    t3 = g->edx;
    if (t2 != 0u) goto L_1017c9b6;
    edx = t3;
    if (rd32(ebx + 0x60u) == 0u) goto L_1017c994;
    t4 = rd32(ebx + 0x64u);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)t4 <= 0) goto L_1017c9b6;
    ecx = t4;
    eax = 0u;
L_1017c902: ;
    if (rd8(rd32(eax * 4u + rd32(ebx + 0x60u)) + 8u) > 1u)
    {
        eax = rd32(eax * 4u + rd32(ebx + 0x60u));
        edx = rd32(ebx + 0x60u);
        if (rd8(eax + 0xfu) == 0u)
        {
            if (rd32(self + 0x3949cu) != 2u)
            {
                loc_18 = eax;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x1017c9c0u), self, 3, arg1, loc_18, arg3);
            }
            else
            {
                loc_18 = eax;
                g->ebx = ebx;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x1017de20u), self, 3, arg1, loc_18, arg3);
            }
        }
        else
        {
            if ((int32_t)rd32(self + 0x38d40u) < 512)
            {
                ecx = rd32(self + 0x38d40u);
                wr32(ecx * 0xcu + self + 0x37540u, eax);
                wr32(self + rd32(self + 0x38d40u) * 0xcu + 0x37544u, arg1);
                wr32(self + rd32(self + 0x38d40u) * 0xcu + 0x37548u, arg3);
                t5 = rd32(self + 0x38d40u) + 1u;
                wr32(self + 0x38d40u, t5);
            }
        }
    }
    t6 = rd32(sp0 + 8u) + 1u;
    t7 = rd32(ebx + 0x64u);
    t8 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t6);
    if ((int32_t)(t8 + 1u) < (int32_t)t7)
    {
        eax = t6;
        ecx = t7;
        goto L_1017c902;
    }
    g->ebx = in_ebx;
    return;
L_1017c994: ;
    edi = ebx + 0x68u;
    ebx = 4u;
L_1017c99c: ;
    if (rd32(edi) != 0u)
    {
        eax = rd32(edi);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x1017c8b0u), eax, self, g->edx, 0, 3, arg1, eax, arg3);
        t9 = g->edx;
        edx = t9;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        edi = edi + 4u;
        goto L_1017c99c;
    }
L_1017c9b6: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017c8b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1017c8b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
