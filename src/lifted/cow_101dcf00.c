/* f_0x101dcf00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101dcf00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10338e18u));
    if (rd32(COW_IMG(0x10663484u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10663484u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x10663484u), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x10663488u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10663488u));
        g->eax = eax;
        g->esp = sp0 - 8u;
        t4 = cow_fastcall(g, COW_IMG(0x101de000u), esi, edx, 0);
        t5 = g->ecx;
        t6 = g->edx;
        t7 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t5, t6, 1, 1, esi);
        t8 = g->edx;
        wr32(COW_IMG(0x10663488u), 0u);
        eax = t7;
        edx = t8;
    }
    if (rd32(COW_IMG(0x1066348cu)) != 0u)
    {
        esi = rd32(COW_IMG(0x1066348cu));
        g->eax = eax;
        g->esp = sp0 - 8u;
        t9 = cow_fastcall(g, COW_IMG(0x101de710u), esi, edx, 0);
        t10 = g->ecx;
        t11 = g->edx;
        t12 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t10, t11, 1, 1, esi);
        t13 = g->edx;
        wr32(COW_IMG(0x1066348cu), 0u);
        eax = t12;
        edx = t13;
    }
    wr32(self, COW_IMG(0x10333360u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126330u), eax, self + 4u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dcf00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101dcf00(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
