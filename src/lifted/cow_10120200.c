/* f_0x10120200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10120200(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_esi);
    eax = self + 0x24u;
    esi = 2u;
L_1012020b: ;
    wr32(eax - 8u, 0u);
    wr32(eax, 0xffffffffu);
    wr32(eax + 0xcu, 0u);
    wr32(eax + 0x14u, 0xffffffffu);
    if (esi != 1u)
    {
        eax = eax + 4u;
        esi = esi - 1u;
        goto L_1012020b;
    }
    eax = eax + 4u;
    wr32(self + 0x2cu, 0u);
    wr32(self + 0x40u, 0u);
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_edi);
    g->eax = eax;
    g->edx = 0u;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        ebx = in_ebx;
        esi = in_esi;
        loc_4 = t1;
    }
    else
    {
        eax = t1;
        edx = t2;
        loc_4 = t1;
        wr32(sp0 - 0xcu, in_ebx);
        wr32(sp0 - 0x10u, in_esi);
L_10120243: ;
        wr32(sp0 - 0x14u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->esp = sp0 - 0x10u;
        t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t4 = g->edx;
        wr32(sp0 - 0x14u, eax);
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x10126580u), self, 1, eax);
        t6 = g->edx;
        if (t3 == 0u)
        {
            edx = t6;
        }
        else
        {
            eax = t5;
            edx = t6;
            esi = t3;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t7 = cow_thiscall(g, COW_IMG(0x1011dff0u), esi, 0);
            t8 = g->ecx;
            t9 = g->edx;
            wr32(sp0 - 0x14u, esi);
            g->edx = t9;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
            t10 = g->edx;
            edx = t10;
        }
        if (rd32(sp0 - 4u) != 0u)
        {
            eax = rd32(sp0 - 4u);
            goto L_10120243;
        }
        eax = rd32(sp0 - 4u);
        ebx = rd32(sp0 - 0xcu);
        esi = rd32(sp0 - 0x10u);
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101265d0u), self, 0);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = rd32(sp0 - 8u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10120200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10120200(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
