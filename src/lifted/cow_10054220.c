/* f_0x10054220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10054220(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x38u) == 0u) goto L_10054246;
    eax = rd32(self + 0x38u);
    if (rd32(eax) == 0u) goto L_10054246;
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax);
    }
    if (rd8(eax + 0xdcu) & 1u)
    {
        edx = in_edx;
        goto L_100542cc;
    }
L_10054246: ;
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
        goto L_100542cc;
    }
    if (rd32(self + 0x38u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x38u);
        eax = rd32(eax);
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x100496f0u), eax, eax, g->edx, 0, 1, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100542cc;
    }
    edx = t2;
    wr8(self + 0x3cu, 1u);
    if (rd32(self + 0x38u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x38u);
        eax = rd32(eax);
    }
    if ((rd16(eax + 0x18u) & 0x7fffu) != 0u) goto L_100542cc;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 1, 1u);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(self + 0x38u) == 0u)
    {
        ecx = t3;
        edx = t4;
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x38u);
        ecx = t3;
        edx = t4;
        eax = rd32(eax);
    }
    if (!(rd8(eax + 0x1au) >> 2u & 1u)) goto L_100542cc;
    if (rd32(self + 0x38u) == 0u) goto L_100542bb;
    esi = rd32(self + 0x38u);
    t5 = rd32(rd32(esi) + 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x10073b20u), 1, t5);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_100542bb: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_stdcall(g, COW_IMG(0x10073b20u), 1, rd32(0x14u));
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_100542cc: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10054220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10054220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
