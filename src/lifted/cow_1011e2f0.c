/* f_0x1011e2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1011e2f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        ebx = in_ebx;
        edi = in_edi;
        loc_4 = t1;
    }
    else
    {
        eax = t1;
        edx = t2;
        loc_4 = t1;
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, in_edi);
L_1011e309: ;
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->esp = sp0 - 0x14u;
        t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t4 = g->edx;
        wr32(sp0 - 0x18u, eax);
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x10126580u), self + 4u, 1, eax);
        t6 = g->edx;
        if (t3 == 0u)
        {
            edx = t6;
        }
        else
        {
            eax = t5;
            edx = t6;
            edi = t3;
            g->eax = eax;
            g->ecx = edi;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t7 = cow_stdcall(g, COW_IMG(0x10126330u), 0);
            t8 = g->ecx;
            t9 = g->edx;
            wr32(sp0 - 0x18u, edi);
            g->edx = t9;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
            t10 = g->edx;
            edx = t10;
        }
        if (rd32(sp0 - 4u) != 0u)
        {
            eax = rd32(sp0 - 4u);
            goto L_1011e309;
        }
        eax = rd32(sp0 - 4u);
        ebx = rd32(sp0 - 0x10u);
        edi = rd32(sp0 - 0x14u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x101265d0u), self + 4u, 0);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10126370u), self + 4u, 0);
    t14 = g->edx;
    cow_stdcall(g, COW_IMG(0x10126330u), 0);
    g->ebx = ebx;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011e2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011e2f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
