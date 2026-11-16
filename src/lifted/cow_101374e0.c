/* f_0x101374e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101374e0(Guest* g)
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
    uint32_t t15;
    uint32_t t16;
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
    t1 = cow_thiscall(g, COW_IMG(0x10136500u), self, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t4 = g->edx;
    wr32(sp0 - 4u, t3);
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
        ebx = in_ebx;
        edi = in_edi;
        loc_4 = t3;
    }
    else
    {
        eax = t3;
        edx = t4;
        loc_4 = t3;
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, in_edi);
L_101374fe: ;
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->esp = sp0 - 0x14u;
        t5 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t6 = g->edx;
        wr32(sp0 - 0x18u, eax);
        g->edx = t6;
        t7 = cow_thiscall(g, COW_IMG(0x10126580u), self + 0x14u, 1, eax);
        t8 = g->edx;
        if (t5 == 0u)
        {
            edx = t8;
        }
        else
        {
            eax = t7;
            edx = t8;
            edi = t5;
            g->eax = eax;
            g->ecx = edi;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t9 = cow_stdcall(g, COW_IMG(0x10126330u), 0);
            t10 = g->ecx;
            t11 = g->edx;
            wr32(sp0 - 0x18u, edi);
            g->edx = t11;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
            t12 = g->edx;
            edx = t12;
        }
        if (rd32(sp0 - 4u) != 0u)
        {
            eax = rd32(sp0 - 4u);
            goto L_101374fe;
        }
        eax = rd32(sp0 - 4u);
        ebx = rd32(sp0 - 0x10u);
        edi = rd32(sp0 - 0x14u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, COW_IMG(0x101265d0u), self + 0x14u, 0);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x10136800u), self, 0);
    t16 = g->edx;
    g->ebx = ebx;
    g->edi = edi;
    g->edx = t16;
    return t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101374e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101374e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
